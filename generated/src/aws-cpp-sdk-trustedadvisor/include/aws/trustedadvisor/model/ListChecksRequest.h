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
    AWS_TRUSTEDADVISOR_API ListChecksRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChecks"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

    AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The aws service associated with the check</p>
     */
    inline const Aws::String& GetAwsService() const { return m_awsService; }
    inline bool AwsServiceHasBeenSet() const { return m_awsServiceHasBeenSet; }
    template<typename AwsServiceT = Aws::String>
    void SetAwsService(AwsServiceT&& value) { m_awsServiceHasBeenSet = true; m_awsService = std::forward<AwsServiceT>(value); }
    template<typename AwsServiceT = Aws::String>
    ListChecksRequest& WithAwsService(AwsServiceT&& value) { SetAwsService(std::forward<AwsServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ISO 639-1 code for the language that you want your checks to appear
     * in.</p>
     */
    inline RecommendationLanguage GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(RecommendationLanguage value) { m_languageHasBeenSet = true; m_language = value; }
    inline ListChecksRequest& WithLanguage(RecommendationLanguage value) { SetLanguage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListChecksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    ListChecksRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The pillar of the check</p>
     */
    inline RecommendationPillar GetPillar() const { return m_pillar; }
    inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
    inline void SetPillar(RecommendationPillar value) { m_pillarHasBeenSet = true; m_pillar = value; }
    inline ListChecksRequest& WithPillar(RecommendationPillar value) { SetPillar(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source of the check</p>
     */
    inline RecommendationSource GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(RecommendationSource value) { m_sourceHasBeenSet = true; m_source = value; }
    inline ListChecksRequest& WithSource(RecommendationSource value) { SetSource(value); return *this;}
    ///@}
  private:

    Aws::String m_awsService;
    bool m_awsServiceHasBeenSet = false;

    RecommendationLanguage m_language{RecommendationLanguage::NOT_SET};
    bool m_languageHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    RecommendationPillar m_pillar{RecommendationPillar::NOT_SET};
    bool m_pillarHasBeenSet = false;

    RecommendationSource m_source{RecommendationSource::NOT_SET};
    bool m_sourceHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
