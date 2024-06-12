/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/osis/OSIS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OSIS
{
namespace Model
{
  enum class VpcEndpointManagement
  {
    NOT_SET,
    CUSTOMER,
    SERVICE
  };

namespace VpcEndpointManagementMapper
{
AWS_OSIS_API VpcEndpointManagement GetVpcEndpointManagementForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForVpcEndpointManagement(VpcEndpointManagement value);
} // namespace VpcEndpointManagementMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
