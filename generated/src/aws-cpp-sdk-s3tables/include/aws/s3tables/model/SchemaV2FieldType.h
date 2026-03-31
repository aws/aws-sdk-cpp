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
enum class SchemaV2FieldType { NOT_SET, struct_ };

namespace SchemaV2FieldTypeMapper {
AWS_S3TABLES_API SchemaV2FieldType GetSchemaV2FieldTypeForName(const Aws::String& name);

AWS_S3TABLES_API Aws::String GetNameForSchemaV2FieldType(SchemaV2FieldType value);
}  // namespace SchemaV2FieldTypeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
