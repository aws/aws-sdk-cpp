/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{
  enum class RegionAvailabilityStatus
  {
    NOT_SET,
    AVAILABLE,
    UNAVAILABLE
  };

namespace RegionAvailabilityStatusMapper
{
AWS_SECURITYHUB_API RegionAvailabilityStatus GetRegionAvailabilityStatusForName(const Aws::String& name);

AWS_SECURITYHUB_API Aws::String GetNameForRegionAvailabilityStatus(RegionAvailabilityStatus value);
} // namespace RegionAvailabilityStatusMapper
} // namespace Model
} // namespace SecurityHub
} // namespace Aws
