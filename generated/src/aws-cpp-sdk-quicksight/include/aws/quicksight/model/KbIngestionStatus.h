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
enum class KbIngestionStatus { NOT_SET, QUEUED, RUNNING, FAILED, COMPLETED, INCOMPLETE, CANCELLED, CANCELLING, TIMEOUT };

namespace KbIngestionStatusMapper {
AWS_QUICKSIGHT_API KbIngestionStatus GetKbIngestionStatusForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForKbIngestionStatus(KbIngestionStatus value);
}  // namespace KbIngestionStatusMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
