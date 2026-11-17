/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/Document.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Document.h>

#include <memory>

namespace smithy {
namespace schema {

/**
 * Converts between the public model type {@code Aws::Utils::Document} (what generated shapes expose)
 * and the schema-serde {@code smithy::schema::Document} (what serializers / deserializers consume), so
 * generated adapters can route documents through schema-serde without changing the shape's public API.
 */
SMITHY_API std::shared_ptr<const Document> ToSchemaDocument(const Aws::Utils::DocumentView& view);

/**
 * Inverse of {@link ToSchemaDocument}. {@code Aws::Utils::Document} is JSON-backed, so a blob becomes
 * its base64 string and a timestamp its epoch seconds.
 */
SMITHY_API Aws::Utils::Document ToUtilsDocument(const Document& document);

}  // namespace schema
}  // namespace smithy
