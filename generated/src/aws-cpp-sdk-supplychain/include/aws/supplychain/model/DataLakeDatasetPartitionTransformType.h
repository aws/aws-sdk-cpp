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
  enum class DataLakeDatasetPartitionTransformType
  {
    NOT_SET,
    YEAR,
    MONTH,
    DAY,
    HOUR,
    IDENTITY
  };

namespace DataLakeDatasetPartitionTransformTypeMapper
{
AWS_SUPPLYCHAIN_API DataLakeDatasetPartitionTransformType GetDataLakeDatasetPartitionTransformTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataLakeDatasetPartitionTransformType(DataLakeDatasetPartitionTransformType value);
} // namespace DataLakeDatasetPartitionTransformTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
