import software.amazon.smithy.model.Model
import software.amazon.smithy.model.node.Node
import software.amazon.smithy.model.node.StringNode
import software.amazon.smithy.model.shapes.ServiceShape
import software.amazon.smithy.aws.traits.ServiceTrait
import org.gradle.api.logging.Logging
import java.net.URLClassLoader
import kotlin.streams.toList

val logger = Logging.getLogger("MyLogger")
val smithyVersion = "1.73.0"

plugins {
    id("java-library")
    id("software.amazon.smithy.gradle.smithy-base").version("1.4.0")
}

repositories {
    mavenLocal()
    mavenCentral()
}

buildscript {
    // buildscript is evaluated before script-body vals, so it keeps its own copy in sync
    val smithyVersion = "1.73.0"
    dependencies {
        classpath("software.amazon.smithy:smithy-model:$smithyVersion")
        classpath("software.amazon.smithy:smithy-aws-traits:$smithyVersion")
        classpath("software.amazon.smithy:smithy-rules-engine:$smithyVersion")
    }
}

dependencies {
    implementation(project(":smithy-cpp-codegen"))
    implementation("software.amazon.smithy:smithy-aws-traits:$smithyVersion")
    implementation("software.amazon.smithy:smithy-aws-cloudformation-traits:$smithyVersion")
    implementation("software.amazon.smithy:smithy-aws-iam-traits:$smithyVersion")
    implementation("software.amazon.smithy:smithy-aws-endpoints:$smithyVersion")
    implementation("software.amazon.smithy:smithy-smoke-test-traits:$smithyVersion")
    implementation("software.amazon.smithy:smithy-aws-smoke-test-model:$smithyVersion")
    implementation("software.amazon.smithy:smithy-waiters:$smithyVersion")
}

tasks.register("generate-smithy-build") {
    doLast {
        val projectionsBuilder = Node.objectNodeBuilder()
        val models = project.file("../api-descriptions")
        val filteredServices: String = project.findProperty("servicesFilter")?.toString() ?: ""
        val filteredServiceList = filteredServices.split(",").map { it.trim() }.filter { it.isNotEmpty() }
        val c2jMapStr: String = project.findProperty("c2jMap")?.toString() ?: "{}"
        val namespaceMappings: String = project.findProperty("namespaceMappings")?.toString() ?: "{}"
        val generateModels: Boolean = project.findProperty("generateModels")?.toString()?.toBoolean() ?: false
        val generateEndpointRules: Boolean = project.findProperty("generateEndpointRules")?.toString()?.toBoolean() ?: false
        val bddBytecoderPath: String = project.findProperty("bddBytecoderPath")?.toString() ?: ""
        val pythonExecutable: String = project.findProperty("pythonExecutable")?.toString() ?: "python3"

        fileTree(models).filter { it.isFile }.files.forEach eachFile@{ file ->
            val model = Model.assembler()
                .addImport(file.absolutePath)
                .assemble().result.get()
            val services = model.shapes(ServiceShape::class.java).sorted().toList()
            if (services.size != 1) return@eachFile
            
            val service = services[0]
            val serviceTrait = service.getTrait(ServiceTrait::class.java).get()
            val sdkId = serviceTrait.sdkId.replace(" ", "-").replace("_", "-").lowercase()
            
            if (filteredServiceList.isNotEmpty() && sdkId !in filteredServiceList) return@eachFile
            
            var pluginsNode = Node.objectNode()
                .withMember("smithy-cpp-codegen-paginators", Node.objectNodeBuilder()
                    .withMember("c2jMap", Node.from(c2jMapStr))
                    .withMember("namespaceMappings", Node.from(namespaceMappings))
                    .build())
                .withMember("smithy-cpp-codegen-waiters", Node.objectNodeBuilder()
                    .withMember("c2jMap", Node.from(c2jMapStr))
                    .withMember("namespaceMappings", Node.from(namespaceMappings))
                    .build())
            if (generateModels) {
                pluginsNode = pluginsNode.withMember("smithy-cpp-codegen-models", Node.objectNodeBuilder()
                    .withMember("c2jMap", Node.from(c2jMapStr))
                    .withMember("namespaceMappings", Node.from(namespaceMappings))
                    .build())
            }
            if (generateEndpointRules) {
                pluginsNode = pluginsNode.withMember("smithy-cpp-codegen-endpoint-rules", Node.objectNodeBuilder()
                    .withMember("c2jMap", Node.from(c2jMapStr))
                    .withMember("namespaceMappings", Node.from(namespaceMappings))
                    .withMember("bddBytecoderPath", Node.from(bddBytecoderPath))
                    .withMember("pythonExecutable", Node.from(pythonExecutable))
                    .build())
            }

            val projectionContents = Node.objectNodeBuilder()
                .withMember("imports", Node.fromStrings("${models.absolutePath}${File.separator}${file.name}"))
                .withMember("plugins", pluginsNode)
                .build()

            projectionsBuilder.withMember("$sdkId.${service.version.lowercase()}", projectionContents)
        }
        
        // Legacy services without full Smithy models - generate mock projections for base classes
        val legacyServices = mapOf("importexport" to "ImportExport", "sdb" to "SimpleDB")
        legacyServices.forEach { (c2jName, serviceName) ->
            if (filteredServiceList.isEmpty() || c2jName in filteredServiceList) {
                var legacyPluginsNode = Node.objectNode()
                    .withMember("smithy-cpp-codegen-paginators", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                    .withMember("smithy-cpp-codegen-waiters", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                if (generateModels) {
                    legacyPluginsNode = legacyPluginsNode.withMember("smithy-cpp-codegen-models", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                }
                val mockProjectionContents = Node.objectNodeBuilder()
                    .withMember("plugins", legacyPluginsNode)
                    .build()
                projectionsBuilder.withMember("$c2jName.mock", mockProjectionContents)
            }
        }
        
        // S3-CRT: Uses S3 model but generates with S3Crt namespace
        if (filteredServiceList.isEmpty() || "s3-crt" in filteredServiceList) {
            fileTree(models).filter { it.isFile && it.name == "s3.json" }.files.firstOrNull()?.let { s3ModelFile ->
                var s3CrtPluginsNode = Node.objectNode()
                    .withMember("smithy-cpp-codegen-paginators", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                    .withMember("smithy-cpp-codegen-waiters", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                if (generateModels) {
                    s3CrtPluginsNode = s3CrtPluginsNode.withMember("smithy-cpp-codegen-models", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .build())
                }
                if (generateEndpointRules) {
                    s3CrtPluginsNode = s3CrtPluginsNode.withMember("smithy-cpp-codegen-endpoint-rules", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMapStr))
                        .withMember("namespaceMappings", Node.from(namespaceMappings))
                        .withMember("bddBytecoderPath", Node.from(bddBytecoderPath))
                        .withMember("pythonExecutable", Node.from(pythonExecutable))
                        .build())
                }
                val s3CrtProjectionContents = Node.objectNodeBuilder()
                    .withMember("imports", Node.fromStrings(s3ModelFile.absolutePath))
                    .withMember("plugins", s3CrtPluginsNode)
                    .build()
                projectionsBuilder.withMember("s3-crt.2006-03-01", s3CrtProjectionContents)
            }
        }
        
        val outputDirectoryArg = project.findProperty("outputDirectory")?.toString() ?: "output"
        file("smithy-build.json").writeText(Node.prettyPrintJson(Node.objectNodeBuilder()
            .withMember("version", "1.0")
            .withMember("projections", projectionsBuilder.build())
            .withMember("outputDirectory", outputDirectoryArg)
            .build()))
    }
}

tasks["build"].dependsOn(tasks["generate-smithy-build"])

// Protocol-test client models: `smithyBuild -PprotocolTests -PprotocolTestOperations=<json>` builds one projection per
// protocol-test client package (projection name = package) from ../../protocol-tests/smithy-models/<package>.json, the
// Smithy models SmithyC2jProtocolTests converted into the C2J clients in ../../protocol-tests/api-descriptions.
if (project.hasProperty("protocolTests")) {
    tasks.named<software.amazon.smithy.gradle.tasks.SmithyBuildTask>("smithyBuild") {
        dependsOn("generate-protocol-test-smithy-build")
        getSmithyBuildConfigs().set(files("protocol-tests-smithy-build.json"))
    }
}

tasks.register("generate-protocol-test-smithy-build") {
    doLast {
        // package -> operations to generate, e.g. {"rest-json-protocol": ["AllQueryStringTypes", ...]}
        val operations = Node.parse(project.findProperty("protocolTestOperations")?.toString() ?: "{}")
            .expectObjectNode().stringMap
        val smithyModels = project.file("../../protocol-tests/smithy-models")
        val importsDir = layout.buildDirectory.dir("protocol-test-models").get().asFile.apply { mkdirs() }

        // The smithy-models are flattened: they inline the definitions of the traits they use (aws.auth#sigv4, ...),
        // which smithyBuild also discovers on its classpath (smithy-aws-traits, ...) and which may differ slightly.
        // Import only the shapes the classpath doesn't already define.
        val classpath = configurations.getByName("runtimeClasspath").files.map { it.toURI().toURL() }.toTypedArray()
        val loader = URLClassLoader(classpath, Model::class.java.classLoader)
        val classpathShapes = Model.assembler(loader).discoverModels(loader).assemble().unwrap()
            .toSet().map { it.id.toString() }.toSet()

        val projectionsBuilder = Node.objectNodeBuilder()
        operations.forEach { (packageName, packageOperations) ->
            val modelFile = File(smithyModels, "$packageName.json")
            if (!modelFile.isFile) throw GradleException("No Smithy model for protocol-test client $packageName: $modelFile")
            val modelNode = Node.parse(modelFile.readText()).expectObjectNode()
            val shapes = modelNode.expectObjectMember("shapes")
            val importFile = File(importsDir, "$packageName.json")
            importFile.writeText(Node.prettyPrintJson(modelNode.withMember("shapes",
                Node.objectNode(shapes.members.filterKeys { it.value !in classpathShapes }))))
            val service = Model.assembler(loader).discoverModels(loader).addImport(importFile.absolutePath).assemble()
                .unwrap().shapes(ServiceShape::class.java).toList().single()
            // The plugin derives the package from the sdkId; map it to the C2J package where they differ.
            val sdkIdPackage = service.getTrait(ServiceTrait::class.java).map { it.sdkId }.orElse(service.id.name)
                .trim().lowercase().replace(" ", "-")
            val c2jMap = if (sdkIdPackage == packageName) "{}" else Node.printJson(
                Node.objectNode().withMember(sdkIdPackage, packageName))
            val operationNames = packageOperations.expectArrayNode().getElementsAs(StringNode::getValue)

            projectionsBuilder.withMember(packageName, Node.objectNodeBuilder()
                .withMember("imports", Node.fromStrings(importFile.absolutePath))
                .withMember("transforms", Node.fromNodes(
                    Node.objectNodeBuilder()
                        .withMember("name", "excludeShapesBySelector")
                        .withMember("args", Node.objectNodeBuilder().withMember("selector",
                            "operation :not([id|name = ${operationNames.joinToString(", ") { "'$it'" }}])").build())
                        .build(),
                    Node.objectNodeBuilder()
                        .withMember("name", "removeUnusedShapes")
                        .withMember("args", Node.objectNode())
                        .build()))
                .withMember("plugins", Node.objectNode()
                    .withMember("smithy-cpp-codegen-models", Node.objectNodeBuilder()
                        .withMember("c2jMap", Node.from(c2jMap))
                        .withMember("namespaceMappings", Node.from("{}"))
                        .build()))
                .build())
        }

        file("protocol-tests-smithy-build.json").writeText(Node.prettyPrintJson(Node.objectNodeBuilder()
            .withMember("version", "1.0")
            .withMember("projections", projectionsBuilder.build())
            .withMember("outputDirectory", "output")
            .build()))
    }
}
