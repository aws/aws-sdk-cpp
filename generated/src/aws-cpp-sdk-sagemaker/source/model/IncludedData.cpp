/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/sagemaker/model/IncludedData.h>

using namespace Aws::Utils;

namespace Aws {
namespace SageMaker {
namespace Model {
namespace IncludedDataMapper {

static const int AllData_HASH = HashingUtils::HashString("AllData");
static const int MetadataOnly_HASH = HashingUtils::HashString("MetadataOnly");

IncludedData GetIncludedDataForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AllData_HASH) {
    return IncludedData::AllData;
  } else if (hashCode == MetadataOnly_HASH) {
    return IncludedData::MetadataOnly;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IncludedData>(hashCode);
  }

  return IncludedData::NOT_SET;
}

Aws::String GetNameForIncludedData(IncludedData enumValue) {
  switch (enumValue) {
    case IncludedData::NOT_SET:
      return {};
    case IncludedData::AllData:
      return "AllData";
    case IncludedData::MetadataOnly:
      return "MetadataOnly";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IncludedDataMapper
}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
