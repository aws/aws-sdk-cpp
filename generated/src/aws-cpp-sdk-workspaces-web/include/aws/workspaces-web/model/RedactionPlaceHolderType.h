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
enum class RedactionPlaceHolderType { NOT_SET, CustomText };

namespace RedactionPlaceHolderTypeMapper {
AWS_WORKSPACESWEB_API RedactionPlaceHolderType GetRedactionPlaceHolderTypeForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForRedactionPlaceHolderType(RedactionPlaceHolderType value);
}  // namespace RedactionPlaceHolderTypeMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
