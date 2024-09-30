plugins {
    id("java-library")
    id("software.amazon.smithy.gradle.smithy-base").version("1.0.0")
}

repositories {
    mavenLocal()
    mavenCentral()
}

buildscript {
    dependencies {
        classpath(codegen.model)
        classpath(codegen.aws.traits)
        classpath(codegen.smoke.test.traits)
        //classpath(codegen.velocity.engine.core)
    }
}
dependencies {
    implementation(project(":smoke-tests-codegen"))
}

tasks.jar {
    enabled = false
}
