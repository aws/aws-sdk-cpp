/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/DomainMaintenanceDetails.h>
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
   * <p>The result of a <code>ListDomainMaintenances</code> request that contains
   * information about the requested actions. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListDomainMaintenancesResponse">AWS
   * API Reference</a></p>
   */
  class ListDomainMaintenancesResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult();
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline const Aws::Vector<DomainMaintenanceDetails>& GetDomainMaintenances() const{ return m_domainMaintenances; }

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline void SetDomainMaintenances(const Aws::Vector<DomainMaintenanceDetails>& value) { m_domainMaintenances = value; }

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline void SetDomainMaintenances(Aws::Vector<DomainMaintenanceDetails>&& value) { m_domainMaintenances = std::move(value); }

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline ListDomainMaintenancesResult& WithDomainMaintenances(const Aws::Vector<DomainMaintenanceDetails>& value) { SetDomainMaintenances(value); return *this;}

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline ListDomainMaintenancesResult& WithDomainMaintenances(Aws::Vector<DomainMaintenanceDetails>&& value) { SetDomainMaintenances(std::move(value)); return *this;}

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline ListDomainMaintenancesResult& AddDomainMaintenances(const DomainMaintenanceDetails& value) { m_domainMaintenances.push_back(value); return *this; }

    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline ListDomainMaintenancesResult& AddDomainMaintenances(DomainMaintenanceDetails&& value) { m_domainMaintenances.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainMaintenancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainMaintenancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Send the request again using the returned token to retrieve the next page.</p>
     */
    inline ListDomainMaintenancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListDomainMaintenancesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListDomainMaintenancesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListDomainMaintenancesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<DomainMaintenanceDetails> m_domainMaintenances;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
