Pod::Spec.new do |s|
  s.name     = 'JRSwizzle'
  s.version  = '1.0'
  s.license  = 'MIT'
  s.summary  = 'one-stop-shop for all your method swizzling needs'
  s.homepage = 'https://github.com/rentzsch/jrswizzle'
  s.author   = 'Jonathan \'Wolf\' Rentzsch'
  s.source   = { :git => 'https://github.com/rentzsch/jrswizzle.git', :tag => "v#{s.version}" }
  s.requires_arc = false

  s.description = %{
JRSwizzle is source code package that offers a single, easy, correct+consistent interface for exchanging Objective-C method implementations ("method swizzling") across many versions of Mac OS X, iOS, Objective-C and runtime architectures.

More succinctly: JRSwizzle wants to be your one-stop-shop for all your method swizzling needs.
  }

  s.source_files = '*.{h,m}'

  s.ios.deployment_target = '4.3'
  s.osx.deployment_target = '10.6'

  s.frameworks   = 'Foundation'
end
