/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/model/RuleHealth.h>
#include <aws/observabilityadmin/model/CentralizationFailureReason.h>
#include <aws/observabilityadmin/model/CentralizationRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ObservabilityAdmin
{
namespace Model
{
  class GetCentralizationRuleForOrganizationResult
  {
  public:
    AWS_OBSERVABILITYADMIN_API GetCentralizationRuleForOrganizationResult() = default;
    AWS_OBSERVABILITYADMIN_API GetCentralizationRuleForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OBSERVABILITYADMIN_API GetCentralizationRuleForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the organization centralization rule.</p>
     */
    inline const Aws::String& GetRuleName() const { return m_ruleName; }
    template<typename RuleNameT = Aws::String>
    void SetRuleName(RuleNameT&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::forward<RuleNameT>(value); }
    template<typename RuleNameT = Aws::String>
    GetCentralizationRuleForOrganizationResult& WithRuleName(RuleNameT&& value) { SetRuleName(std::forward<RuleNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the organization centralization rule.</p>
     */
    inline const Aws::String& GetRuleArn() const { return m_ruleArn; }
    template<typename RuleArnT = Aws::String>
    void SetRuleArn(RuleArnT&& value) { m_ruleArnHasBeenSet = true; m_ruleArn = std::forward<RuleArnT>(value); }
    template<typename RuleArnT = Aws::String>
    GetCentralizationRuleForOrganizationResult& WithRuleArn(RuleArnT&& value) { SetRuleArn(std::forward<RuleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Account that created the organization centralization
     * rule.</p>
     */
    inline const Aws::String& GetCreatorAccountId() const { return m_creatorAccountId; }
    template<typename CreatorAccountIdT = Aws::String>
    void SetCreatorAccountId(CreatorAccountIdT&& value) { m_creatorAccountIdHasBeenSet = true; m_creatorAccountId = std::forward<CreatorAccountIdT>(value); }
    template<typename CreatorAccountIdT = Aws::String>
    GetCentralizationRuleForOrganizationResult& WithCreatorAccountId(CreatorAccountIdT&& value) { SetCreatorAccountId(std::forward<CreatorAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the organization centralization rule was created.</p>
     */
    inline long long GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline void SetCreatedTimeStamp(long long value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }
    inline GetCentralizationRuleForOrganizationResult& WithCreatedTimeStamp(long long value) { SetCreatedTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services region where the organization centralization rule was
     * created.</p>
     */
    inline const Aws::String& GetCreatedRegion() const { return m_createdRegion; }
    template<typename CreatedRegionT = Aws::String>
    void SetCreatedRegion(CreatedRegionT&& value) { m_createdRegionHasBeenSet = true; m_createdRegion = std::forward<CreatedRegionT>(value); }
    template<typename CreatedRegionT = Aws::String>
    GetCentralizationRuleForOrganizationResult& WithCreatedRegion(CreatedRegionT&& value) { SetCreatedRegion(std::forward<CreatedRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp when the organization centralization rule was last updated.</p>
     */
    inline long long GetLastUpdateTimeStamp() const { return m_lastUpdateTimeStamp; }
    inline void SetLastUpdateTimeStamp(long long value) { m_lastUpdateTimeStampHasBeenSet = true; m_lastUpdateTimeStamp = value; }
    inline GetCentralizationRuleForOrganizationResult& WithLastUpdateTimeStamp(long long value) { SetLastUpdateTimeStamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the organization centralization rule.</p>
     */
    inline RuleHealth GetRuleHealth() const { return m_ruleHealth; }
    inline void SetRuleHealth(RuleHealth value) { m_ruleHealthHasBeenSet = true; m_ruleHealth = value; }
    inline GetCentralizationRuleForOrganizationResult& WithRuleHealth(RuleHealth value) { SetRuleHealth(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason why an organization centralization rule is marked UNHEALTHY.</p>
     */
    inline CentralizationFailureReason GetFailureReason() const { return m_failureReason; }
    inline void SetFailureReason(CentralizationFailureReason value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }
    inline GetCentralizationRuleForOrganizationResult& WithFailureReason(CentralizationFailureReason value) { SetFailureReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for the organization centralization rule.</p>
     */
    inline const CentralizationRule& GetCentralizationRule() const { return m_centralizationRule; }
    template<typename CentralizationRuleT = CentralizationRule>
    void SetCentralizationRule(CentralizationRuleT&& value) { m_centralizationRuleHasBeenSet = true; m_centralizationRule = std::forward<CentralizationRuleT>(value); }
    template<typename CentralizationRuleT = CentralizationRule>
    GetCentralizationRuleForOrganizationResult& WithCentralizationRule(CentralizationRuleT&& value) { SetCentralizationRule(std::forward<CentralizationRuleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetCentralizationRuleForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    CentralizationRule m_centralizationRule;
    bool m_centralizationRuleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
