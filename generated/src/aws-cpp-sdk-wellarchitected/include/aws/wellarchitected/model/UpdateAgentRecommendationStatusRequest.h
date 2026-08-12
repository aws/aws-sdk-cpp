/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/model/RecommendationStatus.h>

#include <utility>

namespace Aws {
namespace WellArchitected {
namespace Model {

/**
 */
class UpdateAgentRecommendationStatusRequest : public WellArchitectedRequest {
 public:
  AWS_WELLARCHITECTED_API UpdateAgentRecommendationStatusRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateAgentRecommendationStatus"; }

  AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the recommendation to update.</p>
   */
  inline const Aws::String& GetRecommendationArn() const { return m_recommendationArn; }
  inline bool RecommendationArnHasBeenSet() const { return m_recommendationArnHasBeenSet; }
  template <typename RecommendationArnT = Aws::String>
  void SetRecommendationArn(RecommendationArnT&& value) {
    m_recommendationArnHasBeenSet = true;
    m_recommendationArn = std::forward<RecommendationArnT>(value);
  }
  template <typename RecommendationArnT = Aws::String>
  UpdateAgentRecommendationStatusRequest& WithRecommendationArn(RecommendationArnT&& value) {
    SetRecommendationArn(std::forward<RecommendationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new status to assign to the recommendation.</p>
   */
  inline RecommendationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(RecommendationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateAgentRecommendationStatusRequest& WithStatus(RecommendationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A free-text reason explaining this status update.</p>
   */
  inline const Aws::String& GetUpdateReason() const { return m_updateReason; }
  inline bool UpdateReasonHasBeenSet() const { return m_updateReasonHasBeenSet; }
  template <typename UpdateReasonT = Aws::String>
  void SetUpdateReason(UpdateReasonT&& value) {
    m_updateReasonHasBeenSet = true;
    m_updateReason = std::forward<UpdateReasonT>(value);
  }
  template <typename UpdateReasonT = Aws::String>
  UpdateAgentRecommendationStatusRequest& WithUpdateReason(UpdateReasonT&& value) {
    SetUpdateReason(std::forward<UpdateReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_recommendationArn;

  RecommendationStatus m_status{RecommendationStatus::NOT_SET};

  Aws::String m_updateReason;
  bool m_recommendationArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updateReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace WellArchitected
}  // namespace Aws
