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
enum class CardType { NOT_SET, CREDIT, DEBIT };

namespace CardTypeMapper {
AWS_PAYMENTS_API CardType GetCardTypeForName(const Aws::String& name);

AWS_PAYMENTS_API Aws::String GetNameForCardType(CardType value);
}  // namespace CardTypeMapper
}  // namespace Model
}  // namespace Payments
}  // namespace Aws
