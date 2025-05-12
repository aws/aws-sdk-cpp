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
  enum class DataIntegrationEventDatasetLoadStatus
  {
    NOT_SET,
    SUCCEEDED,
    IN_PROGRESS,
    FAILED
  };

namespace DataIntegrationEventDatasetLoadStatusMapper
{
AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetLoadStatus GetDataIntegrationEventDatasetLoadStatusForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataIntegrationEventDatasetLoadStatus(DataIntegrationEventDatasetLoadStatus value);
} // namespace DataIntegrationEventDatasetLoadStatusMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
