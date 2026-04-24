/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resourcegroupstaggingapi/ResourceGroupsTaggingAPI_EXPORTS.h>

namespace Aws {
namespace ResourceGroupsTaggingAPI {
namespace Model {
enum class ErrorCode { NOT_SET, InternalServiceException, InvalidParameterException };

namespace ErrorCodeMapper {
AWS_RESOURCEGROUPSTAGGINGAPI_API ErrorCode GetErrorCodeForName(const Aws::String& name);

AWS_RESOURCEGROUPSTAGGINGAPI_API Aws::String GetNameForErrorCode(ErrorCode value);
}  // namespace ErrorCodeMapper
}  // namespace Model
}  // namespace ResourceGroupsTaggingAPI
}  // namespace Aws
