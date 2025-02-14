/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WAFV2
{
namespace Model
{
  enum class FieldToProtectType
  {
    NOT_SET,
    SINGLE_HEADER,
    SINGLE_COOKIE,
    SINGLE_QUERY_ARGUMENT,
    QUERY_STRING,
    BODY
  };

namespace FieldToProtectTypeMapper
{
AWS_WAFV2_API FieldToProtectType GetFieldToProtectTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForFieldToProtectType(FieldToProtectType value);
} // namespace FieldToProtectTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
