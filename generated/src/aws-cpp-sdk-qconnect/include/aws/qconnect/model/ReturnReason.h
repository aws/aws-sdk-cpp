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
enum class ReturnReason { NOT_SET, COMPLETE, COMPLETE_WITH_ERROR, ESCALATE, OUT_OF_DOMAIN };

namespace ReturnReasonMapper {
AWS_QCONNECT_API ReturnReason GetReturnReasonForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForReturnReason(ReturnReason value);
}  // namespace ReturnReasonMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
