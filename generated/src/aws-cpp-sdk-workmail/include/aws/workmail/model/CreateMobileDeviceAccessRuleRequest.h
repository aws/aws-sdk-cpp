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
    AWS_WORKMAIL_API CreateMobileDeviceAccessRuleRequest();

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
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The idempotency token for the client request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
    inline CreateMobileDeviceAccessRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithName(const char* value) { SetName(value); return *this;}
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
    inline CreateMobileDeviceAccessRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effectHasBeenSet = true; m_effect = value; }
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device types that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const{ return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    inline void SetDeviceTypes(const Aws::Vector<Aws::String>& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = value; }
    inline void SetDeviceTypes(Aws::Vector<Aws::String>&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceTypes(const Aws::Vector<Aws::String>& value) { SetDeviceTypes(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceTypes(Aws::Vector<Aws::String>&& value) { SetDeviceTypes(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceTypes(const Aws::String& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceTypes(Aws::String&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceTypes(const char* value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device types that the rule <b>will not</b> match. All other device types will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceTypes() const{ return m_notDeviceTypes; }
    inline bool NotDeviceTypesHasBeenSet() const { return m_notDeviceTypesHasBeenSet; }
    inline void SetNotDeviceTypes(const Aws::Vector<Aws::String>& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = value; }
    inline void SetNotDeviceTypes(Aws::Vector<Aws::String>&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceTypes(const Aws::Vector<Aws::String>& value) { SetNotDeviceTypes(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceTypes(Aws::Vector<Aws::String>&& value) { SetNotDeviceTypes(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(const Aws::String& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(Aws::String&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(const char* value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceModels() const{ return m_deviceModels; }
    inline bool DeviceModelsHasBeenSet() const { return m_deviceModelsHasBeenSet; }
    inline void SetDeviceModels(const Aws::Vector<Aws::String>& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = value; }
    inline void SetDeviceModels(Aws::Vector<Aws::String>&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceModels(const Aws::Vector<Aws::String>& value) { SetDeviceModels(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceModels(Aws::Vector<Aws::String>&& value) { SetDeviceModels(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceModels(const Aws::String& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceModels(Aws::String&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceModels(const char* value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that the rule <b>will not</b> match. All other device models
     * will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceModels() const{ return m_notDeviceModels; }
    inline bool NotDeviceModelsHasBeenSet() const { return m_notDeviceModelsHasBeenSet; }
    inline void SetNotDeviceModels(const Aws::Vector<Aws::String>& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = value; }
    inline void SetNotDeviceModels(Aws::Vector<Aws::String>&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceModels(const Aws::Vector<Aws::String>& value) { SetNotDeviceModels(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceModels(Aws::Vector<Aws::String>&& value) { SetNotDeviceModels(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceModels(const Aws::String& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceModels(Aws::String&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceModels(const char* value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceOperatingSystems() const{ return m_deviceOperatingSystems; }
    inline bool DeviceOperatingSystemsHasBeenSet() const { return m_deviceOperatingSystemsHasBeenSet; }
    inline void SetDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = value; }
    inline void SetDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetDeviceOperatingSystems(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetDeviceOperatingSystems(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(const Aws::String& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(Aws::String&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(const char* value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that the rule <b>will not</b> match. All other
     * device operating systems will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceOperatingSystems() const{ return m_notDeviceOperatingSystems; }
    inline bool NotDeviceOperatingSystemsHasBeenSet() const { return m_notDeviceOperatingSystemsHasBeenSet; }
    inline void SetNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = value; }
    inline void SetNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetNotDeviceOperatingSystems(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetNotDeviceOperatingSystems(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(const Aws::String& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(Aws::String&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(const char* value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that the rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceUserAgents() const{ return m_deviceUserAgents; }
    inline bool DeviceUserAgentsHasBeenSet() const { return m_deviceUserAgentsHasBeenSet; }
    inline void SetDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = value; }
    inline void SetDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetDeviceUserAgents(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetDeviceUserAgents(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(const Aws::String& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(Aws::String&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(const char* value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that the rule <b>will not</b> match. All other device user
     * agents will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceUserAgents() const{ return m_notDeviceUserAgents; }
    inline bool NotDeviceUserAgentsHasBeenSet() const { return m_notDeviceUserAgentsHasBeenSet; }
    inline void SetNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = value; }
    inline void SetNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = std::move(value); }
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetNotDeviceUserAgents(value); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& WithNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetNotDeviceUserAgents(std::move(value)); return *this;}
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(const Aws::String& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(Aws::String&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(std::move(value)); return *this; }
    inline CreateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(const char* value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    MobileDeviceAccessRuleEffect m_effect;
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
