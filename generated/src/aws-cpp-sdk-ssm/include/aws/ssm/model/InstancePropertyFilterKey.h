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
  enum class InstancePropertyFilterKey
  {
    NOT_SET,
    InstanceIds,
    AgentVersion,
    PingStatus,
    PlatformTypes,
    DocumentName,
    ActivationIds,
    IamRole,
    ResourceType,
    AssociationStatus
  };

namespace InstancePropertyFilterKeyMapper
{
AWS_SSM_API InstancePropertyFilterKey GetInstancePropertyFilterKeyForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForInstancePropertyFilterKey(InstancePropertyFilterKey value);
} // namespace InstancePropertyFilterKeyMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
