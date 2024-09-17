/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaLive
{
namespace Model
{
  enum class NetworkInterfaceMode
  {
    NOT_SET,
    NAT,
    BRIDGE
  };

namespace NetworkInterfaceModeMapper
{
AWS_MEDIALIVE_API NetworkInterfaceMode GetNetworkInterfaceModeForName(const Aws::String& name);

AWS_MEDIALIVE_API Aws::String GetNameForNetworkInterfaceMode(NetworkInterfaceMode value);
} // namespace NetworkInterfaceModeMapper
} // namespace Model
} // namespace MediaLive
} // namespace Aws
