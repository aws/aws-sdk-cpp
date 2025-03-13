/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
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
   * endpoints for regional and global use. </p>  <p>Contains the identifier
   * and the friendly name or description of the <code>Rule</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RuleSummary">AWS
   * API Reference</a></p>
   */
  class RuleSummary
  {
  public:
    AWS_WAFREGIONAL_API RuleSummary() = default;
    AWS_WAFREGIONAL_API RuleSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RuleSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for a <code>Rule</code>. You use <code>RuleId</code> to
     * get more information about a <code>Rule</code> (see <a>GetRule</a>), update a
     * <code>Rule</code> (see <a>UpdateRule</a>), insert a <code>Rule</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>Rule</code> from AWS WAF (see
     * <a>DeleteRule</a>).</p> <p> <code>RuleId</code> is returned by <a>CreateRule</a>
     * and by <a>ListRules</a>.</p>
     */
    inline const Aws::String& GetRuleId() const { return m_ruleId; }
    inline bool RuleIdHasBeenSet() const { return m_ruleIdHasBeenSet; }
    template<typename RuleIdT = Aws::String>
    void SetRuleId(RuleIdT&& value) { m_ruleIdHasBeenSet = true; m_ruleId = std::forward<RuleIdT>(value); }
    template<typename RuleIdT = Aws::String>
    RuleSummary& WithRuleId(RuleIdT&& value) { SetRuleId(std::forward<RuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name or description of the <a>Rule</a>. You can't change the name
     * of a <code>Rule</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    RuleSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ruleId;
    bool m_ruleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
