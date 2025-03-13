/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/AccessControlRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class PutAccessControlRuleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API PutAccessControlRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutAccessControlRule"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The rule name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    PutAccessControlRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rule effect.</p>
     */
    inline AccessControlRuleEffect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(AccessControlRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline PutAccessControlRuleRequest& WithEffect(AccessControlRuleEffect value) { SetEffect(value); return *this;}
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
    PutAccessControlRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IPv4 CIDR ranges to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpRanges() const { return m_ipRanges; }
    inline bool IpRangesHasBeenSet() const { return m_ipRangesHasBeenSet; }
    template<typename IpRangesT = Aws::Vector<Aws::String>>
    void SetIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges = std::forward<IpRangesT>(value); }
    template<typename IpRangesT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithIpRanges(IpRangesT&& value) { SetIpRanges(std::forward<IpRangesT>(value)); return *this;}
    template<typename IpRangesT = Aws::String>
    PutAccessControlRuleRequest& AddIpRanges(IpRangesT&& value) { m_ipRangesHasBeenSet = true; m_ipRanges.emplace_back(std::forward<IpRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>IPv4 CIDR ranges to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotIpRanges() const { return m_notIpRanges; }
    inline bool NotIpRangesHasBeenSet() const { return m_notIpRangesHasBeenSet; }
    template<typename NotIpRangesT = Aws::Vector<Aws::String>>
    void SetNotIpRanges(NotIpRangesT&& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges = std::forward<NotIpRangesT>(value); }
    template<typename NotIpRangesT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithNotIpRanges(NotIpRangesT&& value) { SetNotIpRanges(std::forward<NotIpRangesT>(value)); return *this;}
    template<typename NotIpRangesT = Aws::String>
    PutAccessControlRuleRequest& AddNotIpRanges(NotIpRangesT&& value) { m_notIpRangesHasBeenSet = true; m_notIpRanges.emplace_back(std::forward<NotIpRangesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access protocol actions to include in the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetActions() const { return m_actions; }
    inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    void SetActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions = std::forward<ActionsT>(value); }
    template<typename ActionsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithActions(ActionsT&& value) { SetActions(std::forward<ActionsT>(value)); return *this;}
    template<typename ActionsT = Aws::String>
    PutAccessControlRuleRequest& AddActions(ActionsT&& value) { m_actionsHasBeenSet = true; m_actions.emplace_back(std::forward<ActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Access protocol actions to exclude from the rule. Valid values include
     * <code>ActiveSync</code>, <code>AutoDiscover</code>, <code>EWS</code>,
     * <code>IMAP</code>, <code>SMTP</code>, <code>WindowsOutlook</code>, and
     * <code>WebMail</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotActions() const { return m_notActions; }
    inline bool NotActionsHasBeenSet() const { return m_notActionsHasBeenSet; }
    template<typename NotActionsT = Aws::Vector<Aws::String>>
    void SetNotActions(NotActionsT&& value) { m_notActionsHasBeenSet = true; m_notActions = std::forward<NotActionsT>(value); }
    template<typename NotActionsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithNotActions(NotActionsT&& value) { SetNotActions(std::forward<NotActionsT>(value)); return *this;}
    template<typename NotActionsT = Aws::String>
    PutAccessControlRuleRequest& AddNotActions(NotActionsT&& value) { m_notActionsHasBeenSet = true; m_notActions.emplace_back(std::forward<NotActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User IDs to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserIds() const { return m_userIds; }
    inline bool UserIdsHasBeenSet() const { return m_userIdsHasBeenSet; }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    void SetUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds = std::forward<UserIdsT>(value); }
    template<typename UserIdsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithUserIds(UserIdsT&& value) { SetUserIds(std::forward<UserIdsT>(value)); return *this;}
    template<typename UserIdsT = Aws::String>
    PutAccessControlRuleRequest& AddUserIds(UserIdsT&& value) { m_userIdsHasBeenSet = true; m_userIds.emplace_back(std::forward<UserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>User IDs to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotUserIds() const { return m_notUserIds; }
    inline bool NotUserIdsHasBeenSet() const { return m_notUserIdsHasBeenSet; }
    template<typename NotUserIdsT = Aws::Vector<Aws::String>>
    void SetNotUserIds(NotUserIdsT&& value) { m_notUserIdsHasBeenSet = true; m_notUserIds = std::forward<NotUserIdsT>(value); }
    template<typename NotUserIdsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithNotUserIds(NotUserIdsT&& value) { SetNotUserIds(std::forward<NotUserIdsT>(value)); return *this;}
    template<typename NotUserIdsT = Aws::String>
    PutAccessControlRuleRequest& AddNotUserIds(NotUserIdsT&& value) { m_notUserIdsHasBeenSet = true; m_notUserIds.emplace_back(std::forward<NotUserIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of the organization.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    PutAccessControlRuleRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Impersonation role IDs to include in the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImpersonationRoleIds() const { return m_impersonationRoleIds; }
    inline bool ImpersonationRoleIdsHasBeenSet() const { return m_impersonationRoleIdsHasBeenSet; }
    template<typename ImpersonationRoleIdsT = Aws::Vector<Aws::String>>
    void SetImpersonationRoleIds(ImpersonationRoleIdsT&& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds = std::forward<ImpersonationRoleIdsT>(value); }
    template<typename ImpersonationRoleIdsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithImpersonationRoleIds(ImpersonationRoleIdsT&& value) { SetImpersonationRoleIds(std::forward<ImpersonationRoleIdsT>(value)); return *this;}
    template<typename ImpersonationRoleIdsT = Aws::String>
    PutAccessControlRuleRequest& AddImpersonationRoleIds(ImpersonationRoleIdsT&& value) { m_impersonationRoleIdsHasBeenSet = true; m_impersonationRoleIds.emplace_back(std::forward<ImpersonationRoleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Impersonation role IDs to exclude from the rule.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotImpersonationRoleIds() const { return m_notImpersonationRoleIds; }
    inline bool NotImpersonationRoleIdsHasBeenSet() const { return m_notImpersonationRoleIdsHasBeenSet; }
    template<typename NotImpersonationRoleIdsT = Aws::Vector<Aws::String>>
    void SetNotImpersonationRoleIds(NotImpersonationRoleIdsT&& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds = std::forward<NotImpersonationRoleIdsT>(value); }
    template<typename NotImpersonationRoleIdsT = Aws::Vector<Aws::String>>
    PutAccessControlRuleRequest& WithNotImpersonationRoleIds(NotImpersonationRoleIdsT&& value) { SetNotImpersonationRoleIds(std::forward<NotImpersonationRoleIdsT>(value)); return *this;}
    template<typename NotImpersonationRoleIdsT = Aws::String>
    PutAccessControlRuleRequest& AddNotImpersonationRoleIds(NotImpersonationRoleIdsT&& value) { m_notImpersonationRoleIdsHasBeenSet = true; m_notImpersonationRoleIds.emplace_back(std::forward<NotImpersonationRoleIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccessControlRuleEffect m_effect{AccessControlRuleEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipRanges;
    bool m_ipRangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_notIpRanges;
    bool m_notIpRangesHasBeenSet = false;

    Aws::Vector<Aws::String> m_actions;
    bool m_actionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notActions;
    bool m_notActionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_userIds;
    bool m_userIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notUserIds;
    bool m_notUserIdsHasBeenSet = false;

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_impersonationRoleIds;
    bool m_impersonationRoleIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notImpersonationRoleIds;
    bool m_notImpersonationRoleIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
