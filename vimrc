" --- Start of .vimrc ---
" Plugin Manager - Vim-Plug
call plug#begin('~/.vim/plugged')

" Autocompletion Plugin
Plug 'neoclide/coc.nvim', {'branch': 'release'}

" Snippet Plugin
Plug 'SirVer/ultisnips'
Plug 'honza/vim-snippets'

" File Navigation (optional)
Plug 'preservim/nerdtree'

" Status Line Plugin
Plug 'vim-airline/vim-airline'

call plug#end()

" Enable line numbers and indentation
set number                " Show absolute line numbers
set relativenumber        " Show relative line numbers
set tabstop=4             " Number of spaces per tab
set shiftwidth=4          " Indentation level
set softtabstop=4         " Spaces per tab in insert mode
set expandtab             " Convert tabs to spaces
set smartindent           " Enable smart indentation

" Enable line wrapping for long lines
set wrap                  " Wrap lines

" Highlight matching parentheses and brackets
set showmatch             " Highlight matching parenthesis

" Enable line highlighting for the cursor
set cursorline            " Highlight the current line

" Enable search and highlight matching characters
set hlsearch              " Highlight search results
set incsearch             " Incremental search (search as you type)
set ignorecase            " Ignore case during search
set smartcase             " Case-sensitive search if capital letters are used

" Set the status line
set laststatus=2          " Always display the status line

" Enable clipboard support (macOS/Linux)
set clipboard=unnamedplus " Use system clipboard for copy-paste

" Enable auto-completion
set wildmenu              " Use a better menu for command-line completion
set wildmode=longest:full,full " Completion style for commands

" Enable syntax highlighting
syntax enable             " Enable syntax highlighting

" Set the colorscheme (choose a theme you like)
set background=dark       " Prefer dark background (can be set to light)
colorscheme desert        " Use the desert color scheme (change to your favorite)

" Enable line numbers for searching
set number                " Show line numbers

" Set the default file encoding to UTF-8
set encoding=utf-8        " Use UTF-8 encoding
set fileencodings=utf-8   " Use UTF-8 file encoding

" Enable undo files
set undofile              " Enable undo files to persist across Vim sessions
set undodir=~/.vim/undo   " Set undo directory to store undo history

" Enable auto-save when leaving Vim (optional)
set autowrite             " Automatically save when leaving Vim

" Set cursor shape in insert mode
set guicursor=n-v-c:block,i-ci-ve:ver25,r-cr-o:hor20

" Enable auto-read for files that change externally
set autoread              " Auto read files that are changed externally

" Enable incremental search
set incsearch             " Show search results as you type

" Enable smart case search
set ignorecase            " Ignore case during search

" Disable swap files (optional, speeds up opening files)
set noswapfile            " Disable swap files (optional)

" --- Language-Specific Setup ---
" For C/C++: Install the clangd language server
" To install coc-clangd: :CocInstall coc-clangd

" For Python: Install the pyright or pyls language server
" To install coc-pyright: :CocInstall coc-pyright

" For Java: Install the coc-java language server
" To install coc-java: :CocInstall coc-java

" For R: Install the coc-r language server
" To install coc-r: :CocInstall coc-r

" --- Snippets Configuration ---
" Example snippet for a C/C++ for loop
snippet for "for loop" b
for (int i = 0; i < ${1:10}; i++) {
    ${0:// code}
}
endsnippet

" Example snippet for Python if statement
snippet if "if statement" b
if ${1:condition}:
    ${0:# code}
endsnippet

" Example snippet for Java for loop
snippet for "for loop" b
for (int i = 0; i < ${1:10}; i++) {
    ${0:// code}
}
endsnippet

" --- Optional Plugins and Settings ---
" Enable NERDTree for file navigation (optional)
map <C-n> :NERDTreeToggle<CR>    " Toggle NERDTree with Ctrl+n

" Enable airline status line (optional)
let g:airline#extensions#tabline#enabled = 1  " Enable tabline for open files

" --- End of .vimrc ---
