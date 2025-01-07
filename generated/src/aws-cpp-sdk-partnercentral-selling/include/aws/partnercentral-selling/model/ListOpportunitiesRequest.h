/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/PartnerCentralSellingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/partnercentral-selling/model/LastModifiedDate.h>
#include <aws/partnercentral-selling/model/OpportunitySort.h>
#include <aws/partnercentral-selling/model/ReviewStatus.h>
#include <aws/partnercentral-selling/model/Stage.h>
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
    AWS_PARTNERCENTRALSELLING_API ListOpportunitiesRequest();

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
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline ListOpportunitiesRequest& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline ListOpportunitiesRequest& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on the customer's company name. This allows
     * partners to search for opportunities associated with a specific customer by
     * matching the provided company name string.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomerCompanyName() const{ return m_customerCompanyName; }
    inline bool CustomerCompanyNameHasBeenSet() const { return m_customerCompanyNameHasBeenSet; }
    inline void SetCustomerCompanyName(const Aws::Vector<Aws::String>& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName = value; }
    inline void SetCustomerCompanyName(Aws::Vector<Aws::String>&& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName = std::move(value); }
    inline ListOpportunitiesRequest& WithCustomerCompanyName(const Aws::Vector<Aws::String>& value) { SetCustomerCompanyName(value); return *this;}
    inline ListOpportunitiesRequest& WithCustomerCompanyName(Aws::Vector<Aws::String>&& value) { SetCustomerCompanyName(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& AddCustomerCompanyName(const Aws::String& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName.push_back(value); return *this; }
    inline ListOpportunitiesRequest& AddCustomerCompanyName(Aws::String&& value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName.push_back(std::move(value)); return *this; }
    inline ListOpportunitiesRequest& AddCustomerCompanyName(const char* value) { m_customerCompanyNameHasBeenSet = true; m_customerCompanyName.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on the opportunity identifier. This allows
     * partners to retrieve specific opportunities by providing their unique
     * identifiers, ensuring precise results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const Aws::Vector<Aws::String>& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(Aws::Vector<Aws::String>&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline ListOpportunitiesRequest& WithIdentifier(const Aws::Vector<Aws::String>& value) { SetIdentifier(value); return *this;}
    inline ListOpportunitiesRequest& WithIdentifier(Aws::Vector<Aws::String>&& value) { SetIdentifier(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& AddIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier.push_back(value); return *this; }
    inline ListOpportunitiesRequest& AddIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier.push_back(std::move(value)); return *this; }
    inline ListOpportunitiesRequest& AddIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their last modified date. This filter
     * helps retrieve opportunities that were updated after the specified date,
     * allowing partners to track recent changes or updates.</p>
     */
    inline const LastModifiedDate& GetLastModifiedDate() const{ return m_lastModifiedDate; }
    inline bool LastModifiedDateHasBeenSet() const { return m_lastModifiedDateHasBeenSet; }
    inline void SetLastModifiedDate(const LastModifiedDate& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = value; }
    inline void SetLastModifiedDate(LastModifiedDate&& value) { m_lastModifiedDateHasBeenSet = true; m_lastModifiedDate = std::move(value); }
    inline ListOpportunitiesRequest& WithLastModifiedDate(const LastModifiedDate& value) { SetLastModifiedDate(value); return *this;}
    inline ListOpportunitiesRequest& WithLastModifiedDate(LastModifiedDate&& value) { SetLastModifiedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their current lifecycle approval status.
     * Use this filter to retrieve opportunities with statuses such as <code>Pending
     * Submission</code>, <code>In Review</code>, <code>Action Required</code>, or
     * <code>Approved</code>.</p>
     */
    inline const Aws::Vector<ReviewStatus>& GetLifeCycleReviewStatus() const{ return m_lifeCycleReviewStatus; }
    inline bool LifeCycleReviewStatusHasBeenSet() const { return m_lifeCycleReviewStatusHasBeenSet; }
    inline void SetLifeCycleReviewStatus(const Aws::Vector<ReviewStatus>& value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus = value; }
    inline void SetLifeCycleReviewStatus(Aws::Vector<ReviewStatus>&& value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus = std::move(value); }
    inline ListOpportunitiesRequest& WithLifeCycleReviewStatus(const Aws::Vector<ReviewStatus>& value) { SetLifeCycleReviewStatus(value); return *this;}
    inline ListOpportunitiesRequest& WithLifeCycleReviewStatus(Aws::Vector<ReviewStatus>&& value) { SetLifeCycleReviewStatus(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& AddLifeCycleReviewStatus(const ReviewStatus& value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus.push_back(value); return *this; }
    inline ListOpportunitiesRequest& AddLifeCycleReviewStatus(ReviewStatus&& value) { m_lifeCycleReviewStatusHasBeenSet = true; m_lifeCycleReviewStatus.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Filters the opportunities based on their lifecycle stage. This filter allows
     * partners to retrieve opportunities at various stages in the sales cycle, such as
     * <code>Qualified</code>, <code>Technical Validation</code>, <code>Business
     * Validation</code>, or <code>Closed Won</code>.</p>
     */
    inline const Aws::Vector<Stage>& GetLifeCycleStage() const{ return m_lifeCycleStage; }
    inline bool LifeCycleStageHasBeenSet() const { return m_lifeCycleStageHasBeenSet; }
    inline void SetLifeCycleStage(const Aws::Vector<Stage>& value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage = value; }
    inline void SetLifeCycleStage(Aws::Vector<Stage>&& value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage = std::move(value); }
    inline ListOpportunitiesRequest& WithLifeCycleStage(const Aws::Vector<Stage>& value) { SetLifeCycleStage(value); return *this;}
    inline ListOpportunitiesRequest& WithLifeCycleStage(Aws::Vector<Stage>&& value) { SetLifeCycleStage(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& AddLifeCycleStage(const Stage& value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage.push_back(value); return *this; }
    inline ListOpportunitiesRequest& AddLifeCycleStage(Stage&& value) { m_lifeCycleStageHasBeenSet = true; m_lifeCycleStage.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the maximum number of results to return in a single call. This
     * limits the number of opportunities returned in the response to avoid providing
     * too many results at once.</p> <p>Default: 20</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListOpportunitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOpportunitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOpportunitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that specifies how the response is sorted. The default
     * <code>Sort.SortBy</code> value is <code>LastModifiedDate</code>.</p>
     */
    inline const OpportunitySort& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const OpportunitySort& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(OpportunitySort&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline ListOpportunitiesRequest& WithSort(const OpportunitySort& value) { SetSort(value); return *this;}
    inline ListOpportunitiesRequest& WithSort(OpportunitySort&& value) { SetSort(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::Vector<Aws::String> m_customerCompanyName;
    bool m_customerCompanyNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_identifier;
    bool m_identifierHasBeenSet = false;

    LastModifiedDate m_lastModifiedDate;
    bool m_lastModifiedDateHasBeenSet = false;

    Aws::Vector<ReviewStatus> m_lifeCycleReviewStatus;
    bool m_lifeCycleReviewStatusHasBeenSet = false;

    Aws::Vector<Stage> m_lifeCycleStage;
    bool m_lifeCycleStageHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    OpportunitySort m_sort;
    bool m_sortHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
