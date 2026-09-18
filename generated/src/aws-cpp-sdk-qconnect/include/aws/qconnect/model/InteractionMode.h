/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/QConnect_EXPORTS.h>

namespace Aws {
namespace QConnect {
namespace Model {
enum class InteractionMode { NOT_SET, DELEGATE, HANDOFF };

namespace InteractionModeMapper {
AWS_QCONNECT_API InteractionMode GetInteractionModeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForInteractionMode(InteractionMode value);
}  // namespace InteractionModeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
