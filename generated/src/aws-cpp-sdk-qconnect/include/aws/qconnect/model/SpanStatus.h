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
enum class SpanStatus { NOT_SET, OK, ERROR_, TIMEOUT };

namespace SpanStatusMapper {
AWS_QCONNECT_API SpanStatus GetSpanStatusForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForSpanStatus(SpanStatus value);
}  // namespace SpanStatusMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
