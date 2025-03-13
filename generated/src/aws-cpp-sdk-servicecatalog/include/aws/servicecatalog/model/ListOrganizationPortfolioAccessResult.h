/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/OrganizationNode.h>
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
namespace ServiceCatalog
{
namespace Model
{
  class ListOrganizationPortfolioAccessResult
  {
  public:
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult() = default;
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline const Aws::Vector<OrganizationNode>& GetOrganizationNodes() const { return m_organizationNodes; }
    template<typename OrganizationNodesT = Aws::Vector<OrganizationNode>>
    void SetOrganizationNodes(OrganizationNodesT&& value) { m_organizationNodesHasBeenSet = true; m_organizationNodes = std::forward<OrganizationNodesT>(value); }
    template<typename OrganizationNodesT = Aws::Vector<OrganizationNode>>
    ListOrganizationPortfolioAccessResult& WithOrganizationNodes(OrganizationNodesT&& value) { SetOrganizationNodes(std::forward<OrganizationNodesT>(value)); return *this;}
    template<typename OrganizationNodesT = OrganizationNode>
    ListOrganizationPortfolioAccessResult& AddOrganizationNodes(OrganizationNodesT&& value) { m_organizationNodesHasBeenSet = true; m_organizationNodes.emplace_back(std::forward<OrganizationNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const { return m_nextPageToken; }
    template<typename NextPageTokenT = Aws::String>
    void SetNextPageToken(NextPageTokenT&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::forward<NextPageTokenT>(value); }
    template<typename NextPageTokenT = Aws::String>
    ListOrganizationPortfolioAccessResult& WithNextPageToken(NextPageTokenT&& value) { SetNextPageToken(std::forward<NextPageTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOrganizationPortfolioAccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationNode> m_organizationNodes;
    bool m_organizationNodesHasBeenSet = false;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
