/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/SchemaV2FieldType.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace SchemaV2FieldTypeMapper {

static const int struct__HASH = HashingUtils::HashString("struct");

SchemaV2FieldType GetSchemaV2FieldTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == struct__HASH) {
    return SchemaV2FieldType::struct_;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SchemaV2FieldType>(hashCode);
  }

  return SchemaV2FieldType::NOT_SET;
}

Aws::String GetNameForSchemaV2FieldType(SchemaV2FieldType enumValue) {
  switch (enumValue) {
    case SchemaV2FieldType::NOT_SET:
      return {};
    case SchemaV2FieldType::struct_:
      return "struct";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SchemaV2FieldTypeMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
