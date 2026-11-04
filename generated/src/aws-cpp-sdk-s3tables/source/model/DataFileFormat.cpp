/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/DataFileFormat.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace DataFileFormatMapper {

static const int parquet_HASH = HashingUtils::HashString("parquet");

DataFileFormat GetDataFileFormatForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == parquet_HASH) {
    return DataFileFormat::parquet;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<DataFileFormat>(hashCode);
  }

  return DataFileFormat::NOT_SET;
}

Aws::String GetNameForDataFileFormat(DataFileFormat enumValue) {
  switch (enumValue) {
    case DataFileFormat::NOT_SET:
      return {};
    case DataFileFormat::parquet:
      return "parquet";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace DataFileFormatMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
