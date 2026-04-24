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
enum class IcebergCompactionStrategy { NOT_SET, auto_, binpack, sort, z_order };

namespace IcebergCompactionStrategyMapper {
AWS_S3TABLES_API IcebergCompactionStrategy GetIcebergCompactionStrategyForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForIcebergCompactionStrategy(IcebergCompactionStrategy value);
}  // namespace IcebergCompactionStrategyMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
