# This describes an workaround for loading both user and 
if (file.exists("~/.Rprofile")) {
  base::sys.source("~/.Rprofile", envir = environment())
}

# These blogdown specific options pre-populate in the New Post addin 
options(
  blogdown.author = "Chang-Yu Chang",
  blogdown.ext = ".Rmd",
  blogdown.subdir = "post",
  blogdown.yaml.empty = TRUE,
  blogdown.new_bundle = TRUE,
  blogdown.title_case = TRUE
)

# .Rprofile must end with a blank line 
