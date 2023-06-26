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
  enum class NetworkResourceDefinitionType
  {
    NOT_SET,
    RADIO_UNIT,
    DEVICE_IDENTIFIER
  };

namespace NetworkResourceDefinitionTypeMapper
{
AWS_PRIVATENETWORKS_API NetworkResourceDefinitionType GetNetworkResourceDefinitionTypeForName(const Aws::String& name);

AWS_PRIVATENETWORKS_API Aws::String GetNameForNetworkResourceDefinitionType(NetworkResourceDefinitionType value);
} // namespace NetworkResourceDefinitionTypeMapper
} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
