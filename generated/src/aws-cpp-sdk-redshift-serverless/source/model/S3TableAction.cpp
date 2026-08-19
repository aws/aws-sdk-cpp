/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/redshift-serverless/model/S3TableAction.h>

using namespace Aws::Utils;

namespace Aws {
namespace RedshiftServerless {
namespace Model {
namespace S3TableActionMapper {

static const int Enable_HASH = HashingUtils::HashString("Enable");
static const int Disable_HASH = HashingUtils::HashString("Disable");

S3TableAction GetS3TableActionForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Enable_HASH) {
    return S3TableAction::Enable;
  } else if (hashCode == Disable_HASH) {
    return S3TableAction::Disable;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<S3TableAction>(hashCode);
  }

  return S3TableAction::NOT_SET;
}

Aws::String GetNameForS3TableAction(S3TableAction enumValue) {
  switch (enumValue) {
    case S3TableAction::NOT_SET:
      return {};
    case S3TableAction::Enable:
      return "Enable";
    case S3TableAction::Disable:
      return "Disable";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace S3TableActionMapper
}  // namespace Model
}  // namespace RedshiftServerless
}  // namespace Aws
