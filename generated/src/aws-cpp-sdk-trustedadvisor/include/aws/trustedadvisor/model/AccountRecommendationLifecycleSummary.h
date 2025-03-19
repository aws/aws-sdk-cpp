/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/trustedadvisor/TrustedAdvisor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/trustedadvisor/model/RecommendationLifecycleStage.h>
#include <aws/trustedadvisor/model/UpdateRecommendationLifecycleStageReasonCode.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace TrustedAdvisor
{
namespace Model
{

  /**
   * <p>Summary of an AccountRecommendationLifecycle for an Organization
   * Recommendation</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/trustedadvisor-2022-09-15/AccountRecommendationLifecycleSummary">AWS
   * API Reference</a></p>
   */
  class AccountRecommendationLifecycleSummary
  {
  public:
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary() = default;
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The AWS account ID</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountRecommendationLifecycleSummary& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Recommendation ARN</p>
     */
    inline const Aws::String& GetAccountRecommendationArn() const { return m_accountRecommendationArn; }
    inline bool AccountRecommendationArnHasBeenSet() const { return m_accountRecommendationArnHasBeenSet; }
    template<typename AccountRecommendationArnT = Aws::String>
    void SetAccountRecommendationArn(AccountRecommendationArnT&& value) { m_accountRecommendationArnHasBeenSet = true; m_accountRecommendationArn = std::forward<AccountRecommendationArnT>(value); }
    template<typename AccountRecommendationArnT = Aws::String>
    AccountRecommendationLifecycleSummary& WithAccountRecommendationArn(AccountRecommendationArnT&& value) { SetAccountRecommendationArn(std::forward<AccountRecommendationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    AccountRecommendationLifecycleSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline RecommendationLifecycleStage GetLifecycleStage() const { return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(RecommendationLifecycleStage value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline AccountRecommendationLifecycleSummary& WithLifecycleStage(RecommendationLifecycleStage value) { SetLifecycleStage(value); return *this;}
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
    AccountRecommendationLifecycleSummary& WithUpdateReason(UpdateReasonT&& value) { SetUpdateReason(std::forward<UpdateReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline UpdateRecommendationLifecycleStageReasonCode GetUpdateReasonCode() const { return m_updateReasonCode; }
    inline bool UpdateReasonCodeHasBeenSet() const { return m_updateReasonCodeHasBeenSet; }
    inline void SetUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { m_updateReasonCodeHasBeenSet = true; m_updateReasonCode = value; }
    inline AccountRecommendationLifecycleSummary& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode value) { SetUpdateReasonCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline const Aws::String& GetUpdatedOnBehalfOf() const { return m_updatedOnBehalfOf; }
    inline bool UpdatedOnBehalfOfHasBeenSet() const { return m_updatedOnBehalfOfHasBeenSet; }
    template<typename UpdatedOnBehalfOfT = Aws::String>
    void SetUpdatedOnBehalfOf(UpdatedOnBehalfOfT&& value) { m_updatedOnBehalfOfHasBeenSet = true; m_updatedOnBehalfOf = std::forward<UpdatedOnBehalfOfT>(value); }
    template<typename UpdatedOnBehalfOfT = Aws::String>
    AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOf(UpdatedOnBehalfOfT&& value) { SetUpdatedOnBehalfOf(std::forward<UpdatedOnBehalfOfT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline const Aws::String& GetUpdatedOnBehalfOfJobTitle() const { return m_updatedOnBehalfOfJobTitle; }
    inline bool UpdatedOnBehalfOfJobTitleHasBeenSet() const { return m_updatedOnBehalfOfJobTitleHasBeenSet; }
    template<typename UpdatedOnBehalfOfJobTitleT = Aws::String>
    void SetUpdatedOnBehalfOfJobTitle(UpdatedOnBehalfOfJobTitleT&& value) { m_updatedOnBehalfOfJobTitleHasBeenSet = true; m_updatedOnBehalfOfJobTitle = std::forward<UpdatedOnBehalfOfJobTitleT>(value); }
    template<typename UpdatedOnBehalfOfJobTitleT = Aws::String>
    AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOfJobTitle(UpdatedOnBehalfOfJobTitleT&& value) { SetUpdatedOnBehalfOfJobTitle(std::forward<UpdatedOnBehalfOfJobTitleT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountRecommendationArn;
    bool m_accountRecommendationArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    RecommendationLifecycleStage m_lifecycleStage{RecommendationLifecycleStage::NOT_SET};
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode{UpdateRecommendationLifecycleStageReasonCode::NOT_SET};
    bool m_updateReasonCodeHasBeenSet = false;

    Aws::String m_updatedOnBehalfOf;
    bool m_updatedOnBehalfOfHasBeenSet = false;

    Aws::String m_updatedOnBehalfOfJobTitle;
    bool m_updatedOnBehalfOfJobTitleHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
