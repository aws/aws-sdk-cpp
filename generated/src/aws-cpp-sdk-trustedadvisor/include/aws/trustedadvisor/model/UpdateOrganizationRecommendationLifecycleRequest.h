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
    AWS_TRUSTEDADVISOR_API UpdateOrganizationRecommendationLifecycleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOrganizationRecommendationLifecycle"; }

    AWS_TRUSTEDADVISOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The new lifecycle stage</p>
     */
    inline UpdateRecommendationLifecycleStage GetLifecycleStage() const { return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(UpdateRecommendationLifecycleStage value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline UpdateOrganizationRecommendationLifecycleRequest& WithLifecycleStage(UpdateRecommendationLifecycleStage value) { SetLifecycleStage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation identifier for AWS Trusted Advisor Priority
     * recommendations</p>
     */
    inline const Aws::String& GetOrganizationRecommendationIdentifier() const { return m_organizationRecommendationIdentifier; }
    inline bool OrganizationRecommendationIdentifierHasBeenSet() const { return m_organizationRecommendationIdentifierHasBeenSet; }
    template<typename OrganizationRecommendationIdentifierT = Aws::String>
    void SetOrganizationRecommendationIdentifier(OrganizationRecommendationIdentifierT&& value) { m_organizationRecommendationIdentifierHasBeenSet = true; m_organizationRecommendationIdentifier = std::forward<OrganizationRecommendationIdentifierT>(value); }
    template<typename OrganizationRecommendationIdentifierT = Aws::String>
    UpdateOrganizationRecommendationLifecycleRequest& WithOrganizationRecommendationIdentifier(OrganizationRecommendationIdentifierT&& value) { SetOrganizationRecommendationIdentifier(std::forward<OrganizationRecommendationIdentifierT>(value)); return *this;}
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
    UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReason(UpdateReasonT&& value) { SetUpdateReason(std::forward<UpdateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateRecommendationLifecycleStageReasonCode GetUpdateReasonCode() const { return m_updateReasonCode; }
    inline bool UpdateReasonCodeHasBeenSet() const { return m_updateReasonCodeHasBeenSet; }
    inline void SetUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { m_updateReasonCodeHasBeenSet = true; m_updateReasonCode = value; }
    inline UpdateOrganizationRecommendationLifecycleRequest& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { SetUpdateReasonCode(value); return *this;}
    ///@}
  private:

    UpdateRecommendationLifecycleStage m_lifecycleStage{UpdateRecommendationLifecycleStage::NOT_SET};
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_organizationRecommendationIdentifier;
    bool m_organizationRecommendationIdentifierHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode{UpdateRecommendationLifecycleStageReasonCode::NOT_SET};
    bool m_updateReasonCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
