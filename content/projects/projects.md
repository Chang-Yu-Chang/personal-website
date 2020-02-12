+++
# A Projects section created with the Portfolio widget.
widget = "portfolio"  # See https://sourcethemes.com/academic/docs/page-builder/
headless = true  # This file represents a page section.
active = true # Activate this widget? true/false
weight = 65  # Order that this section will appear.

title = "Projects"
subtitle = ""

[content]
  # Page type to display. E.g. project.
  page_type = "project"
  
  # Filter toolbar (optional).
  # Add or remove as many filters (`[[content.filter_button]]` instances) as you like.
  # To show all items, set `tag` to "*".
  # To filter by a specific tag, set `tag` to an existing tag name.
  # To remove toolbar, delete/comment all instances of `[[content.filter_button]]` below.
  
  # Default filter index (e.g. 0 corresponds to the first `[[filter_button]]` instance below).
  filter_default = 0
  
  [[content.filter_button]]
    name = "All"
    tag = "*"
  
  [[content.filter_button]]
    name = "R"
    tag = "R"

  [[content.filter_button]]
    name = "Microbe"
    tag = "microbe"

[design]
  # Choose how many columns the section has. Valid values: 1 or 2.
  columns = "1"

  # Toggle between the various page layout types.
  #   1 = List
  #   3 = Card
  #   5 = Showcase
  view = 3

  # For Showcase view, flip alternate rows?
  flip_alt_rows = true

[design.background]
  # Apply a background color, gradient, or image.
  #   Uncomment (by removing `#`) an option to apply it.
  #   Choose a light or dark text color by setting `text_color_light`.
  #   Any HTML color name or Hex value is valid.
  
  # Background color.
  # color = "navy"
  
  # Background gradient.
  # gradient_start = "DeepSkyBlue"
  # gradient_end = "SkyBlue"
  
  # Background image.
  # image = "background.jpg"  # Name of image in `static/img/`.
  # image_darken = 0.6  # Darken the image? Range 0-1 where 0 is transparent and 1 is opaque.

  # Text color (true=light or false=dark).
  # text_color_light = true  
  
[advanced]
 # Custom CSS. 
 css_style = ""
 
 # CSS class.
 css_class = ""
+++


**This page is under construction**

I am interested in predicting microbial community assembly in simple environments. Microbes usually form diverse assemblages that exhibit intricate species interactions via uptaking and secreting chemicals to the surrounding environments, which in turn show versatile functions as a whole community. Using microbes as an experimental system, I am trying to ask whether there are general principles underlying microbial community assembly, for example:

- To what extent can community coexistence be explained by the coexistence of its constituent species pairs? Can we extrapolate the species coexistence at pairwise level to the coexistence at the community level?

- How much do higher-order effects modify the predicatability of community assembly? In particular, how does the landscape of community assembly, which maps the relationship between diversity (species number) and community properties (e.g., species compostion and ecosystem functioning), deform across communities?

- How does the dissimilarity in metabolism among microbes project to the niche and fitness differences, the duel core mechanisms of modern coexistence theory?










