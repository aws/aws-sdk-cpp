/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentError.h>
#include <aws/quicksight/model/BatchDeletePolicyAssignmentSuccess.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {
class BatchDeletePolicyAssignmentByPolicyResult {
 public:
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentByPolicyResult() = default;
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentByPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_QUICKSIGHT_API BatchDeletePolicyAssignmentByPolicyResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the policy from the request.</p>
   */
  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  BatchDeletePolicyAssignmentByPolicyResult& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of principals that no longer have the policy.</p>
   */
  inline const Aws::Vector<BatchDeletePolicyAssignmentSuccess>& GetSuccess() const { return m_success; }
  template <typename SuccessT = Aws::Vector<BatchDeletePolicyAssignmentSuccess>>
  void SetSuccess(SuccessT&& value) {
    m_successHasBeenSet = true;
    m_success = std::forward<SuccessT>(value);
  }
  template <typename SuccessT = Aws::Vector<BatchDeletePolicyAssignmentSuccess>>
  BatchDeletePolicyAssignmentByPolicyResult& WithSuccess(SuccessT&& value) {
    SetSuccess(std::forward<SuccessT>(value));
    return *this;
  }
  template <typename SuccessT = BatchDeletePolicyAssignmentSuccess>
  BatchDeletePolicyAssignmentByPolicyResult& AddSuccess(SuccessT&& value) {
    m_successHasBeenSet = true;
    m_success.emplace_back(std::forward<SuccessT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of principals that the operation couldn't remove the policy from, with
   * the reason for each failure.</p>
   */
  inline const Aws::Vector<BatchDeletePolicyAssignmentError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchDeletePolicyAssignmentError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchDeletePolicyAssignmentError>>
  BatchDeletePolicyAssignmentByPolicyResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchDeletePolicyAssignmentError>
  BatchDeletePolicyAssignmentByPolicyResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchDeletePolicyAssignmentByPolicyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_policyArn;

  Aws::Vector<BatchDeletePolicyAssignmentSuccess> m_success;

  Aws::Vector<BatchDeletePolicyAssignmentError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_policyArnHasBeenSet = false;
  bool m_successHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
