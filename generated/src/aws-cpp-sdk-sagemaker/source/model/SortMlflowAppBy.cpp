/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/SortMlflowAppBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace SortMlflowAppByMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");
static const int Status_HASH = HashingUtils::HashString("Status");

SortMlflowAppBy GetSortMlflowAppByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return SortMlflowAppBy::Name;
  } else if (hashCode == CreationTime_HASH) {
    return SortMlflowAppBy::CreationTime;
  } else if (hashCode == Status_HASH) {
    return SortMlflowAppBy::Status;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<SortMlflowAppBy>(hashCode);
  }

  return SortMlflowAppBy::NOT_SET;
}

Aws::String GetNameForSortMlflowAppBy(SortMlflowAppBy enumValue) {
  switch (enumValue) {
    case SortMlflowAppBy::NOT_SET:
      return {};
    case SortMlflowAppBy::Name:
      return "Name";
    case SortMlflowAppBy::CreationTime:
      return "CreationTime";
    case SortMlflowAppBy::Status:
      return "Status";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace SortMlflowAppByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
