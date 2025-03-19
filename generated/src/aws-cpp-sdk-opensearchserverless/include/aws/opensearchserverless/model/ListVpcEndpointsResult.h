/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearchserverless/OpenSearchServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchserverless/model/VpcEndpointSummary.h>
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
namespace OpenSearchServerless
{
namespace Model
{
  class ListVpcEndpointsResult
  {
  public:
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult() = default;
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVERLESS_API ListVpcEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each VPC endpoint, including the name and current status.</p>
     */
    inline const Aws::Vector<VpcEndpointSummary>& GetVpcEndpointSummaries() const { return m_vpcEndpointSummaries; }
    template<typename VpcEndpointSummariesT = Aws::Vector<VpcEndpointSummary>>
    void SetVpcEndpointSummaries(VpcEndpointSummariesT&& value) { m_vpcEndpointSummariesHasBeenSet = true; m_vpcEndpointSummaries = std::forward<VpcEndpointSummariesT>(value); }
    template<typename VpcEndpointSummariesT = Aws::Vector<VpcEndpointSummary>>
    ListVpcEndpointsResult& WithVpcEndpointSummaries(VpcEndpointSummariesT&& value) { SetVpcEndpointSummaries(std::forward<VpcEndpointSummariesT>(value)); return *this;}
    template<typename VpcEndpointSummariesT = VpcEndpointSummary>
    ListVpcEndpointsResult& AddVpcEndpointSummaries(VpcEndpointSummariesT&& value) { m_vpcEndpointSummariesHasBeenSet = true; m_vpcEndpointSummaries.emplace_back(std::forward<VpcEndpointSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVpcEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListVpcEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<VpcEndpointSummary> m_vpcEndpointSummaries;
    bool m_vpcEndpointSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchServerless
} // namespace Aws
