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
    AWS_WAFV2_API SampledHTTPRequest();
    AWS_WAFV2_API SampledHTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API SampledHTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A complex type that contains detailed information about the request.</p>
     */
    inline const HTTPRequest& GetRequest() const{ return m_request; }
    inline bool RequestHasBeenSet() const { return m_requestHasBeenSet; }
    inline void SetRequest(const HTTPRequest& value) { m_requestHasBeenSet = true; m_request = value; }
    inline void SetRequest(HTTPRequest&& value) { m_requestHasBeenSet = true; m_request = std::move(value); }
    inline SampledHTTPRequest& WithRequest(const HTTPRequest& value) { SetRequest(value); return *this;}
    inline SampledHTTPRequest& WithRequest(HTTPRequest&& value) { SetRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that indicates how one result in the response relates proportionally
     * to other results in the response. For example, a result that has a weight of
     * <code>2</code> represents roughly twice as many web requests as a result that
     * has a weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const{ return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }
    inline SampledHTTPRequest& WithWeight(long long value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which WAF received the request from your Amazon Web Services
     * resource, in Unix time format (in seconds).</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline SampledHTTPRequest& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline SampledHTTPRequest& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action that WAF applied to the request.</p>
     */
    inline const Aws::String& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Aws::String& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Aws::String&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline void SetAction(const char* value) { m_actionHasBeenSet = true; m_action.assign(value); }
    inline SampledHTTPRequest& WithAction(const Aws::String& value) { SetAction(value); return *this;}
    inline SampledHTTPRequest& WithAction(Aws::String&& value) { SetAction(std::move(value)); return *this;}
    inline SampledHTTPRequest& WithAction(const char* value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>Rule</code> that the request matched. For managed rule
     * groups, the format for this name is <code>&lt;vendor name&gt;#&lt;managed rule
     * group name&gt;#&lt;rule name&gt;</code>. For your own rule groups, the format
     * for this name is <code>&lt;rule group name&gt;#&lt;rule name&gt;</code>. If the
     * rule is not in a rule group, this field is absent. </p>
     */
    inline const Aws::String& GetRuleNameWithinRuleGroup() const{ return m_ruleNameWithinRuleGroup; }
    inline bool RuleNameWithinRuleGroupHasBeenSet() const { return m_ruleNameWithinRuleGroupHasBeenSet; }
    inline void SetRuleNameWithinRuleGroup(const Aws::String& value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup = value; }
    inline void SetRuleNameWithinRuleGroup(Aws::String&& value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup = std::move(value); }
    inline void SetRuleNameWithinRuleGroup(const char* value) { m_ruleNameWithinRuleGroupHasBeenSet = true; m_ruleNameWithinRuleGroup.assign(value); }
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(const Aws::String& value) { SetRuleNameWithinRuleGroup(value); return *this;}
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(Aws::String&& value) { SetRuleNameWithinRuleGroup(std::move(value)); return *this;}
    inline SampledHTTPRequest& WithRuleNameWithinRuleGroup(const char* value) { SetRuleNameWithinRuleGroup(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Custom request headers inserted by WAF into the request, according to the
     * custom request configuration for the matching rule action.</p>
     */
    inline const Aws::Vector<HTTPHeader>& GetRequestHeadersInserted() const{ return m_requestHeadersInserted; }
    inline bool RequestHeadersInsertedHasBeenSet() const { return m_requestHeadersInsertedHasBeenSet; }
    inline void SetRequestHeadersInserted(const Aws::Vector<HTTPHeader>& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted = value; }
    inline void SetRequestHeadersInserted(Aws::Vector<HTTPHeader>&& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted = std::move(value); }
    inline SampledHTTPRequest& WithRequestHeadersInserted(const Aws::Vector<HTTPHeader>& value) { SetRequestHeadersInserted(value); return *this;}
    inline SampledHTTPRequest& WithRequestHeadersInserted(Aws::Vector<HTTPHeader>&& value) { SetRequestHeadersInserted(std::move(value)); return *this;}
    inline SampledHTTPRequest& AddRequestHeadersInserted(const HTTPHeader& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted.push_back(value); return *this; }
    inline SampledHTTPRequest& AddRequestHeadersInserted(HTTPHeader&& value) { m_requestHeadersInsertedHasBeenSet = true; m_requestHeadersInserted.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The response code that was sent for the request.</p>
     */
    inline int GetResponseCodeSent() const{ return m_responseCodeSent; }
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
    inline const Aws::Vector<Label>& GetLabels() const{ return m_labels; }
    inline bool LabelsHasBeenSet() const { return m_labelsHasBeenSet; }
    inline void SetLabels(const Aws::Vector<Label>& value) { m_labelsHasBeenSet = true; m_labels = value; }
    inline void SetLabels(Aws::Vector<Label>&& value) { m_labelsHasBeenSet = true; m_labels = std::move(value); }
    inline SampledHTTPRequest& WithLabels(const Aws::Vector<Label>& value) { SetLabels(value); return *this;}
    inline SampledHTTPRequest& WithLabels(Aws::Vector<Label>&& value) { SetLabels(std::move(value)); return *this;}
    inline SampledHTTPRequest& AddLabels(const Label& value) { m_labelsHasBeenSet = true; m_labels.push_back(value); return *this; }
    inline SampledHTTPRequest& AddLabels(Label&& value) { m_labelsHasBeenSet = true; m_labels.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>CAPTCHA</code> response for the request.</p>
     */
    inline const CaptchaResponse& GetCaptchaResponse() const{ return m_captchaResponse; }
    inline bool CaptchaResponseHasBeenSet() const { return m_captchaResponseHasBeenSet; }
    inline void SetCaptchaResponse(const CaptchaResponse& value) { m_captchaResponseHasBeenSet = true; m_captchaResponse = value; }
    inline void SetCaptchaResponse(CaptchaResponse&& value) { m_captchaResponseHasBeenSet = true; m_captchaResponse = std::move(value); }
    inline SampledHTTPRequest& WithCaptchaResponse(const CaptchaResponse& value) { SetCaptchaResponse(value); return *this;}
    inline SampledHTTPRequest& WithCaptchaResponse(CaptchaResponse&& value) { SetCaptchaResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Challenge</code> response for the request.</p>
     */
    inline const ChallengeResponse& GetChallengeResponse() const{ return m_challengeResponse; }
    inline bool ChallengeResponseHasBeenSet() const { return m_challengeResponseHasBeenSet; }
    inline void SetChallengeResponse(const ChallengeResponse& value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = value; }
    inline void SetChallengeResponse(ChallengeResponse&& value) { m_challengeResponseHasBeenSet = true; m_challengeResponse = std::move(value); }
    inline SampledHTTPRequest& WithChallengeResponse(const ChallengeResponse& value) { SetChallengeResponse(value); return *this;}
    inline SampledHTTPRequest& WithChallengeResponse(ChallengeResponse&& value) { SetChallengeResponse(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used only for rule group rules that have a rule action override in place in
     * the web ACL. This is the action that the rule group rule is configured for, and
     * not the action that was applied to the request. The action that WAF applied is
     * the <code>Action</code> value. </p>
     */
    inline const Aws::String& GetOverriddenAction() const{ return m_overriddenAction; }
    inline bool OverriddenActionHasBeenSet() const { return m_overriddenActionHasBeenSet; }
    inline void SetOverriddenAction(const Aws::String& value) { m_overriddenActionHasBeenSet = true; m_overriddenAction = value; }
    inline void SetOverriddenAction(Aws::String&& value) { m_overriddenActionHasBeenSet = true; m_overriddenAction = std::move(value); }
    inline void SetOverriddenAction(const char* value) { m_overriddenActionHasBeenSet = true; m_overriddenAction.assign(value); }
    inline SampledHTTPRequest& WithOverriddenAction(const Aws::String& value) { SetOverriddenAction(value); return *this;}
    inline SampledHTTPRequest& WithOverriddenAction(Aws::String&& value) { SetOverriddenAction(std::move(value)); return *this;}
    inline SampledHTTPRequest& WithOverriddenAction(const char* value) { SetOverriddenAction(value); return *this;}
    ///@}
  private:

    HTTPRequest m_request;
    bool m_requestHasBeenSet = false;

    long long m_weight;
    bool m_weightHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    Aws::String m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_ruleNameWithinRuleGroup;
    bool m_ruleNameWithinRuleGroupHasBeenSet = false;

    Aws::Vector<HTTPHeader> m_requestHeadersInserted;
    bool m_requestHeadersInsertedHasBeenSet = false;

    int m_responseCodeSent;
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
