/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/waf/model/Predicate.h>
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
   * endpoints for regional and global use. </p>  <p>A combination of
   * <a>ByteMatchSet</a>, <a>IPSet</a>, and/or <a>SqlInjectionMatchSet</a> objects
   * that identify the web requests that you want to allow, block, or count. For
   * example, you might create a <code>Rule</code> that includes the following
   * predicates:</p> <ul> <li> <p>An <code>IPSet</code> that causes AWS WAF to search
   * for web requests that originate from the IP address <code>192.0.2.44</code> </p>
   * </li> <li> <p>A <code>ByteMatchSet</code> that causes AWS WAF to search for web
   * requests for which the value of the <code>User-Agent</code> header is
   * <code>BadBot</code>.</p> </li> </ul> <p>To match the settings in this
   * <code>Rule</code>, a request must originate from <code>192.0.2.44</code> AND
   * include a <code>User-Agent</code> header for which the value is
   * <code>BadBot</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/Rule">AWS API
   * Reference</a></p>
   */
  class Rule
  {
  public:
    AWS_WAF_API Rule() = default;
    AWS_WAF_API Rule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Rule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete a one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    Rule& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name or description for the <code>Rule</code>. You can't change
     * the name of a <code>Rule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Rule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description for the metrics for this <code>Rule</code>.
     * The name can contain only alphanumeric characters (A-Z, a-z, 0-9), with maximum
     * length 128 and minimum length one. It can't contain whitespace or metric names
     * reserved for AWS WAF, including "All" and "Default_Action." You can't change
     * <code>MetricName</code> after you create the <code>Rule</code>.</p>
     */
    inline const Aws::String& GetMetricName() const { return m_metricName; }
    inline bool MetricNameHasBeenSet() const { return m_metricNameHasBeenSet; }
    template<typename MetricNameT = Aws::String>
    void SetMetricName(MetricNameT&& value) { m_metricNameHasBeenSet = true; m_metricName = std::forward<MetricNameT>(value); }
    template<typename MetricNameT = Aws::String>
    Rule& WithMetricName(MetricNameT&& value) { SetMetricName(std::forward<MetricNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>Predicates</code> object contains one <code>Predicate</code>
     * element for each <a>ByteMatchSet</a>, <a>IPSet</a>, or
     * <a>SqlInjectionMatchSet</a> object that you want to include in a
     * <code>Rule</code>.</p>
     */
    inline const Aws::Vector<Predicate>& GetPredicates() const { return m_predicates; }
    inline bool PredicatesHasBeenSet() const { return m_predicatesHasBeenSet; }
    template<typename PredicatesT = Aws::Vector<Predicate>>
    void SetPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates = std::forward<PredicatesT>(value); }
    template<typename PredicatesT = Aws::Vector<Predicate>>
    Rule& WithPredicates(PredicatesT&& value) { SetPredicates(std::forward<PredicatesT>(value)); return *this;}
    template<typename PredicatesT = Predicate>
    Rule& AddPredicates(PredicatesT&& value) { m_predicatesHasBeenSet = true; m_predicates.emplace_back(std::forward<PredicatesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_metricName;
    bool m_metricNameHasBeenSet = false;

    Aws::Vector<Predicate> m_predicates;
    bool m_predicatesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
