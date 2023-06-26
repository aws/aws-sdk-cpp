/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{
  enum class PeeringState
  {
    NOT_SET,
    CREATING,
    FAILED,
    AVAILABLE,
    DELETING
  };

namespace PeeringStateMapper
{
AWS_NETWORKMANAGER_API PeeringState GetPeeringStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForPeeringState(PeeringState value);
} // namespace PeeringStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
