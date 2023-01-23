/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AccessEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WorkMail
{
namespace Model
{

  /**
   * <p>The rules for the given impersonation role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/ImpersonationRule">AWS
   * API Reference</a></p>
   */
  class ImpersonationRule
  {
  public:
    AWS_WORKMAIL_API ImpersonationRule();
    AWS_WORKMAIL_API ImpersonationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ImpersonationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the rule.</p>
     */
    inline const Aws::String& GetImpersonationRuleId() const{ return m_impersonationRuleId; }

    /**
     * <p>The identifier of the rule.</p>
     */
    inline bool ImpersonationRuleIdHasBeenSet() const { return m_impersonationRuleIdHasBeenSet; }

    /**
     * <p>The identifier of the rule.</p>
     */
    inline void SetImpersonationRuleId(const Aws::String& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = value; }

    /**
     * <p>The identifier of the rule.</p>
     */
    inline void SetImpersonationRuleId(Aws::String&& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = std::move(value); }

    /**
     * <p>The identifier of the rule.</p>
     */
    inline void SetImpersonationRuleId(const char* value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId.assign(value); }

    /**
     * <p>The identifier of the rule.</p>
     */
    inline ImpersonationRule& WithImpersonationRuleId(const Aws::String& value) { SetImpersonationRuleId(value); return *this;}

    /**
     * <p>The identifier of the rule.</p>
     */
    inline ImpersonationRule& WithImpersonationRuleId(Aws::String&& value) { SetImpersonationRuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rule.</p>
     */
    inline ImpersonationRule& WithImpersonationRuleId(const char* value) { SetImpersonationRuleId(value); return *this;}


    /**
     * <p>The rule name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The rule name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The rule name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The rule name.</p>
     */
    inline ImpersonationRule& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline ImpersonationRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The rule name.</p>
     */
    inline ImpersonationRule& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The rule description.</p>
     */
    inline ImpersonationRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline ImpersonationRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The rule description.</p>
     */
    inline ImpersonationRule& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const AccessEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(const AccessEffect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline void SetEffect(AccessEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline ImpersonationRule& WithEffect(const AccessEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline ImpersonationRule& WithEffect(AccessEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetUsers() const{ return m_targetUsers; }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline bool TargetUsersHasBeenSet() const { return m_targetUsersHasBeenSet; }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline void SetTargetUsers(const Aws::Vector<Aws::String>& value) { m_targetUsersHasBeenSet = true; m_targetUsers = value; }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline void SetTargetUsers(Aws::Vector<Aws::String>&& value) { m_targetUsersHasBeenSet = true; m_targetUsers = std::move(value); }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline ImpersonationRule& WithTargetUsers(const Aws::Vector<Aws::String>& value) { SetTargetUsers(value); return *this;}

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline ImpersonationRule& WithTargetUsers(Aws::Vector<Aws::String>&& value) { SetTargetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline ImpersonationRule& AddTargetUsers(const Aws::String& value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(value); return *this; }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline ImpersonationRule& AddTargetUsers(Aws::String&& value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline ImpersonationRule& AddTargetUsers(const char* value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(value); return *this; }


    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotTargetUsers() const{ return m_notTargetUsers; }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline bool NotTargetUsersHasBeenSet() const { return m_notTargetUsersHasBeenSet; }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline void SetNotTargetUsers(const Aws::Vector<Aws::String>& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers = value; }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline void SetNotTargetUsers(Aws::Vector<Aws::String>&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers = std::move(value); }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline ImpersonationRule& WithNotTargetUsers(const Aws::Vector<Aws::String>& value) { SetNotTargetUsers(value); return *this;}

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline ImpersonationRule& WithNotTargetUsers(Aws::Vector<Aws::String>&& value) { SetNotTargetUsers(std::move(value)); return *this;}

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline ImpersonationRule& AddNotTargetUsers(const Aws::String& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(value); return *this; }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline ImpersonationRule& AddNotTargetUsers(Aws::String&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline ImpersonationRule& AddNotTargetUsers(const char* value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(value); return *this; }

  private:

    Aws::String m_impersonationRuleId;
    bool m_impersonationRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AccessEffect m_effect;
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetUsers;
    bool m_targetUsersHasBeenSet = false;

    Aws::Vector<Aws::String> m_notTargetUsers;
    bool m_notTargetUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
