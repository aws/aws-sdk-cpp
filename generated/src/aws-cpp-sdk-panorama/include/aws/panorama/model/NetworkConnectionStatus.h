/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Panorama
{
namespace Model
{
  enum class NetworkConnectionStatus
  {
    NOT_SET,
    CONNECTED,
    NOT_CONNECTED,
    CONNECTING
  };

namespace NetworkConnectionStatusMapper
{
AWS_PANORAMA_API NetworkConnectionStatus GetNetworkConnectionStatusForName(const Aws::String& name);

AWS_PANORAMA_API Aws::String GetNameForNetworkConnectionStatus(NetworkConnectionStatus value);
} // namespace NetworkConnectionStatusMapper
} // namespace Model
} // namespace Panorama
} // namespace Aws
