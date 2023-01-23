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
  enum class SavingsPlanOfferingPropertyKey
  {
    NOT_SET,
    region,
    instanceFamily
  };

namespace SavingsPlanOfferingPropertyKeyMapper
{
AWS_SAVINGSPLANS_API SavingsPlanOfferingPropertyKey GetSavingsPlanOfferingPropertyKeyForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanOfferingPropertyKey(SavingsPlanOfferingPropertyKey value);
} // namespace SavingsPlanOfferingPropertyKeyMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
