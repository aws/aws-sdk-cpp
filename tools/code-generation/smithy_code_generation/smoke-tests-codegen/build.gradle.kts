plugins {
    id("java-library")
}

repositories {
    mavenLocal()
    mavenCentral()
}


dependencies {
    implementation(codegen.model)
    implementation(codegen.aws.traits)
    implementation(codegen.codegen.core)
    implementation(codegen.smoke.test.traits)
    implementation(codegen.waiters)
    api(codegen.rules.engine)
    implementation(codegen.aws.smoke.test.model)
    api(codegen.aws.endpoints)

    api(codegen.guava)
    implementation(codegen.lombok)
    annotationProcessor(codegen.lombok)
    api(codegen.commons.cli)
    api(codegen.commons.io)
    //api(codegen.velocity.engine.core)
    api(codegen.velocity.engine.core)
    

    testImplementation(test.junit.jupiter.api)
    testRuntimeOnly(test.junit.jupiter.engine)
    //implementation("org.apache.velocity:velocity-engine-core:2.3") 
    implementation("ch.qos.logback:logback-classic:1.4.7") // Adding Logback for SLF4J

}

tasks.test {
    useJUnitPlatform()
}
