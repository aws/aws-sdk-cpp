/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/model/OpportunitySort.h>
#include <aws/partnercentral-selling/model/LastModifiedDate.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/Stage.h>
#include <aws/partnercentral-selling/model/ReviewStatus.h>
#include <utility>

namespace Aws
{
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   */
  class ListOpportunitiesRequest : public PartnerCentralSellingRequest
  {
  public:
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOpportunities"; }

    AWS_PARTNERCENTRALSELLING_API Aws::String SerializePayload() const override;

    AWS_PARTNERCENTRALSELLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the catalog associated with the request. This field takes a string
     * value from a predefined list: <code>AWS</code> or <code>Sandbox</code>. The
     * catalog determines which environment the opportunities are listed in. Use
     * <code>AWS</code> for listing real opportunities in the Amazon Web Services
     * catalog, and <code>Sandbox</code> for testing in secure, isolated
     * environments.</p>
     */
    inline const Aws::String& GetCatalog() const { return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    template<typename CatalogT = Aws::String>
    void SetCatalog(CatalogT&& value) { m_catalogHasBeenSet = true; m_catalog = std::forward<CatalogT>(value); }
    template<typename CatalogT = Aws::String>
    ListOpportunitiesRequest& WithCatalog(CatalogT&& value) { SetCatalog(std::forward<CatalogT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of results to return in a single call. This
     * limits the number of opportunities returned in the response to avoid providing
     * too many results at once.</p> <p>Default: 20</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOpportunitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token used to retrieve the next set of results in subsequent
     * calls. This token is included in the response only if there are additional
     * result pages available.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOpportunitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies how the response is sorted. The default
     * <code>Sort.SortBy</code> value is <code>LastModifiedDate</code>.</p>
     */
    inline const OpportunitySort& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = OpportunitySort>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = OpportunitySort>
    ListOpportunitiesRequest& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their last modified date. This filter
     * helps retrieve opportunities that were updated after the specified date,
     * allowing partners to track recent changes or updates.</p>
     */
    inline const LastModifiedDate& GetLastModifiedDate() const { return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    template<typename LastModifiedDateT = LastModifiedDate>
    void SetLastModifiedDate(LastModifiedDateT&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::forward<LastModifiedDateT>(value); }
    template<typename LastModifiedDateT = LastModifiedDate>
    ListOpportunitiesRequest& WithLastModifiedDate(LastModifiedDateT&& value) { SetLastModifiedDate(std::forward<LastModifiedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on the opportunity identifier. This allows
     * partners to retrieve specific opportunities by providing their unique
     * identifiers, ensuring precise results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = Aws::Vector<Aws::String>>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = Aws::Vector<Aws::String>>
    ListOpportunitiesRequest& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    template<typename IdentifierT = Aws::String>
    ListOpportunitiesRequest& AddIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier.emplace_back(std::forward<IdentifierT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their lifecycle stage. This filter allows
     * partners to retrieve opportunities at various stages in the sales cycle, such as
     * <code>Qualified</code>, <code>Technical Validation</code>, <code>Business
     * Validation</code>, or <code>Closed Won</code>.</p>
     */
    inline const Aws::Vector<Stage>& GetLifeCycleStage() const { return m_lifeCycleStage; }
    inline bool LifeCycleStageHasBeenSet() const { return m_lifeCycleStageHasBeenSet; }
    template<typename LifeCycleStageT = Aws::Vector<Stage>>
    void SetLifeCycleStage(LifeCycleStageT&& value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage = std::forward<LifeCycleStageT>(value); }
    template<typename LifeCycleStageT = Aws::Vector<Stage>>
    ListOpportunitiesRequest& WithLifeCycleStage(LifeCycleStageT&& value) { SetLifeCycleStage(std::forward<LifeCycleStageT>(value)); return *this;}
    inline ListOpportunitiesRequest& AddLifeCycleStage(Stage value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their current lifecycle approval status.
     * Use this filter to retrieve opportunities with statuses such as <code>Pending
     * Submission</code>, <code>In Review</code>, <code>Action Required</code>, or
     * <code>Approved</code>.</p>
     */
    inline const Aws::Vector<ReviewStatus>& GetLifeCycleReviewStatus() const { return m_lifeCycleReviewStatus; }
    inline bool LifeCycleReviewStatusHasBeenSet() const { return m_lifeCycleReviewStatusHasBeenSet; }
    template<typename LifeCycleReviewStatusT = Aws::Vector<ReviewStatus>>
    void SetLifeCycleReviewStatus(LifeCycleReviewStatusT&& value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus = std::forward<LifeCycleReviewStatusT>(value); }
    template<typename LifeCycleReviewStatusT = Aws::Vector<ReviewStatus>>
    ListOpportunitiesRequest& WithLifeCycleReviewStatus(LifeCycleReviewStatusT&& value) { SetLifeCycleReviewStatus(std::forward<LifeCycleReviewStatusT>(value)); return *this;}
    inline ListOpportunitiesRequest& AddLifeCycleReviewStatus(ReviewStatus value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on the customer's company name. This allows
     * partners to search for opportunities associated with a specific customer by
     * matching the provided company name string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerCompanyName() const { return m_customerCompanyName; }
    inline bool CustomerCompanyNameHasBeenSet() const { return m_customerCompanyNameHasBeenSet; }
    template<typename CustomerCompanyNameT = Aws::Vector<Aws::String>>
    void SetCustomerCompanyName(CustomerCompanyNameT&& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName = std::forward<CustomerCompanyNameT>(value); }
    template<typename CustomerCompanyNameT = Aws::Vector<Aws::String>>
    ListOpportunitiesRequest& WithCustomerCompanyName(CustomerCompanyNameT&& value) { SetCustomerCompanyName(std::forward<CustomerCompanyNameT>(value)); return *this;}
    template<typename CustomerCompanyNameT = Aws::String>
    ListOpportunitiesRequest& AddCustomerCompanyName(CustomerCompanyNameT&& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName.emplace_back(std::forward<CustomerCompanyNameT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OpportunitySort m_sort;
    bool m_sortHasBeenSet = false;

    LastModifiedDate m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::Vector<Stage> m_lifeCycleStage;
    bool m_lifeCycleStageHasBeenSet = false;

    Aws::Vector<ReviewStatus> m_lifeCycleReviewStatus;
    bool m_lifeCycleReviewStatusHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerCompanyName;
    bool m_customerCompanyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
