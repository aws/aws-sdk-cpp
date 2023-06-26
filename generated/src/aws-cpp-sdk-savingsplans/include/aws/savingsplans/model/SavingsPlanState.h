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
  enum class SavingsPlanState
  {
    NOT_SET,
    payment_pending,
    payment_failed,
    active,
    retired,
    queued,
    queued_deleted
  };

namespace SavingsPlanStateMapper
{
AWS_SAVINGSPLANS_API SavingsPlanState GetSavingsPlanStateForName(const Aws::String& name);

AWS_SAVINGSPLANS_API Aws::String GetNameForSavingsPlanState(SavingsPlanState value);
} // namespace SavingsPlanStateMapper
} // namespace Model
} // namespace SavingsPlans
} // namespace Aws
