/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/RegexMatchTuple.h>
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
   * endpoints for regional and global use. </p>  <p>In an
   * <a>UpdateRegexMatchSet</a> request, <code>RegexMatchSetUpdate</code> specifies
   * whether to insert or delete a <a>RegexMatchTuple</a> and includes the settings
   * for the <code>RegexMatchTuple</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/RegexMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class RegexMatchSetUpdate
  {
  public:
    AWS_WAF_API RegexMatchSetUpdate() = default;
    AWS_WAF_API RegexMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API RegexMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether to insert or delete a <a>RegexMatchTuple</a>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline RegexMatchSetUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the part of a web request that you want AWS WAF to inspect
     * and the identifier of the regular expression (regex) pattern that you want AWS
     * WAF to search for. If you specify <code>DELETE</code> for the value of
     * <code>Action</code>, the <code>RegexMatchTuple</code> values must exactly match
     * the values in the <code>RegexMatchTuple</code> that you want to delete from the
     * <code>RegexMatchSet</code>.</p>
     */
    inline const RegexMatchTuple& GetRegexMatchTuple() const { return m_regexMatchTuple; }
    inline bool RegexMatchTupleHasBeenSet() const { return m_regexMatchTupleHasBeenSet; }
    template<typename RegexMatchTupleT = RegexMatchTuple>
    void SetRegexMatchTuple(RegexMatchTupleT&& value) { m_regexMatchTupleHasBeenSet = true; m_regexMatchTuple = std::forward<RegexMatchTupleT>(value); }
    template<typename RegexMatchTupleT = RegexMatchTuple>
    RegexMatchSetUpdate& WithRegexMatchTuple(RegexMatchTupleT&& value) { SetRegexMatchTuple(std::forward<RegexMatchTupleT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    RegexMatchTuple m_regexMatchTuple;
    bool m_regexMatchTupleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
