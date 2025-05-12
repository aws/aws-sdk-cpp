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
  enum class DataLakeDatasetSchemaFieldType
  {
    NOT_SET,
    INT,
    DOUBLE,
    STRING,
    TIMESTAMP,
    LONG
  };

namespace DataLakeDatasetSchemaFieldTypeMapper
{
AWS_SUPPLYCHAIN_API DataLakeDatasetSchemaFieldType GetDataLakeDatasetSchemaFieldTypeForName(const Aws::String& name);

AWS_SUPPLYCHAIN_API Aws::String GetNameForDataLakeDatasetSchemaFieldType(DataLakeDatasetSchemaFieldType value);
} // namespace DataLakeDatasetSchemaFieldTypeMapper
} // namespace Model
} // namespace SupplyChain
} // namespace Aws
