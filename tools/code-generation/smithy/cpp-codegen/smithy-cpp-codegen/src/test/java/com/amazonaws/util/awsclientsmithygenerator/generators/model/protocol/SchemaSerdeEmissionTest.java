/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.MemberShape;
import software.amazon.smithy.model.shapes.OperationShape;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.model.shapes.StringShape;
import software.amazon.smithy.model.shapes.StructureShape;

import static org.junit.jupiter.api.Assertions.assertFalse;
import static org.junit.jupiter.api.Assertions.assertTrue;

/**
 * When a request has a non-empty all-scalar body, each protocol's writeRequestMethodImpls emits a
 * protocol-agnostic schema-serde adapter (anon-namespace SerializableStruct + per-instance Schema)
 * and the client-driven entry points (GetSchemaSerdeInput / GetSchemaSerdeContext). The generated
 * shape names NO concrete protocol and does NOT wrap the query envelope itself — the client-owned
 * ClientProtocol drives serialization, so swapping the protocol needs no shape change.
 */
class SchemaSerdeEmissionTest {

    private static String render(java.util.function.Consumer<CppWriter> body) {
        CppWriter w = new CppWriter();
        body.accept(w);
        return w.toString();
    }

    // A request with a single scalar (string) body member "name".
    private static final StringShape STR = StringShape.builder().id("com.example#Str").build();
    private static final StructureShape REQ = StructureShape.builder()
        .id("com.example#DoThingRequest")
        .addMember(MemberShape.builder().id("com.example#DoThingRequest$name").target(STR.getId()).build())
        .build();
    private static final OperationShape OP = OperationShape.builder()
        .id("com.example#DoThing").input(REQ.getId()).build();
    private static final ServiceShape SVC = ServiceShape.builder()
        .id("com.example#AmazonAthena").version("2011-06-15").addOperation(OP.getId()).build();
    private static final Model MODEL = Model.builder().addShapes(STR, REQ, OP, SVC).build();

    private static String impls(ProtocolTraits t) {
        return render(w -> t.writeRequestMethodImpls(w, "DoThingRequest", REQ, OP, SVC, MODEL, "Example"));
    }

    // A result with a single scalar (string) body member "arn".
    private static final StructureShape RESULT = StructureShape.builder()
        .id("com.example#DoThingResult")
        .addMember(MemberShape.builder().id("com.example#DoThingResult$arn").target(STR.getId()).build())
        .build();
    private static final Model RESULT_MODEL = Model.builder().addShapes(STR, RESULT).build();

    // A result with a nested-struct member: DoNestedResult { creds: Nested { tokenValue: string } }.
    private static final StructureShape NESTED = StructureShape.builder()
        .id("com.example#Nested")
        .addMember(MemberShape.builder().id("com.example#Nested$tokenValue").target(STR.getId()).build())
        .build();
    private static final StructureShape NESTED_RESULT = StructureShape.builder()
        .id("com.example#DoNestedResult")
        .addMember(MemberShape.builder().id("com.example#DoNestedResult$creds").target(NESTED.getId()).build())
        .build();
    private static final Model NESTED_MODEL = Model.builder().addShapes(STR, NESTED, NESTED_RESULT).build();

    private static void assertSchemaSerde(String out) {
        assertTrue(out.contains("class DoThingRequestSerializable final : public smithy::schema::SerializableStruct"), out);
        assertTrue(out.contains("static std::shared_ptr<const smithy::schema::Schema> BuildSchema()"), out);
        // The schema is built once per InitAPI..ShutdownAPI window and shared, not rebuilt per request.
        assertTrue(out.contains("class DoThingRequestSchemaCache {"), out);
        assertTrue(out.contains("Aws::Utils::ComponentRegistry::RegisterComponent(\"DoThingRequestSchemaCache\", built, &Release);"), out);
        assertTrue(out.contains("m_schema(DoThingRequestSchemaCache<DoThingRequestSerializable>::Get())"), out);
        assertFalse(out.contains("m_schema(BuildSchema())"), out);
        assertTrue(out.contains(".PutMember(\"name\""), out);
        // Client-driven entry points: the shape hands its agnostic adapter + operation context to the
        // client-owned protocol.
        assertTrue(out.contains("Aws::UniquePtr<smithy::schema::SerializableStruct> DoThingRequest::GetSchemaSerdeInput() const"), out);
        assertTrue(out.contains("Aws::MakeUnique<DoThingRequestSerializable>"), out);
        assertTrue(out.contains("smithy::schema::OperationRequestContext DoThingRequest::GetSchemaSerdeContext() const"), out);
        assertTrue(out.contains("return {\"DoThing\", \"2011-06-15\"};"), out);
        // SerializePayload is de-pinned: a stub that names no protocol.
        assertTrue(out.contains("Aws::String DoThingRequest::SerializePayload() const { return {}; }"), out);
        // The shape references NO concrete protocol and does NOT build the query envelope itself.
        assertFalse(out.contains("smithy::schema::AwsQueryProtocol"), out);
        assertFalse(out.contains("smithy::schema::Ec2QueryProtocol"), out);
        assertFalse(out.contains("smithy::schema::AwsJson11Protocol"), out);
        assertFalse(out.contains("smithy::schema::RestJsonProtocol"), out);
        assertFalse(out.contains("smithy::schema::RpcV2CborProtocol"), out);
        assertFalse(out.contains("smithy::schema::RestXmlProtocol"), out);
        assertFalse(out.contains("protocol.SerializeInput"), out);
        assertFalse(out.contains("ss << \"Action="), out);
    }

    @Test
    void awsJson_scalarBody_isProtocolAgnostic() {
        assertSchemaSerde(impls(new JsonProtocolTraits(Protocol.JSON)));
    }

    @Test
    void restJson_scalarBody_isProtocolAgnostic() {
        assertSchemaSerde(impls(new JsonProtocolTraits(Protocol.REST_JSON)));
    }

    @Test
    void restXml_scalarBody_isProtocolAgnostic() {
        assertSchemaSerde(impls(new RestXmlProtocolTraits()));
    }

    @Test
    void awsQuery_scalarBody_isProtocolAgnostic() {
        assertSchemaSerde(impls(new QueryXmlProtocolTraits(Protocol.QUERY_XML)));
    }

    @Test
    void ec2Query_scalarBody_isProtocolAgnostic() {
        assertSchemaSerde(impls(new QueryXmlProtocolTraits(Protocol.EC2)));
    }

    @Test
    void query_scalarResult_emitsClientDrivenDeserAdapter() {
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .writeResultSerdeImpls(w, "DoThingResult", RESULT, RESULT_MODEL, "Example"));
        // Legacy XmlDocument operator= still emitted (additive until the response marshaller switches).
        assertTrue(out.contains("DoThingResult& DoThingResult::operator=(const Aws::AmazonWebServiceResult<Aws::String>& result)"), out);
        // Client-driven deserialize adapter: reads wire members into the result via setters, names no protocol.
        assertTrue(out.contains("class DoThingResultDeserializable final : public smithy::schema::SerializableStruct"), out);
        assertTrue(out.contains("void From(const smithy::schema::Schema& memberSchema, "
            + "smithy::schema::ShapeDeserializer& deserializer) override;"), out);
        assertTrue(out.contains("void DoThingResultDeserializable::From(const smithy::schema::Schema& memberSchema, "
            + "smithy::schema::ShapeDeserializer& deserializer) {"), out);
        assertTrue(out.contains("const Aws::String memberName = memberSchema.GetMemberName();"), out);
        assertTrue(out.contains("if (memberName == \"arn\") {"), out);
        assertTrue(out.contains("auto value0 = deserializer.ReadString(memberSchema);"), out);
        assertTrue(out.contains("m_obj.SetArn(*value0);"), out);
        assertTrue(out.contains("Aws::UniquePtr<smithy::schema::SerializableStruct> DoThingResult::GetSchemaSerdeOutput() {"), out);
        assertTrue(out.contains("return Aws::MakeUnique<DoThingResultDeserializable>(\"DoThingResultDeserializable\", *this);"), out);
        // The result is protocol-agnostic: it names no protocol, no XML deserializer, and does NOT peel
        // the response envelope itself — the client-owned ClientProtocol drives DeserializeResponse over
        // GetSchemaSerdeOutput(). operator= only handles transport concerns (status + request id header).
        assertFalse(out.contains("smithy::schema::AwsQueryProtocol"), out);
        assertFalse(out.contains("XmlShapeDeserializer"), out);
        assertFalse(out.contains("EnterWrapperElement"), out);
        assertFalse(out.contains("// TODO: protocol-specific body member deserialization"), out);
    }

    @Test
    void adaptersAreEmittedInsideTheModelNamespace() {
        // A shape named like an Aws-level namespace / type (Endpoint, Event, Region, Model, ...) is ambiguous at
        // file scope, where the model .cpp has `using namespace Aws;` and `using namespace Aws::<ns>::Model;`.
        // The adapters therefore live in an anonymous namespace inside Aws::<ns>::Model.
        StructureShape endpoint = StructureShape.builder()
            .id("com.example#Endpoint")
            .addMember(MemberShape.builder().id("com.example#Endpoint$address").target(STR.getId()).build())
            .build();
        StructureShape result = StructureShape.builder()
            .id("com.example#DescribeThingResult")
            .addMember(MemberShape.builder().id("com.example#DescribeThingResult$endpoint").target(endpoint.getId()).build())
            .build();
        Model model = Model.builder().addShapes(STR, endpoint, result).build();
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .writeResultSerdeImpls(w, "DescribeThingResult", result, model, "Example"));
        int aws = out.indexOf("namespace Aws\n{");
        int anon = out.indexOf("namespace {");
        int use = out.indexOf("Endpoint nested0;");
        int anonClose = out.indexOf("}  // namespace\n");
        int modelClose = out.indexOf("} // namespace Model");
        int nsClose = out.indexOf("} // namespace Example");
        int close = out.indexOf("} // namespace Aws");
        assertTrue(aws >= 0 && aws < anon && anon < use && use < anonClose && anonClose < modelClose
            && modelClose < nsClose && nsClose < close, out);
        // The out-of-line member definition stays at file scope, after the model namespace closes.
        assertTrue(close < out.indexOf("DescribeThingResult::GetSchemaSerdeOutput() {"), out);
    }

    @Test
    void dynamoDbAttributeValue_usesItsHandWrittenApi() {
        // DynamoDB's AttributeValue is C2J's hand-written class (CustomRenderedTrait), not a generated union: its
        // adapter switches on GetType() and uses the class's own accessors rather than <Member>HasBeenSet().
        software.amazon.smithy.model.shapes.UnionShape av = software.amazon.smithy.model.shapes.UnionShape.builder()
            .id("com.amazonaws.dynamodb#AttributeValue")
            .addMember(MemberShape.builder().id("com.amazonaws.dynamodb#AttributeValue$S").target(STR.getId()).build())
            .addTrait(new com.amazonaws.util.awsclientsmithygenerator.generators.model.transforms.CustomRenderedTrait())
            .build();
        StructureShape result = StructureShape.builder()
            .id("com.amazonaws.dynamodb#GetThingResult")
            .addMember(MemberShape.builder().id("com.amazonaws.dynamodb#GetThingResult$value").target(av.getId()).build())
            .build();
        Model model = Model.builder().addShapes(STR, av, result).build();
        String out = render(w -> new JsonProtocolTraits(Protocol.JSON)
            .writeResultSerdeImpls(w, "GetThingResult", result, model, "DynamoDB"));
        assertTrue(out.contains("if (memberName == \"S\") {"), out);
        assertTrue(out.contains("m_obj.SetS(*value);"), out);
        assertTrue(out.contains("m_obj.AddMEntry(key, nested);"), out);
        assertFalse(out.contains("m_obj.SHasBeenSet()"), out);

        StructureShape request = StructureShape.builder()
            .id("com.amazonaws.dynamodb#PutThingRequest")
            .addMember(MemberShape.builder().id("com.amazonaws.dynamodb#PutThingRequest$value").target(av.getId()).build())
            .build();
        OperationShape op = OperationShape.builder().id("com.amazonaws.dynamodb#PutThing").input(request.getId()).build();
        ServiceShape svc = ServiceShape.builder().id("com.amazonaws.dynamodb#DynamoDB_20120810").version("2012-08-10")
            .addOperation(op.getId()).build();
        Model reqModel = Model.builder().addShapes(STR, av, request, op, svc).build();
        String req = render(w -> new JsonProtocolTraits(Protocol.JSON)
            .writeRequestMethodImpls(w, "PutThingRequest", request, op, svc, reqModel, "DynamoDB"));
        assertTrue(req.contains("if (!m_obj.HasValue()) {"), req);
        assertTrue(req.contains("switch (m_obj.GetType()) {"), req);
        assertTrue(req.contains("case ValueType::ATTRIBUTE_MAP: {"), req);
        assertFalse(req.contains("m_obj.SHasBeenSet()"), req);
    }

    @Test
    void query_nestedStructResult_emitsRecursiveAdapters() {
        String out = render(w -> new QueryXmlProtocolTraits(Protocol.QUERY_XML)
            .writeResultSerdeImpls(w, "DoNestedResult", NESTED_RESULT, NESTED_MODEL, "Example"));
        // A dedicated adapter for the nested sub-object, unity-safe name (result-prefixed), declared
        // before the parent; all adapters are declared before any is defined (recursion-safe).
        assertTrue(out.contains("class DoNestedResult_NestedSchemaSerdeDeser final : public smithy::schema::SerializableStruct"), out);
        assertTrue(out.contains("class DoNestedResultDeserializable final : public smithy::schema::SerializableStruct"), out);
        assertTrue(out.indexOf("DoNestedResult_NestedSchemaSerdeDeser final") < out.indexOf("DoNestedResultDeserializable final"), out);
        assertTrue(out.indexOf("DoNestedResultDeserializable final") < out.indexOf("void DoNestedResult_NestedSchemaSerdeDeser::From("), out);
        // Parent schema embeds the child schema (recursive composition).
        assertTrue(out.contains(".PutMember(\"creds\", DoNestedResultSchemaCache<DoNestedResult_NestedSchemaSerdeDeser>::Get()"), out);
        // Each anonymous namespace carries its own cache, declared before the adapters that use it.
        assertTrue(out.indexOf("class DoNestedResultSchemaCache {") < out.indexOf("DoNestedResult_NestedSchemaSerdeDeser final"), out);
        assertTrue(out.contains("m_schema(DoNestedResultSchemaCache<DoNestedResultDeserializable>::Get())"), out);
        // Parent From deserializes through the child adapter (its own full schema) and stores the sub-object.
        assertTrue(out.contains("Nested nested0;"), out);
        assertTrue(out.contains("DoNestedResult_NestedSchemaSerdeDeser{nested0}.Deserialize(deserializer);"), out);
        assertTrue(out.contains("m_obj.SetCreds(std::move(nested0));"), out);
        // Child adapter deserializes its own scalar member.
        assertTrue(out.contains("m_obj.SetTokenValue(*value0);"), out);
        assertFalse(out.contains("smithy::schema::AwsQueryProtocol"), out);
    }
}
