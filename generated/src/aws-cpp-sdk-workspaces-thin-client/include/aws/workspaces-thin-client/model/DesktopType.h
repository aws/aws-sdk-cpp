/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-thin-client/WorkSpacesThinClient_EXPORTS.h>

namespace Aws {
namespace WorkSpacesThinClient {
namespace Model {
enum class DesktopType { NOT_SET, workspaces, appstream, workspaces_web };

namespace DesktopTypeMapper {
AWS_WORKSPACESTHINCLIENT_API DesktopType GetDesktopTypeForName(const Aws::String& name);

AWS_WORKSPACESTHINCLIENT_API Aws::String GetNameForDesktopType(DesktopType value);
}  // namespace DesktopTypeMapper
}  // namespace Model
}  // namespace WorkSpacesThinClient
}  // namespace Aws
