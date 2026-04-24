/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf-regional/WAFRegional_EXPORTS.h>

namespace Aws {
namespace WAFRegional {
namespace Model {
enum class WafActionType { NOT_SET, BLOCK, ALLOW, COUNT };

namespace WafActionTypeMapper {
AWS_WAFREGIONAL_API WafActionType GetWafActionTypeForName(const Aws::String& name);

AWS_WAFREGIONAL_API Aws::String GetNameForWafActionType(WafActionType value);
}  // namespace WafActionTypeMapper
}  // namespace Model
}  // namespace WAFRegional
}  // namespace Aws
