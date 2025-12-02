/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>

namespace Aws {
namespace OpenSearchServerless {
namespace Model {
enum class ServerlessVectorAccelerationStatus { NOT_SET, ENABLED, DISABLED, ALLOWED };

namespace ServerlessVectorAccelerationStatusMapper {
AWS_OPENSEARCHSERVERLESS_API ServerlessVectorAccelerationStatus GetServerlessVectorAccelerationStatusForName(const Aws::String& name);

AWS_OPENSEARCHSERVERLESS_API Aws::String GetNameForServerlessVectorAccelerationStatus(ServerlessVectorAccelerationStatus value);
}  // namespace ServerlessVectorAccelerationStatusMapper
}  // namespace Model
}  // namespace OpenSearchServerless
}  // namespace Aws
