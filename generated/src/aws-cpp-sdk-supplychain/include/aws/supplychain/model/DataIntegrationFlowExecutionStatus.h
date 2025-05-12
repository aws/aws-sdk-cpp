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
  enum class DataIntegrationFlowExecutionStatus
  {
    NOT_SET,
    SUCCEEDED,
    IN_PROGRESS,
    FAILED
  };

namespace DataIntegrationFlowExecutionStatusMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowExecutionStatus GetDataIntegrationFlowExecutionStatusForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowExecutionStatus(DataIntegrationFlowExecutionStatus value);
} // namespace DataIntegrationFlowExecutionStatusMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
