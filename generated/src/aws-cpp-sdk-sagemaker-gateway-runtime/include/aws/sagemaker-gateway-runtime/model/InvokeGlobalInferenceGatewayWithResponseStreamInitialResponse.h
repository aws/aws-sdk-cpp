/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerGatewayRuntime {
namespace Model {

class InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse& operator=(
      Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse(
      const Http::HeaderValueCollection& responseHeaders);
  AWS_SAGEMAKERGATEWAYRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
