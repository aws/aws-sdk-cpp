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
enum class DataSetStatus { NOT_SET, CREATING, UPDATING, ACTIVE, FAILED, DELETING };

namespace DataSetStatusMapper {
AWS_QUICKSIGHT_API DataSetStatus GetDataSetStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForDataSetStatus(DataSetStatus value);
}  // namespace DataSetStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
