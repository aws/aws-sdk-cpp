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
  enum class DataIntegrationFlowLoadType
  {
    NOT_SET,
    INCREMENTAL,
    REPLACE
  };

namespace DataIntegrationFlowLoadTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowLoadType GetDataIntegrationFlowLoadTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowLoadType(DataIntegrationFlowLoadType value);
} // namespace DataIntegrationFlowLoadTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
