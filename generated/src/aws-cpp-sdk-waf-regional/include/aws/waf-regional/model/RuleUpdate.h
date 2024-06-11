﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/ChangeAction.h>
#include <aws/waf-regional/model/Predicate.h>
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
   * endpoints for regional and global use. </p>  <p>Specifies a
   * <code>Predicate</code> (such as an <code>IPSet</code>) and indicates whether you
   * want to add it to a <code>Rule</code> or delete it from a
   * <code>Rule</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/RuleUpdate">AWS
   * API Reference</a></p>
   */
  class RuleUpdate
  {
  public:
    AWS_WAFREGIONAL_API RuleUpdate();
    AWS_WAFREGIONAL_API RuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API RuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify <code>INSERT</code> to add a <code>Predicate</code> to a
     * <code>Rule</code>. Use <code>DELETE</code> to remove a <code>Predicate</code>
     * from a <code>Rule</code>.</p>
     */
    inline const ChangeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const ChangeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(ChangeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline RuleUpdate& WithAction(const ChangeAction& value) { SetAction(value); return *this;}
    inline RuleUpdate& WithAction(ChangeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the <code>Predicate</code> (such as an <code>IPSet</code>) that you
     * want to add to a <code>Rule</code>.</p>
     */
    inline const Predicate& GetPredicate() const{ return m_predicate; }
    inline bool PredicateHasBeenSet() const { return m_predicateHasBeenSet; }
    inline void SetPredicate(const Predicate& value) { m_predicateHasBeenSet = true; m_predicate = value; }
    inline void SetPredicate(Predicate&& value) { m_predicateHasBeenSet = true; m_predicate = std::move(value); }
    inline RuleUpdate& WithPredicate(const Predicate& value) { SetPredicate(value); return *this;}
    inline RuleUpdate& WithPredicate(Predicate&& value) { SetPredicate(std::move(value)); return *this;}
    ///@}
  private:

    ChangeAction m_action;
    bool m_actionHasBeenSet = false;

    Predicate m_predicate;
    bool m_predicateHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
