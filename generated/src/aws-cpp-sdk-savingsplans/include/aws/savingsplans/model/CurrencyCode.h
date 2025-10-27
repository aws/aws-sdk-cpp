/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>

namespace Aws {
namespace SavingsPlans {
namespace Model {
enum class CurrencyCode { NOT_SET, CNY, USD };

namespace CurrencyCodeMapper {
AWS_SAVINGSPLANS_API CurrencyCode GetCurrencyCodeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForCurrencyCode(CurrencyCode value);
}  // namespace CurrencyCodeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
