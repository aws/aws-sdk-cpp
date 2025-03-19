/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/HTTPRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/model/CaptchaResponse.h>
#include <aws/wafv2/model/ChallengeResponse.h>
#include <aws/wafv2/model/HTTPHeader.h>
#include <aws/wafv2/model/Label.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>Represents a single sampled web request. The response from
   * <a>GetSampledRequests</a> includes a <code>SampledHTTPRequests</code> complex
   * type that appears as <code>SampledRequests</code> in the response syntax.
   * <code>SampledHTTPRequests</code> contains an array of
   * <code>SampledHTTPRequest</code> objects.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/SampledHTTPRequest">AWS
   * API Reference</a></p>
   */
  class SampledHTTPRequest
  {
  public:
    AWS_WAFV2_API SampledHTTPRequest() = default;
    AWS_WAFV2_API SampledHTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SampledHTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline const HTTPRequest& GetRequest() const { return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    template<typename RequestT = HTTPRequest>
    void SetRequest(RequestT&& value) { m_requestHasBeenSet = true; m_request = std::forward<RequestT>(value); }
    template<typename RequestT = HTTPRequest>
    SampledHTTPRequest& WithRequest(RequestT&& value) { SetRequest(std::forward<RequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }
    inline SampledHTTPRequest& WithWeight(long long value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which WAF received the request from your Amazon Web Services
     * resource, in Unix time format (in seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    SampledHTTPRequest& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that WAF applied to the request.</p>
     */
    inline const Aws::String& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Aws::String>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Aws::String>
    SampledHTTPRequest& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline const Aws::String& GetRuleNameWithinRuleGroup() const { return m_ruleNameWithinRuleGroup; }
    inline bool RuleNameWithinRuleGroupHasBeenSet() const { return m_ruleNameWithinRuleGroupHasBeenSet; }
    template<typename RuleNameWithinRuleGroupT = Aws::String>
    void SetRuleNameWithinRuleGroup(RuleNameWithinRuleGroupT&& value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup = std::forward<RuleNameWithinRuleGroupT>(value); }
    template<typename RuleNameWithinRuleGroupT = Aws::String>
    SampledHTTPRequest& WithRuleNameWithinRuleGroup(RuleNameWithinRuleGroupT&& value) { SetRuleNameWithinRuleGroup(std::forward<RuleNameWithinRuleGroupT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom request headers inserted by WAF into the request, according to the
     * custom request configuration for the matching rule action.</p>
     */
    inline const Aws::Vector<HTTPHeader>& GetRequestHeadersInserted() const { return m_requestHeadersInserted; }
    inline bool RequestHeadersInsertedHasBeenSet() const { return m_requestHeadersInsertedHasBeenSet; }
    template<typename RequestHeadersInsertedT = Aws::Vector<HTTPHeader>>
    void SetRequestHeadersInserted(RequestHeadersInsertedT&& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted = std::forward<RequestHeadersInsertedT>(value); }
    template<typename RequestHeadersInsertedT = Aws::Vector<HTTPHeader>>
    SampledHTTPRequest& WithRequestHeadersInserted(RequestHeadersInsertedT&& value) { SetRequestHeadersInserted(std::forward<RequestHeadersInsertedT>(value)); return *this;}
    template<typename RequestHeadersInsertedT = HTTPHeader>
    SampledHTTPRequest& AddRequestHeadersInserted(RequestHeadersInsertedT&& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted.emplace_back(std::forward<RequestHeadersInsertedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response code that was sent for the request.</p>
     */
    inline int GetResponseCodeSent() const { return m_responseCodeSent; }
    inline bool ResponseCodeSentHasBeenSet() const { return m_responseCodeSentHasBeenSet; }
    inline void SetResponseCodeSent(int value) { m_responseCodeSentHasBeenSet = true; m_responseCodeSent = value; }
    inline SampledHTTPRequest& WithResponseCodeSent(int value) { SetResponseCodeSent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Labels applied to the web request by matching rules. WAF applies fully
     * qualified labels to matching web requests. A fully qualified label is the
     * concatenation of a label namespace and a rule label. The rule's rule group or
     * web ACL defines the label namespace. </p> <p>For example,
     * <code>awswaf:111122223333:myRuleGroup:testRules:testNS1:testNS2:labelNameA</code>
     * or <code>awswaf:managed:aws:managed-rule-set:header:encoding:utf8</code>. </p>
     */
    inline const Aws::Vector<Label>& GetLabels() const { return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    template<typename LabelsT = Aws::Vector<Label>>
    void SetLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels = std::forward<LabelsT>(value); }
    template<typename LabelsT = Aws::Vector<Label>>
    SampledHTTPRequest& WithLabels(LabelsT&& value) { SetLabels(std::forward<LabelsT>(value)); return *this;}
    template<typename LabelsT = Label>
    SampledHTTPRequest& AddLabels(LabelsT&& value) { m_labelsHasBeenSet = true; m_labels.emplace_back(std::forward<LabelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>CAPTCHA</code> response for the request.</p>
     */
    inline const CaptchaResponse& GetCaptchaResponse() const { return m_captchaResponse; }
    inline bool CaptchaResponseHasBeenSet() const { return m_captchaResponseHasBeenSet; }
    template<typename CaptchaResponseT = CaptchaResponse>
    void SetCaptchaResponse(CaptchaResponseT&& value) { m_captchaResponseHasBeenSet = true; m_captchaResponse = std::forward<CaptchaResponseT>(value); }
    template<typename CaptchaResponseT = CaptchaResponse>
    SampledHTTPRequest& WithCaptchaResponse(CaptchaResponseT&& value) { SetCaptchaResponse(std::forward<CaptchaResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Challenge</code> response for the request.</p>
     */
    inline const ChallengeResponse& GetChallengeResponse() const { return m_challengeResponse; }
    inline bool ChallengeResponseHasBeenSet() const { return m_challengeResponseHasBeenSet; }
    template<typename ChallengeResponseT = ChallengeResponse>
    void SetChallengeResponse(ChallengeResponseT&& value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = std::forward<ChallengeResponseT>(value); }
    template<typename ChallengeResponseT = ChallengeResponse>
    SampledHTTPRequest& WithChallengeResponse(ChallengeResponseT&& value) { SetChallengeResponse(std::forward<ChallengeResponseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only for rule group rules that have a rule action override in place in
     * the web ACL. This is the action that the rule group rule is configured for, and
     * not the action that was applied to the request. The action that WAF applied is
     * the <code>Action</code> value. </p>
     */
    inline const Aws::String& GetOverriddenAction() const { return m_overriddenAction; }
    inline bool OverriddenActionHasBeenSet() const { return m_overriddenActionHasBeenSet; }
    template<typename OverriddenActionT = Aws::String>
    void SetOverriddenAction(OverriddenActionT&& value) { m_overriddenActionHasBeenSet = true; m_overriddenAction = std::forward<OverriddenActionT>(value); }
    template<typename OverriddenActionT = Aws::String>
    SampledHTTPRequest& WithOverriddenAction(OverriddenActionT&& value) { SetOverriddenAction(std::forward<OverriddenActionT>(value)); return *this;}
    ///@}
  private:

    HTTPRequest m_request;
    bool m_requestHasBeenSet = false;

    long long m_weight{0};
    bool m_weightHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_ruleNameWithinRuleGroup;
    bool m_ruleNameWithinRuleGroupHasBeenSet = false;

    Aws::Vector<HTTPHeader> m_requestHeadersInserted;
    bool m_requestHeadersInsertedHasBeenSet = false;

    int m_responseCodeSent{0};
    bool m_responseCodeSentHasBeenSet = false;

    Aws::Vector<Label> m_labels;
    bool m_labelsHasBeenSet = false;

    CaptchaResponse m_captchaResponse;
    bool m_captchaResponseHasBeenSet = false;

    ChallengeResponse m_challengeResponse;
    bool m_challengeResponseHasBeenSet = false;

    Aws::String m_overriddenAction;
    bool m_overriddenActionHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
