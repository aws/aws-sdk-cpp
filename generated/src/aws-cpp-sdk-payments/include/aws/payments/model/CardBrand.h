/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/payments/Payments_EXPORTS.h>

namespace Aws {
namespace Payments {
namespace Model {
enum class CardBrand { NOT_SET, VISA, MASTERCARD, AMEX, DISCOVER, JCB, RUPAY, CHINA_UNIONPAY };

namespace CardBrandMapper {
AWS_PAYMENTS_API CardBrand GetCardBrandForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForCardBrand(CardBrand value);
}  // namespace CardBrandMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
