/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

namespace Aws {
namespace QuickSight {
namespace Model {
enum class NamespaceStatus { NOT_SET, CREATED, CREATING, DELETING, RETRYABLE_FAILURE, NON_RETRYABLE_FAILURE };

namespace NamespaceStatusMapper {
AWS_QUICKSIGHT_API NamespaceStatus GetNamespaceStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForNamespaceStatus(NamespaceStatus value);
}  // namespace NamespaceStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
