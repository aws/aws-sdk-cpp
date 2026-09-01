/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/Filter.h>
#include <aws/marketplace-agreement/model/Sort.h>

#include <utility>

namespace Aws {
namespace AgreementService {
namespace Model {

/**
 */
class SearchAgreementsRequest : public AgreementServiceRequest {
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
  template <typename CatalogT = Aws::String>
  void SetCatalog(CatalogT&& value) {
    m_catalogHasBeenSet = true;
    m_catalog = std::forward<CatalogT>(value);
  }
  template <typename CatalogT = Aws::String>
  SearchAgreementsRequest& WithCatalog(CatalogT&& value) {
    SetCatalog(std::forward<CatalogT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The filter name and value pair used to return a specific list of results.</p>
   * <p>The following filters are supported:</p> <ul> <li> <p>
   * <code>ResourceIdentifier</code> – The unique identifier of the resource.</p>
   * </li> <li> <p> <code>ResourceType</code> – Type of the resource, which is the
   * product (<code>AmiProduct</code>, <code>ContainerProduct</code>,
   * <code>SaaSProduct</code>, <code>ProfessionalServicesProduct</code>, or
   * <code>MachineLearningProduct</code>).</p> </li> <li> <p> <code>PartyType</code>
   * – The party type of the caller. Use <code>Proposer</code> or
   * <code>Acceptor</code>.</p> </li> <li> <p> <code>AcceptorAccountId</code> – The
   * AWS account ID of the party accepting the agreement terms.</p> </li> <li> <p>
   * <code>OfferId</code> – The unique identifier of the offer in which the terms are
   * registered in the agreement token.</p> </li> <li> <p> <code>Status</code> – The
   * current status of the agreement. Values include <code>ACTIVE</code>,
   * <code>CANCELLED</code>, <code>EXPIRED</code>, <code>RENEWED</code>,
   * <code>REPLACED</code>, and <code>TERMINATED</code>.</p> </li> <li> <p>
   * <code>BeforeEndTime</code> – A date used to filter agreements with a date before
   * the <code>endTime</code> of an agreement.</p> </li> <li> <p>
   * <code>AfterEndTime</code> – A date used to filter agreements with a date after
   * the <code>endTime</code> of an agreement.</p> </li> <li> <p>
   * <code>BeforeStartTime</code> – A date used to filter agreements with a date
   * before the <code>startTime</code> of an agreement.</p> </li> <li> <p>
   * <code>AfterStartTime</code> – A date used to filter agreements with a date after
   * the <code>startTime</code> of an agreement.</p> </li> <li> <p>
   * <code>BeforeLastUpdateTime</code> – A date used to filter agreements with a date
   * before the <code>lastUpdateTime</code> of an agreement.</p> </li> <li> <p>
   * <code>AfterLastUpdateTime</code> – A date used to filter agreements with a date
   * after the <code>lastUpdateTime</code> of an agreement.</p> </li> <li> <p>
   * <code>AgreementType</code> – The type of agreement. Supported value includes
   * <code>PurchaseAgreement</code>.</p> </li> <li> <p> <code>OfferSetId</code> – A
   * unique identifier for the offer set containing this offer. All agreements
   * created from offers in this set include this identifier as context.</p> </li>
   * <li> <p> <code>EndTimeBehaviorType</code> – What happens to the agreement when
   * it reaches its end date. Values include <code>RENEW</code>,
   * <code>REPLACE</code>, and <code>EXPIRE</code>.</p> </li> <li> <p>
   * <code>EndTimeBehaviorReasonCode</code> – The reason why the agreement doesn't
   * renew at its end date. Values include <code>PROPOSER_RENEW_OPTED_OUT</code>,
   * <code>ACCEPTOR_RENEW_OPTED_OUT</code>, <code>NO_RENEWAL_TERM</code>, and
   * <code>RENEWAL_LIMIT_EXHAUSTED</code>.</p> </li> <li> <p>
   * <code>InitialAgreementId</code> – The unique identifier of the very first
   * agreement in a chain of related agreements. Use this filter to return every
   * agreement in the same chain.</p> </li> <li> <p> <code>LicenseArn</code> – The
   * Amazon Resource Name (ARN) of the AWS License Manager license associated with an
   * entitlement granted by the agreement.</p> </li> </ul> <p>A proposer can use any
   * combination of the preceding filters along with <code>AgreementType</code>,
   * which is required.</p> <p>The following filter combinations are supported when
   * the <code>PartyType</code> is <code>Acceptor</code>:</p> <ul> <li> <p>
   * <code>AgreementType</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>Status</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>Status</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceIdentifier</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceIdentifier</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>ResourceIdentifier</code> + <code>Status</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceIdentifier</code> +
   * <code>Status</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceType</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>ResourceType</code> + <code>EndTime</code>
   * </p> </li> <li> <p> <code>AgreementType</code> + <code>OfferId</code> </p> </li>
   * <li> <p> <code>AgreementType</code> + <code>OfferId</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>OfferId</code> + <code>Status</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>OfferId</code> + <code>Status</code> +
   * <code>EndTime</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>OfferSetId</code> </p> </li> <li> <p> <code>AgreementType</code> +
   * <code>OfferSetId</code> + <code>EndTime</code> </p> </li> <li> <p>
   * <code>AgreementType</code> + <code>OfferSetId</code> + <code>Status</code> </p>
   * </li> <li> <p> <code>AgreementType</code> + <code>OfferSetId</code> +
   * <code>Status</code> + <code>EndTime</code> </p> </li> </ul>  <p>To filter
   * by <code>EndTime</code>, you can use <code>BeforeEndTime</code>,
   * <code>AfterEndTime</code>, or both.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  SearchAgreementsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  SearchAgreementsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains the <code>SortBy</code> and <code>SortOrder</code>
   * attributes. For <code>SearchAgreements</code>, <code>SortBy</code> supports
   * <code>EndTime</code> for both party types, and <code>StartTime</code> and
   * <code>LastUpdateTime</code> only when <code>PartyType</code> is
   * <code>Proposer</code>. The default <code>SortBy</code> value is
   * <code>EndTime</code>.</p>
   */
  inline const Sort& GetSort() const { return m_sort; }
  inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
  template <typename SortT = Sort>
  void SetSort(SortT&& value) {
    m_sortHasBeenSet = true;
    m_sort = std::forward<SortT>(value);
  }
  template <typename SortT = Sort>
  SearchAgreementsRequest& WithSort(SortT&& value) {
    SetSort(std::forward<SortT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of agreements to return in the response.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline SearchAgreementsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token to specify where to start pagination.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchAgreementsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_catalog;

  Aws::Vector<Filter> m_filters;

  Sort m_sort;

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_catalogHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
  bool m_sortHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace AgreementService
}  // namespace Aws
