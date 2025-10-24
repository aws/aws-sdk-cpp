/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>

namespace Aws {
namespace WorkDocs {
namespace Model {
enum class UserFilterType { NOT_SET, ALL, ACTIVE_PENDING };

namespace UserFilterTypeMapper {
AWS_WORKDOCS_API UserFilterType GetUserFilterTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForUserFilterType(UserFilterType value);
}  // namespace UserFilterTypeMapper
}  // namespace Model
}  // namespace WorkDocs
}  // namespace Aws
