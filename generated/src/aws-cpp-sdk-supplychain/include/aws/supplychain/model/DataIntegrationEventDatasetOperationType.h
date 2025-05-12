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
  enum class DataIntegrationEventDatasetOperationType
  {
    NOT_SET,
    APPEND,
    UPSERT,
    DELETE_
  };

namespace DataIntegrationEventDatasetOperationTypeMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetOperationType GetDataIntegrationEventDatasetOperationTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationEventDatasetOperationType(DataIntegrationEventDatasetOperationType value);
} // namespace DataIntegrationEventDatasetOperationTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
