/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/RemediationType.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace WellArchitected {
namespace Model {

/**
 */
class GetAgentRecommendationRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API GetAgentRecommendationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentRecommendation"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation to retrieve.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  GetAgentRecommendationRequest& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter on remediation type.</p>
   */
  inline RemediationType GetRemediationType() const { return m_remediationType; }
  inline bool RemediationTypeHasBeenSet() const { return m_remediationTypeHasBeenSet; }
  inline void SetRemediationType(RemediationType value) {
    m_remediationTypeHasBeenSet = true;
    m_remediationType = value;
  }
  inline GetAgentRecommendationRequest& WithRemediationType(RemediationType value) {
    SetRemediationType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  RemediationType m_remediationType{RemediationType::NOT_SET};
  bool m_recommendationArnHasBeenSet = false;
  bool m_remediationTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
