/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

namespace smithy {
namespace schema {

/**
 * XML-specific traits for a Schema member.
 * Instances should be declared as static const and referenced via pointer from Schema.
 * Zero cost for non-XML services (Schema just holds a null pointer).
 */
struct XmlTraits {
  Aws::String xmlName;          // @xmlName override (empty = use member name)
  Aws::String listItemName;     // element name for list items (default: "member")
  Aws::String mapEntryName;     // element name for map entries (default: "entry")
  Aws::String mapKeyName;       // element name for map keys (default: "key")
  Aws::String mapValueName;     // element name for map values (default: "value")
  Aws::String namespaceUri;     // @xmlNamespace URI
  Aws::String namespacePrefix;  // @xmlNamespace prefix (empty = default namespace)
  bool flattened = false;       // @xmlFlattened
  bool isAttribute = false;     // @xmlAttribute
};

}  // namespace schema
}  // namespace smithy
