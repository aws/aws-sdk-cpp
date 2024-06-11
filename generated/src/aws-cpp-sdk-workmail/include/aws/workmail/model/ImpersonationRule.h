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


    ///@{
    /**
     * <p>The identifier of the rule.</p>
     */
    inline const Aws::String& GetImpersonationRuleId() const{ return m_impersonationRuleId; }
    inline bool ImpersonationRuleIdHasBeenSet() const { return m_impersonationRuleIdHasBeenSet; }
    inline void SetImpersonationRuleId(const Aws::String& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = value; }
    inline void SetImpersonationRuleId(Aws::String&& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = std::move(value); }
    inline void SetImpersonationRuleId(const char* value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId.assign(value); }
    inline ImpersonationRule& WithImpersonationRuleId(const Aws::String& value) { SetImpersonationRuleId(value); return *this;}
    inline ImpersonationRule& WithImpersonationRuleId(Aws::String&& value) { SetImpersonationRuleId(std::move(value)); return *this;}
    inline ImpersonationRule& WithImpersonationRuleId(const char* value) { SetImpersonationRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ImpersonationRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ImpersonationRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ImpersonationRule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ImpersonationRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ImpersonationRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ImpersonationRule& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline const AccessEffect& GetEffect() const{ return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(const AccessEffect& value) { m_effectHasBeenSet = true; m_effect = value; }
    inline void SetEffect(AccessEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }
    inline ImpersonationRule& WithEffect(const AccessEffect& value) { SetEffect(value); return *this;}
    inline ImpersonationRule& WithEffect(AccessEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetUsers() const{ return m_targetUsers; }
    inline bool TargetUsersHasBeenSet() const { return m_targetUsersHasBeenSet; }
    inline void SetTargetUsers(const Aws::Vector<Aws::String>& value) { m_targetUsersHasBeenSet = true; m_targetUsers = value; }
    inline void SetTargetUsers(Aws::Vector<Aws::String>&& value) { m_targetUsersHasBeenSet = true; m_targetUsers = std::move(value); }
    inline ImpersonationRule& WithTargetUsers(const Aws::Vector<Aws::String>& value) { SetTargetUsers(value); return *this;}
    inline ImpersonationRule& WithTargetUsers(Aws::Vector<Aws::String>&& value) { SetTargetUsers(std::move(value)); return *this;}
    inline ImpersonationRule& AddTargetUsers(const Aws::String& value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(value); return *this; }
    inline ImpersonationRule& AddTargetUsers(Aws::String&& value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(std::move(value)); return *this; }
    inline ImpersonationRule& AddTargetUsers(const char* value) { m_targetUsersHasBeenSet = true; m_targetUsers.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotTargetUsers() const{ return m_notTargetUsers; }
    inline bool NotTargetUsersHasBeenSet() const { return m_notTargetUsersHasBeenSet; }
    inline void SetNotTargetUsers(const Aws::Vector<Aws::String>& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers = value; }
    inline void SetNotTargetUsers(Aws::Vector<Aws::String>&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers = std::move(value); }
    inline ImpersonationRule& WithNotTargetUsers(const Aws::Vector<Aws::String>& value) { SetNotTargetUsers(value); return *this;}
    inline ImpersonationRule& WithNotTargetUsers(Aws::Vector<Aws::String>&& value) { SetNotTargetUsers(std::move(value)); return *this;}
    inline ImpersonationRule& AddNotTargetUsers(const Aws::String& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(value); return *this; }
    inline ImpersonationRule& AddNotTargetUsers(Aws::String&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(std::move(value)); return *this; }
    inline ImpersonationRule& AddNotTargetUsers(const char* value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.push_back(value); return *this; }
    ///@}
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
