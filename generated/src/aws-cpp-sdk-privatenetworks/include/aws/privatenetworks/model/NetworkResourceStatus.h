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
  enum class NetworkResourceStatus
  {
    NOT_SET,
    PENDING,
    SHIPPED,
    PROVISIONING,
    PROVISIONED,
    AVAILABLE,
    DELETING,
    PENDING_RETURN,
    DELETED,
    CREATING_SHIPPING_LABEL
  };

namespace NetworkResourceStatusMapper
{
AWS_PRIVATENETWORKS_API NetworkResourceStatus GetNetworkResourceStatusForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkResourceStatus(NetworkResourceStatus value);
} // namespace NetworkResourceStatusMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
