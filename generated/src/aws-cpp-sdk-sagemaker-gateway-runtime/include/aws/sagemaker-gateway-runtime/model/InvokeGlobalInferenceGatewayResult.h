/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/Array.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace SageMakerGatewayRuntime {
namespace Model {
/**
 * <p>The response from InvokeGlobalInferenceGateway.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-gateway-runtime-2026-10-01/InvokeGlobalInferenceGatewayOutput">AWS
 * API Reference</a></p>
 */
class InvokeGlobalInferenceGatewayResult {
 public:
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayResult() = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayResult(InvokeGlobalInferenceGatewayResult&&) = default;
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayResult& operator=(InvokeGlobalInferenceGatewayResult&&) = default;
  // we delete these because Microsoft doesn't handle move generation correctly
  // and we therefore don't trust them to get it right here either.
  InvokeGlobalInferenceGatewayResult(const InvokeGlobalInferenceGatewayResult&) = delete;
  InvokeGlobalInferenceGatewayResult& operator=(const InvokeGlobalInferenceGatewayResult&) = delete;

  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayResult(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);
  AWS_SAGEMAKERGATEWAYRUNTIME_API InvokeGlobalInferenceGatewayResult& operator=(
      Aws::AmazonWebServiceResult<Aws::Utils::Stream::ResponseStream>&& result);

  ///@{
  /**
   * <p>The model server's OpenAI completion JSON, returned unchanged. A response
   * larger than 10 MiB fails with BadGatewayException (502).</p>
   */
  inline Aws::IOStream& GetBody() const { return m_body.GetUnderlyingStream(); }
  inline void ReplaceBody(Aws::IOStream* body) { m_body = Aws::Utils::Stream::ResponseStream(body); }

  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InvokeGlobalInferenceGatewayResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Utils::Stream::ResponseStream m_body{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_bodyHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
