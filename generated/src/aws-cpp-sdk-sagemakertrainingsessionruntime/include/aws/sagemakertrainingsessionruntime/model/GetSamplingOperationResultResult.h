/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/RequestStatus.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleOperationResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMakerTrainingSessionRuntime {
namespace Model {
class GetSamplingOperationResultResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetSamplingOperationResultResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetSamplingOperationResultResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetSamplingOperationResultResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the sample operation. Possible values are
   * <code>Pending</code>, <code>InProgress</code>, <code>Completed</code>, or
   * <code>Failed</code>.</p>
   */
  inline RequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(RequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetSamplingOperationResultResult& WithStatus(RequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result payload of the sample operation. The service populates this field
   * only when the status is <code>Completed</code>.</p>
   */
  inline const SampleOperationResult& GetOperationResult() const { return m_operationResult; }
  template <typename OperationResultT = SampleOperationResult>
  void SetOperationResult(OperationResultT&& value) {
    m_operationResultHasBeenSet = true;
    m_operationResult = std::forward<OperationResultT>(value);
  }
  template <typename OperationResultT = SampleOperationResult>
  GetSamplingOperationResultResult& WithOperationResult(OperationResultT&& value) {
    SetOperationResult(std::forward<OperationResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why the sample operation failed. The service populates
   * this field only when the status is <code>Failed</code>.</p>
   */
  inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = Aws::String>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::String>
  GetSamplingOperationResultResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
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
  GetSamplingOperationResultResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RequestStatus m_status{RequestStatus::NOT_SET};

  SampleOperationResult m_operationResult;

  Aws::String m_errorDetails;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_operationResultHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
