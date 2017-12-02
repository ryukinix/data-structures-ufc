#!/usr/bin/env python3
# -*- coding: utf-8 -*-
#
#    Copyright © 2017 Manoel Vilela
#
#    @project: Data Structures UFC - 2017.2
#     @author: Manoel Vilela
#      @email: manoel_vilela@engineer.com
#


import sys
import pandas as pd # python-pandas dependency
import matplotlib.pyplot as plt
from typing import List, Dict

dpi = 300
# fit best scale for each algorithm
scales = {
    'heapsort': (0, 600),
    'mergesort': (0, 600),
    'quicksort': (0, 600),
    'insertionsort': (0, 100000),
    'bubblesort': (0, 100000),
}


def load_dataframes(csvs: List[str]):
    dfs = {}
    for csv in csvs:
        df = pd.read_csv(csv, index_col=0)
        df = df.loc[:, ~df.columns.str.contains('^Unnamed')]
        dfs[csv] = df
    return dfs


def mean_time(df):
    "Calculate the mean of the experiments"
    return df.mean(axis=1)


def mean_graph(dfs: Dict[str, pd.DataFrame]):
    "Make a graph comparing all the sorting algorithms"
    index = list(dfs.values())[0].index
    df_general = pd.DataFrame(index=index)
    for name, df in dfs.items():
        df_general[name.strip('.csv').capitalize()] = mean_time(df)

    return df_general


def save_graph_algorithm(name: str, df: List[pd.DataFrame]):
    "Make a graph based on its experiments and the mean value"
    name = name.strip('.csv')
    fig = plt.figure()
    df.columns = ['Experimento {}'.format(i) for i in range(1, 6)]
    ax = df.plot(title=name.capitalize(), kind='bar')
    ax.set_ylabel('Tempo (ms)')
    ax.set_xlabel('Elementos no vetor')
    ax.xaxis.set_tick_params(rotation=0)
    # if name in scales:
    #     plt.ylim(scales[name])
    plt.savefig(name + '.png', dpi=dpi)
    plt.close(fig)


def save_graph_algorithms(dfs: Dict[str, pd.DataFrame]):
    "Make a graph comparing all the sorting algorithms"
    df_general = mean_graph(dfs)
    fig = plt.figure()
    ax = df_general.plot(title='Algoritmos de Ordenação', kind='line')
    ax.set_ylabel('Tempo (ms)')
    ax.set_xlabel('Elementos no vetor')
    ax.xaxis.set_tick_params(rotation=0)
    plt.savefig('sorting.png', dpi=dpi)
    plt.close(fig)

    for loc, i in enumerate(df_general.index):
        fig = plt.figure()
        row = df_general.iloc[loc]
        ax = row.plot(title='Ordenação com {} elementos'.format(i),
                      kind='bar')
        # recompute the ax.dataLim
        ax.relim()
        # update ax.viewLim using the new dataLim
        ax.autoscale_view()
        ax.set_ylabel('Tempo (ms)')
        ax.set_xlabel('')
        ax.legend().set_visible(False)
        ax.xaxis.set_tick_params(rotation=0)
        plt.savefig('sorting-{}.png'.format(i), dpi=dpi)
        plt.close(fig)


def main():
    dfs = load_dataframes(sys.argv[1:])
    # save individual graphs
    for name, df in dfs.items():
        print("Generating for: {}".format(name))
        save_graph_algorithm(name, df)

    # save general graph
    print("Generating general graph")
    save_graph_algorithms(dfs)


if __name__ == '__main__':
    main()
