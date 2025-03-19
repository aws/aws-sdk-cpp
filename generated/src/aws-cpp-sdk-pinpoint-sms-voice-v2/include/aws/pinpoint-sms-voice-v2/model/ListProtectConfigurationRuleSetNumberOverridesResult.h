/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint-sms-voice-v2/PinpointSMSVoiceV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pinpoint-sms-voice-v2/model/ProtectConfigurationRuleSetNumberOverride.h>
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
namespace PinpointSMSVoiceV2
{
namespace Model
{
  class ListProtectConfigurationRuleSetNumberOverridesResult
  {
  public:
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult() = default;
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PINPOINTSMSVOICEV2_API ListProtectConfigurationRuleSetNumberOverridesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationArn() const { return m_protectConfigurationArn; }
    template<typename ProtectConfigurationArnT = Aws::String>
    void SetProtectConfigurationArn(ProtectConfigurationArnT&& value) { m_protectConfigurationArnHasBeenSet = true; m_protectConfigurationArn = std::forward<ProtectConfigurationArnT>(value); }
    template<typename ProtectConfigurationArnT = Aws::String>
    ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationArn(ProtectConfigurationArnT&& value) { SetProtectConfigurationArn(std::forward<ProtectConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the protect configuration.</p>
     */
    inline const Aws::String& GetProtectConfigurationId() const { return m_protectConfigurationId; }
    template<typename ProtectConfigurationIdT = Aws::String>
    void SetProtectConfigurationId(ProtectConfigurationIdT&& value) { m_protectConfigurationIdHasBeenSet = true; m_protectConfigurationId = std::forward<ProtectConfigurationIdT>(value); }
    template<typename ProtectConfigurationIdT = Aws::String>
    ListProtectConfigurationRuleSetNumberOverridesResult& WithProtectConfigurationId(ProtectConfigurationIdT&& value) { SetProtectConfigurationId(std::forward<ProtectConfigurationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of RuleSetNumberOverrides objects.</p>
     */
    inline const Aws::Vector<ProtectConfigurationRuleSetNumberOverride>& GetRuleSetNumberOverrides() const { return m_ruleSetNumberOverrides; }
    template<typename RuleSetNumberOverridesT = Aws::Vector<ProtectConfigurationRuleSetNumberOverride>>
    void SetRuleSetNumberOverrides(RuleSetNumberOverridesT&& value) { m_ruleSetNumberOverridesHasBeenSet = true; m_ruleSetNumberOverrides = std::forward<RuleSetNumberOverridesT>(value); }
    template<typename RuleSetNumberOverridesT = Aws::Vector<ProtectConfigurationRuleSetNumberOverride>>
    ListProtectConfigurationRuleSetNumberOverridesResult& WithRuleSetNumberOverrides(RuleSetNumberOverridesT&& value) { SetRuleSetNumberOverrides(std::forward<RuleSetNumberOverridesT>(value)); return *this;}
    template<typename RuleSetNumberOverridesT = ProtectConfigurationRuleSetNumberOverride>
    ListProtectConfigurationRuleSetNumberOverridesResult& AddRuleSetNumberOverrides(RuleSetNumberOverridesT&& value) { m_ruleSetNumberOverridesHasBeenSet = true; m_ruleSetNumberOverrides.emplace_back(std::forward<RuleSetNumberOverridesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to be used for the next set of paginated results. You don't need to
     * supply a value for this field in the initial request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListProtectConfigurationRuleSetNumberOverridesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProtectConfigurationRuleSetNumberOverridesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_protectConfigurationArn;
    bool m_protectConfigurationArnHasBeenSet = false;

    Aws::String m_protectConfigurationId;
    bool m_protectConfigurationIdHasBeenSet = false;

    Aws::Vector<ProtectConfigurationRuleSetNumberOverride> m_ruleSetNumberOverrides;
    bool m_ruleSetNumberOverridesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PinpointSMSVoiceV2
} // namespace Aws
