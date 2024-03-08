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
  enum class VpcEndpointServiceName
  {
    NOT_SET,
    OPENSEARCH_SERVERLESS
  };

namespace VpcEndpointServiceNameMapper
{
AWS_OSIS_API VpcEndpointServiceName GetVpcEndpointServiceNameForName(const Aws::String& name);

AWS_OSIS_API Aws::String GetNameForVpcEndpointServiceName(VpcEndpointServiceName value);
} // namespace VpcEndpointServiceNameMapper
} // namespace Model
} // namespace OSIS
} // namespace Aws
