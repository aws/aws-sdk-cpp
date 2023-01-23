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
  enum class SavingsPlanRateFilterAttribute
  {
    NOT_SET,
    region,
    instanceFamily,
    instanceType,
    productDescription,
    tenancy,
    productId
  };

namespace SavingsPlanRateFilterAttributeMapper
{
AWS_SAVINGSPLANS_API SavingsPlanRateFilterAttribute GetSavingsPlanRateFilterAttributeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanRateFilterAttribute(SavingsPlanRateFilterAttribute value);
} // namespace SavingsPlanRateFilterAttributeMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
