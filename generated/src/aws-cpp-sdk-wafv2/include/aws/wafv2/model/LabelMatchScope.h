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
  enum class LabelMatchScope
  {
    NOT_SET,
    LABEL,
    NAMESPACE
  };

namespace LabelMatchScopeMapper
{
AWS_WAFV2_API LabelMatchScope GetLabelMatchScopeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForLabelMatchScope(LabelMatchScope value);
} // namespace LabelMatchScopeMapper
} // namespace Model
} // namespace WAFV2
} // namespace Aws
