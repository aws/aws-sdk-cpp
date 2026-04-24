/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/model/RecommendationLanguage.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace TrustedAdvisor {
namespace Model {

/**
 */
class GetRecommendationRequest : public TrustedAdvisorRequest {
 public:
  AWS_TRUSTEDADVISOR_API GetRecommendationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetRecommendation"; }

  AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;

  AWS_TRUSTEDADVISOR_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Recommendation identifier</p>
   */
  inline const Aws::String& GetRecommendationIdentifier() const { return m_recommendationIdentifier; }
  inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }
  template <typename RecommendationIdentifierT = Aws::String>
  void SetRecommendationIdentifier(RecommendationIdentifierT&& value) {
    m_recommendationIdentifierHasBeenSet = true;
    m_recommendationIdentifier = std::forward<RecommendationIdentifierT>(value);
  }
  template <typename RecommendationIdentifierT = Aws::String>
  GetRecommendationRequest& WithRecommendationIdentifier(RecommendationIdentifierT&& value) {
    SetRecommendationIdentifier(std::forward<RecommendationIdentifierT>(value));
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
  inline GetRecommendationRequest& WithLanguage(RecommendationLanguage value) {
    SetLanguage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationIdentifier;

  RecommendationLanguage m_language{RecommendationLanguage::NOT_SET};
  bool m_recommendationIdentifierHasBeenSet = false;
  bool m_languageHasBeenSet = false;
};

}  // namespace Model
}  // namespace TrustedAdvisor
}  // namespace Aws
