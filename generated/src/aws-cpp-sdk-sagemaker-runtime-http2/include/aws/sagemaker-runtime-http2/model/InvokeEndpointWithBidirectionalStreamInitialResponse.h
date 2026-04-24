/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMakerRuntimeHTTP2 {
namespace Model {

class InvokeEndpointWithBidirectionalStreamInitialResponse {
 public:
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamInitialResponse() = default;
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamInitialResponse(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamInitialResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKERRUNTIMEHTTP2_API InvokeEndpointWithBidirectionalStreamInitialResponse(const Http::HeaderValueCollection& responseHeaders);
  AWS_SAGEMAKERRUNTIMEHTTP2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The invoked production variant.</p>
   */
  inline const Aws::String& GetInvokedProductionVariant() const { return m_invokedProductionVariant; }
  inline bool InvokedProductionVariantHasBeenSet() const { return m_invokedProductionVariantHasBeenSet; }
  template <typename InvokedProductionVariantT = Aws::String>
  void SetInvokedProductionVariant(InvokedProductionVariantT&& value) {
    m_invokedProductionVariantHasBeenSet = true;
    m_invokedProductionVariant = std::forward<InvokedProductionVariantT>(value);
  }
  template <typename InvokedProductionVariantT = Aws::String>
  InvokeEndpointWithBidirectionalStreamInitialResponse& WithInvokedProductionVariant(InvokedProductionVariantT&& value) {
    SetInvokedProductionVariant(std::forward<InvokedProductionVariantT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_invokedProductionVariant;
  bool m_invokedProductionVariantHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
