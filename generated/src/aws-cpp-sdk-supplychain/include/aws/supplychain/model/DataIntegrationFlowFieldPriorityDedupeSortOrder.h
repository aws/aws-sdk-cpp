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
  enum class DataIntegrationFlowFieldPriorityDedupeSortOrder
  {
    NOT_SET,
    ASC,
    DESC
  };

namespace DataIntegrationFlowFieldPriorityDedupeSortOrderMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowFieldPriorityDedupeSortOrder GetDataIntegrationFlowFieldPriorityDedupeSortOrderForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowFieldPriorityDedupeSortOrder(DataIntegrationFlowFieldPriorityDedupeSortOrder value);
} // namespace DataIntegrationFlowFieldPriorityDedupeSortOrderMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
