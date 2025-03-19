/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/VpcEndpointSummary.h>
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
namespace OpenSearchService
{
namespace Model
{
  class ListVpcEndpointsForDomainResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult() = default;
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListVpcEndpointsForDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about each endpoint associated with the domain.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaryList() const { return m_vpcEndpointSummaryList; }
    template<typename VpcEndpointSummaryListT = Aws::Vector<VpcEndpointSummary>>
    void SetVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { m_vpcEndpointSummaryListHasBeenSet = true; m_vpcEndpointSummaryList = std::forward<VpcEndpointSummaryListT>(value); }
    template<typename VpcEndpointSummaryListT = Aws::Vector<VpcEndpointSummary>>
    ListVpcEndpointsForDomainResult& WithVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { SetVpcEndpointSummaryList(std::forward<VpcEndpointSummaryListT>(value)); return *this;}
    template<typename VpcEndpointSummaryListT = VpcEndpointSummary>
    ListVpcEndpointsForDomainResult& AddVpcEndpointSummaryList(VpcEndpointSummaryListT&& value) { m_vpcEndpointSummaryListHasBeenSet = true; m_vpcEndpointSummaryList.emplace_back(std::forward<VpcEndpointSummaryListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointsForDomainResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointsForDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaryList;
    bool m_vpcEndpointSummaryListHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
