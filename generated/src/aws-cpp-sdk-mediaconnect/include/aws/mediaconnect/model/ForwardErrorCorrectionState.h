/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>

namespace Aws {
namespace MediaConnect {
namespace Model {
enum class ForwardErrorCorrectionState { NOT_SET, ENABLED, DISABLED };

namespace ForwardErrorCorrectionStateMapper {
AWS_MEDIACONNECT_API ForwardErrorCorrectionState GetForwardErrorCorrectionStateForName(const Aws::String& name);

AWS_MEDIACONNECT_API Aws::String GetNameForForwardErrorCorrectionState(ForwardErrorCorrectionState value);
}  // namespace ForwardErrorCorrectionStateMapper
}  // namespace Model
}  // namespace MediaConnect
}  // namespace Aws
