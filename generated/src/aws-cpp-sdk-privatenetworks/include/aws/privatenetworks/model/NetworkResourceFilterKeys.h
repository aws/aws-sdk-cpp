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
  enum class NetworkResourceFilterKeys
  {
    NOT_SET,
    ORDER,
    STATUS
  };

namespace NetworkResourceFilterKeysMapper
{
AWS_PRIVATENETWORKS_API NetworkResourceFilterKeys GetNetworkResourceFilterKeysForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkResourceFilterKeys(NetworkResourceFilterKeys value);
} // namespace NetworkResourceFilterKeysMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
