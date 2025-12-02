/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/nova-act/NovaAct_EXPORTS.h>

namespace Aws {
namespace NovaAct {
namespace Model {
enum class InternalServerExceptionReason { NOT_SET, InvalidModelGeneration, RequestTokenLimitExceeded };

namespace InternalServerExceptionReasonMapper {
AWS_NOVAACT_API InternalServerExceptionReason GetInternalServerExceptionReasonForName(const Aws::String& name);

AWS_NOVAACT_API Aws::String GetNameForInternalServerExceptionReason(InternalServerExceptionReason value);
}  // namespace InternalServerExceptionReasonMapper
}  // namespace Model
}  // namespace NovaAct
}  // namespace Aws
