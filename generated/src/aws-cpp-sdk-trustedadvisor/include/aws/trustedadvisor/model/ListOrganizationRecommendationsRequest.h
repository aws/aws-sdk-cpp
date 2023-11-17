/**
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


    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline const Aws::Utils::DateTime& GetAfterLastUpdatedAt() const{ return m_afterLastUpdatedAt; }

    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline bool AfterLastUpdatedAtHasBeenSet() const { return m_afterLastUpdatedAtHasBeenSet; }

    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline void SetAfterLastUpdatedAt(const Aws::Utils::DateTime& value) { m_afterLastUpdatedAtHasBeenSet = true; m_afterLastUpdatedAt = value; }

    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline void SetAfterLastUpdatedAt(Aws::Utils::DateTime&& value) { m_afterLastUpdatedAtHasBeenSet = true; m_afterLastUpdatedAt = std::move(value); }

    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithAfterLastUpdatedAt(const Aws::Utils::DateTime& value) { SetAfterLastUpdatedAt(value); return *this;}

    /**
     * <p>After the last update of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithAfterLastUpdatedAt(Aws::Utils::DateTime&& value) { SetAfterLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}

    /**
     * <p>The aws service associated with the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithAwsService(const char* value) { SetAwsService(value); return *this;}


    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline const Aws::Utils::DateTime& GetBeforeLastUpdatedAt() const{ return m_beforeLastUpdatedAt; }

    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline bool BeforeLastUpdatedAtHasBeenSet() const { return m_beforeLastUpdatedAtHasBeenSet; }

    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline void SetBeforeLastUpdatedAt(const Aws::Utils::DateTime& value) { m_beforeLastUpdatedAtHasBeenSet = true; m_beforeLastUpdatedAt = value; }

    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline void SetBeforeLastUpdatedAt(Aws::Utils::DateTime&& value) { m_beforeLastUpdatedAtHasBeenSet = true; m_beforeLastUpdatedAt = std::move(value); }

    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithBeforeLastUpdatedAt(const Aws::Utils::DateTime& value) { SetBeforeLastUpdatedAt(value); return *this;}

    /**
     * <p>Before the last update of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithBeforeLastUpdatedAt(Aws::Utils::DateTime&& value) { SetBeforeLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline const Aws::String& GetCheckIdentifier() const{ return m_checkIdentifier; }

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline bool CheckIdentifierHasBeenSet() const { return m_checkIdentifierHasBeenSet; }

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline void SetCheckIdentifier(const Aws::String& value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier = value; }

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline void SetCheckIdentifier(Aws::String&& value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier = std::move(value); }

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline void SetCheckIdentifier(const char* value) { m_checkIdentifierHasBeenSet = true; m_checkIdentifier.assign(value); }

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(const Aws::String& value) { SetCheckIdentifier(value); return *this;}

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(Aws::String&& value) { SetCheckIdentifier(std::move(value)); return *this;}

    /**
     * <p>The check identifier of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithCheckIdentifier(const char* value) { SetCheckIdentifier(value); return *this;}


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
    inline ListOrganizationRecommendationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListOrganizationRecommendationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListOrganizationRecommendationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline const RecommendationPillar& GetPillar() const{ return m_pillar; }

    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }

    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline void SetPillar(const RecommendationPillar& value) { m_pillarHasBeenSet = true; m_pillar = value; }

    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline void SetPillar(RecommendationPillar&& value) { m_pillarHasBeenSet = true; m_pillar = std::move(value); }

    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithPillar(const RecommendationPillar& value) { SetPillar(value); return *this;}

    /**
     * <p>The pillar of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithPillar(RecommendationPillar&& value) { SetPillar(std::move(value)); return *this;}


    /**
     * <p>The source of the Recommendation</p>
     */
    inline const RecommendationSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline void SetSource(const RecommendationSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline void SetSource(RecommendationSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithSource(const RecommendationSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithSource(RecommendationSource&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The status of the Recommendation</p>
     */
    inline const RecommendationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Recommendation</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Recommendation</p>
     */
    inline void SetStatus(const RecommendationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Recommendation</p>
     */
    inline void SetStatus(RecommendationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithStatus(const RecommendationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithStatus(RecommendationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the Recommendation</p>
     */
    inline const RecommendationType& GetType() const{ return m_type; }

    /**
     * <p>The type of the Recommendation</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the Recommendation</p>
     */
    inline void SetType(const RecommendationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the Recommendation</p>
     */
    inline void SetType(RecommendationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithType(const RecommendationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the Recommendation</p>
     */
    inline ListOrganizationRecommendationsRequest& WithType(RecommendationType&& value) { SetType(std::move(value)); return *this;}

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
