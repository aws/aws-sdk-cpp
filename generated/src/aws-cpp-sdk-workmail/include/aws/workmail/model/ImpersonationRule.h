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
    AWS_WORKMAIL_API ImpersonationRule() = default;
    AWS_WORKMAIL_API ImpersonationRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API ImpersonationRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the rule.</p>
     */
    inline const Aws::String& GetImpersonationRuleId() const { return m_impersonationRuleId; }
    inline bool ImpersonationRuleIdHasBeenSet() const { return m_impersonationRuleIdHasBeenSet; }
    template<typename ImpersonationRuleIdT = Aws::String>
    void SetImpersonationRuleId(ImpersonationRuleIdT&& value) { m_impersonationRuleIdHasBeenSet = true; m_impersonationRuleId = std::forward<ImpersonationRuleIdT>(value); }
    template<typename ImpersonationRuleIdT = Aws::String>
    ImpersonationRule& WithImpersonationRuleId(ImpersonationRuleIdT&& value) { SetImpersonationRuleId(std::forward<ImpersonationRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ImpersonationRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ImpersonationRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the rule when it matches the input. Allowed effect values are
     * <code>ALLOW</code> or <code>DENY</code>.</p>
     */
    inline AccessEffect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(AccessEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline ImpersonationRule& WithEffect(AccessEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of user IDs that match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTargetUsers() const { return m_targetUsers; }
    inline bool TargetUsersHasBeenSet() const { return m_targetUsersHasBeenSet; }
    template<typename TargetUsersT = Aws::Vector<Aws::String>>
    void SetTargetUsers(TargetUsersT&& value) { m_targetUsersHasBeenSet = true; m_targetUsers = std::forward<TargetUsersT>(value); }
    template<typename TargetUsersT = Aws::Vector<Aws::String>>
    ImpersonationRule& WithTargetUsers(TargetUsersT&& value) { SetTargetUsers(std::forward<TargetUsersT>(value)); return *this;}
    template<typename TargetUsersT = Aws::String>
    ImpersonationRule& AddTargetUsers(TargetUsersT&& value) { m_targetUsersHasBeenSet = true; m_targetUsers.emplace_back(std::forward<TargetUsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of user IDs that don't match the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotTargetUsers() const { return m_notTargetUsers; }
    inline bool NotTargetUsersHasBeenSet() const { return m_notTargetUsersHasBeenSet; }
    template<typename NotTargetUsersT = Aws::Vector<Aws::String>>
    void SetNotTargetUsers(NotTargetUsersT&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers = std::forward<NotTargetUsersT>(value); }
    template<typename NotTargetUsersT = Aws::Vector<Aws::String>>
    ImpersonationRule& WithNotTargetUsers(NotTargetUsersT&& value) { SetNotTargetUsers(std::forward<NotTargetUsersT>(value)); return *this;}
    template<typename NotTargetUsersT = Aws::String>
    ImpersonationRule& AddNotTargetUsers(NotTargetUsersT&& value) { m_notTargetUsersHasBeenSet = true; m_notTargetUsers.emplace_back(std::forward<NotTargetUsersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_impersonationRuleId;
    bool m_impersonationRuleIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AccessEffect m_effect{AccessEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_targetUsers;
    bool m_targetUsersHasBeenSet = false;

    Aws::Vector<Aws::String> m_notTargetUsers;
    bool m_notTargetUsersHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
