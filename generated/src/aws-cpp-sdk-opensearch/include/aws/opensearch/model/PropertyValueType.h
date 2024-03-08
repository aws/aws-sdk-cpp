/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{
  enum class PropertyValueType
  {
    NOT_SET,
    PLAIN_TEXT,
    STRINGIFIED_JSON
  };

namespace PropertyValueTypeMapper
{
AWS_OPENSEARCHSERVICE_API PropertyValueType GetPropertyValueTypeForName(const Aws::String& name);

AWS_OPENSEARCHSERVICE_API Aws::String GetNameForPropertyValueType(PropertyValueType value);
} // namespace PropertyValueTypeMapper
} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
