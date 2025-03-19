/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/SizeConstraint.h>
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
   * endpoints for regional and global use. </p>  <p>Specifies the part of a
   * web request that you want to inspect the size of and indicates whether you want
   * to add the specification to a <a>SizeConstraintSet</a> or delete it from a
   * <code>SizeConstraintSet</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/SizeConstraintSetUpdate">AWS
   * API Reference</a></p>
   */
  class SizeConstraintSetUpdate
  {
  public:
    AWS_WAFREGIONAL_API SizeConstraintSetUpdate() = default;
    AWS_WAFREGIONAL_API SizeConstraintSetUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API SizeConstraintSetUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>INSERT</code> to add a <a>SizeConstraintSetUpdate</a> to a
     * <a>SizeConstraintSet</a>. Use <code>DELETE</code> to remove a
     * <code>SizeConstraintSetUpdate</code> from a <code>SizeConstraintSet</code>.</p>
     */
    inline ChangeAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ChangeAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline SizeConstraintSetUpdate& WithAction(ChangeAction value) { SetAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a constraint on the size of a part of the web request. AWS WAF uses
     * the <code>Size</code>, <code>ComparisonOperator</code>, and
     * <code>FieldToMatch</code> to build an expression in the form of
     * "<code>Size</code> <code>ComparisonOperator</code> size in bytes of
     * <code>FieldToMatch</code>". If that expression is true, the
     * <code>SizeConstraint</code> is considered to match.</p>
     */
    inline const SizeConstraint& GetSizeConstraint() const { return m_sizeConstraint; }
    inline bool SizeConstraintHasBeenSet() const { return m_sizeConstraintHasBeenSet; }
    template<typename SizeConstraintT = SizeConstraint>
    void SetSizeConstraint(SizeConstraintT&& value) { m_sizeConstraintHasBeenSet = true; m_sizeConstraint = std::forward<SizeConstraintT>(value); }
    template<typename SizeConstraintT = SizeConstraint>
    SizeConstraintSetUpdate& WithSizeConstraint(SizeConstraintT&& value) { SetSizeConstraint(std::forward<SizeConstraintT>(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action{ChangeAction::NOT_SET};
    bool m_actionHasBeenSet = false;

    SizeConstraint m_sizeConstraint;
    bool m_sizeConstraintHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
