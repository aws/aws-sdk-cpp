/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MoveClusterNodeLogicalIdsError.h>
#include <aws/sagemaker/model/MoveClusterNodesError.h>

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
class MoveClusterNodesResult {
 public:
  AWS_SAGEMAKER_API MoveClusterNodesResult() = default;
  AWS_SAGEMAKER_API MoveClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SAGEMAKER_API MoveClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>This list contains the instance IDs of the nodes that were accepted for the
   * move. The response includes this list when you specify <code>NodeIds</code> or
   * <code>InstanceCount</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessful() const { return m_successful; }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  void SetSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful = std::forward<SuccessfulT>(value);
  }
  template <typename SuccessfulT = Aws::Vector<Aws::String>>
  MoveClusterNodesResult& WithSuccessful(SuccessfulT&& value) {
    SetSuccessful(std::forward<SuccessfulT>(value));
    return *this;
  }
  template <typename SuccessfulT = Aws::String>
  MoveClusterNodesResult& AddSuccessful(SuccessfulT&& value) {
    m_successfulHasBeenSet = true;
    m_successful.emplace_back(std::forward<SuccessfulT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The instance IDs that could not be moved, each with an error code and
   * message. The response includes this list when you specify <code>NodeIds</code>.
   * If none of the specified nodes can be moved, the request fails and no nodes are
   * moved.</p>
   */
  inline const Aws::Vector<MoveClusterNodesError>& GetFailed() const { return m_failed; }
  template <typename FailedT = Aws::Vector<MoveClusterNodesError>>
  void SetFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed = std::forward<FailedT>(value);
  }
  template <typename FailedT = Aws::Vector<MoveClusterNodesError>>
  MoveClusterNodesResult& WithFailed(FailedT&& value) {
    SetFailed(std::forward<FailedT>(value));
    return *this;
  }
  template <typename FailedT = MoveClusterNodesError>
  MoveClusterNodesResult& AddFailed(FailedT&& value) {
    m_failedHasBeenSet = true;
    m_failed.emplace_back(std::forward<FailedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>NodeLogicalIds</code> of the nodes that were accepted for the move.
   * The response includes this list when you specify
   * <code>NodeLogicalIds</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSuccessfulNodeLogicalIds() const { return m_successfulNodeLogicalIds; }
  template <typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
  void SetSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    m_successfulNodeLogicalIdsHasBeenSet = true;
    m_successfulNodeLogicalIds = std::forward<SuccessfulNodeLogicalIdsT>(value);
  }
  template <typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
  MoveClusterNodesResult& WithSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    SetSuccessfulNodeLogicalIds(std::forward<SuccessfulNodeLogicalIdsT>(value));
    return *this;
  }
  template <typename SuccessfulNodeLogicalIdsT = Aws::String>
  MoveClusterNodesResult& AddSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) {
    m_successfulNodeLogicalIdsHasBeenSet = true;
    m_successfulNodeLogicalIds.emplace_back(std::forward<SuccessfulNodeLogicalIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The <code>NodeLogicalIds</code> that could not be moved, each with an error
   * code and message. The response includes this list when you specify
   * <code>NodeLogicalIds</code>. If none of the specified nodes can be moved, the
   * request fails and no nodes are moved.</p>
   */
  inline const Aws::Vector<MoveClusterNodeLogicalIdsError>& GetFailedNodeLogicalIds() const { return m_failedNodeLogicalIds; }
  template <typename FailedNodeLogicalIdsT = Aws::Vector<MoveClusterNodeLogicalIdsError>>
  void SetFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    m_failedNodeLogicalIdsHasBeenSet = true;
    m_failedNodeLogicalIds = std::forward<FailedNodeLogicalIdsT>(value);
  }
  template <typename FailedNodeLogicalIdsT = Aws::Vector<MoveClusterNodeLogicalIdsError>>
  MoveClusterNodesResult& WithFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    SetFailedNodeLogicalIds(std::forward<FailedNodeLogicalIdsT>(value));
    return *this;
  }
  template <typename FailedNodeLogicalIdsT = MoveClusterNodeLogicalIdsError>
  MoveClusterNodesResult& AddFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) {
    m_failedNodeLogicalIdsHasBeenSet = true;
    m_failedNodeLogicalIds.emplace_back(std::forward<FailedNodeLogicalIdsT>(value));
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
  MoveClusterNodesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Aws::String> m_successful;

  Aws::Vector<MoveClusterNodesError> m_failed;

  Aws::Vector<Aws::String> m_successfulNodeLogicalIds;

  Aws::Vector<MoveClusterNodeLogicalIdsError> m_failedNodeLogicalIds;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_successfulHasBeenSet = false;
  bool m_failedHasBeenSet = false;
  bool m_successfulNodeLogicalIdsHasBeenSet = false;
  bool m_failedNodeLogicalIdsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
