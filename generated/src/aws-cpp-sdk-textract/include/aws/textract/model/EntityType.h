/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/textract/Textract_EXPORTS.h>

namespace Aws {
namespace Textract {
namespace Model {
enum class EntityType {
  NOT_SET,
  KEY,
  VALUE,
  COLUMN_HEADER,
  TABLE_TITLE,
  TABLE_FOOTER,
  TABLE_SECTION_TITLE,
  TABLE_SUMMARY,
  STRUCTURED_TABLE,
  SEMI_STRUCTURED_TABLE
};

namespace EntityTypeMapper {
AWS_TEXTRACT_API EntityType GetEntityTypeForName(const Aws::String& name);

AWS_TEXTRACT_API Aws::String GetNameForEntityType(EntityType value);
}  // namespace EntityTypeMapper
}  // namespace Model
}  // namespace Textract
}  // namespace Aws
