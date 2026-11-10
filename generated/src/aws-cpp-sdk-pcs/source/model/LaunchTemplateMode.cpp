/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/pcs/model/LaunchTemplateMode.h>

using namespace Aws::Utils;

namespace Aws {
namespace PCS {
namespace Model {
namespace LaunchTemplateModeMapper {

static const int CUSTOM_HASH = HashingUtils::HashString("CUSTOM");
static const int MANAGED_HASH = HashingUtils::HashString("MANAGED");

LaunchTemplateMode GetLaunchTemplateModeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == CUSTOM_HASH) {
    return LaunchTemplateMode::CUSTOM;
  } else if (hashCode == MANAGED_HASH) {
    return LaunchTemplateMode::MANAGED;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<LaunchTemplateMode>(hashCode);
  }

  return LaunchTemplateMode::NOT_SET;
}

Aws::String GetNameForLaunchTemplateMode(LaunchTemplateMode enumValue) {
  switch (enumValue) {
    case LaunchTemplateMode::NOT_SET:
      return {};
    case LaunchTemplateMode::CUSTOM:
      return "CUSTOM";
    case LaunchTemplateMode::MANAGED:
      return "MANAGED";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace LaunchTemplateModeMapper
}  // namespace Model
}  // namespace PCS
}  // namespace Aws
