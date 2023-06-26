/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkDocs
{
namespace Model
{
  enum class OrderByFieldType
  {
    NOT_SET,
    RELEVANCE,
    NAME,
    SIZE,
    CREATED_TIMESTAMP,
    MODIFIED_TIMESTAMP
  };

namespace OrderByFieldTypeMapper
{
AWS_WORKDOCS_API OrderByFieldType GetOrderByFieldTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForOrderByFieldType(OrderByFieldType value);
} // namespace OrderByFieldTypeMapper
} // namespace Model
} // namespace WorkDocs
} // namespace Aws
