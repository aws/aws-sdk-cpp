/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/model/Sort.h>
#include <aws/marketplace-agreement/model/Filter.h>
#include <utility>

namespace Aws
{
namespace AgreementService
{
namespace Model
{

  /**
   */
  class SearchAgreementsRequest : public AgreementServiceRequest
  {
  public:
    AWS_AGREEMENTSERVICE_API SearchAgreementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAgreements"; }

    AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

    AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    SearchAgreementsRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filter name and value pair used to return a specific list of results.</p>
     * <p>The following filters are supported:</p> <ul> <li> <p>
     * <code>ResourceIdentifier</code> – The unique identifier of the resource.</p>
     * </li> <li> <p> <code>ResourceType</code> – Type of the resource, which is the
     * product (<code>AmiProduct</code>, <code>ContainerProduct</code>, or
     * <code>SaaSProduct</code>).</p> </li> <li> <p> <code>PartyType</code> – The party
     * type (either <code>Acceptor</code> or <code>Proposer</code>) of the caller. For
     * agreements where the caller is the proposer, use the <code>Proposer</code>
     * filter. For agreements where the caller is the acceptor, use the
     * <code>Acceptor</code> filter.</p> </li> <li> <p> <code>AcceptorAccountId</code>
     * – The AWS account ID of the party accepting the agreement terms.</p> </li> <li>
     * <p> <code>OfferId</code> – The unique identifier of the offer in which the terms
     * are registered in the agreement token.</p> </li> <li> <p> <code>Status</code> –
     * The current status of the agreement. Values include <code>ACTIVE</code>,
     * <code>ARCHIVED</code>, <code>CANCELLED</code>, <code>EXPIRED</code>,
     * <code>RENEWED</code>, <code>REPLACED</code>, and <code>TERMINATED</code>.</p>
     * </li> <li> <p> <code>BeforeEndTime</code> – A date used to filter agreements
     * with a date before the <code>endTime</code> of an agreement.</p> </li> <li> <p>
     * <code>AfterEndTime</code> – A date used to filter agreements with a date after
     * the <code>endTime</code> of an agreement.</p> </li> <li> <p>
     * <code>AgreementType</code> – The type of agreement. Values include
     * <code>PurchaseAgreement</code> or <code>VendorInsightsAgreement</code>.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    SearchAgreementsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    SearchAgreementsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchAgreementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchAgreementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline const Sort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = Sort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = Sort>
    SearchAgreementsRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
