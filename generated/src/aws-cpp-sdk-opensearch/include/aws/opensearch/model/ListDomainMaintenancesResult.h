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
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult() = default;
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API ListDomainMaintenancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the submitted maintenance actions.</p>
     */
    inline const Aws::Vector<DomainMaintenanceDetails>& GetDomainMaintenances() const { return m_domainMaintenances; }
    template<typename DomainMaintenancesT = Aws::Vector<DomainMaintenanceDetails>>
    void SetDomainMaintenances(DomainMaintenancesT&& value) { m_domainMaintenancesHasBeenSet = true; m_domainMaintenances = std::forward<DomainMaintenancesT>(value); }
    template<typename DomainMaintenancesT = Aws::Vector<DomainMaintenanceDetails>>
    ListDomainMaintenancesResult& WithDomainMaintenances(DomainMaintenancesT&& value) { SetDomainMaintenances(std::forward<DomainMaintenancesT>(value)); return *this;}
    template<typename DomainMaintenancesT = DomainMaintenanceDetails>
    ListDomainMaintenancesResult& AddDomainMaintenances(DomainMaintenancesT&& value) { m_domainMaintenancesHasBeenSet = true; m_domainMaintenances.emplace_back(std::forward<DomainMaintenancesT>(value)); return *this; }
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
    ListDomainMaintenancesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDomainMaintenancesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DomainMaintenanceDetails> m_domainMaintenances;
    bool m_domainMaintenancesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
