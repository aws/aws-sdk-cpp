﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/waf-regional/WAFRegional_EXPORTS.h>
#include <aws/waf-regional/model/WafOverrideActionType.h>
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
   * endpoints for regional and global use. </p>  <p>The action to take if any
   * rule within the <code>RuleGroup</code> matches a request. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/waf-regional-2016-11-28/WafOverrideAction">AWS
   * API Reference</a></p>
   */
  class WafOverrideAction
  {
  public:
    AWS_WAFREGIONAL_API WafOverrideAction();
    AWS_WAFREGIONAL_API WafOverrideAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API WafOverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFREGIONAL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> . If set to <code>NONE</code>, the rule's action
     * will take place.</p>
     */
    inline const WafOverrideActionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const WafOverrideActionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(WafOverrideActionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline WafOverrideAction& WithType(const WafOverrideActionType& value) { SetType(value); return *this;}
    inline WafOverrideAction& WithType(WafOverrideActionType&& value) { SetType(std::move(value)); return *this;}
    ///@}
  private:

    WafOverrideActionType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFRegional
} // namespace Aws
