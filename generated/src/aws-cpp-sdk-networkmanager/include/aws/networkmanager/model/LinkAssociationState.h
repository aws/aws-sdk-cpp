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
  enum class LinkAssociationState
  {
    NOT_SET,
    PENDING,
    AVAILABLE,
    DELETING,
    DELETED
  };

namespace LinkAssociationStateMapper
{
AWS_NETWORKMANAGER_API LinkAssociationState GetLinkAssociationStateForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForLinkAssociationState(LinkAssociationState value);
} // namespace LinkAssociationStateMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
