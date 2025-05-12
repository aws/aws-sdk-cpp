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
  enum class DataIntegrationFlowDedupeStrategyType
  {
    NOT_SET,
    FIELD_PRIORITY
  };

namespace DataIntegrationFlowDedupeStrategyTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowDedupeStrategyType GetDataIntegrationFlowDedupeStrategyTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowDedupeStrategyType(DataIntegrationFlowDedupeStrategyType value);
} // namespace DataIntegrationFlowDedupeStrategyTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
