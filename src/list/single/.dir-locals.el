;; -*- lexical-binding: t -*-

;; this add `include' additional paths to flycheck (linter) and
;; company-mode (auto-completion) correctly fetch the headers of the project.
((nil . ((eval . (let ((src-path (expand-file-name "../../")))
                   (setq-local flycheck-clang-include-path (list src-path))
                   (company-clang-set-prefix (list '-include src-path)))))))
