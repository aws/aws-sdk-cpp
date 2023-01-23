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
   * and the friendly name or description of the
   * <code>RuleGroup</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RuleGroupSummary">AWS
   * API Reference</a></p>
   */
  class RuleGroupSummary
  {
  public:
    AWS_WAFREGIONAL_API RuleGroupSummary();
    AWS_WAFREGIONAL_API RuleGroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RuleGroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline const Aws::String& GetRuleGroupId() const{ return m_ruleGroupId; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline bool RuleGroupIdHasBeenSet() const { return m_ruleGroupIdHasBeenSet; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const Aws::String& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = value; }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(Aws::String&& value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId = std::move(value); }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline void SetRuleGroupId(const char* value) { m_ruleGroupIdHasBeenSet = true; m_ruleGroupId.assign(value); }

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(const Aws::String& value) { SetRuleGroupId(value); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(Aws::String&& value) { SetRuleGroupId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a <code>RuleGroup</code>. You use
     * <code>RuleGroupId</code> to get more information about a <code>RuleGroup</code>
     * (see <a>GetRuleGroup</a>), update a <code>RuleGroup</code> (see
     * <a>UpdateRuleGroup</a>), insert a <code>RuleGroup</code> into a
     * <code>WebACL</code> or delete one from a <code>WebACL</code> (see
     * <a>UpdateWebACL</a>), or delete a <code>RuleGroup</code> from AWS WAF (see
     * <a>DeleteRuleGroup</a>).</p> <p> <code>RuleGroupId</code> is returned by
     * <a>CreateRuleGroup</a> and by <a>ListRuleGroups</a>.</p>
     */
    inline RuleGroupSummary& WithRuleGroupId(const char* value) { SetRuleGroupId(value); return *this;}


    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A friendly name or description of the <a>RuleGroup</a>. You can't change the
     * name of a <code>RuleGroup</code> after you create it.</p>
     */
    inline RuleGroupSummary& WithName(const char* value) { SetName(value); return *this;}

  private:

    Aws::String m_ruleGroupId;
    bool m_ruleGroupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
