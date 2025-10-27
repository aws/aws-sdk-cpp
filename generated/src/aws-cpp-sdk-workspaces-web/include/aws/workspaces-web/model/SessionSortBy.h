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
enum class SessionSortBy { NOT_SET, StartTimeAscending, StartTimeDescending };

namespace SessionSortByMapper {
AWS_WORKSPACESWEB_API SessionSortBy GetSessionSortByForName(const Aws::String& name);

AWS_WORKSPACESWEB_API Aws::String GetNameForSessionSortBy(SessionSortBy value);
}  // namespace SessionSortByMapper
}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
