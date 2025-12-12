/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {
enum class ColorTheme { NOT_SET, Light, Dark };

namespace ColorThemeMapper {
AWS_WORKSPACESWEB_API ColorTheme GetColorThemeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForColorTheme(ColorTheme value);
}  // namespace ColorThemeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
