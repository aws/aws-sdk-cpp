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
  enum class ChangeType
  {
    NOT_SET,
    CORE_NETWORK_SEGMENT,
    CORE_NETWORK_EDGE,
    ATTACHMENT_MAPPING,
    ATTACHMENT_ROUTE_PROPAGATION,
    ATTACHMENT_ROUTE_STATIC,
    CORE_NETWORK_CONFIGURATION,
    SEGMENTS_CONFIGURATION,
    SEGMENT_ACTIONS_CONFIGURATION,
    ATTACHMENT_POLICIES_CONFIGURATION
  };

namespace ChangeTypeMapper
{
AWS_NETWORKMANAGER_API ChangeType GetChangeTypeForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForChangeType(ChangeType value);
} // namespace ChangeTypeMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
