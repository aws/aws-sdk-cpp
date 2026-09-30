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
enum class RetrieveErrorCode {
  NOT_SET,
  ACCESS_DENIED,
  RESOURCE_NOT_FOUND,
  VALIDATION_ERROR,
  THROTTLED,
  DEPENDENCY_FAILED,
  INTERNAL_SERVER_ERROR
};

namespace RetrieveErrorCodeMapper {
AWS_QCONNECT_API RetrieveErrorCode GetRetrieveErrorCodeForName(const Aws::String& name);

AWS_QCONNECT_API Aws::String GetNameForRetrieveErrorCode(RetrieveErrorCode value);
}  // namespace RetrieveErrorCodeMapper
}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
