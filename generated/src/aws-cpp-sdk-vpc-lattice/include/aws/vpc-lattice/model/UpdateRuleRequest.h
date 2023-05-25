/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/VPCLatticeRequest.h>
#include <aws/vpc-lattice/model/RuleAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/vpc-lattice/model/RuleMatch.h>
#include <utility>

namespace Aws
{
namespace VPCLattice
{
namespace Model
{

  /**
   */
  class UpdateRuleRequest : public VPCLatticeRequest
  {
  public:
    AWS_VPCLATTICE_API UpdateRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRule"; }

    AWS_VPCLATTICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline const RuleAction& GetAction() const{ return m_action; }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline void SetAction(const RuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline void SetAction(RuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline UpdateRuleRequest& WithAction(const RuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>Information about the action for the specified listener rule.</p>
     */
    inline UpdateRuleRequest& WithAction(RuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline const Aws::String& GetListenerIdentifier() const{ return m_listenerIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline bool ListenerIdentifierHasBeenSet() const { return m_listenerIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(const Aws::String& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(Aws::String&& value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline void SetListenerIdentifier(const char* value) { m_listenerIdentifierHasBeenSet = true; m_listenerIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleRequest& WithListenerIdentifier(const Aws::String& value) { SetListenerIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleRequest& WithListenerIdentifier(Aws::String&& value) { SetListenerIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the listener.</p>
     */
    inline UpdateRuleRequest& WithListenerIdentifier(const char* value) { SetListenerIdentifier(value); return *this;}


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
    inline UpdateRuleRequest& WithMatch(const RuleMatch& value) { SetMatch(value); return *this;}

    /**
     * <p>The rule match.</p>
     */
    inline UpdateRuleRequest& WithMatch(RuleMatch&& value) { SetMatch(std::move(value)); return *this;}


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
    inline UpdateRuleRequest& WithPriority(int value) { SetPriority(value); return *this;}


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
    inline UpdateRuleRequest& WithRuleIdentifier(const Aws::String& value) { SetRuleIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline UpdateRuleRequest& WithRuleIdentifier(Aws::String&& value) { SetRuleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the rule.</p>
     */
    inline UpdateRuleRequest& WithRuleIdentifier(const char* value) { SetRuleIdentifier(value); return *this;}


    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline const Aws::String& GetServiceIdentifier() const{ return m_serviceIdentifier; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline bool ServiceIdentifierHasBeenSet() const { return m_serviceIdentifierHasBeenSet; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(const Aws::String& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = value; }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(Aws::String&& value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier = std::move(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline void SetServiceIdentifier(const char* value) { m_serviceIdentifierHasBeenSet = true; m_serviceIdentifier.assign(value); }

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline UpdateRuleRequest& WithServiceIdentifier(const Aws::String& value) { SetServiceIdentifier(value); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline UpdateRuleRequest& WithServiceIdentifier(Aws::String&& value) { SetServiceIdentifier(std::move(value)); return *this;}

    /**
     * <p>The ID or Amazon Resource Name (ARN) of the service.</p>
     */
    inline UpdateRuleRequest& WithServiceIdentifier(const char* value) { SetServiceIdentifier(value); return *this;}

  private:

    RuleAction m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_listenerIdentifier;
    bool m_listenerIdentifierHasBeenSet = false;

    RuleMatch m_match;
    bool m_matchHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_ruleIdentifier;
    bool m_ruleIdentifierHasBeenSet = false;

    Aws::String m_serviceIdentifier;
    bool m_serviceIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace VPCLattice
} // namespace Aws
