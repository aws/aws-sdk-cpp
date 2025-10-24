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
enum class RendererType { NOT_SET, AppStream };

namespace RendererTypeMapper {
AWS_WORKSPACESWEB_API RendererType GetRendererTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForRendererType(RendererType value);
}  // namespace RendererTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
