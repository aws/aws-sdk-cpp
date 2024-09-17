/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>
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
  class ListOrganizationRecommendationResourcesRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationRecommendationResources"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>An account affected by this organization recommendation</p>
     */
    inline const Aws::String& GetAffectedAccountId() const{ return m_affectedAccountId; }
    inline bool AffectedAccountIdHasBeenSet() const { return m_affectedAccountIdHasBeenSet; }
    inline void SetAffectedAccountId(const Aws::String& value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId = value; }
    inline void SetAffectedAccountId(Aws::String&& value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId = std::move(value); }
    inline void SetAffectedAccountId(const char* value) { m_affectedAccountIdHasBeenSet = true; m_affectedAccountId.assign(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithAffectedAccountId(const Aws::String& value) { SetAffectedAccountId(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithAffectedAccountId(Aws::String&& value) { SetAffectedAccountId(std::move(value)); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithAffectedAccountId(const char* value) { SetAffectedAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The exclusion status of the resource</p>
     */
    inline const ExclusionStatus& GetExclusionStatus() const{ return m_exclusionStatus; }
    inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
    inline void SetExclusionStatus(const ExclusionStatus& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = value; }
    inline void SetExclusionStatus(ExclusionStatus&& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = std::move(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithExclusionStatus(const ExclusionStatus& value) { SetExclusionStatus(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithExclusionStatus(ExclusionStatus&& value) { SetExclusionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOrganizationRecommendationResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Organization organization's Recommendation identifier</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const{ return m_organizationRecommendationIdentifier; }
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }
    inline void SetOrganizationRecommendationIdentifier(const Aws::String& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = value; }
    inline void SetOrganizationRecommendationIdentifier(Aws::String&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::move(value); }
    inline void SetOrganizationRecommendationIdentifier(const char* value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier.assign(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithOrganizationRecommendationIdentifier(const Aws::String& value) { SetOrganizationRecommendationIdentifier(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithOrganizationRecommendationIdentifier(Aws::String&& value) { SetOrganizationRecommendationIdentifier(std::move(value)); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithOrganizationRecommendationIdentifier(const char* value) { SetOrganizationRecommendationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS Region code of the resource</p>
     */
    inline const Aws::String& GetRegionCode() const{ return m_regionCode; }
    inline bool RegionCodeHasBeenSet() const { return m_regionCodeHasBeenSet; }
    inline void SetRegionCode(const Aws::String& value) { m_regionCodeHasBeenSet = true; m_regionCode = value; }
    inline void SetRegionCode(Aws::String&& value) { m_regionCodeHasBeenSet = true; m_regionCode = std::move(value); }
    inline void SetRegionCode(const char* value) { m_regionCodeHasBeenSet = true; m_regionCode.assign(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListOrganizationRecommendationResourcesRequest& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline ListOrganizationRecommendationResourcesRequest& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_affectedAccountId;
    bool m_affectedAccountIdHasBeenSet = false;

    ExclusionStatus m_exclusionStatus;
    bool m_exclusionStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
