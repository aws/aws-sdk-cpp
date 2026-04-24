/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>

namespace Aws {
namespace S3Tables {
namespace Model {
enum class IcebergNullOrder { NOT_SET, nulls_first, nulls_last };

namespace IcebergNullOrderMapper {
AWS_S3TABLES_API IcebergNullOrder GetIcebergNullOrderForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForIcebergNullOrder(IcebergNullOrder value);
}  // namespace IcebergNullOrderMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
