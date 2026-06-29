/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/resource-explorer-2/model/RecorderType.h>

using namespace Aws::Utils;

namespace Aws {
namespace ResourceExplorer2 {
namespace Model {
namespace RecorderTypeMapper {

static const int AWS_HASH = HashingUtils::HashString("AWS");
static const int THIRD_PARTY_HASH = HashingUtils::HashString("THIRD_PARTY");

RecorderType GetRecorderTypeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == AWS_HASH) {
    return RecorderType::AWS;
  } else if (hashCode == THIRD_PARTY_HASH) {
    return RecorderType::THIRD_PARTY;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<RecorderType>(hashCode);
  }

  return RecorderType::NOT_SET;
}

Aws::String GetNameForRecorderType(RecorderType enumValue) {
  switch (enumValue) {
    case RecorderType::NOT_SET:
      return {};
    case RecorderType::AWS:
      return "AWS";
    case RecorderType::THIRD_PARTY:
      return "THIRD_PARTY";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace RecorderTypeMapper
}  // namespace Model
}  // namespace ResourceExplorer2
}  // namespace Aws
