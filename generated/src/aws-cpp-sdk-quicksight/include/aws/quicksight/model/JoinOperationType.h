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
enum class JoinOperationType { NOT_SET, INNER, OUTER, LEFT, RIGHT };

namespace JoinOperationTypeMapper {
AWS_QUICKSIGHT_API JoinOperationType GetJoinOperationTypeForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForJoinOperationType(JoinOperationType value);
}  // namespace JoinOperationTypeMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
