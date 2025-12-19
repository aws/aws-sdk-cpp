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
enum class MimeType { NOT_SET, image_png, image_jpeg, image_x_icon };

namespace MimeTypeMapper {
AWS_WORKSPACESWEB_API MimeType GetMimeTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForMimeType(MimeType value);
}  // namespace MimeTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
