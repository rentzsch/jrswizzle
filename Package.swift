// swift-tools-version:5.3

import PackageDescription

let package = Package(
    name: "JRSwizzle",
    products: [
        .library(
            name: "JRSwizzle",
            targets: ["JRSwizzle"])
    ],
    targets: [
        .target(
            name: "JRSwizzle",
            path: "JRSwizzle"
        )
    ]
)
