/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.protocol;

import com.amazonaws.util.awsclientsmithygenerator.generators.CppWriter;
import com.amazonaws.util.awsclientsmithygenerator.generators.model.ProtocolResolver.Protocol;

/**
 * Owns every protocol-specific rendering decision for generated model code.
 *
 * <p>Renderers receive a {@code ProtocolTraits} and call these methods; they never
 * branch on {@link Protocol} themselves. One implementation exists per serde
 * <em>family</em> (JSON-like, REST-XML, query-XML), not per protocol, so the
 * conditional arms that used to be repeated across renderers are now classes.
 *
 * <p>Obtain an instance from
 * {@code ProtocolResolver.traitsFor(ProtocolResolver.resolve(service, model))}.
 */
public interface ProtocolTraits {

    /** The protocol this instance was resolved for. */
    Protocol protocol();

    /** C++ namespace holding the serde utilities, e.g. {@code Aws::Utils::Json}. */
    String serdeNamespace();

    // ------------------------------------------------------------------
    // Header side
    // ------------------------------------------------------------------

    /**
     * Forward-declares the serde types a shape (sub-object / request / event) header
     * needs: both the value and the view type for JSON-like protocols, the node type
     * for XML-like ones. Emits its own {@code Utils}/{@code Json}|{@code Xml}
     * namespace nesting; the caller has already opened {@code Aws}.
     */
    void writeShapeForwardDeclarations(CppWriter writer);

    /**
     * Forward-declares the serde types a <em>result</em> header needs. This differs
     * from {@link #writeShapeForwardDeclarations}: results reference the document
     * type ({@code JsonValue} / {@code XmlDocument}) and never the view type.
     */
    void writeResultForwardDeclarations(CppWriter writer);

    /**
     * Emits the serde method declarations for a model class: the default ctor, the
     * deserializing ctor, {@code operator=}, and the serialize method
     * ({@code Jsonize} / {@code AddToNode} / {@code OutputToStream}).
     *
     * @param beforeSerializeMethod optional hook run after the deserializing ctor and
     *        {@code operator=} but before the serialize method, used to inject extra
     *        constructors at the mainline position. Ignored when {@code null}.
     */
    void writeSerdeMethodDecls(CppWriter writer, String exportMacro, String className,
                               Runnable beforeSerializeMethod);

    /** Emits a result class's {@code AmazonWebServiceResult<...>} ctor and {@code operator=} declarations. */
    void writeResultSerdeDecls(CppWriter writer, String exportMacro, String className);

    // ------------------------------------------------------------------
    // Source side
    // ------------------------------------------------------------------

    /** Emits the {@code #include} for this protocol's serializer header. */
    void writeSerdeInclude(CppWriter writer);

    /** Emits the {@code using namespace} declarations this protocol's serde bodies need. */
    void writeSerdeUsingDeclarations(CppWriter writer);

    /**
     * Emits the serde method bodies matching {@link #writeSerdeMethodDecls}.
     * Bodies are currently empty stubs pending schema-based serde.
     */
    void writeSerdeMethodImpls(CppWriter writer, String className);

    /** Emits the result ctor / {@code operator=} bodies matching {@link #writeResultSerdeDecls}. */
    void writeResultSerdeImpls(CppWriter writer, String className);

    // ------------------------------------------------------------------
    // Protocol-agnostic today; kept here so callers have one place to look.
    // ------------------------------------------------------------------

    /**
     * Emits a placeholder for an event-stream event case body: a TODO marker plus a
     * compilable callback invocation with a default-constructed event.
     */
    default void writeEventPayloadDecode(CppWriter writer, String eventShapeName,
                                         String callbackMember) {
        writer.write("// TODO: protocol-specific event payload deserialization");
        writer.write("$L($L{});", callbackMember, eventShapeName);
    }

    /**
     * Emits a placeholder in place of the protocol-specific error-payload parse. The
     * header-derived error code/message still flow to MarshallError at the call site.
     */
    default void writeErrorPayloadParse(CppWriter writer) {
        writer.write("// TODO: protocol-specific error payload deserialization");
    }
}
