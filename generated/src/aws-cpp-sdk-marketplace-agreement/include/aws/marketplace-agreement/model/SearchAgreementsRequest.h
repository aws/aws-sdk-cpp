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
    AWS_AGREEMENTSERVICE_API SearchAgreementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchAgreements"; }

    AWS_AGREEMENTSERVICE_API Aws::String SerializePayload() const override;

    AWS_AGREEMENTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline SearchAgreementsRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline SearchAgreementsRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}

    /**
     * <p>The catalog in which the agreement was created.</p>
     */
    inline SearchAgreementsRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}


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
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

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
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

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
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

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
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

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
    inline SearchAgreementsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

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
    inline SearchAgreementsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

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
    inline SearchAgreementsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline SearchAgreementsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of agreements to return in the response.</p>
     */
    inline SearchAgreementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline SearchAgreementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline SearchAgreementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start pagination.</p>
     */
    inline SearchAgreementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline const Sort& GetSort() const{ return m_sort; }

    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }

    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline void SetSort(const Sort& value) { m_sortHasBeenSet = true; m_sort = value; }

    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline void SetSort(Sort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }

    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline SearchAgreementsRequest& WithSort(const Sort& value) { SetSort(value); return *this;}

    /**
     * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
     * attributes.</p>
     */
    inline SearchAgreementsRequest& WithSort(Sort&& value) { SetSort(std::move(value)); return *this;}

  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Sort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
