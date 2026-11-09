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
enum class UnprocessableContentReason { NOT_SET, ORCHESTRATION_ERROR, AI_INFERENCE_MODEL_UNAVAILABLE };

namespace UnprocessableContentReasonMapper {
AWS_QCONNECT_API UnprocessableContentReason GetUnprocessableContentReasonForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForUnprocessableContentReason(UnprocessableContentReason value);
}  // namespace UnprocessableContentReasonMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
