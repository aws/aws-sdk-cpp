/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opsworks/model/EcsCluster.h>
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
namespace OpsWorks
{
namespace Model
{
  /**
   * <p>Contains the response to a <code>DescribeEcsClusters</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/DescribeEcsClustersResult">AWS
   * API Reference</a></p>
   */
  class DescribeEcsClustersResult
  {
  public:
    AWS_OPSWORKS_API DescribeEcsClustersResult() = default;
    AWS_OPSWORKS_API DescribeEcsClustersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPSWORKS_API DescribeEcsClustersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>EcsCluster</code> objects containing the cluster
     * descriptions.</p>
     */
    inline const Aws::Vector<EcsCluster>& GetEcsClusters() const { return m_ecsClusters; }
    template<typename EcsClustersT = Aws::Vector<EcsCluster>>
    void SetEcsClusters(EcsClustersT&& value) { m_ecsClustersHasBeenSet = true; m_ecsClusters = std::forward<EcsClustersT>(value); }
    template<typename EcsClustersT = Aws::Vector<EcsCluster>>
    DescribeEcsClustersResult& WithEcsClusters(EcsClustersT&& value) { SetEcsClusters(std::forward<EcsClustersT>(value)); return *this;}
    template<typename EcsClustersT = EcsCluster>
    DescribeEcsClustersResult& AddEcsClusters(EcsClustersT&& value) { m_ecsClustersHasBeenSet = true; m_ecsClusters.emplace_back(std::forward<EcsClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If a paginated request does not return all of the remaining results, this
     * parameter is set to a token that you can assign to the request object's
     * <code>NextToken</code> parameter to retrieve the next set of results. If the
     * previous paginated request returned all of the remaining results, this parameter
     * is set to <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEcsClustersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeEcsClustersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<EcsCluster> m_ecsClusters;
    bool m_ecsClustersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
