/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/RecommendationLanguage.h>
#include <aws/trustedadvisor/model/RecommendationPillar.h>
#include <aws/trustedadvisor/model/ResourceStatus.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace TrustedAdvisor {
namespace Model {

/**
 */
class ListRecommendationsForResourceRequest : public TrustedAdvisorRequest {
 public:
  AWS_TRUSTEDADVISOR_API ListRecommendationsForResourceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListRecommendationsForResource"; }

  AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

  AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The token for the next set of results. Use the value returned in the previous
   * response in the next request to retrieve the next set of results. </p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListRecommendationsForResourceRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return per page</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListRecommendationsForResourceRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the AWS resource to query recommendations for</p>
   */
  inline const Aws::String& GetAwsResourceArn() const { return m_awsResourceArn; }
  inline bool AwsResourceArnHasBeenSet() const { return m_awsResourceArnHasBeenSet; }
  template <typename AwsResourceArnT = Aws::String>
  void SetAwsResourceArn(AwsResourceArnT&& value) {
    m_awsResourceArnHasBeenSet = true;
    m_awsResourceArn = std::forward<AwsResourceArnT>(value);
  }
  template <typename AwsResourceArnT = Aws::String>
  ListRecommendationsForResourceRequest& WithAwsResourceArn(AwsResourceArnT&& value) {
    SetAwsResourceArn(std::forward<AwsResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pillar that the recommendation belongs to</p>
   */
  inline RecommendationPillar GetPillar() const { return m_pillar; }
  inline bool PillarHasBeenSet() const { return m_pillarHasBeenSet; }
  inline void SetPillar(RecommendationPillar value) {
    m_pillarHasBeenSet = true;
    m_pillar = value;
  }
  inline ListRecommendationsForResourceRequest& WithPillar(RecommendationPillar value) {
    SetPillar(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the Recommendation Resource</p>
   */
  inline ResourceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ResourceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ListRecommendationsForResourceRequest& WithStatus(ResourceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Trusted Advisor Check ARN that relates to the Recommendation</p>
   */
  inline const Aws::String& GetCheckArn() const { return m_checkArn; }
  inline bool CheckArnHasBeenSet() const { return m_checkArnHasBeenSet; }
  template <typename CheckArnT = Aws::String>
  void SetCheckArn(CheckArnT&& value) {
    m_checkArnHasBeenSet = true;
    m_checkArn = std::forward<CheckArnT>(value);
  }
  template <typename CheckArnT = Aws::String>
  ListRecommendationsForResourceRequest& WithCheckArn(CheckArnT&& value) {
    SetCheckArn(std::forward<CheckArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ISO 639-1 code for the language that you want your recommendations to
   * appear in.</p>
   */
  inline RecommendationLanguage GetLanguage() const { return m_language; }
  inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
  inline void SetLanguage(RecommendationLanguage value) {
    m_languageHasBeenSet = true;
    m_language = value;
  }
  inline ListRecommendationsForResourceRequest& WithLanguage(RecommendationLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_nextToken;

  int m_maxResults{0};

  Aws::String m_awsResourceArn;

  RecommendationPillar m_pillar{RecommendationPillar::NOT_SET};

  ResourceStatus m_status{ResourceStatus::NOT_SET};

  Aws::String m_checkArn;

  RecommendationLanguage m_language{RecommendationLanguage::NOT_SET};
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_awsResourceArnHasBeenSet = false;
  bool m_pillarHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_checkArnHasBeenSet = false;
  bool m_languageHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
