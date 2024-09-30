/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SupplyChain
{
namespace Model
{
  enum class DataIntegrationFlowTargetType
  {
    NOT_SET,
    S3,
    DATASET
  };

namespace DataIntegrationFlowTargetTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowTargetType GetDataIntegrationFlowTargetTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowTargetType(DataIntegrationFlowTargetType value);
} // namespace DataIntegrationFlowTargetTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
