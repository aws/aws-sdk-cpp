/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-instances/WorkspacesInstances_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace WorkspacesInstances
{
namespace Model
{
  enum class CapacityReservationPreferenceEnum
  {
    NOT_SET,
    capacity_reservations_only,
    open,
    none
  };

namespace CapacityReservationPreferenceEnumMapper
{
AWS_WORKSPACESINSTANCES_API CapacityReservationPreferenceEnum GetCapacityReservationPreferenceEnumForName(const Aws::String& name);

AWS_WORKSPACESINSTANCES_API Aws::String GetNameForCapacityReservationPreferenceEnum(CapacityReservationPreferenceEnum value);
} // namespace CapacityReservationPreferenceEnumMapper
} // namespace Model
} // namespace WorkspacesInstances
} // namespace Aws
