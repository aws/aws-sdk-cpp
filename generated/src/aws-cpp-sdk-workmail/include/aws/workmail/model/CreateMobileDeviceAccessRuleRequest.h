/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/workmail/WorkMailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class CreateMobileDeviceAccessRuleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API CreateMobileDeviceAccessRuleRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMobileDeviceAccessRule"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The WorkMail organization under which the rule will be created.</p>
     */
    inline const Aws::String& GetOrganizationId() const { return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    template<typename OrganizationIdT = Aws::String>
    void SetOrganizationId(OrganizationIdT&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::forward<OrganizationIdT>(value); }
    template<typename OrganizationIdT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& WithOrganizationId(OrganizationIdT&& value) { SetOrganizationId(std::forward<OrganizationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for the client request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
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
    CreateMobileDeviceAccessRuleRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    CreateMobileDeviceAccessRuleRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline MobileDeviceAccessRuleEffect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(MobileDeviceAccessRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline CreateMobileDeviceAccessRuleRequest& WithEffect(MobileDeviceAccessRuleEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device types that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const { return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    void SetDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::forward<DeviceTypesT>(value); }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithDeviceTypes(DeviceTypesT&& value) { SetDeviceTypes(std::forward<DeviceTypesT>(value)); return *this;}
    template<typename DeviceTypesT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.emplace_back(std::forward<DeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device types that the rule <b>will not</b> match. All other device types will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceTypes() const { return m_notDeviceTypes; }
    inline bool NotDeviceTypesHasBeenSet() const { return m_notDeviceTypesHasBeenSet; }
    template<typename NotDeviceTypesT = Aws::Vector<Aws::String>>
    void SetNotDeviceTypes(NotDeviceTypesT&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = std::forward<NotDeviceTypesT>(value); }
    template<typename NotDeviceTypesT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithNotDeviceTypes(NotDeviceTypesT&& value) { SetNotDeviceTypes(std::forward<NotDeviceTypesT>(value)); return *this;}
    template<typename NotDeviceTypesT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(NotDeviceTypesT&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.emplace_back(std::forward<NotDeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceModels() const { return m_deviceModels; }
    inline bool DeviceModelsHasBeenSet() const { return m_deviceModelsHasBeenSet; }
    template<typename DeviceModelsT = Aws::Vector<Aws::String>>
    void SetDeviceModels(DeviceModelsT&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = std::forward<DeviceModelsT>(value); }
    template<typename DeviceModelsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithDeviceModels(DeviceModelsT&& value) { SetDeviceModels(std::forward<DeviceModelsT>(value)); return *this;}
    template<typename DeviceModelsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddDeviceModels(DeviceModelsT&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.emplace_back(std::forward<DeviceModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that the rule <b>will not</b> match. All other device models
     * will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceModels() const { return m_notDeviceModels; }
    inline bool NotDeviceModelsHasBeenSet() const { return m_notDeviceModelsHasBeenSet; }
    template<typename NotDeviceModelsT = Aws::Vector<Aws::String>>
    void SetNotDeviceModels(NotDeviceModelsT&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = std::forward<NotDeviceModelsT>(value); }
    template<typename NotDeviceModelsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithNotDeviceModels(NotDeviceModelsT&& value) { SetNotDeviceModels(std::forward<NotDeviceModelsT>(value)); return *this;}
    template<typename NotDeviceModelsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddNotDeviceModels(NotDeviceModelsT&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.emplace_back(std::forward<NotDeviceModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceOperatingSystems() const { return m_deviceOperatingSystems; }
    inline bool DeviceOperatingSystemsHasBeenSet() const { return m_deviceOperatingSystemsHasBeenSet; }
    template<typename DeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    void SetDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = std::forward<DeviceOperatingSystemsT>(value); }
    template<typename DeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { SetDeviceOperatingSystems(std::forward<DeviceOperatingSystemsT>(value)); return *this;}
    template<typename DeviceOperatingSystemsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.emplace_back(std::forward<DeviceOperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that the rule <b>will not</b> match. All other
     * device operating systems will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceOperatingSystems() const { return m_notDeviceOperatingSystems; }
    inline bool NotDeviceOperatingSystemsHasBeenSet() const { return m_notDeviceOperatingSystemsHasBeenSet; }
    template<typename NotDeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    void SetNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = std::forward<NotDeviceOperatingSystemsT>(value); }
    template<typename NotDeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { SetNotDeviceOperatingSystems(std::forward<NotDeviceOperatingSystemsT>(value)); return *this;}
    template<typename NotDeviceOperatingSystemsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.emplace_back(std::forward<NotDeviceOperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceUserAgents() const { return m_deviceUserAgents; }
    inline bool DeviceUserAgentsHasBeenSet() const { return m_deviceUserAgentsHasBeenSet; }
    template<typename DeviceUserAgentsT = Aws::Vector<Aws::String>>
    void SetDeviceUserAgents(DeviceUserAgentsT&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = std::forward<DeviceUserAgentsT>(value); }
    template<typename DeviceUserAgentsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithDeviceUserAgents(DeviceUserAgentsT&& value) { SetDeviceUserAgents(std::forward<DeviceUserAgentsT>(value)); return *this;}
    template<typename DeviceUserAgentsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(DeviceUserAgentsT&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.emplace_back(std::forward<DeviceUserAgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that the rule <b>will not</b> match. All other device user
     * agents will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceUserAgents() const { return m_notDeviceUserAgents; }
    inline bool NotDeviceUserAgentsHasBeenSet() const { return m_notDeviceUserAgentsHasBeenSet; }
    template<typename NotDeviceUserAgentsT = Aws::Vector<Aws::String>>
    void SetNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = std::forward<NotDeviceUserAgentsT>(value); }
    template<typename NotDeviceUserAgentsT = Aws::Vector<Aws::String>>
    CreateMobileDeviceAccessRuleRequest& WithNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { SetNotDeviceUserAgents(std::forward<NotDeviceUserAgentsT>(value)); return *this;}
    template<typename NotDeviceUserAgentsT = Aws::String>
    CreateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.emplace_back(std::forward<NotDeviceUserAgentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MobileDeviceAccessRuleEffect m_effect{MobileDeviceAccessRuleEffect::NOT_SET};
    bool m_effectHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceTypes;
    bool m_deviceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_notDeviceTypes;
    bool m_notDeviceTypesHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceModels;
    bool m_deviceModelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notDeviceModels;
    bool m_notDeviceModelsHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceOperatingSystems;
    bool m_deviceOperatingSystemsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notDeviceOperatingSystems;
    bool m_notDeviceOperatingSystemsHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceUserAgents;
    bool m_deviceUserAgentsHasBeenSet = false;

    Aws::Vector<Aws::String> m_notDeviceUserAgents;
    bool m_notDeviceUserAgentsHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
