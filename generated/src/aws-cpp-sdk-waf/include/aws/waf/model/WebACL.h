/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/waf/model/WafAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/ActivatedRule.h>
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
namespace WAF
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
   * endpoints for regional and global use. </p>  <p>Contains the
   * <code>Rules</code> that identify the requests that you want to allow, block, or
   * count. In a <code>WebACL</code>, you also specify a default action
   * (<code>ALLOW</code> or <code>BLOCK</code>), and the action for each
   * <code>Rule</code> that you add to a <code>WebACL</code>, for example, block
   * requests from specified IP addresses or block requests from specified referrers.
   * You also associate the <code>WebACL</code> with a CloudFront distribution to
   * identify the requests that you want AWS WAF to filter. If you add more than one
   * <code>Rule</code> to a <code>WebACL</code>, a request needs to match only one of
   * the specifications to be allowed, blocked, or counted. For more information, see
   * <a>UpdateWebACL</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/WebACL">AWS API
   * Reference</a></p>
   */
  class WebACL
  {
  public:
    AWS_WAF_API WebACL() = default;
    AWS_WAF_API WebACL(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API WebACL& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>WebACL</code>. You use <code>WebACLId</code>
     * to get information about a <code>WebACL</code> (see <a>GetWebACL</a>), update a
     * <code>WebACL</code> (see <a>UpdateWebACL</a>), and delete a <code>WebACL</code>
     * from AWS WAF (see <a>DeleteWebACL</a>).</p> <p> <code>WebACLId</code> is
     * returned by <a>CreateWebACL</a> and by <a>ListWebACLs</a>.</p>
     */
    inline const Aws::String& GetWebACLId() const { return m_webACLId; }
    inline bool WebACLIdHasBeenSet() const { return m_webACLIdHasBeenSet; }
    template<typename WebACLIdT = Aws::String>
    void SetWebACLId(WebACLIdT&& value) { m_webACLIdHasBeenSet = true; m_webACLId = std::forward<WebACLIdT>(value); }
    template<typename WebACLIdT = Aws::String>
    WebACL& WithWebACLId(WebACLIdT&& value) { SetWebACLId(std::forward<WebACLIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <code>WebACL</code>. You can't change
     * the name of a <code>WebACL</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    WebACL& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for the metrics for this <code>WebACL</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>WebACL</code>.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    WebACL& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The action to perform if none of the <code>Rules</code> contained in the
     * <code>WebACL</code> match. The action is specified by the <a>WafAction</a>
     * object.</p>
     */
    inline const WafAction& GetDefaultAction() const { return m_defaultAction; }
    inline bool DefaultActionHasBeenSet() const { return m_defaultActionHasBeenSet; }
    template<typename DefaultActionT = WafAction>
    void SetDefaultAction(DefaultActionT&& value) { m_defaultActionHasBeenSet = true; m_defaultAction = std::forward<DefaultActionT>(value); }
    template<typename DefaultActionT = WafAction>
    WebACL& WithDefaultAction(DefaultActionT&& value) { SetDefaultAction(std::forward<DefaultActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array that contains the action for each <code>Rule</code> in a
     * <code>WebACL</code>, the priority of the <code>Rule</code>, and the ID of the
     * <code>Rule</code>.</p>
     */
    inline const Aws::Vector<ActivatedRule>& GetRules() const { return m_rules; }
    inline bool RulesHasBeenSet() const { return m_rulesHasBeenSet; }
    template<typename RulesT = Aws::Vector<ActivatedRule>>
    void SetRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules = std::forward<RulesT>(value); }
    template<typename RulesT = Aws::Vector<ActivatedRule>>
    WebACL& WithRules(RulesT&& value) { SetRules(std::forward<RulesT>(value)); return *this;}
    template<typename RulesT = ActivatedRule>
    WebACL& AddRules(RulesT&& value) { m_rulesHasBeenSet = true; m_rules.emplace_back(std::forward<RulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tha Amazon Resource Name (ARN) of the web ACL.</p>
     */
    inline const Aws::String& GetWebACLArn() const { return m_webACLArn; }
    inline bool WebACLArnHasBeenSet() const { return m_webACLArnHasBeenSet; }
    template<typename WebACLArnT = Aws::String>
    void SetWebACLArn(WebACLArnT&& value) { m_webACLArnHasBeenSet = true; m_webACLArn = std::forward<WebACLArnT>(value); }
    template<typename WebACLArnT = Aws::String>
    WebACL& WithWebACLArn(WebACLArnT&& value) { SetWebACLArn(std::forward<WebACLArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_webACLId;
    bool m_webACLIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    WafAction m_defaultAction;
    bool m_defaultActionHasBeenSet = false;

    Aws::Vector<ActivatedRule> m_rules;
    bool m_rulesHasBeenSet = false;

    Aws::String m_webACLArn;
    bool m_webACLArnHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
