/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
package com.amazonaws.util.awsclientsmithygenerator.generators.model.renderers.endpointcontext;

import software.amazon.smithy.model.shapes.Shape;

/**
 * Immutable result of visiting one JMESPath node while building the body of
 * {@code GetOperationContextParams()}.
 *
 * @param statements fully-formed C++ statement lines emitted at/under this node (may be empty)
 * @param valueExpr  C++ expression for the value located by the path so far (parents extend it)
 * @param shape      the Smithy shape resolved at this node (may be null at a terminal)
 * @param rootName   leading identifier of the current accessor chain (first field's name);
 *                   the alias is {@code rootName + "Elems"} and a projection loop var is
 *                   {@code rootName + "Elem"}
 */
public record Emit(String statements, String valueExpr, Shape shape, String rootName) {}
