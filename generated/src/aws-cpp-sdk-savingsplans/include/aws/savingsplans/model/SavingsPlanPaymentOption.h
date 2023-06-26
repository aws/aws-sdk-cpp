/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/savingsplans/SavingsPlans_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SavingsPlans
{
namespace Model
{
  enum class SavingsPlanPaymentOption
  {
    NOT_SET,
    All_Upfront,
    Partial_Upfront,
    No_Upfront
  };

namespace SavingsPlanPaymentOptionMapper
{
AWS_SAVINGSPLANS_API SavingsPlanPaymentOption GetSavingsPlanPaymentOptionForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanPaymentOption(SavingsPlanPaymentOption value);
} // namespace SavingsPlanPaymentOptionMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
