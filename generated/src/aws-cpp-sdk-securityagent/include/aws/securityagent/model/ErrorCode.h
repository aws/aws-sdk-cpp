/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

namespace Aws {
namespace SecurityAgent {
namespace Model {
enum class ErrorCode { NOT_SET, CLIENT_ERROR, INTERNAL_ERROR, STOPPED_BY_USER };

namespace ErrorCodeMapper {
AWS_SECURITYAGENT_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_SECURITYAGENT_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
