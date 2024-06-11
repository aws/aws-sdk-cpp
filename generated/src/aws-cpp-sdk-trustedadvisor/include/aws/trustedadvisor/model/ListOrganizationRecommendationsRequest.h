﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>
#include <aws/trustedadvisor/model/RecommendationStatus.h>
#include <aws/trustedadvisor/model/RecommendationType.h>
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
  class ListOrganizationRecommendationsRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListOrganizationRecommendations"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline const Aws::Utils::DateTime& GetAfterLastUpdatedAt() const{ return m_afterLastUpdatedAt; }
    inline bool AfterLastUpdatedAtHasBeenSet() const { return m_afterLastUpdatedAtHasBeenSet; }
    inline void SetAfterLastUpdatedAt(const Aws::Utils::DateTime& value) { m_afterLastUpdatedAtHasBeenSet = true; m_afterLastUpdatedAt = value; }
    inline void SetAfterLastUpdatedAt(Aws::Utils::DateTime&& value) { m_afterLastUpdatedAtHasBeenSet = true; m_afterLastUpdatedAt = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithAfterLastUpdatedAt(const Aws::Utils::DateTime& value) { SetAfterLastUpdatedAt(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithAfterLastUpdatedAt(Aws::Utils::DateTime&& value) { SetAfterLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }
    inline ListOrganizationRecommendationsRequest& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsRequest& WithAwsService(const char* value) { SetAwsService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeLastUpdatedAt() const{ return m_beforeLastUpdatedAt; }
    inline bool BeforeLastUpdatedAtHasBeenSet() const { return m_beforeLastUpdatedAtHasBeenSet; }
    inline void SetBeforeLastUpdatedAt(const Aws::Utils::DateTime& value) { m_beforeLastUpdatedAtHasBeenSet = true; m_beforeLastUpdatedAt = value; }
    inline void SetBeforeLastUpdatedAt(Aws::Utils::DateTime&& value) { m_beforeLastUpdatedAtHasBeenSet = true; m_beforeLastUpdatedAt = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithBeforeLastUpdatedAt(const Aws::Utils::DateTime& value) { SetBeforeLastUpdatedAt(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithBeforeLastUpdatedAt(Aws::Utils::DateTime&& value) { SetBeforeLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline const Aws::String& GetCheckIdentifier() const{ return m_checkIdentifier; }
    inline bool CheckIdentifierHasBeenSet() const { return m_checkIdentifierHasBeenSet; }
    inline void SetCheckIdentifier(const Aws::String& value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier = value; }
    inline void SetCheckIdentifier(Aws::String&& value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier = std::move(value); }
    inline void SetCheckIdentifier(const char* value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier.assign(value); }
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(const Aws::String& value) { SetCheckIdentifier(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(Aws::String&& value) { SetCheckIdentifier(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(const char* value) { SetCheckIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOrganizationRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    inline ListOrganizationRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListOrganizationRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline const RecommendationPillar& GetPillar() const{ return m_pillar; }
    inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
    inline void SetPillar(const RecommendationPillar& value) { m_pillarHasBeenSet = true; m_pillar = value; }
    inline void SetPillar(RecommendationPillar&& value) { m_pillarHasBeenSet = true; m_pillar = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithPillar(const RecommendationPillar& value) { SetPillar(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithPillar(RecommendationPillar&& value) { SetPillar(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the Recommendation</p>
     */
    inline const RecommendationSource& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const RecommendationSource& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(RecommendationSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithSource(const RecommendationSource& value) { SetSource(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithSource(RecommendationSource&& value) { SetSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Recommendation</p>
     */
    inline const RecommendationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const RecommendationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(RecommendationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithStatus(const RecommendationStatus& value) { SetStatus(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithStatus(RecommendationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Recommendation</p>
     */
    inline const RecommendationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const RecommendationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(RecommendationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ListOrganizationRecommendationsRequest& WithType(const RecommendationType& value) { SetType(value); return *this;}
    inline ListOrganizationRecommendationsRequest& WithType(RecommendationType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterLastUpdatedAt;
    bool m_afterLastUpdatedAtHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    Aws::Utils::DateTime m_beforeLastUpdatedAt;
    bool m_beforeLastUpdatedAtHasBeenSet = false;

    Aws::String m_checkIdentifier;
    bool m_checkIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecommendationPillar m_pillar;
    bool m_pillarHasBeenSet = false;

    RecommendationSource m_source;
    bool m_sourceHasBeenSet = false;

    RecommendationStatus m_status;
    bool m_statusHasBeenSet = false;

    RecommendationType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
