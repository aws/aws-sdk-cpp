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
enum class UserSortType { NOT_SET, USER_NAME, FULL_NAME, STORAGE_LIMIT, USER_STATUS, STORAGE_USED };

namespace UserSortTypeMapper {
AWS_WORKDOCS_API UserSortType GetUserSortTypeForName(const Aws::String& name);

AWS_WORKDOCS_API Aws::String GetNameForUserSortType(UserSortType value);
}  // namespace UserSortTypeMapper
}  // namespace Model
}  // namespace WorkDocs
}  // namespace Aws
