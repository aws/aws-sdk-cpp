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
class GetAgentRecommendationGenerationRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API GetAgentRecommendationGenerationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAgentRecommendationGeneration"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the optimization profile associated with this generation.</p>
   */
  inline const Aws::String& GetProfileArn() const { return m_profileArn; }
  inline bool ProfileArnHasBeenSet() const { return m_profileArnHasBeenSet; }
  template <typename ProfileArnT = Aws::String>
  void SetProfileArn(ProfileArnT&& value) {
    m_profileArnHasBeenSet = true;
    m_profileArn = std::forward<ProfileArnT>(value);
  }
  template <typename ProfileArnT = Aws::String>
  GetAgentRecommendationGenerationRequest& WithProfileArn(ProfileArnT&& value) {
    SetProfileArn(std::forward<ProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the recommendation generation to retrieve.</p>
   */
  inline const Aws::String& GetGenerationId() const { return m_generationId; }
  inline bool GenerationIdHasBeenSet() const { return m_generationIdHasBeenSet; }
  template <typename GenerationIdT = Aws::String>
  void SetGenerationId(GenerationIdT&& value) {
    m_generationIdHasBeenSet = true;
    m_generationId = std::forward<GenerationIdT>(value);
  }
  template <typename GenerationIdT = Aws::String>
  GetAgentRecommendationGenerationRequest& WithGenerationId(GenerationIdT&& value) {
    SetGenerationId(std::forward<GenerationIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_profileArn;

  Aws::String m_generationId;
  bool m_profileArnHasBeenSet = false;
  bool m_generationIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
