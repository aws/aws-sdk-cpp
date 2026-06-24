/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>

namespace Aws {
namespace WAFV2 {
namespace Model {
enum class CurrencyMode { NOT_SET, REAL, TEST };

namespace CurrencyModeMapper {
AWS_WAFV2_API CurrencyMode GetCurrencyModeForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForCurrencyMode(CurrencyMode value);
}  // namespace CurrencyModeMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
