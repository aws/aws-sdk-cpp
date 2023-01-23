/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainPackageDetails.h>
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
  /**
   * <p>Container for the response parameters to the
   * <code>ListDomainsForPackage</code> operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainsForPackageResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainsForPackageResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDomainsForPackageResult();
    AWS_OPENSEARCHSERVICE_API ListDomainsForPackageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDomainsForPackageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline const Aws::Vector<DomainPackageDetails>& GetDomainPackageDetailsList() const{ return m_domainPackageDetailsList; }

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline void SetDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { m_domainPackageDetailsList = value; }

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline void SetDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { m_domainPackageDetailsList = std::move(value); }

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline ListDomainsForPackageResult& WithDomainPackageDetailsList(const Aws::Vector<DomainPackageDetails>& value) { SetDomainPackageDetailsList(value); return *this;}

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline ListDomainsForPackageResult& WithDomainPackageDetailsList(Aws::Vector<DomainPackageDetails>&& value) { SetDomainPackageDetailsList(std::move(value)); return *this;}

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline ListDomainsForPackageResult& AddDomainPackageDetailsList(const DomainPackageDetails& value) { m_domainPackageDetailsList.push_back(value); return *this; }

    /**
     * <p>Information about all domains associated with a package.</p>
     */
    inline ListDomainsForPackageResult& AddDomainPackageDetailsList(DomainPackageDetails&& value) { m_domainPackageDetailsList.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainsForPackageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainsForPackageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainsForPackageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DomainPackageDetails> m_domainPackageDetailsList;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
