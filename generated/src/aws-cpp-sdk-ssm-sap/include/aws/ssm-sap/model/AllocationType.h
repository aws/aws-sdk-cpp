/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SsmSap
{
namespace Model
{
  enum class AllocationType
  {
    NOT_SET,
    VPC_SUBNET,
    ELASTIC_IP,
    OVERLAY,
    UNKNOWN
  };

namespace AllocationTypeMapper
{
AWS_SSMSAP_API AllocationType GetAllocationTypeForName(const Aws::String& name);

AWS_SSMSAP_API Aws::String GetNameForAllocationType(AllocationType value);
} // namespace AllocationTypeMapper
} // namespace Model
} // namespace SsmSap
} // namespace Aws
