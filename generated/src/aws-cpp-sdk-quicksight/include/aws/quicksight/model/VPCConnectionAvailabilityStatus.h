/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace QuickSight
{
namespace Model
{
  enum class VPCConnectionAvailabilityStatus
  {
    NOT_SET,
    AVAILABLE,
    UNAVAILABLE,
    PARTIALLY_AVAILABLE
  };

namespace VPCConnectionAvailabilityStatusMapper
{
AWS_QUICKSIGHT_API VPCConnectionAvailabilityStatus GetVPCConnectionAvailabilityStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForVPCConnectionAvailabilityStatus(VPCConnectionAvailabilityStatus value);
} // namespace VPCConnectionAvailabilityStatusMapper
} // namespace Model
} // namespace QuickSight
} // namespace Aws
