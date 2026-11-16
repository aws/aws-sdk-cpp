/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntime_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMakerInferenceRouterRuntime {
namespace Model {
class InvokeInferenceRouterAsyncResult {
 public:
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterAsyncResult() = default;
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterAsyncResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKERINFERENCEROUTERRUNTIME_API InvokeInferenceRouterAsyncResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier for the inference request. This is the
   * <code>InferenceId</code> that you provided, or the one that SageMaker AI
   * generated.</p>
   */
  inline const Aws::String& GetInferenceId() const { return m_inferenceId; }
  template <typename InferenceIdT = Aws::String>
  void SetInferenceId(InferenceIdT&& value) {
    m_inferenceIdHasBeenSet = true;
    m_inferenceId = std::forward<InferenceIdT>(value);
  }
  template <typename InferenceIdT = Aws::String>
  InvokeInferenceRouterAsyncResult& WithInferenceId(InferenceIdT&& value) {
    SetInferenceId(std::forward<InferenceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI where the inference response is written. The location
   * doesn't change if the router moves the request to another destination.</p>
   */
  inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
  template <typename OutputLocationT = Aws::String>
  void SetOutputLocation(OutputLocationT&& value) {
    m_outputLocationHasBeenSet = true;
    m_outputLocation = std::forward<OutputLocationT>(value);
  }
  template <typename OutputLocationT = Aws::String>
  InvokeInferenceRouterAsyncResult& WithOutputLocation(OutputLocationT&& value) {
    SetOutputLocation(std::forward<OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 URI where the failure details are written if the inference
   * fails.</p>
   */
  inline const Aws::String& GetFailureLocation() const { return m_failureLocation; }
  template <typename FailureLocationT = Aws::String>
  void SetFailureLocation(FailureLocationT&& value) {
    m_failureLocationHasBeenSet = true;
    m_failureLocation = std::forward<FailureLocationT>(value);
  }
  template <typename FailureLocationT = Aws::String>
  InvokeInferenceRouterAsyncResult& WithFailureLocation(FailureLocationT&& value) {
    SetFailureLocation(std::forward<FailureLocationT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  InvokeInferenceRouterAsyncResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_inferenceId;

  Aws::String m_outputLocation;

  Aws::String m_failureLocation;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_inferenceIdHasBeenSet = false;
  bool m_outputLocationHasBeenSet = false;
  bool m_failureLocationHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
