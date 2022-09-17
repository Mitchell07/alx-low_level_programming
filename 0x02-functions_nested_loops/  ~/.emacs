(setq c-default-style "bsd"
      c-basic-offset 8
      tab-width 8
      indent-tabs-mode t)

(require 'whitespace)

whitespace
(setq whitespace-style '(face empty lines-tail trailing))

(face empty lines-tail trailing)
(global-whitespace-mode t)

(setq column-number-mode t)

