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
  class UpdateOrganizationRecommendationLifecycleRequest : public TrustedAdvisorRequest
  {
  public:
    AWS_TRUSTEDADVISOR_API UpdateOrganizationRecommendationLifecycleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationRecommendationLifecycle"; }

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
    inline UpdateOrganizationRecommendationLifecycleRequest& WithLifecycleStage(const UpdateRecommendationLifecycleStage& value) { SetLifecycleStage(value); return *this;}

    /**
     * <p>The new lifecycle stage</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithLifecycleStage(UpdateRecommendationLifecycleStage&& value) { SetLifecycleStage(std::move(value)); return *this;}


    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const{ return m_organizationRecommendationIdentifier; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const Aws::String& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = value; }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetOrganizationRecommendationIdentifier(Aws::String&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::move(value); }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline void SetOrganizationRecommendationIdentifier(const char* value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier.assign(value); }

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithOrganizationRecommendationIdentifier(const Aws::String& value) { SetOrganizationRecommendationIdentifier(value); return *this;}

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithOrganizationRecommendationIdentifier(Aws::String&& value) { SetOrganizationRecommendationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithOrganizationRecommendationIdentifier(const char* value) { SetOrganizationRecommendationIdentifier(value); return *this;}


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
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReason(const Aws::String& value) { SetUpdateReason(value); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReason(Aws::String&& value) { SetUpdateReason(std::move(value)); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReason(const char* value) { SetUpdateReason(value); return *this;}


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
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReasonCode(const UpdateRecommendationLifecycleStageReasonCode& value) { SetUpdateReasonCode(value); return *this;}

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode&& value) { SetUpdateReasonCode(std::move(value)); return *this;}

  private:

    UpdateRecommendationLifecycleStage m_lifecycleStage;
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode;
    bool m_updateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
