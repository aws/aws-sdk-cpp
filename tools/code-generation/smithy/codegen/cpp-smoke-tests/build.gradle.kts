import software.amazon.smithy.model.Model
import software.amazon.smithy.model.node.Node
import software.amazon.smithy.model.shapes.ServiceShape
import software.amazon.smithy.aws.traits.ServiceTrait
//import software.amazon.smithy.smoketests.traits.SmokeTestsTrait
import software.amazon.smithy.model.shapes.OperationShape
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
        classpath(codegen.aws.smoke.test.model)
        //classpath(codegen.velocity.engine.core)
    }
}
dependencies {
    implementation(project(":cpp-smoke-tests-codegen"))
    implementation(codegen.smoke.test.traits)
    implementation(codegen.aws.traits)
    implementation(codegen.smoke.test.traits)
    implementation(codegen.aws.iam.traits)
    implementation(codegen.aws.cloudformation.traits)
    implementation(codegen.waiters)
    implementation(codegen.aws.smoke.test.model)
    implementation(codegen.aws.endpoints)


}

tasks.jar {
    enabled = false
}


// Generates a smithy-build.json with a projection for each service, including
// only that service's model.
tasks.register("generate-smithy-build") {
    doLast {
        val projectionsBuilder = Node.objectNodeBuilder()
        val modelsDirProp: String by project
        val models = project.file("../../api-descriptions");
 
        fileTree(models).filter { it.isFile }.files.forEach eachFile@{ file ->
            val model = Model.assembler()
                    .addImport(file.absolutePath)
                    // Grab the result directly rather than worrying about checking for errors via unwrap.
                    // All we care about here is the service shape, any unchecked errors will be exposed
                    // as part of the actual build task done by the smithy gradle plugin.
                    .assemble().result.get();
            val services = model.shapes(ServiceShape::class.javaObjectType).sorted().toList();
            if (services.size != 1) {
                throw Exception("There must be exactly one service in each aws model file, but found " +
                        "${services.size} in ${file.name}: ${services.map { it.id }}");
            }
            val service = services[0]
 
            var filteredServices: String = System.getenv("SMITHY_GO_BUILD_API")?: ""
            if (filteredServices.isNotEmpty()) {
                for (filteredService in filteredServices.split(",")) {
                    if (!service.id.toString().startsWith(filteredService)) {
                        return@eachFile
                    }
                }
            }
 
            val serviceTrait = service.getTrait(ServiceTrait::class.javaObjectType).get();
 
            val sdkId = serviceTrait.sdkId
                    .replace("-", "")
                    .replace(" ", "")
                    .lowercase();
            val projectionContents = Node.objectNodeBuilder()
                    .withMember("imports", Node.fromStrings("${models.absolutePath}${File.separator}${file.name}"))
                    .withMember("plugins", Node.objectNode()
                            .withMember("cpp-codegen-smoke-tests-plugin", Node.objectNodeBuilder()
                                    .withMember("serviceFilter", Node.arrayNode())
                                    .build()))
                    .build()
            projectionsBuilder.withMember(sdkId + "." + service.version.lowercase(), projectionContents)
        }
        val outputDirectoryArg = project.findProperty("outputDirectory")?.toString() ?: "output"

        file("smithy-build.json").writeText(Node.prettyPrintJson(Node.objectNodeBuilder()
                .withMember("version", "1.0")
                .withMember("projections", projectionsBuilder.build())
                .withMember("outputDirectory", outputDirectoryArg)
                .build()))
    }
}

// Generate smithy-build.json before running the build
tasks["build"].dependsOn(tasks["generate-smithy-build"])
