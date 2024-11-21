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
  enum class NodeAttributeName
  {
    NOT_SET,
    AgentVersion,
    PlatformName,
    PlatformType,
    PlatformVersion,
    Region,
    ResourceType
  };

namespace NodeAttributeNameMapper
{
AWS_SSM_API NodeAttributeName GetNodeAttributeNameForName(const Aws::String& name);

AWS_SSM_API Aws::String GetNameForNodeAttributeName(NodeAttributeName value);
} // namespace NodeAttributeNameMapper
} // namespace Model
} // namespace SSM
} // namespace Aws
