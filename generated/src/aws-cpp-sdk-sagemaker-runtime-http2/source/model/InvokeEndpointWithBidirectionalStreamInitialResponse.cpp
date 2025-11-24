/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/sagemaker-runtime-http2/model/InvokeEndpointWithBidirectionalStreamInitialResponse.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace SageMakerRuntimeHTTP2 {
namespace Model {

InvokeEndpointWithBidirectionalStreamInitialResponse::InvokeEndpointWithBidirectionalStreamInitialResponse(JsonView jsonValue) {
  *this = jsonValue;
}

InvokeEndpointWithBidirectionalStreamInitialResponse& InvokeEndpointWithBidirectionalStreamInitialResponse::operator=(JsonView jsonValue) {
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

InvokeEndpointWithBidirectionalStreamInitialResponse::InvokeEndpointWithBidirectionalStreamInitialResponse(
    const Http::HeaderValueCollection& headers)
    : InvokeEndpointWithBidirectionalStreamInitialResponse() {
  const auto& invokedProductionVariantIter = headers.find("x-amzn-invoked-production-variant");
  if (invokedProductionVariantIter != headers.end()) {
    m_invokedProductionVariant = invokedProductionVariantIter->second;
    m_invokedProductionVariantHasBeenSet = true;
  }
}

JsonValue InvokeEndpointWithBidirectionalStreamInitialResponse::Jsonize() const {
  JsonValue payload;

  return payload;
}

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
