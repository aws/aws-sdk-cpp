/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace PrivateNetworks
{
namespace Model
{
  enum class HealthStatus
  {
    NOT_SET,
    INITIAL,
    HEALTHY,
    UNHEALTHY
  };

namespace HealthStatusMapper
{
AWS_PRIVATENETWORKS_API HealthStatus GetHealthStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForHealthStatus(HealthStatus value);
} // namespace HealthStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
