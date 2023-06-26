/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/vpc-lattice/model/RuleMatch.h>
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
namespace VPCLattice
{
namespace Model
{

  /**
   * <p>Represents an object when updating a rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/vpc-lattice-2022-11-30/RuleUpdate">AWS
   * API Reference</a></p>
   */
  class RuleUpdate
  {
  public:
    AWS_VPCLATTICE_API RuleUpdate();
    AWS_VPCLATTICE_API RuleUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API RuleUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VPCLATTICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The rule action.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>The rule action.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The rule action.</p>
     */
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The rule action.</p>
     */
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The rule action.</p>
     */
    inline RuleUpdate& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>The rule action.</p>
     */
    inline RuleUpdate& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The rule match.</p>
     */
    inline const RuleMatch& GetMatch() const{ return m_match; }

    /**
     * <p>The rule match.</p>
     */
    inline bool MatchHasBeenSet() const { return m_matchHasBeenSet; }

    /**
     * <p>The rule match.</p>
     */
    inline void SetMatch(const RuleMatch& value) { m_matchHasBeenSet = true; m_match = value; }

    /**
     * <p>The rule match.</p>
     */
    inline void SetMatch(RuleMatch&& value) { m_matchHasBeenSet = true; m_match = std::move(value); }

    /**
     * <p>The rule match.</p>
     */
    inline RuleUpdate& WithMatch(const RuleMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The rule match.</p>
     */
    inline RuleUpdate& WithMatch(RuleMatch&& value) { SetMatch(std::move(value)); return *this;}


    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The rule priority. A listener can't have multiple rules with the same
     * priority.</p>
     */
    inline RuleUpdate& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline const Aws::String& GetRuleIdentifier() const{ return m_ruleIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline bool RuleIdentifierHasBeenSet() const { return m_ruleIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleIdentifier(const Aws::String& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleIdentifier(Aws::String&& value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline void SetRuleIdentifier(const char* value) { m_ruleIdentifierHasBeenSet = true; m_ruleIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleUpdate& WithRuleIdentifier(const Aws::String& value) { SetRuleIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleUpdate& WithRuleIdentifier(Aws::String&& value) { SetRuleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline RuleUpdate& WithRuleIdentifier(const char* value) { SetRuleIdentifier(value); return *this;}

  private:

    RuleAction m_action;
    bool m_actionHasBeenSet = false;

    RuleMatch m_match;
    bool m_matchHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
