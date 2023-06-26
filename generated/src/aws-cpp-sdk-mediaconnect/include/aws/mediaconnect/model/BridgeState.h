/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{
  enum class BridgeState
  {
    NOT_SET,
    CREATING,
    STANDBY,
    STARTING,
    DEPLOYING,
    ACTIVE,
    STOPPING,
    DELETING,
    DELETED,
    START_FAILED,
    START_PENDING,
    STOP_FAILED,
    UPDATING
  };

namespace BridgeStateMapper
{
AWS_MEDIACONNECT_API BridgeState GetBridgeStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForBridgeState(BridgeState value);
} // namespace BridgeStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
