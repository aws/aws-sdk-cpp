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
  enum class CoreNetworkPolicyAlias
  {
    NOT_SET,
    LIVE,
    LATEST
  };

namespace CoreNetworkPolicyAliasMapper
{
AWS_NETWORKMANAGER_API CoreNetworkPolicyAlias GetCoreNetworkPolicyAliasForName(const Aws::String& name);

AWS_NETWORKMANAGER_API Aws::String GetNameForCoreNetworkPolicyAlias(CoreNetworkPolicyAlias value);
} // namespace CoreNetworkPolicyAliasMapper
} // namespace Model
} // namespace NetworkManager
} // namespace Aws
