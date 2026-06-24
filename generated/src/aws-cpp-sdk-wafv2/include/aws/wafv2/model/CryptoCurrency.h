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
enum class CryptoCurrency { NOT_SET, USDC };

namespace CryptoCurrencyMapper {
AWS_WAFV2_API CryptoCurrency GetCryptoCurrencyForName(const Aws::String& name);

AWS_WAFV2_API Aws::String GetNameForCryptoCurrency(CryptoCurrency value);
}  // namespace CryptoCurrencyMapper
}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
