﻿/**
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
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult();
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline const Aws::Vector<OrganizationNode>& GetOrganizationNodes() const{ return m_organizationNodes; }
    inline void SetOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { m_organizationNodes = value; }
    inline void SetOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { m_organizationNodes = std::move(value); }
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { SetOrganizationNodes(value); return *this;}
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { SetOrganizationNodes(std::move(value)); return *this;}
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(const OrganizationNode& value) { m_organizationNodes.push_back(value); return *this; }
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(OrganizationNode&& value) { m_organizationNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListOrganizationPortfolioAccessResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListOrganizationPortfolioAccessResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListOrganizationPortfolioAccessResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<OrganizationNode> m_organizationNodes;

    Aws::String m_nextPageToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
