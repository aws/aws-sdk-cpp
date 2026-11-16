/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class PutAgentRecommendationPolicyRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API PutAgentRecommendationPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PutAgentRecommendationPolicy"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_WELLARCHITECTED_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The ARN of the Agent Recommendation to attach the policy to.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  PutAgentRecommendationPolicyRequest& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM resource-based policy document in JSON format. Maximum size 50KB.</p>
   */
  inline const Aws::String& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = Aws::String>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = Aws::String>
  PutAgentRecommendationPolicyRequest& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  Aws::String m_policy;
  bool m_recommendationArnHasBeenSet = false;
  bool m_policyHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
