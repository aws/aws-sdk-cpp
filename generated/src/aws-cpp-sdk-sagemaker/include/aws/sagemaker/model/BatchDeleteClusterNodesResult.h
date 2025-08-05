/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/BatchDeleteClusterNodesError.h>
#include <aws/sagemaker/model/BatchDeleteClusterNodeLogicalIdsError.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class BatchDeleteClusterNodesResult
  {
  public:
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult() = default;
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API BatchDeleteClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of errors encountered when deleting the specified nodes.</p>
     */
    inline const Aws::Vector<BatchDeleteClusterNodesError>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<BatchDeleteClusterNodesError>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<BatchDeleteClusterNodesError>>
    BatchDeleteClusterNodesResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = BatchDeleteClusterNodesError>
    BatchDeleteClusterNodesResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of node IDs that were successfully deleted from the specified
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<Aws::String>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<Aws::String>>
    BatchDeleteClusterNodesResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = Aws::String>
    BatchDeleteClusterNodesResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>NodeLogicalIds</code> that could not be deleted, along with
     * error information explaining why the deletion failed.</p>
     */
    inline const Aws::Vector<BatchDeleteClusterNodeLogicalIdsError>& GetFailedNodeLogicalIds() const { return m_failedNodeLogicalIds; }
    template<typename FailedNodeLogicalIdsT = Aws::Vector<BatchDeleteClusterNodeLogicalIdsError>>
    void SetFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) { m_failedNodeLogicalIdsHasBeenSet = true; m_failedNodeLogicalIds = std::forward<FailedNodeLogicalIdsT>(value); }
    template<typename FailedNodeLogicalIdsT = Aws::Vector<BatchDeleteClusterNodeLogicalIdsError>>
    BatchDeleteClusterNodesResult& WithFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) { SetFailedNodeLogicalIds(std::forward<FailedNodeLogicalIdsT>(value)); return *this;}
    template<typename FailedNodeLogicalIdsT = BatchDeleteClusterNodeLogicalIdsError>
    BatchDeleteClusterNodesResult& AddFailedNodeLogicalIds(FailedNodeLogicalIdsT&& value) { m_failedNodeLogicalIdsHasBeenSet = true; m_failedNodeLogicalIds.emplace_back(std::forward<FailedNodeLogicalIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>NodeLogicalIds</code> that were successfully deleted from the
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSuccessfulNodeLogicalIds() const { return m_successfulNodeLogicalIds; }
    template<typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
    void SetSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) { m_successfulNodeLogicalIdsHasBeenSet = true; m_successfulNodeLogicalIds = std::forward<SuccessfulNodeLogicalIdsT>(value); }
    template<typename SuccessfulNodeLogicalIdsT = Aws::Vector<Aws::String>>
    BatchDeleteClusterNodesResult& WithSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) { SetSuccessfulNodeLogicalIds(std::forward<SuccessfulNodeLogicalIdsT>(value)); return *this;}
    template<typename SuccessfulNodeLogicalIdsT = Aws::String>
    BatchDeleteClusterNodesResult& AddSuccessfulNodeLogicalIds(SuccessfulNodeLogicalIdsT&& value) { m_successfulNodeLogicalIdsHasBeenSet = true; m_successfulNodeLogicalIds.emplace_back(std::forward<SuccessfulNodeLogicalIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchDeleteClusterNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteClusterNodesError> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::Vector<Aws::String> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<BatchDeleteClusterNodeLogicalIdsError> m_failedNodeLogicalIds;
    bool m_failedNodeLogicalIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_successfulNodeLogicalIds;
    bool m_successfulNodeLogicalIdsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
