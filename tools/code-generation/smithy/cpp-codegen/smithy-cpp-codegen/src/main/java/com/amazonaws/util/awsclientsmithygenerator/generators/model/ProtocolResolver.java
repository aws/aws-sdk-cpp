/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model;

import software.amazon.smithy.model.Model;
import software.amazon.smithy.model.shapes.ServiceShape;
import software.amazon.smithy.aws.traits.protocols.AwsJson1_0Trait;
import software.amazon.smithy.aws.traits.protocols.AwsJson1_1Trait;
import software.amazon.smithy.aws.traits.protocols.AwsQueryTrait;
import software.amazon.smithy.aws.traits.protocols.Ec2QueryTrait;
import software.amazon.smithy.aws.traits.protocols.RestJson1Trait;
import software.amazon.smithy.aws.traits.protocols.RestXmlTrait;
import software.amazon.smithy.protocol.traits.Rpcv2CborTrait;

/**
 * Resolves the wire protocol for a Smithy service shape.
 *
 * <p>The resolved {@link Protocol} enum carries all serde-related metadata needed
 * by downstream template generators (namespace, view/value types, method names).
 */
public final class ProtocolResolver {

    /**
     * Wire protocol variants supported by the C++ SDK code generator.
     *
     * <p>Each variant encapsulates the C++ serde namespace, the type used for
     * deserialization (view), the type used for serialization (value), and the
     * method name emitted on request shapes.
     */
    public enum Protocol {
        JSON("Aws::Utils::Json", "Aws::Utils::Json::JsonView", "Aws::Utils::Json::JsonValue", "Jsonize"),
        REST_XML("Aws::Utils::Xml", "const Aws::Utils::Xml::XmlNode&", "void", "AddToNode"),
        QUERY_XML("Aws::Utils::Xml", "const Aws::Utils::Xml::XmlNode&", "void", "OutputToStream"),
        CBOR("Aws::Utils::Json", "Aws::Utils::Json::JsonView", "Aws::Utils::Json::JsonValue", "Jsonize"),
        EC2("Aws::Utils::Xml", "const Aws::Utils::Xml::XmlNode&", "void", "OutputToStream");

        private final String serdeNamespace;
        private final String viewType;
        private final String valueType;
        private final String serializeMethodName;

        Protocol(String serdeNamespace, String viewType, String valueType, String serializeMethodName) {
            this.serdeNamespace = serdeNamespace;
            this.viewType = viewType;
            this.valueType = valueType;
            this.serializeMethodName = serializeMethodName;
        }

        /** Returns the C++ namespace for serde utilities (e.g., {@code Aws::Utils::Json}). */
        public String getSerdeNamespace() {
            return serdeNamespace;
        }

        /** Returns the C++ type used as the deserialization input parameter. */
        public String getViewType() {
            return viewType;
        }

        /** Returns the C++ type used as the serialization return value. */
        public String getValueType() {
            return valueType;
        }

        /** Returns the serialize method name emitted on request model classes. */
        public String getSerializeMethodName() {
            return serializeMethodName;
        }

        /** Returns true if the protocol uses JSON-style serde (JSON or CBOR). */
        public boolean isJsonLike() {
            return this == JSON || this == CBOR;
        }

        /** Returns true if the protocol uses XML-style serde (REST_XML, QUERY_XML, or EC2). */
        public boolean isXmlLike() {
            return this == REST_XML || this == QUERY_XML || this == EC2;
        }
    }

    private ProtocolResolver() {
    }

    /**
     * Resolves the wire protocol for the given service shape.
     *
     * <p>Resolution order (first match wins):
     * <ol>
     *   <li>{@code smithy.protocols#rpcv2Cbor} &rarr; CBOR</li>
     *   <li>{@code aws.protocols#ec2Query} &rarr; EC2</li>
     *   <li>{@code aws.protocols#awsQuery} &rarr; QUERY_XML</li>
     *   <li>{@code aws.protocols#restXml} &rarr; REST_XML</li>
     *   <li>Default (restJson1, awsJson1_0, awsJson1_1, or unrecognized) &rarr; JSON</li>
     * </ol>
     *
     * @param service the service shape to resolve
     * @param model   the model containing the service (reserved for future use)
     * @return the resolved Protocol enum value
     */
    public static Protocol resolve(ServiceShape service, Model model) {
        if (service.hasTrait(Rpcv2CborTrait.class)) {
            return Protocol.CBOR;
        }
        if (service.hasTrait(Ec2QueryTrait.class)) {
            return Protocol.EC2;
        }
        if (service.hasTrait(AwsQueryTrait.class)) {
            return Protocol.QUERY_XML;
        }
        if (service.hasTrait(RestXmlTrait.class)) {
            return Protocol.REST_XML;
        }
        // Default: JSON (covers RestJson1, AwsJson1_0, AwsJson1_1)
        return Protocol.JSON;
    }
}
