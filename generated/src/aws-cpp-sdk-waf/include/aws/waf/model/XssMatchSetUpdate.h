/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf/WAF_EXPORTS.h>
#include <aws/waf/model/ChangeAction.h>
#include <aws/waf/model/XssMatchTuple.h>
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
   * endpoints for regional and global use. </p>  <p>Specifies the part of a
   * web request that you want to inspect for cross-site scripting attacks and
   * indicates whether you want to add the specification to an <a>XssMatchSet</a> or
   * delete it from an <code>XssMatchSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-2015-08-24/XssMatchSetUpdate">AWS
   * API Reference</a></p>
   */
  class XssMatchSetUpdate
  {
  public:
    AWS_WAF_API XssMatchSetUpdate() = default;
    AWS_WAF_API XssMatchSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API XssMatchSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAF_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>INSERT</code> to add an <a>XssMatchSetUpdate</a> to an
     * <a>XssMatchSet</a>. Use <code>DELETE</code> to remove an
     * <code>XssMatchSetUpdate</code> from an <code>XssMatchSet</code>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline XssMatchSetUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the part of a web request that you want AWS WAF to inspect for
     * cross-site scripting attacks and, if you want AWS WAF to inspect a header, the
     * name of the header.</p>
     */
    inline const XssMatchTuple& GetXssMatchTuple() const { return m_xssMatchTuple; }
    inline bool XssMatchTupleHasBeenSet() const { return m_xssMatchTupleHasBeenSet; }
    template<typename XssMatchTupleT = XssMatchTuple>
    void SetXssMatchTuple(XssMatchTupleT&& value) { m_xssMatchTupleHasBeenSet = true; m_xssMatchTuple = std::forward<XssMatchTupleT>(value); }
    template<typename XssMatchTupleT = XssMatchTuple>
    XssMatchSetUpdate& WithXssMatchTuple(XssMatchTupleT&& value) { SetXssMatchTuple(std::forward<XssMatchTupleT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    XssMatchTuple m_xssMatchTuple;
    bool m_xssMatchTupleHasBeenSet = false;
  };

} // namespace Model
} // namespace WAF
} // namespace Aws
