/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mwaa/MWAA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace MWAA
{
namespace Model
{
  enum class EndpointManagement
  {
    NOT_SET,
    CUSTOMER,
    SERVICE
  };

namespace EndpointManagementMapper
{
AWS_MWAA_API EndpointManagement GetEndpointManagementForName(const Aws::String& name);

AWS_MWAA_API Aws::String GetNameForEndpointManagement(EndpointManagement value);
} // namespace EndpointManagementMapper
} // namespace Model
} // namespace MWAA
} // namespace Aws
