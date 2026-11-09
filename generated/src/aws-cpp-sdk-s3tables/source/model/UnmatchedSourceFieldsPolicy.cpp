/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/UnmatchedSourceFieldsPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace UnmatchedSourceFieldsPolicyMapper {

static const int fail_HASH = HashingUtils::HashString("fail");
static const int drop_HASH = HashingUtils::HashString("drop");

UnmatchedSourceFieldsPolicy GetUnmatchedSourceFieldsPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == fail_HASH) {
    return UnmatchedSourceFieldsPolicy::fail;
  } else if (hashCode == drop_HASH) {
    return UnmatchedSourceFieldsPolicy::drop;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<UnmatchedSourceFieldsPolicy>(hashCode);
  }

  return UnmatchedSourceFieldsPolicy::NOT_SET;
}

Aws::String GetNameForUnmatchedSourceFieldsPolicy(UnmatchedSourceFieldsPolicy enumValue) {
  switch (enumValue) {
    case UnmatchedSourceFieldsPolicy::NOT_SET:
      return {};
    case UnmatchedSourceFieldsPolicy::fail:
      return "fail";
    case UnmatchedSourceFieldsPolicy::drop:
      return "drop";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace UnmatchedSourceFieldsPolicyMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
