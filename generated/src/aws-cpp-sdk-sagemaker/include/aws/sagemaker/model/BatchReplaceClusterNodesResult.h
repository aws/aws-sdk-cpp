/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/BatchReplaceClusterNodeLogicalIdsError.h>
#include <aws/sagemaker/model/BatchReplaceClusterNodesError.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {
class BatchReplaceClusterNodesResult {
 public:
  AWS_SAGEMAKER_API BatchReplaceClusterNodesResult() = default;
  AWS_SAGEMAKER_API BatchReplaceClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API BatchReplaceClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A list of EC2 instance IDs for which the replacement operation was
   * successfully initiated.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  BatchReplaceClusterNodesResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = Aws::String>
  BatchReplaceClusterNodesResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors encountered for EC2 instance IDs that could not be replaced.
   * Each error includes the instance ID, an error code, and a descriptive
   * message.</p>
   */
  inline const Aws::Vector<BatchReplaceClusterNodesError>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<BatchReplaceClusterNodesError>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<BatchReplaceClusterNodesError>>
  BatchReplaceClusterNodesResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = BatchReplaceClusterNodesError>
  BatchReplaceClusterNodesResult& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of errors encountered for logical node IDs that could not be replaced.
   * Each error includes the logical node ID, an error code, and a descriptive
   * message. This field is only present when <code>NodeLogicalIds</code> were
   * provided in the request.</p>
   */
  inline const Aws::Vector<BatchReplaceClusterNodeLogicalIdsError>& GetFailedNodeLogicalIds() const { return m_failedNodeLogicalIds; }
  template <typename FailedNodeLogicalIdsT = Aws::Vector<BatchReplaceClusterNodeLogicalIdsError>>
  void SetFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    m_failedNodeLogicalIdsHasBeenSet = true;
    m_failedNodeLogicalIds = std::forward<FailedNodeLogicalIdsT>(value);
  }
  template <typename FailedNodeLogicalIdsT = Aws::Vector<BatchReplaceClusterNodeLogicalIdsError>>
  BatchReplaceClusterNodesResult& WithFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    SetFailedNodeLogicalIds(std::forward<FailedNodeLogicalIdsT>(value));
    return *this;
  }
  template <typename FailedNodeLogicalIdsT = BatchReplaceClusterNodeLogicalIdsError>
  BatchReplaceClusterNodesResult& AddFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    m_failedNodeLogicalIdsHasBeenSet = true;
    m_failedNodeLogicalIds.emplace_back(std::forward<FailedNodeLogicalIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of logical node IDs for which the replacement operation was
   * successfully initiated. This field is only present when
   * <code>NodeLogicalIds</code> were provided in the request.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessfulNodeLogicalIds() const { return m_successfulNodeLogicalIds; }
  template <typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
  void SetSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    m_successfulNodeLogicalIdsHasBeenSet = true;
    m_successfulNodeLogicalIds = std::forward<SuccessfulNodeLogicalIdsT>(value);
  }
  template <typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
  BatchReplaceClusterNodesResult& WithSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    SetSuccessfulNodeLogicalIds(std::forward<SuccessfulNodeLogicalIdsT>(value));
    return *this;
  }
  template <typename SuccessfulNodeLogicalIdsT = Aws::String>
  BatchReplaceClusterNodesResult& AddSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    m_successfulNodeLogicalIdsHasBeenSet = true;
    m_successfulNodeLogicalIds.emplace_back(std::forward<SuccessfulNodeLogicalIdsT>(value));
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
  BatchReplaceClusterNodesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_successful;
  bool m_successfulHasBeenSet = false;

  Aws::Vector<BatchReplaceClusterNodesError> m_failed;
  bool m_failedHasBeenSet = false;

  Aws::Vector<BatchReplaceClusterNodeLogicalIdsError> m_failedNodeLogicalIds;
  bool m_failedNodeLogicalIdsHasBeenSet = false;

  Aws::Vector<Aws::String> m_successfulNodeLogicalIds;
  bool m_successfulNodeLogicalIdsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
