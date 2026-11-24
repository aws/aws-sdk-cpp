/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {
enum class StreamErrorCode { NOT_SET, StreamBroken, ModelInvocationTimeExceeded };

namespace StreamErrorCodeMapper {
AWS_SAGEMAKERGATEWAYRUNTIME_API StreamErrorCode GetStreamErrorCodeForName(const Aws::String& name);

AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::String GetNameForStreamErrorCode(StreamErrorCode value);
}  // namespace StreamErrorCodeMapper
}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
