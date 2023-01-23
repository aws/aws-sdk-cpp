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
  enum class TransitGatewayRegistrationState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    DELETED,
    FAILED
  };

namespace TransitGatewayRegistrationStateMapper
{
AWS_NETWORKMANAGER_API TransitGatewayRegistrationState GetTransitGatewayRegistrationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForTransitGatewayRegistrationState(TransitGatewayRegistrationState value);
} // namespace TransitGatewayRegistrationStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
