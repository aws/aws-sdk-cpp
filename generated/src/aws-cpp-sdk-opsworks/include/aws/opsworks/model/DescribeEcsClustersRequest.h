/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class DescribeEcsClustersRequest : public OpsWorksRequest
  {
  public:
    AWS_OPSWORKS_API DescribeEcsClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEcsClusters"; }

    AWS_OPSWORKS_API Aws::String SerializePayload() const override;

    AWS_OPSWORKS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of ARNs, one for each cluster to be described.</p>
     */
    inline const Aws::Vector<Aws::String>& GetEcsClusterArns() const { return m_ecsClusterArns; }
    inline bool EcsClusterArnsHasBeenSet() const { return m_ecsClusterArnsHasBeenSet; }
    template<typename EcsClusterArnsT = Aws::Vector<Aws::String>>
    void SetEcsClusterArns(EcsClusterArnsT&& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns = std::forward<EcsClusterArnsT>(value); }
    template<typename EcsClusterArnsT = Aws::Vector<Aws::String>>
    DescribeEcsClustersRequest& WithEcsClusterArns(EcsClusterArnsT&& value) { SetEcsClusterArns(std::forward<EcsClusterArnsT>(value)); return *this;}
    template<typename EcsClusterArnsT = Aws::String>
    DescribeEcsClustersRequest& AddEcsClusterArns(EcsClusterArnsT&& value) { m_ecsClusterArnsHasBeenSet = true; m_ecsClusterArns.emplace_back(std::forward<EcsClusterArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A stack ID. <code>DescribeEcsClusters</code> returns a description of the
     * cluster that is registered with the stack.</p>
     */
    inline const Aws::String& GetStackId() const { return m_stackId; }
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }
    template<typename StackIdT = Aws::String>
    void SetStackId(StackIdT&& value) { m_stackIdHasBeenSet = true; m_stackId = std::forward<StackIdT>(value); }
    template<typename StackIdT = Aws::String>
    DescribeEcsClustersRequest& WithStackId(StackIdT&& value) { SetStackId(std::forward<StackIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's<code>NextToken</code> parameter value is set to a
     * token. To retrieve the next set of results, call
     * <code>DescribeEcsClusters</code> again and assign that token to the request
     * object's <code>NextToken</code> parameter. If there are no remaining results,
     * the previous response object's <code>NextToken</code> parameter is set to
     * <code>null</code>.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeEcsClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>To receive a paginated response, use this parameter to specify the maximum
     * number of results to be returned with a single call. If the number of available
     * results exceeds this maximum, the response includes a <code>NextToken</code>
     * value that you can assign to the <code>NextToken</code> request parameter to get
     * the next set of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeEcsClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_ecsClusterArns;
    bool m_ecsClusterArnsHasBeenSet = false;

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
