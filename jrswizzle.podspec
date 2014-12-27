Pod::Spec.new do |s|

  s.name         = "jrswizzle-Pinka"
  s.version      = "1.0"
  s.summary      = "one-stop-shop for all your method swizzling needs"

  s.description  = <<-DESC
                   JRSwizzle is source code package that offers a single, easy, correct+consistent interface for exchanging Objective-C method implementations ("method swizzling") across many versions of Mac OS X, iOS, Objective-C and runtime architectures.
                   DESC

  s.homepage     = "http://rentzsch.com"
  s.license      = "MIT"

  s.author       = "Pinka Chan"
  s.source       = { :git => "https://github.com/ipinka/jrswizzle.git", :tag => "v1.0" }
  s.source_files  = "*.{h,m}"

end
