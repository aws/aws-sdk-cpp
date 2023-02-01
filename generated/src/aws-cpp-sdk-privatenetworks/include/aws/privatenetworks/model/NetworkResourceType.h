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
  enum class NetworkResourceType
  {
    NOT_SET,
    RADIO_UNIT
  };

namespace NetworkResourceTypeMapper
{
AWS_PRIVATENETWORKS_API NetworkResourceType GetNetworkResourceTypeForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkResourceType(NetworkResourceType value);
} // namespace NetworkResourceTypeMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
