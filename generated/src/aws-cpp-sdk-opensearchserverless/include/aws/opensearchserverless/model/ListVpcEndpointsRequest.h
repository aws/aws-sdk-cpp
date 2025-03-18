/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/opensearchserverless/OpenSearchServerlessRequest.h>
#include <aws/opensearchserverless/model/VpcEndpointFilters.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace OpenSearchServerless
{
namespace Model
{

  /**
   */
  class ListVpcEndpointsRequest : public OpenSearchServerlessRequest
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVpcEndpoints"; }

    AWS_OPENSEARCHSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_OPENSEARCHSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Filter the results according to the current status of the VPC endpoint.
     * Possible statuses are <code>CREATING</code>, <code>DELETING</code>,
     * <code>UPDATING</code>, <code>ACTIVE</code>, and <code>FAILED</code>.</p>
     */
    inline const VpcEndpointFilters& GetVpcEndpointFilters() const { return m_vpcEndpointFilters; }
    inline bool VpcEndpointFiltersHasBeenSet() const { return m_vpcEndpointFiltersHasBeenSet; }
    template<typename VpcEndpointFiltersT = VpcEndpointFilters>
    void SetVpcEndpointFilters(VpcEndpointFiltersT&& value) { m_vpcEndpointFiltersHasBeenSet = true; m_vpcEndpointFilters = std::forward<VpcEndpointFiltersT>(value); }
    template<typename VpcEndpointFiltersT = VpcEndpointFilters>
    ListVpcEndpointsRequest& WithVpcEndpointFilters(VpcEndpointFiltersT&& value) { SetVpcEndpointFilters(std::forward<VpcEndpointFiltersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If your initial <code>ListVpcEndpoints</code> operation returns a
     * <code>nextToken</code>, you can include the returned <code>nextToken</code> in
     * subsequent <code>ListVpcEndpoints</code> operations, which returns results in
     * the next page. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter that specifies the maximum number of results to return.
     * You can use <code>nextToken</code> to get the next page of results. The default
     * is 20.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVpcEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    VpcEndpointFilters m_vpcEndpointFilters;
    bool m_vpcEndpointFiltersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
