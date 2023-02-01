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
  enum class NetworkFilterKeys
  {
    NOT_SET,
    STATUS
  };

namespace NetworkFilterKeysMapper
{
AWS_PRIVATENETWORKS_API NetworkFilterKeys GetNetworkFilterKeysForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkFilterKeys(NetworkFilterKeys value);
} // namespace NetworkFilterKeysMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
