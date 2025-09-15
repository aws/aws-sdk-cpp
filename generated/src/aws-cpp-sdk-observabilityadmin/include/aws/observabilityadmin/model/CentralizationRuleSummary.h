/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/RuleHealth.h>
#include <aws/observabilityadmin/model/CentralizationFailureReason.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p>A summary of a centralization rule's key properties and status.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/CentralizationRuleSummary">AWS
   * API Reference</a></p>
   */
  class CentralizationRuleSummary
  {
  public:
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSummary() = default;
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API CentralizationRuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the organization centralization rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    CentralizationRuleSummary& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the organization centralization rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    inline bool RuleArnHasBeenSet() const { return m_ruleArnHasBeenSet; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    CentralizationRuleSummary& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Account that created the organization centralization
     * rule.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    inline bool CreatorAccountIdHasBeenSet() const { return m_creatorAccountIdHasBeenSet; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    CentralizationRuleSummary& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the organization centralization rule was created.</p>
     */
    inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    inline void SetCreatedTimeStamp(long long value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }
    inline CentralizationRuleSummary& WithCreatedTimeStamp(long long value) { SetCreatedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where the organization centralization rule was
     * created.</p>
     */
    inline const Aws::String& GetCreatedRegion() const { return m_createdRegion; }
    inline bool CreatedRegionHasBeenSet() const { return m_createdRegionHasBeenSet; }
    template<typename CreatedRegionT = Aws::String>
    void SetCreatedRegion(CreatedRegionT&& value) { m_createdRegionHasBeenSet = true; m_createdRegion = std::forward<CreatedRegionT>(value); }
    template<typename CreatedRegionT = Aws::String>
    CentralizationRuleSummary& WithCreatedRegion(CreatedRegionT&& value) { SetCreatedRegion(std::forward<CreatedRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the organization centralization rule was last updated.</p>
     */
    inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
    inline bool LastUpdateTimeStampHasBeenSet() const { return m_lastUpdateTimeStampHasBeenSet; }
    inline void SetLastUpdateTimeStamp(long long value) { m_lastUpdateTimeStampHasBeenSet = true; m_lastUpdateTimeStamp = value; }
    inline CentralizationRuleSummary& WithLastUpdateTimeStamp(long long value) { SetLastUpdateTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the organization centralization rule.</p>
     */
    inline RuleHealth GetRuleHealth() const { return m_ruleHealth; }
    inline bool RuleHealthHasBeenSet() const { return m_ruleHealthHasBeenSet; }
    inline void SetRuleHealth(RuleHealth value) { m_ruleHealthHasBeenSet = true; m_ruleHealth = value; }
    inline CentralizationRuleSummary& WithRuleHealth(RuleHealth value) { SetRuleHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why an organization centralization rule is marked UNHEALTHY.</p>
     */
    inline CentralizationFailureReason GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    inline void SetFailureReason(CentralizationFailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline CentralizationRuleSummary& WithFailureReason(CentralizationFailureReason value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary destination account of the organization centralization rule.</p>
     */
    inline const Aws::String& GetDestinationAccountId() const { return m_destinationAccountId; }
    inline bool DestinationAccountIdHasBeenSet() const { return m_destinationAccountIdHasBeenSet; }
    template<typename DestinationAccountIdT = Aws::String>
    void SetDestinationAccountId(DestinationAccountIdT&& value) { m_destinationAccountIdHasBeenSet = true; m_destinationAccountId = std::forward<DestinationAccountIdT>(value); }
    template<typename DestinationAccountIdT = Aws::String>
    CentralizationRuleSummary& WithDestinationAccountId(DestinationAccountIdT&& value) { SetDestinationAccountId(std::forward<DestinationAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary destination region of the organization centralization rule.</p>
     */
    inline const Aws::String& GetDestinationRegion() const { return m_destinationRegion; }
    inline bool DestinationRegionHasBeenSet() const { return m_destinationRegionHasBeenSet; }
    template<typename DestinationRegionT = Aws::String>
    void SetDestinationRegion(DestinationRegionT&& value) { m_destinationRegionHasBeenSet = true; m_destinationRegion = std::forward<DestinationRegionT>(value); }
    template<typename DestinationRegionT = Aws::String>
    CentralizationRuleSummary& WithDestinationRegion(DestinationRegionT&& value) { SetDestinationRegion(std::forward<DestinationRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet = false;

    Aws::String m_ruleArn;
    bool m_ruleArnHasBeenSet = false;

    Aws::String m_creatorAccountId;
    bool m_creatorAccountIdHasBeenSet = false;

    long long m_createdTimeStamp{0};
    bool m_createdTimeStampHasBeenSet = false;

    Aws::String m_createdRegion;
    bool m_createdRegionHasBeenSet = false;

    long long m_lastUpdateTimeStamp{0};
    bool m_lastUpdateTimeStampHasBeenSet = false;

    RuleHealth m_ruleHealth{RuleHealth::NOT_SET};
    bool m_ruleHealthHasBeenSet = false;

    CentralizationFailureReason m_failureReason{CentralizationFailureReason::NOT_SET};
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_destinationAccountId;
    bool m_destinationAccountIdHasBeenSet = false;

    Aws::String m_destinationRegion;
    bool m_destinationRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
