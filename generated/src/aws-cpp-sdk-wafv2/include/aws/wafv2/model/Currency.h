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
enum class Currency { NOT_SET, USDC };

namespace CurrencyMapper {
AWS_WAFV2_API Currency GetCurrencyForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForCurrency(Currency value);
}  // namespace CurrencyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
