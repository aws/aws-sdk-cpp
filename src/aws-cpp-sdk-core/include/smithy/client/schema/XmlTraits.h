/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/utils/memory/stl/AWSString.h>

namespace smithy {
namespace schema {

struct XmlTraits {
  Aws::String xmlName;
  Aws::String listItemName;
  Aws::String mapEntryName;
  Aws::String mapKeyName;
  Aws::String mapValueName;
  Aws::String namespaceUri;
  Aws::String namespacePrefix;
  bool flattened = false;
  bool isAttribute = false;
};

}  // namespace schema
}  // namespace smithy
