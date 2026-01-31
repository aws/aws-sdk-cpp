plugins {
    id("java-library")
}

repositories {
    mavenLocal()
    mavenCentral()
}

allprojects {
    group = "com.amazonaws.util.awsclientsmithygenerator.generators"
    version = "0.1.0"
}

dependencies {
}

// Prevent cpp-smoke-tests from building when root build is invoked
project(":cpp-smoke-tests").tasks.configureEach {
    enabled = false
}