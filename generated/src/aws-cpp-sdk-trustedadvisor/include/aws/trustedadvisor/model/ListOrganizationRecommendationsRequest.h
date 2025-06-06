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
    AWS_TRUSTEDADVISOR_API ListOrganizationRecommendationsRequest() = default;

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
    inline const Aws::Utils::DateTime& GetAfterLastUpdatedAt() const { return m_afterLastUpdatedAt; }
    inline bool AfterLastUpdatedAtHasBeenSet() const { return m_afterLastUpdatedAtHasBeenSet; }
    template<typename AfterLastUpdatedAtT = Aws::Utils::DateTime>
    void SetAfterLastUpdatedAt(AfterLastUpdatedAtT&& value) { m_afterLastUpdatedAtHasBeenSet = true; m_afterLastUpdatedAt = std::forward<AfterLastUpdatedAtT>(value); }
    template<typename AfterLastUpdatedAtT = Aws::Utils::DateTime>
    ListOrganizationRecommendationsRequest& WithAfterLastUpdatedAt(AfterLastUpdatedAtT&& value) { SetAfterLastUpdatedAt(std::forward<AfterLastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline const Aws::String& GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    template<typename AwsServiceT = Aws::String>
    void SetAwsService(AwsServiceT&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::forward<AwsServiceT>(value); }
    template<typename AwsServiceT = Aws::String>
    ListOrganizationRecommendationsRequest& WithAwsService(AwsServiceT&& value) { SetAwsService(std::forward<AwsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeLastUpdatedAt() const { return m_beforeLastUpdatedAt; }
    inline bool BeforeLastUpdatedAtHasBeenSet() const { return m_beforeLastUpdatedAtHasBeenSet; }
    template<typename BeforeLastUpdatedAtT = Aws::Utils::DateTime>
    void SetBeforeLastUpdatedAt(BeforeLastUpdatedAtT&& value) { m_beforeLastUpdatedAtHasBeenSet = true; m_beforeLastUpdatedAt = std::forward<BeforeLastUpdatedAtT>(value); }
    template<typename BeforeLastUpdatedAtT = Aws::Utils::DateTime>
    ListOrganizationRecommendationsRequest& WithBeforeLastUpdatedAt(BeforeLastUpdatedAtT&& value) { SetBeforeLastUpdatedAt(std::forward<BeforeLastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline const Aws::String& GetCheckIdentifier() const { return m_checkIdentifier; }
    inline bool CheckIdentifierHasBeenSet() const { return m_checkIdentifierHasBeenSet; }
    template<typename CheckIdentifierT = Aws::String>
    void SetCheckIdentifier(CheckIdentifierT&& value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier = std::forward<CheckIdentifierT>(value); }
    template<typename CheckIdentifierT = Aws::String>
    ListOrganizationRecommendationsRequest& WithCheckIdentifier(CheckIdentifierT&& value) { SetCheckIdentifier(std::forward<CheckIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListOrganizationRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOrganizationRecommendationsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline RecommendationPillar GetPillar() const { return m_pillar; }
    inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
    inline void SetPillar(RecommendationPillar value) { m_pillarHasBeenSet = true; m_pillar = value; }
    inline ListOrganizationRecommendationsRequest& WithPillar(RecommendationPillar value) { SetPillar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the Recommendation</p>
     */
    inline RecommendationSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(RecommendationSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline ListOrganizationRecommendationsRequest& WithSource(RecommendationSource value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Recommendation</p>
     */
    inline RecommendationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RecommendationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListOrganizationRecommendationsRequest& WithStatus(RecommendationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Recommendation</p>
     */
    inline RecommendationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(RecommendationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ListOrganizationRecommendationsRequest& WithType(RecommendationType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_afterLastUpdatedAt{};
    bool m_afterLastUpdatedAtHasBeenSet = false;

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    Aws::Utils::DateTime m_beforeLastUpdatedAt{};
    bool m_beforeLastUpdatedAtHasBeenSet = false;

    Aws::String m_checkIdentifier;
    bool m_checkIdentifierHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecommendationPillar m_pillar{RecommendationPillar::NOT_SET};
    bool m_pillarHasBeenSet = false;

    RecommendationSource m_source{RecommendationSource::NOT_SET};
    bool m_sourceHasBeenSet = false;

    RecommendationStatus m_status{RecommendationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    RecommendationType m_type{RecommendationType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
