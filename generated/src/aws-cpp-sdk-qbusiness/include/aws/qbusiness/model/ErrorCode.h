/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>

namespace Aws {
namespace QBusiness {
namespace Model {
enum class ErrorCode { NOT_SET, InternalError, InvalidRequest, ResourceInactive, ResourceNotFound };

namespace ErrorCodeMapper {
AWS_QBUSINESS_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_QBUSINESS_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace QBusiness
}  // namespace Aws
