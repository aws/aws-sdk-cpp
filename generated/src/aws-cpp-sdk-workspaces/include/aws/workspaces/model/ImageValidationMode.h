/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>

namespace Aws {
namespace WorkSpaces {
namespace Model {
enum class ImageValidationMode { NOT_SET, CUSTOMER_MANAGED, SERVICE_MANAGED };

namespace ImageValidationModeMapper {
AWS_WORKSPACES_API ImageValidationMode GetImageValidationModeForName(const Aws::String& name);

AWS_WORKSPACES_API Aws::String GetNameForImageValidationMode(ImageValidationMode value);
}  // namespace ImageValidationModeMapper
}  // namespace Model
}  // namespace WorkSpaces
}  // namespace Aws
