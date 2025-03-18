/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/trustedadvisor/TrustedAdvisorRequest.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStage.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStageReasonCode.h>
#include <utility>

namespace Aws
{
namespace TrustedAdvisor
{
namespace Model
{

  /**
   */
  class UpdateRecommendationLifecycleRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API UpdateRecommendationLifecycleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommendationLifecycle"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The new lifecycle stage</p>
     */
    inline UpdateRecommendationLifecycleStage GetLifecycleStage() const { return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(UpdateRecommendationLifecycleStage value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline UpdateRecommendationLifecycleRequest& WithLifecycleStage(UpdateRecommendationLifecycleStage value) { SetLifecycleStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const { return m_recommendationIdentifier; }
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }
    template<typename RecommendationIdentifierT = Aws::String>
    void SetRecommendationIdentifier(RecommendationIdentifierT&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::forward<RecommendationIdentifierT>(value); }
    template<typename RecommendationIdentifierT = Aws::String>
    UpdateRecommendationLifecycleRequest& WithRecommendationIdentifier(RecommendationIdentifierT&& value) { SetRecommendationIdentifier(std::forward<RecommendationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline const Aws::String& GetUpdateReason() const { return m_updateReason; }
    inline bool UpdateReasonHasBeenSet() const { return m_updateReasonHasBeenSet; }
    template<typename UpdateReasonT = Aws::String>
    void SetUpdateReason(UpdateReasonT&& value) { m_updateReasonHasBeenSet = true; m_updateReason = std::forward<UpdateReasonT>(value); }
    template<typename UpdateReasonT = Aws::String>
    UpdateRecommendationLifecycleRequest& WithUpdateReason(UpdateReasonT&& value) { SetUpdateReason(std::forward<UpdateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateRecommendationLifecycleStageReasonCode GetUpdateReasonCode() const { return m_updateReasonCode; }
    inline bool UpdateReasonCodeHasBeenSet() const { return m_updateReasonCodeHasBeenSet; }
    inline void SetUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { m_updateReasonCodeHasBeenSet = true; m_updateReasonCode = value; }
    inline UpdateRecommendationLifecycleRequest& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { SetUpdateReasonCode(value); return *this;}
    ///@}
  private:

    UpdateRecommendationLifecycleStage m_lifecycleStage{UpdateRecommendationLifecycleStage::NOT_SET};
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode{UpdateRecommendationLifecycleStageReasonCode::NOT_SET};
    bool m_updateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
