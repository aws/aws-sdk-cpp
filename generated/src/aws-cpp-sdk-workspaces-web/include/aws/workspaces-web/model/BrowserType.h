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
enum class BrowserType { NOT_SET, Chrome };

namespace BrowserTypeMapper {
AWS_WORKSPACESWEB_API BrowserType GetBrowserTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForBrowserType(BrowserType value);
}  // namespace BrowserTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
