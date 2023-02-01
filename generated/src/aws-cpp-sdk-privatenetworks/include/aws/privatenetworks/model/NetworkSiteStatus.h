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
  enum class NetworkSiteStatus
  {
    NOT_SET,
    CREATED,
    PROVISIONING,
    AVAILABLE,
    DEPROVISIONING,
    DELETED
  };

namespace NetworkSiteStatusMapper
{
AWS_PRIVATENETWORKS_API NetworkSiteStatus GetNetworkSiteStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkSiteStatus(NetworkSiteStatus value);
} // namespace NetworkSiteStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
