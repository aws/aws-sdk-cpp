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
  enum class DataIntegrationFlowFileType
  {
    NOT_SET,
    CSV,
    PARQUET,
    JSON
  };

namespace DataIntegrationFlowFileTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationFlowFileType GetDataIntegrationFlowFileTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationFlowFileType(DataIntegrationFlowFileType value);
} // namespace DataIntegrationFlowFileTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
