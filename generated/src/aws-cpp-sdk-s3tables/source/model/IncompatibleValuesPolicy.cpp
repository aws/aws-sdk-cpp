/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/s3tables/model/IncompatibleValuesPolicy.h>

using namespace Aws::Utils;

namespace Aws {
namespace S3Tables {
namespace Model {
namespace IncompatibleValuesPolicyMapper {

static const int fail_HASH = HashingUtils::HashString("fail");
static const int setNull_HASH = HashingUtils::HashString("setNull");

IncompatibleValuesPolicy GetIncompatibleValuesPolicyForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == fail_HASH) {
    return IncompatibleValuesPolicy::fail;
  } else if (hashCode == setNull_HASH) {
    return IncompatibleValuesPolicy::setNull;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<IncompatibleValuesPolicy>(hashCode);
  }

  return IncompatibleValuesPolicy::NOT_SET;
}

Aws::String GetNameForIncompatibleValuesPolicy(IncompatibleValuesPolicy enumValue) {
  switch (enumValue) {
    case IncompatibleValuesPolicy::NOT_SET:
      return {};
    case IncompatibleValuesPolicy::fail:
      return "fail";
    case IncompatibleValuesPolicy::setNull:
      return "setNull";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace IncompatibleValuesPolicyMapper
}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
