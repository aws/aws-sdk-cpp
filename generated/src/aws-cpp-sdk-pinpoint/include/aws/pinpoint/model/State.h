/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/Pinpoint_EXPORTS.h>

namespace Aws {
namespace Pinpoint {
namespace Model {
enum class State { NOT_SET, DRAFT, ACTIVE, COMPLETED, CANCELLED, CLOSED, PAUSED };

namespace StateMapper {
AWS_PINPOINT_API State GetStateForName(const Aws::String& name);

AWS_PINPOINT_API Aws::String GetNameForState(State value);
}  // namespace StateMapper
}  // namespace Model
}  // namespace Pinpoint
}  // namespace Aws
