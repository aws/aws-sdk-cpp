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
  enum class PayloadType
  {
    NOT_SET,
    JSON,
    FORM_ENCODED
  };

namespace PayloadTypeMapper
{
AWS_WAFV2_API PayloadType GetPayloadTypeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForPayloadType(PayloadType value);
} // namespace PayloadTypeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
