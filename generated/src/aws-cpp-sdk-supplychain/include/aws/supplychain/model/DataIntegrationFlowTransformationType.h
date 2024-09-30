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
  enum class DataIntegrationFlowTransformationType
  {
    NOT_SET,
    SQL,
    NONE
  };

namespace DataIntegrationFlowTransformationTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowTransformationType GetDataIntegrationFlowTransformationTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowTransformationType(DataIntegrationFlowTransformationType value);
} // namespace DataIntegrationFlowTransformationTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
