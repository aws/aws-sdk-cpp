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
enum class SavingsPlanOfferingFilterAttribute { NOT_SET, region, instanceFamily };

namespace SavingsPlanOfferingFilterAttributeMapper {
AWS_SAVINGSPLANS_API SavingsPlanOfferingFilterAttribute GetSavingsPlanOfferingFilterAttributeForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanOfferingFilterAttribute(SavingsPlanOfferingFilterAttribute value);
}  // namespace SavingsPlanOfferingFilterAttributeMapper
}  // namespace Model
}  // namespace SavingsPlans
}  // namespace Aws
