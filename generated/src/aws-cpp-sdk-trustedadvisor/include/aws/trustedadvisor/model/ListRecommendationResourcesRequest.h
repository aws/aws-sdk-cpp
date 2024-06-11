﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/model/ExclusionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListRecommendationResourcesRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListRecommendationResourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationResources"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The exclusion status of the resource</p>
     */
    inline const ExclusionStatus& GetExclusionStatus() const{ return m_exclusionStatus; }
    inline bool ExclusionStatusHasBeenSet() const { return m_exclusionStatusHasBeenSet; }
    inline void SetExclusionStatus(const ExclusionStatus& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = value; }
    inline void SetExclusionStatus(ExclusionStatus&& value) { m_exclusionStatusHasBeenSet = true; m_exclusionStatus = std::move(value); }
    inline ListRecommendationResourcesRequest& WithExclusionStatus(const ExclusionStatus& value) { SetExclusionStatus(value); return *this;}
    inline ListRecommendationResourcesRequest& WithExclusionStatus(ExclusionStatus&& value) { SetExclusionStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRecommendationResourcesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListRecommendationResourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListRecommendationResourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListRecommendationResourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation identifier</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const{ return m_recommendationIdentifier; }
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }
    inline void SetRecommendationIdentifier(const Aws::String& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = value; }
    inline void SetRecommendationIdentifier(Aws::String&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::move(value); }
    inline void SetRecommendationIdentifier(const char* value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier.assign(value); }
    inline ListRecommendationResourcesRequest& WithRecommendationIdentifier(const Aws::String& value) { SetRecommendationIdentifier(value); return *this;}
    inline ListRecommendationResourcesRequest& WithRecommendationIdentifier(Aws::String&& value) { SetRecommendationIdentifier(std::move(value)); return *this;}
    inline ListRecommendationResourcesRequest& WithRecommendationIdentifier(const char* value) { SetRecommendationIdentifier(value); return *this;}
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
    inline ListRecommendationResourcesRequest& WithRegionCode(const Aws::String& value) { SetRegionCode(value); return *this;}
    inline ListRecommendationResourcesRequest& WithRegionCode(Aws::String&& value) { SetRegionCode(std::move(value)); return *this;}
    inline ListRecommendationResourcesRequest& WithRegionCode(const char* value) { SetRegionCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the resource</p>
     */
    inline const ResourceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ResourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ResourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListRecommendationResourcesRequest& WithStatus(const ResourceStatus& value) { SetStatus(value); return *this;}
    inline ListRecommendationResourcesRequest& WithStatus(ResourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    ExclusionStatus m_exclusionStatus;
    bool m_exclusionStatusHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;

    Aws::String m_regionCode;
    bool m_regionCodeHasBeenSet = false;

    ResourceStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
