/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces/model/ImageValidationMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpaces {
namespace Model {
namespace ImageValidationModeMapper {

static const int CUSTOMER_MANAGED_HASH = HashingUtils::HashString("CUSTOMER_MANAGED");
static const int SERVICE_MANAGED_HASH = HashingUtils::HashString("SERVICE_MANAGED");

ImageValidationMode GetImageValidationModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOMER_MANAGED_HASH) {
    return ImageValidationMode::CUSTOMER_MANAGED;
  } else if (hashCode == SERVICE_MANAGED_HASH) {
    return ImageValidationMode::SERVICE_MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ImageValidationMode>(hashCode);
  }

  return ImageValidationMode::NOT_SET;
}

Aws::String GetNameForImageValidationMode(ImageValidationMode enumValue) {
  switch (enumValue) {
    case ImageValidationMode::NOT_SET:
      return {};
    case ImageValidationMode::CUSTOMER_MANAGED:
      return "CUSTOMER_MANAGED";
    case ImageValidationMode::SERVICE_MANAGED:
      return "SERVICE_MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ImageValidationModeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
