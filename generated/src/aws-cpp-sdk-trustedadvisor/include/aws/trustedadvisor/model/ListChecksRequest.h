/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/RecommendationLanguage.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/RecommendationSource.h>
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
  class ListChecksRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API ListChecksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChecks"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The aws service associated with the check</p>
     */
    inline const Aws::String& GetAwsService() const{ return m_awsService; }

    /**
     * <p>The aws service associated with the check</p>
     */
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }

    /**
     * <p>The aws service associated with the check</p>
     */
    inline void SetAwsService(const Aws::String& value) { m_awsServiceHasBeenSet = true; m_awsService = value; }

    /**
     * <p>The aws service associated with the check</p>
     */
    inline void SetAwsService(Aws::String&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::move(value); }

    /**
     * <p>The aws service associated with the check</p>
     */
    inline void SetAwsService(const char* value) { m_awsServiceHasBeenSet = true; m_awsService.assign(value); }

    /**
     * <p>The aws service associated with the check</p>
     */
    inline ListChecksRequest& WithAwsService(const Aws::String& value) { SetAwsService(value); return *this;}

    /**
     * <p>The aws service associated with the check</p>
     */
    inline ListChecksRequest& WithAwsService(Aws::String&& value) { SetAwsService(std::move(value)); return *this;}

    /**
     * <p>The aws service associated with the check</p>
     */
    inline ListChecksRequest& WithAwsService(const char* value) { SetAwsService(value); return *this;}


    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline const RecommendationLanguage& GetLanguage() const{ return m_language; }

    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline void SetLanguage(const RecommendationLanguage& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline void SetLanguage(RecommendationLanguage&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline ListChecksRequest& WithLanguage(const RecommendationLanguage& value) { SetLanguage(value); return *this;}

    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline ListChecksRequest& WithLanguage(RecommendationLanguage&& value) { SetLanguage(std::move(value)); return *this;}


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
    inline ListChecksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListChecksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListChecksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results. </p>
     */
    inline ListChecksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The pillar of the check</p>
     */
    inline const RecommendationPillar& GetPillar() const{ return m_pillar; }

    /**
     * <p>The pillar of the check</p>
     */
    inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }

    /**
     * <p>The pillar of the check</p>
     */
    inline void SetPillar(const RecommendationPillar& value) { m_pillarHasBeenSet = true; m_pillar = value; }

    /**
     * <p>The pillar of the check</p>
     */
    inline void SetPillar(RecommendationPillar&& value) { m_pillarHasBeenSet = true; m_pillar = std::move(value); }

    /**
     * <p>The pillar of the check</p>
     */
    inline ListChecksRequest& WithPillar(const RecommendationPillar& value) { SetPillar(value); return *this;}

    /**
     * <p>The pillar of the check</p>
     */
    inline ListChecksRequest& WithPillar(RecommendationPillar&& value) { SetPillar(std::move(value)); return *this;}


    /**
     * <p>The source of the check</p>
     */
    inline const RecommendationSource& GetSource() const{ return m_source; }

    /**
     * <p>The source of the check</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The source of the check</p>
     */
    inline void SetSource(const RecommendationSource& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The source of the check</p>
     */
    inline void SetSource(RecommendationSource&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The source of the check</p>
     */
    inline ListChecksRequest& WithSource(const RecommendationSource& value) { SetSource(value); return *this;}

    /**
     * <p>The source of the check</p>
     */
    inline ListChecksRequest& WithSource(RecommendationSource&& value) { SetSource(std::move(value)); return *this;}

  private:

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    RecommendationLanguage m_language;
    bool m_languageHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecommendationPillar m_pillar;
    bool m_pillarHasBeenSet = false;

    RecommendationSource m_source;
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
