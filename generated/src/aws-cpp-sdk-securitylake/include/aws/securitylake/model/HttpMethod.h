/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securitylake/SecurityLake_EXPORTS.h>

namespace Aws {
namespace SecurityLake {
namespace Model {
enum class HttpMethod { NOT_SET, POST, PUT };

namespace HttpMethodMapper {
AWS_SECURITYLAKE_API HttpMethod GetHttpMethodForName(const Aws::String& name);

AWS_SECURITYLAKE_API Aws::String GetNameForHttpMethod(HttpMethod value);
}  // namespace HttpMethodMapper
}  // namespace Model
}  // namespace SecurityLake
}  // namespace Aws
