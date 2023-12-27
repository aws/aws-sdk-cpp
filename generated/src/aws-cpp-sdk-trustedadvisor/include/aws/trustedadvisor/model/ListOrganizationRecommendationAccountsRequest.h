/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace TrustedAdvisor
{
namespace Model
{

  /**
   */
  class ListOrganizationRecommendationAccountsRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationRecommendationAccounts"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline const Aws::String& GetAffectedAccountId() const{ return m_affectedAccountId; }

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline bool AffectedAccountIdHasBeenSet() const { return m_affectedAccountIdHasBeenSet; }

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline void SetAffectedAccountId(const Aws::String& value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId = value; }

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline void SetAffectedAccountId(Aws::String&& value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId = std::move(value); }

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline void SetAffectedAccountId(const char* value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId.assign(value); }

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithAffectedAccountId(const Aws::String& value) { SetAffectedAccountId(value); return *this;}

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithAffectedAccountId(Aws::String&& value) { SetAffectedAccountId(std::move(value)); return *this;}

    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithAffectedAccountId(const char* value) { SetAffectedAccountId(value); return *this;}


    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const{ return m_organizationRecommendationIdentifier; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const Aws::String& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = value; }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(Aws::String&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::move(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const char* value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier.assign(value); }

    /**
     * <p>The Recommendation identifier</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithOrganizationRecommendationIdentifier(const Aws::String& value) { SetOrganizationRecommendationIdentifier(value); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithOrganizationRecommendationIdentifier(Aws::String&& value) { SetOrganizationRecommendationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Recommendation identifier</p>
     */
    inline ListOrganizationRecommendationAccountsRequest& WithOrganizationRecommendationIdentifier(const char* value) { SetOrganizationRecommendationIdentifier(value); return *this;}

  private:

    Aws::String m_affectedAccountId;
    bool m_affectedAccountIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
