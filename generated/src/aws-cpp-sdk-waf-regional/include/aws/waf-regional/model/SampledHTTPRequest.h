/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/HTTPRequest.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace WAFRegional
{
namespace Model
{

  /**
   *  <p>This is <b>AWS WAF Classic</b> documentation. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/classic-waf-chapter.html">AWS
   * WAF Classic</a> in the developer guide.</p> <p> <b>For the latest version of AWS
   * WAF</b>, use the AWS WAFV2 API and see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. With the latest version, AWS WAF has a single set of
   * endpoints for regional and global use. </p>  <p>The response from a
   * <a>GetSampledRequests</a> request includes a <code>SampledHTTPRequests</code>
   * complex type that appears as <code>SampledRequests</code> in the response
   * syntax. <code>SampledHTTPRequests</code> contains one
   * <code>SampledHTTPRequest</code> object for each web request that is returned by
   * <code>GetSampledRequests</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SampledHTTPRequest">AWS
   * API Reference</a></p>
   */
  class SampledHTTPRequest
  {
  public:
    AWS_WAFREGIONAL_API SampledHTTPRequest() = default;
    AWS_WAFREGIONAL_API SampledHTTPRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API SampledHTTPRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * to other results in the response. A result that has a weight of <code>2</code>
     * represents roughly twice as many CloudFront web requests as a result that has a
     * weight of <code>1</code>.</p>
     */
    inline long long GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(long long value) { m_weightHasBeenSet = true; m_weight = value; }
    inline SampledHTTPRequest& WithWeight(long long value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which AWS WAF received the request from your AWS resource, in
     * Unix time format (in seconds).</p>
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
     * <p>The action for the <code>Rule</code> that the request matched:
     * <code>ALLOW</code>, <code>BLOCK</code>, or <code>COUNT</code>.</p>
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
     * <p>This value is returned if the <code>GetSampledRequests</code> request
     * specifies the ID of a <code>RuleGroup</code> rather than the ID of an individual
     * rule. <code>RuleWithinRuleGroup</code> is the rule within the specified
     * <code>RuleGroup</code> that matched the request listed in the response.</p>
     */
    inline const Aws::String& GetRuleWithinRuleGroup() const { return m_ruleWithinRuleGroup; }
    inline bool RuleWithinRuleGroupHasBeenSet() const { return m_ruleWithinRuleGroupHasBeenSet; }
    template<typename RuleWithinRuleGroupT = Aws::String>
    void SetRuleWithinRuleGroup(RuleWithinRuleGroupT&& value) { m_ruleWithinRuleGroupHasBeenSet = true; m_ruleWithinRuleGroup = std::forward<RuleWithinRuleGroupT>(value); }
    template<typename RuleWithinRuleGroupT = Aws::String>
    SampledHTTPRequest& WithRuleWithinRuleGroup(RuleWithinRuleGroupT&& value) { SetRuleWithinRuleGroup(std::forward<RuleWithinRuleGroupT>(value)); return *this;}
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

    Aws::String m_ruleWithinRuleGroup;
    bool m_ruleWithinRuleGroupHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
