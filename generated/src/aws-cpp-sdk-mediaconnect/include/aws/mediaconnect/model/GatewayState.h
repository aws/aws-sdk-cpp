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
  enum class GatewayState
  {
    NOT_SET,
    CREATING,
    ACTIVE,
    UPDATING,
    ERROR_,
    DELETING,
    DELETED
  };

namespace GatewayStateMapper
{
AWS_MEDIACONNECT_API GatewayState GetGatewayStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForGatewayState(GatewayState value);
} // namespace GatewayStateMapper
} // namespace Model
} // namespace MediaConnect
} // namespace Aws
