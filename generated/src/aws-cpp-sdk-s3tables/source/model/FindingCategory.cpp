/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/FindingCategory.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace FindingCategoryMapper {

static const int access_HASH = HashingUtils::HashString("access");
static const int metadata_HASH = HashingUtils::HashString("metadata");
static const int data_HASH = HashingUtils::HashString("data");
static const int internal_HASH = HashingUtils::HashString("internal");

FindingCategory GetFindingCategoryForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == access_HASH) {
    return FindingCategory::access;
  } else if (hashCode == metadata_HASH) {
    return FindingCategory::metadata;
  } else if (hashCode == data_HASH) {
    return FindingCategory::data;
  } else if (hashCode == internal_HASH) {
    return FindingCategory::internal;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<FindingCategory>(hashCode);
  }

  return FindingCategory::NOT_SET;
}

Aws::String GetNameForFindingCategory(FindingCategory enumValue) {
  switch (enumValue) {
    case FindingCategory::NOT_SET:
      return {};
    case FindingCategory::access:
      return "access";
    case FindingCategory::metadata:
      return "metadata";
    case FindingCategory::data:
      return "data";
    case FindingCategory::internal:
      return "internal";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace FindingCategoryMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
