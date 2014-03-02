name = Sidebar
description = Sidebar first
base theme = omega
template = sidebar-layout

engine = phptemplate
core = 7.x

; Stylesheets
stylesheets[all][] = css/sidebar.normalize.css
stylesheets[all][] = css/sidebar.hacks.css
stylesheets[all][] = css/sidebar.styles.css
stylesheets[all][] = css/didebar.no-query.css

; Regions
regions[branding]       = Branding
regions[navigation]     = Navigation bar
regions[header]         = Header
regions[hero]           = Hero
regions[highlighted]    = Highlighted
regions[help]           = Help
regions[content]        = Content
regions[sidebar_first]  = First sidebar
regions[footer]         = Footer

; Styles
stylesheets[all][] = css/layouts/sidebar/sidebar.layout.css
stylesheets[all][] = css/layouts/sidebar/sidebar.layout.no-query.css