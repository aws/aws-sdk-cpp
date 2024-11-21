/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SSM
{
namespace Model
{
  enum class NodeFilterKey
  {
    NOT_SET,
    AgentType,
    AgentVersion,
    ComputerName,
    InstanceId,
    InstanceStatus,
    IpAddress,
    ManagedStatus,
    PlatformName,
    PlatformType,
    PlatformVersion,
    ResourceType,
    OrganizationalUnitId,
    OrganizationalUnitPath,
    Region,
    AccountId
  };

namespace NodeFilterKeyMapper
{
AWS_SSM_API NodeFilterKey GetNodeFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNodeFilterKey(NodeFilterKey value);
} // namespace NodeFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
