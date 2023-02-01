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
  enum class OversizeHandling
  {
    NOT_SET,
    CONTINUE,
    MATCH,
    NO_MATCH
  };

namespace OversizeHandlingMapper
{
AWS_WAFV2_API OversizeHandling GetOversizeHandlingForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForOversizeHandling(OversizeHandling value);
} // namespace OversizeHandlingMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
