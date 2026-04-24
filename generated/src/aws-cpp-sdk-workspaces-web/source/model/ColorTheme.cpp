/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/workspaces-web/model/ColorTheme.h>

using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
namespace ColorThemeMapper {

static const int Light_HASH = HashingUtils::HashString("Light");
static const int Dark_HASH = HashingUtils::HashString("Dark");

ColorTheme GetColorThemeForName(const Aws::String& name) {
  int hashCode = HashingUtils::HashString(name.c_str());
  if (hashCode == Light_HASH) {
    return ColorTheme::Light;
  } else if (hashCode == Dark_HASH) {
    return ColorTheme::Dark;
  }
  EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
  if (overflowContainer) {
    overflowContainer->StoreOverflow(hashCode, name);
    return static_cast<ColorTheme>(hashCode);
  }

  return ColorTheme::NOT_SET;
}

Aws::String GetNameForColorTheme(ColorTheme enumValue) {
  switch (enumValue) {
    case ColorTheme::NOT_SET:
      return {};
    case ColorTheme::Light:
      return "Light";
    case ColorTheme::Dark:
      return "Dark";
    default:
      EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
      if (overflowContainer) {
        return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
      }

      return {};
  }
}

}  // namespace ColorThemeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
