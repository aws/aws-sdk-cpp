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
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary();
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API AccountRecommendationLifecycleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRUSTEDADVISOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The AWS account ID</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The AWS account ID</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The AWS account ID</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The AWS account ID</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The AWS account ID</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The AWS account ID</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The AWS account ID</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Recommendation ARN</p>
     */
    inline const Aws::String& GetAccountRecommendationArn() const{ return m_accountRecommendationArn; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline bool AccountRecommendationArnHasBeenSet() const { return m_accountRecommendationArnHasBeenSet; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetAccountRecommendationArn(const Aws::String& value) { m_accountRecommendationArnHasBeenSet = true; m_accountRecommendationArn = value; }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetAccountRecommendationArn(Aws::String&& value) { m_accountRecommendationArnHasBeenSet = true; m_accountRecommendationArn = std::move(value); }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline void SetAccountRecommendationArn(const char* value) { m_accountRecommendationArnHasBeenSet = true; m_accountRecommendationArn.assign(value); }

    /**
     * <p>The Recommendation ARN</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountRecommendationArn(const Aws::String& value) { SetAccountRecommendationArn(value); return *this;}

    /**
     * <p>The Recommendation ARN</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountRecommendationArn(Aws::String&& value) { SetAccountRecommendationArn(std::move(value)); return *this;}

    /**
     * <p>The Recommendation ARN</p>
     */
    inline AccountRecommendationLifecycleSummary& WithAccountRecommendationArn(const char* value) { SetAccountRecommendationArn(value); return *this;}


    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline AccountRecommendationLifecycleSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>When the Recommendation was last updated</p>
     */
    inline AccountRecommendationLifecycleSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline const RecommendationLifecycleStage& GetLifecycleStage() const{ return m_lifecycleStage; }

    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }

    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline void SetLifecycleStage(const RecommendationLifecycleStage& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }

    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline void SetLifecycleStage(RecommendationLifecycleStage&& value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = std::move(value); }

    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline AccountRecommendationLifecycleSummary& WithLifecycleStage(const RecommendationLifecycleStage& value) { SetLifecycleStage(value); return *this;}

    /**
     * <p>The lifecycle stage from AWS Trusted Advisor Priority</p>
     */
    inline AccountRecommendationLifecycleSummary& WithLifecycleStage(RecommendationLifecycleStage&& value) { SetLifecycleStage(std::move(value)); return *this;}


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
    inline AccountRecommendationLifecycleSummary& WithUpdateReason(const Aws::String& value) { SetUpdateReason(value); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdateReason(Aws::String&& value) { SetUpdateReason(std::move(value)); return *this;}

    /**
     * <p>Reason for the lifecycle stage change</p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdateReason(const char* value) { SetUpdateReason(value); return *this;}


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
    inline AccountRecommendationLifecycleSummary& WithUpdateReasonCode(const UpdateRecommendationLifecycleStageReasonCode& value) { SetUpdateReasonCode(value); return *this;}

    /**
     * <p>Reason code for the lifecycle state change</p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdateReasonCode(UpdateRecommendationLifecycleStageReasonCode&& value) { SetUpdateReasonCode(std::move(value)); return *this;}


    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline const Aws::String& GetUpdatedOnBehalfOf() const{ return m_updatedOnBehalfOf; }

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline bool UpdatedOnBehalfOfHasBeenSet() const { return m_updatedOnBehalfOfHasBeenSet; }

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline void SetUpdatedOnBehalfOf(const Aws::String& value) { m_updatedOnBehalfOfHasBeenSet = true; m_updatedOnBehalfOf = value; }

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline void SetUpdatedOnBehalfOf(Aws::String&& value) { m_updatedOnBehalfOfHasBeenSet = true; m_updatedOnBehalfOf = std::move(value); }

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline void SetUpdatedOnBehalfOf(const char* value) { m_updatedOnBehalfOfHasBeenSet = true; m_updatedOnBehalfOf.assign(value); }

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOf(const Aws::String& value) { SetUpdatedOnBehalfOf(value); return *this;}

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOf(Aws::String&& value) { SetUpdatedOnBehalfOf(std::move(value)); return *this;}

    /**
     * <p>The person on whose behalf a Technical Account Manager (TAM) updated the
     * recommendation. This information is only available when a Technical Account
     * Manager takes an action on a recommendation managed by AWS Trusted Advisor
     * Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOf(const char* value) { SetUpdatedOnBehalfOf(value); return *this;}


    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline const Aws::String& GetUpdatedOnBehalfOfJobTitle() const{ return m_updatedOnBehalfOfJobTitle; }

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline bool UpdatedOnBehalfOfJobTitleHasBeenSet() const { return m_updatedOnBehalfOfJobTitleHasBeenSet; }

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline void SetUpdatedOnBehalfOfJobTitle(const Aws::String& value) { m_updatedOnBehalfOfJobTitleHasBeenSet = true; m_updatedOnBehalfOfJobTitle = value; }

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline void SetUpdatedOnBehalfOfJobTitle(Aws::String&& value) { m_updatedOnBehalfOfJobTitleHasBeenSet = true; m_updatedOnBehalfOfJobTitle = std::move(value); }

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline void SetUpdatedOnBehalfOfJobTitle(const char* value) { m_updatedOnBehalfOfJobTitleHasBeenSet = true; m_updatedOnBehalfOfJobTitle.assign(value); }

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOfJobTitle(const Aws::String& value) { SetUpdatedOnBehalfOfJobTitle(value); return *this;}

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOfJobTitle(Aws::String&& value) { SetUpdatedOnBehalfOfJobTitle(std::move(value)); return *this;}

    /**
     * <p>The job title of the person on whose behalf a Technical Account Manager (TAM)
     * updated the recommendation. This information is only available when a Technical
     * Account Manager takes an action on a recommendation managed by AWS Trusted
     * Advisor Priority </p>
     */
    inline AccountRecommendationLifecycleSummary& WithUpdatedOnBehalfOfJobTitle(const char* value) { SetUpdatedOnBehalfOfJobTitle(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_accountRecommendationArn;
    bool m_accountRecommendationArnHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    RecommendationLifecycleStage m_lifecycleStage;
    bool m_lifecycleStageHasBeenSet = false;

    Aws::String m_updateReason;
    bool m_updateReasonHasBeenSet = false;

    UpdateRecommendationLifecycleStageReasonCode m_updateReasonCode;
    bool m_updateReasonCodeHasBeenSet = false;

    Aws::String m_updatedOnBehalfOf;
    bool m_updatedOnBehalfOfHasBeenSet = false;

    Aws::String m_updatedOnBehalfOfJobTitle;
    bool m_updatedOnBehalfOfJobTitleHasBeenSet = false;
  };

} // namespace Model
} // namespace TrustedAdvisor
} // namespace Aws
