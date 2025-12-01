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
enum class SpanType { NOT_SET, CLIENT, SERVER, INTERNAL };

namespace SpanTypeMapper {
AWS_QCONNECT_API SpanType GetSpanTypeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForSpanType(SpanType value);
}  // namespace SpanTypeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
