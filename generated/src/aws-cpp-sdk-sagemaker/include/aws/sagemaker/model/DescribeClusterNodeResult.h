/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterNodeDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeClusterNodeResult
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterNodeResult() = default;
    AWS_SAGEMAKER_API DescribeClusterNodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribeClusterNodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details of the SageMaker HyperPod cluster node.</p>
     */
    inline const ClusterNodeDetails& GetNodeDetails() const { return m_nodeDetails; }
    template<typename NodeDetailsT = ClusterNodeDetails>
    void SetNodeDetails(NodeDetailsT&& value) { m_nodeDetailsHasBeenSet = true; m_nodeDetails = std::forward<NodeDetailsT>(value); }
    template<typename NodeDetailsT = ClusterNodeDetails>
    DescribeClusterNodeResult& WithNodeDetails(NodeDetailsT&& value) { SetNodeDetails(std::forward<NodeDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeClusterNodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ClusterNodeDetails m_nodeDetails;
    bool m_nodeDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
