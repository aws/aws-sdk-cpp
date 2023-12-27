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
    AWS_TRUSTEDADVISOR_API UpdateRecommendationLifecycleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRecommendationLifecycle"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The new lifecycle stage</p>
     */
    inline const UpdateRecommendationLifecycleStage& GetLifecycleStage() const{ return m_lifecycleStage; }

    /**
     * <p>The new lifecycle stage</p>
     */
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }

    /**
     * <p>The new lifecycle stage</p>
     */
    inline void SetLifecycleStage(const UpdateRecommendationLifecycleStage& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }

    /**
     * <p>The new lifecycle stage</p>
     */
    inline void SetLifecycleStage(UpdateRecommendationLifecycleStage&& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = std::move(value); }

    /**
     * <p>The new lifecycle stage</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithLifecycleStage(const UpdateRecommendationLifecycleStage& value) { SetLifecycleStage(value); return *this;}

    /**
     * <p>The new lifecycle stage</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithLifecycleStage(UpdateRecommendationLifecycleStage&& value) { SetLifecycleStage(std::move(value)); return *this;}


    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline const Aws::String& GetRecommendationIdentifier() const{ return m_recommendationIdentifier; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline bool RecommendationIdentifierHasBeenSet() const { return m_recommendationIdentifierHasBeenSet; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetRecommendationIdentifier(const Aws::String& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = value; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetRecommendationIdentifier(Aws::String&& value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier = std::move(value); }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetRecommendationIdentifier(const char* value) { m_recommendationIdentifierHasBeenSet = true; m_recommendationIdentifier.assign(value); }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithRecommendationIdentifier(const Aws::String& value) { SetRecommendationIdentifier(value); return *this;}

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithRecommendationIdentifier(Aws::String&& value) { SetRecommendationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithRecommendationIdentifier(const char* value) { SetRecommendationIdentifier(value); return *this;}


    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline const Aws::String& GetUpdateReason() const{ return m_updateReason; }

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline bool UpdateReasonHasBeenSet() const { return m_updateReasonHasBeenSet; }

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline void SetUpdateReason(const Aws::String& value) { m_updateReasonHasBeenSet = true; m_updateReason = value; }

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline void SetUpdateReason(Aws::String&& value) { m_updateReasonHasBeenSet = true; m_updateReason = std::move(value); }

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline void SetUpdateReason(const char* value) { m_updateReasonHasBeenSet = true; m_updateReason.assign(value); }

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithUpdateReason(const Aws::String& value) { SetUpdateReason(value); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithUpdateReason(Aws::String&& value) { SetUpdateReason(std::move(value)); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithUpdateReason(const char* value) { SetUpdateReason(value); return *this;}


    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline const UpdateRecommendationLifecycleStageReasonCode& GetUpdateReasonCode() const{ return m_updateReasonCode; }

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline bool UpdateReasonCodeHasBeenSet() const { return m_updateReasonCodeHasBeenSet; }

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline void SetUpdateReasonCode(const UpdateRecommendationLifecycleStageReasonCode& value) { m_updateReasonCodeHasBeenSet = true; m_updateReasonCode = value; }

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline void SetUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode&& value) { m_updateReasonCodeHasBeenSet = true; m_updateReasonCode = std::move(value); }

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithUpdateReasonCode(const UpdateRecommendationLifecycleStageReasonCode& value) { SetUpdateReasonCode(value); return *this;}

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateRecommendationLifecycleRequest& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode&& value) { SetUpdateReasonCode(std::move(value)); return *this;}

  private:

    UpdateRecommendationLifecycleStage m_lifecycleStage;
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_recommendationIdentifier;
    bool m_recommendationIdentifierHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode;
    bool m_updateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
