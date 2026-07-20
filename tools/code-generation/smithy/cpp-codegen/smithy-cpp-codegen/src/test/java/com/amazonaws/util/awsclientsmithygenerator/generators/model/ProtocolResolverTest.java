/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;
import org.junit.jupiter.api.Test;
import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;

import static org.junit.jupiter.api.Assertions.*;

class ProtocolResolverTest {

    @Test
    void resolve_restJson1() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestJson1Trait.builder().build())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.JSON, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_awsJson1_0() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait.builder().build())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.JSON, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_awsJson1_1() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.AwsJson1_1Trait.builder().build())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.JSON, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_rpcv2Cbor() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(software.amazon.smithy.protocol.traits.Rpcv2CborTrait.builder().build())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.CBOR, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_restXml() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(software.amazon.smithy.aws.traits.protocols.RestXmlTrait.builder().build())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.REST_XML, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_awsQuery() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(new software.amazon.smithy.aws.traits.protocols.AwsQueryTrait())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.QUERY_XML, ProtocolResolver.resolve(service, model));
    }

    @Test
    void resolve_ec2Query() {
        ServiceShape service = ServiceShape.builder()
            .id("com.example#TestService")
            .version("2023-01-01")
            .addTrait(new software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait())
            .build();
        Model model = Model.builder().addShape(service).build();
        assertEquals(Protocol.EC2, ProtocolResolver.resolve(service, model));
    }

    @Test
    void protocol_json_serdeNamespace() {
        assertEquals("Aws::Utils::Json", Protocol.JSON.getSerdeNamespace());
    }

    @Test
    void protocol_json_viewType() {
        assertEquals("Aws::Utils::Json::JsonView", Protocol.JSON.getViewType());
    }

    @Test
    void protocol_json_valueType() {
        assertEquals("Aws::Utils::Json::JsonValue", Protocol.JSON.getValueType());
    }

    @Test
    void protocol_json_serializeMethodName() {
        assertEquals("Jsonize", Protocol.JSON.getSerializeMethodName());
    }

    @Test
    void protocol_cbor_serdeNamespace() {
        assertEquals("Aws::Utils::Json", Protocol.CBOR.getSerdeNamespace());
    }

    @Test
    void protocol_cbor_viewType() {
        assertEquals("Aws::Utils::Json::JsonView", Protocol.CBOR.getViewType());
    }

    @Test
    void protocol_restXml_serdeNamespace() {
        assertEquals("Aws::Utils::Xml", Protocol.REST_XML.getSerdeNamespace());
    }

    @Test
    void protocol_restXml_viewType() {
        assertEquals("const Aws::Utils::Xml::XmlNode&", Protocol.REST_XML.getViewType());
    }

    @Test
    void protocol_restXml_serializeMethodName() {
        assertEquals("AddToNode", Protocol.REST_XML.getSerializeMethodName());
    }

    @Test
    void protocol_queryXml_serializeMethodName() {
        assertEquals("OutputToStream", Protocol.QUERY_XML.getSerializeMethodName());
    }

    @Test
    void protocol_ec2_serializeMethodName() {
        assertEquals("OutputToStream", Protocol.EC2.getSerializeMethodName());
    }

    @Test
    void protocol_json_isJsonLike() {
        assertTrue(Protocol.JSON.isJsonLike());
        assertFalse(Protocol.JSON.isXmlLike());
    }

    @Test
    void protocol_cbor_isJsonLike() {
        assertTrue(Protocol.CBOR.isJsonLike());
        assertFalse(Protocol.CBOR.isXmlLike());
    }

    @Test
    void protocol_restXml_isXmlLike() {
        assertTrue(Protocol.REST_XML.isXmlLike());
        assertFalse(Protocol.REST_XML.isJsonLike());
    }

    @Test
    void protocol_queryXml_isXmlLike() {
        assertTrue(Protocol.QUERY_XML.isXmlLike());
        assertFalse(Protocol.QUERY_XML.isJsonLike());
    }

    @Test
    void protocol_ec2_isXmlLike() {
        assertTrue(Protocol.EC2.isXmlLike());
        assertFalse(Protocol.EC2.isJsonLike());
    }
}
