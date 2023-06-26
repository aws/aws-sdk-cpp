/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{
  enum class VpcEndpointStatus
  {
    NOT_SET,
    PENDING,
    DELETING,
    ACTIVE,
    FAILED
  };

namespace VpcEndpointStatusMapper
{
AWS_OPENSEARCHSERVERLESS_API VpcEndpointStatus GetVpcEndpointStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForVpcEndpointStatus(VpcEndpointStatus value);
} // namespace VpcEndpointStatusMapper
} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
