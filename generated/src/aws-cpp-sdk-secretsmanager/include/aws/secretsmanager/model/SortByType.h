/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>

namespace Aws {
namespace SecretsManager {
namespace Model {
enum class SortByType { NOT_SET, created_date, last_accessed_date, last_changed_date, name };

namespace SortByTypeMapper {
AWS_SECRETSMANAGER_API SortByType GetSortByTypeForName(const Aws::String& name);

AWS_SECRETSMANAGER_API Aws::String GetNameForSortByType(SortByType value);
}  // namespace SortByTypeMapper
}  // namespace Model
}  // namespace SecretsManager
}  // namespace Aws
