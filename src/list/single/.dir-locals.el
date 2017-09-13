;; -*- lexical-binding: t -*-

;; this add `include' additional paths to flycheck (linter) and
;; company-mode (auto-completion) correctly fetch the headers of the project.
((nil . ((flycheck-clang-include-path . ("../../"))
         (company-clang-arguments . ("-I../../")))))
