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
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult();
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API ListOrganizationPortfolioAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline const Aws::Vector<OrganizationNode>& GetOrganizationNodes() const{ return m_organizationNodes; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline void SetOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { m_organizationNodes = value; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline void SetOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { m_organizationNodes = std::move(value); }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(const Aws::Vector<OrganizationNode>& value) { SetOrganizationNodes(value); return *this;}

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithOrganizationNodes(Aws::Vector<OrganizationNode>&& value) { SetOrganizationNodes(std::move(value)); return *this;}

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(const OrganizationNode& value) { m_organizationNodes.push_back(value); return *this; }

    /**
     * <p>Displays information about the organization nodes.</p>
     */
    inline ListOrganizationPortfolioAccessResult& AddOrganizationNodes(OrganizationNode&& value) { m_organizationNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageToken = value; }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageToken = std::move(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageToken.assign(value); }

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The page token to use to retrieve the next set of results. If there are no
     * additional results, this value is null.</p>
     */
    inline ListOrganizationPortfolioAccessResult& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::Vector<OrganizationNode> m_organizationNodes;

    Aws::String m_nextPageToken;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
