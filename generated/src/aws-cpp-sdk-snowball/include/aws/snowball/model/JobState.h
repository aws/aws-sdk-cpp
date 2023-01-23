/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Snowball
{
namespace Model
{
  enum class JobState
  {
    NOT_SET,
    New,
    PreparingAppliance,
    PreparingShipment,
    InTransitToCustomer,
    WithCustomer,
    InTransitToAWS,
    WithAWSSortingFacility,
    WithAWS,
    InProgress,
    Complete,
    Cancelled,
    Listing,
    Pending
  };

namespace JobStateMapper
{
AWS_SNOWBALL_API JobState GetJobStateForName(const Aws::String& name);

AWS_SNOWBALL_API Aws::String GetNameForJobState(JobState value);
} // namespace JobStateMapper
} // namespace Model
} // namespace Snowball
} // namespace Aws
