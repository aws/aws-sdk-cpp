/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Details about an override action for a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/WafOverrideAction">AWS
   * API Reference</a></p>
   */
  class WafOverrideAction
  {
  public:
    AWS_SECURITYHUB_API WafOverrideAction();
    AWS_SECURITYHUB_API WafOverrideAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API WafOverrideAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline WafOverrideAction& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline WafOverrideAction& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> <code>COUNT</code> overrides the action specified by the individual rule
     * within a <code>RuleGroup</code> .</p> <p>If set to <code>NONE</code>, the rule's
     * action takes place.</p>
     */
    inline WafOverrideAction& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
