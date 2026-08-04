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
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.JsonProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.ProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.QueryXmlProtocolTraits;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol.RestXmlProtocolTraits;

/**
 * Resolves the wire protocol for a Smithy service shape, and maps a resolved
 * protocol to the {@link ProtocolTraits} strategy that owns its rendering.
 *
 * <p>{@link #traitsFor} is the single protocol-to-behavior switch in the generator;
 * downstream generators hold a {@code ProtocolTraits} and never branch on
 * {@link Protocol} themselves.
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

    /**
     * Returns the rendering strategy for a resolved protocol.
     *
     * <p>This is the <em>only</em> place in the generator that switches on
     * {@link Protocol}. Every other class receives a {@link ProtocolTraits} and calls
     * it, so adding a protocol means adding a case here plus (if its C++ surface is
     * genuinely new) one implementation class.
     *
     * @param protocol the protocol returned by {@link #resolve}
     * @return the strategy that owns this protocol's serde rendering
     * @throws UnsupportedOperationException if the protocol has no strategy
     */
    public static ProtocolTraits traitsFor(Protocol protocol) {
        if (protocol == null) {
            throw new UnsupportedOperationException("Cannot resolve ProtocolTraits for a null protocol");
        }
        switch (protocol) {
            case JSON:
            case CBOR:
                return new JsonProtocolTraits(protocol);
            case REST_XML:
                return new RestXmlProtocolTraits();
            case QUERY_XML:
            case EC2:
                return new QueryXmlProtocolTraits(protocol);
            default:
                throw new UnsupportedOperationException(
                    "No ProtocolTraits implementation for protocol: " + protocol);
        }
    }
}
