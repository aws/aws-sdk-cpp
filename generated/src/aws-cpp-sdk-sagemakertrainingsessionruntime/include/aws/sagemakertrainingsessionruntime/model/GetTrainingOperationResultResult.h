/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntime_EXPORTS.h>
#include <aws/sagemakertrainingsessionruntime/model/OperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/RequestStatus.h>
#include <aws/sagemakertrainingsessionruntime/model/TrainingTokenUsage.h>

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
class GetTrainingOperationResultResult {
 public:
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetTrainingOperationResultResult() = default;
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetTrainingOperationResultResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKERTRAININGSESSIONRUNTIME_API GetTrainingOperationResultResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The current status of the operation. Possible values are
   * <code>Pending</code>, <code>InProgress</code>, <code>Completed</code>,
   * <code>Failed</code>, or <code>Skipped</code>.</p>
   */
  inline RequestStatus GetStatus() const { return m_status; }
  inline void SetStatus(RequestStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTrainingOperationResultResult& WithStatus(RequestStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The result payload of the operation. The service populates this field only
   * when the status is <code>Completed</code>. The populated member of the union
   * corresponds to the operation type that was submitted.</p>
   */
  inline const OperationResult& GetOperationResult() const { return m_operationResult; }
  template <typename OperationResultT = OperationResult>
  void SetOperationResult(OperationResultT&& value) {
    m_operationResultHasBeenSet = true;
    m_operationResult = std::forward<OperationResultT>(value);
  }
  template <typename OperationResultT = OperationResult>
  GetTrainingOperationResultResult& WithOperationResult(OperationResultT&& value) {
    SetOperationResult(std::forward<OperationResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A message describing why the operation failed. The service populates this
   * field only when the status is <code>Failed</code>.</p>
   */
  inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
  template <typename ErrorDetailsT = Aws::String>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::String>
  GetTrainingOperationResultResult& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token usage statistics for metering purposes. The service populates this
   * field for forward and forwardBackward operations upon completion.</p>
   */
  inline const TrainingTokenUsage& GetTokenUsage() const { return m_tokenUsage; }
  template <typename TokenUsageT = TrainingTokenUsage>
  void SetTokenUsage(TokenUsageT&& value) {
    m_tokenUsageHasBeenSet = true;
    m_tokenUsage = std::forward<TokenUsageT>(value);
  }
  template <typename TokenUsageT = TrainingTokenUsage>
  GetTrainingOperationResultResult& WithTokenUsage(TokenUsageT&& value) {
    SetTokenUsage(std::forward<TokenUsageT>(value));
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
  GetTrainingOperationResultResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  RequestStatus m_status{RequestStatus::NOT_SET};

  OperationResult m_operationResult;

  Aws::String m_errorDetails;

  TrainingTokenUsage m_tokenUsage;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_operationResultHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
  bool m_tokenUsageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
