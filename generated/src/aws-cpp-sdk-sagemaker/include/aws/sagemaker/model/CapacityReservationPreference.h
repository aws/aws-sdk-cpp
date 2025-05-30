/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{
  enum class CapacityReservationPreference
  {
    NOT_SET,
    capacity_reservations_only
  };

namespace CapacityReservationPreferenceMapper
{
AWS_SAGEMAKER_API CapacityReservationPreference GetCapacityReservationPreferenceForName(const Aws::String& name);

AWS_SAGEMAKER_API Aws::String GetNameForCapacityReservationPreference(CapacityReservationPreference value);
} // namespace CapacityReservationPreferenceMapper
} // namespace Model
} // namespace SageMaker
} // namespace Aws
