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
enum class OpenTableFormat { NOT_SET, ICEBERG };

namespace OpenTableFormatMapper {
AWS_S3TABLES_API OpenTableFormat GetOpenTableFormatForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForOpenTableFormat(OpenTableFormat value);
}  // namespace OpenTableFormatMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
