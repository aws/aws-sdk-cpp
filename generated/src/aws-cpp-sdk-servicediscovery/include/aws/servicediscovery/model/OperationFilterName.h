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
  enum class OperationFilterName
  {
    NOT_SET,
    NAMESPACE_ID,
    SERVICE_ID,
    STATUS,
    TYPE,
    UPDATE_DATE
  };

namespace OperationFilterNameMapper
{
AWS_SERVICEDISCOVERY_API OperationFilterName GetOperationFilterNameForName(const Aws::String& name);

AWS_SERVICEDISCOVERY_API Aws::String GetNameForOperationFilterName(OperationFilterName value);
} // namespace OperationFilterNameMapper
} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
