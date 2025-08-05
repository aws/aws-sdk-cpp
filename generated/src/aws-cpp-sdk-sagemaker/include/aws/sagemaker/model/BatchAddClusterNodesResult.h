/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/NodeAdditionResult.h>
#include <aws/sagemaker/model/BatchAddClusterNodesError.h>
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
  class BatchAddClusterNodesResult
  {
  public:
    AWS_SAGEMAKER_API BatchAddClusterNodesResult() = default;
    AWS_SAGEMAKER_API BatchAddClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API BatchAddClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>NodeLogicalIDs</code> that were successfully added to the
     * cluster. The <code>NodeLogicalID</code> is unique per cluster and does not
     * change between instance replacements. Each entry includes a
     * <code>NodeLogicalId</code> that can be used to track the node's provisioning
     * status (with <code>DescribeClusterNode</code>), the instance group name, and the
     * current status of the node.</p>
     */
    inline const Aws::Vector<NodeAdditionResult>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<NodeAdditionResult>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<NodeAdditionResult>>
    BatchAddClusterNodesResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = NodeAdditionResult>
    BatchAddClusterNodesResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of errors that occurred during the node addition operation. Each entry
     * includes the instance group name, error code, number of failed additions, and an
     * error message.</p>
     */
    inline const Aws::Vector<BatchAddClusterNodesError>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<BatchAddClusterNodesError>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<BatchAddClusterNodesError>>
    BatchAddClusterNodesResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = BatchAddClusterNodesError>
    BatchAddClusterNodesResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    BatchAddClusterNodesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<NodeAdditionResult> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<BatchAddClusterNodesError> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
