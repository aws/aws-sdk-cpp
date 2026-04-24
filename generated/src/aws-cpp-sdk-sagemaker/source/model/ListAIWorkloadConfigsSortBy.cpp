/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/ListAIWorkloadConfigsSortBy.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace ListAIWorkloadConfigsSortByMapper {

static const int Name_HASH = HashingUtils::HashString("Name");
static const int CreationTime_HASH = HashingUtils::HashString("CreationTime");

ListAIWorkloadConfigsSortBy GetListAIWorkloadConfigsSortByForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Name_HASH) {
    return ListAIWorkloadConfigsSortBy::Name;
  } else if (hashCode == CreationTime_HASH) {
    return ListAIWorkloadConfigsSortBy::CreationTime;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ListAIWorkloadConfigsSortBy>(hashCode);
  }

  return ListAIWorkloadConfigsSortBy::NOT_SET;
}

Aws::String GetNameForListAIWorkloadConfigsSortBy(ListAIWorkloadConfigsSortBy enumValue) {
  switch (enumValue) {
    case ListAIWorkloadConfigsSortBy::NOT_SET:
      return {};
    case ListAIWorkloadConfigsSortBy::Name:
      return "Name";
    case ListAIWorkloadConfigsSortBy::CreationTime:
      return "CreationTime";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ListAIWorkloadConfigsSortByMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
