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
enum class FlowPublishState { NOT_SET, PUBLISHED, DRAFT, PENDING_APPROVAL };

namespace FlowPublishStateMapper {
AWS_QUICKSIGHT_API FlowPublishState GetFlowPublishStateForName(const Aws::String& name);

AWS_QUICKSIGHT_API Aws::String GetNameForFlowPublishState(FlowPublishState value);
}  // namespace FlowPublishStateMapper
}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
