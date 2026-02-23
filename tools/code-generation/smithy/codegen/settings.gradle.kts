rootProject.name = "smithy_code_generation"

include("cpp-smoke-tests")
include("cpp-smoke-tests-codegen")

pluginManagement {
    repositories {
        mavenLocal()
        gradlePluginPortal()
    }
}

dependencyResolutionManagement {
    versionCatalogs {
        create("codegen") {
            // Smithy dependencies
            version("smithy", "1.67.0")  // Centralize the version for Smithy-related dependencies
            library("model", "software.amazon.smithy", "smithy-model").versionRef("smithy")
            library("aws-traits", "software.amazon.smithy", "smithy-aws-traits").versionRef("smithy")
            library("codegen-core", "software.amazon.smithy", "smithy-codegen-core").versionRef("smithy")
            library("smoke-test-traits", "software.amazon.smithy", "smithy-smoke-test-traits").versionRef("smithy")
            library("aws-iam-traits", "software.amazon.smithy", "smithy-aws-iam-traits").versionRef("smithy")
            library("aws-cloudformation-traits", "software.amazon.smithy", "smithy-aws-cloudformation-traits").versionRef("smithy")


            
            library("waiters", "software.amazon.smithy", "smithy-waiters").versionRef("smithy")
            library("rules-engine", "software.amazon.smithy", "smithy-rules-engine").versionRef("smithy")
            library("aws-smoke-test-model", "software.amazon.smithy", "smithy-aws-smoke-test-model").versionRef("smithy")
            library("aws-endpoints", "software.amazon.smithy", "smithy-aws-endpoints").versionRef("smithy")

            // Other dependencies
            library("guava", "com.google.guava", "guava").version("32.0.1-jre")
            library("lombok", "org.projectlombok", "lombok").version("1.18.30")
            library("commons-cli", "commons-cli", "commons-cli").version("1.9.0")
            library("commons-io", "commons-io", "commons-io").version("2.16.1")
            library("slf4j","org.slf4j","slf4j-simple").version("1.7.30")
        }

         create("test") {
            version("junit", "5.8.1")  // Centralize JUnit version
            library("junit-jupiter-api", "org.junit.jupiter", "junit-jupiter-api").versionRef("junit")
            library("junit-jupiter-engine", "org.junit.jupiter", "junit-jupiter-engine").versionRef("junit")
        }
    }
}
