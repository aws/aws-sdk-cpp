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
  enum class CustomerGatewayAssociationState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    DELETED
  };

namespace CustomerGatewayAssociationStateMapper
{
AWS_NETWORKMANAGER_API CustomerGatewayAssociationState GetCustomerGatewayAssociationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForCustomerGatewayAssociationState(CustomerGatewayAssociationState value);
} // namespace CustomerGatewayAssociationStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
