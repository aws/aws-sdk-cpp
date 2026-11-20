/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerGatewayRuntime {
namespace Model {

InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse::InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse(
    JsonView jsonValue) {
  *this = jsonValue;
}

InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse& InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse::operator=(
    JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse::InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse(
    const Http::HeaderValueCollection& headers)
    : InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse() {
  AWS_UNREFERENCED_PARAM(headers);
}

JsonValue InvokeGlobalInferenceGatewayWithResponseStreamInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
