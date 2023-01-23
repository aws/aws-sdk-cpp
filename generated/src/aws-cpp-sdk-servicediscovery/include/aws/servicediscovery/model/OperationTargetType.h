/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ServiceDiscovery
{
namespace Model
{
  enum class OperationTargetType
  {
    NOT_SET,
    NAMESPACE,
    SERVICE,
    INSTANCE
  };

namespace OperationTargetTypeMapper
{
AWS_SERVICEDISCOVERY_API OperationTargetType GetOperationTargetTypeForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForOperationTargetType(OperationTargetType value);
} // namespace OperationTargetTypeMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
