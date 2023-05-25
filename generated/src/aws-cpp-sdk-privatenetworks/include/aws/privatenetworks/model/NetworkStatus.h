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
  enum class NetworkStatus
  {
    NOT_SET,
    CREATED,
    PROVISIONING,
    AVAILABLE,
    DEPROVISIONING,
    DELETED
  };

namespace NetworkStatusMapper
{
AWS_PRIVATENETWORKS_API NetworkStatus GetNetworkStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkStatus(NetworkStatus value);
} // namespace NetworkStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
