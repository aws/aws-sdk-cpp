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

namespace Aws
{
namespace WorkMail
{
namespace Model
{

  /**
   */
  class UpdateMobileDeviceAccessRuleRequest : public WorkMailRequest
  {
  public:
    AWS_WORKMAIL_API UpdateMobileDeviceAccessRuleRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateMobileDeviceAccessRule"; }

    AWS_WORKMAIL_API Aws::String SerializePayload() const override;

    AWS_WORKMAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline const Aws::String& GetOrganizationId() const{ return m_organizationId; }

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline bool OrganizationIdHasBeenSet() const { return m_organizationIdHasBeenSet; }

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline void SetOrganizationId(const Aws::String& value) { m_organizationIdHasBeenSet = true; m_organizationId = value; }

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline void SetOrganizationId(Aws::String&& value) { m_organizationIdHasBeenSet = true; m_organizationId = std::move(value); }

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline void SetOrganizationId(const char* value) { m_organizationIdHasBeenSet = true; m_organizationId.assign(value); }

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithOrganizationId(const Aws::String& value) { SetOrganizationId(value); return *this;}

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithOrganizationId(Aws::String&& value) { SetOrganizationId(std::move(value)); return *this;}

    /**
     * <p>The WorkMail organization under which the rule will be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithOrganizationId(const char* value) { SetOrganizationId(value); return *this;}


    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const{ return m_mobileDeviceAccessRuleId; }

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const Aws::String& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = value; }

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline void SetMobileDeviceAccessRuleId(Aws::String&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::move(value); }

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline void SetMobileDeviceAccessRuleId(const char* value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId.assign(value); }

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(const Aws::String& value) { SetMobileDeviceAccessRuleId(value); return *this;}

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(Aws::String&& value) { SetMobileDeviceAccessRuleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rule to be updated.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithMobileDeviceAccessRuleId(const char* value) { SetMobileDeviceAccessRuleId(value); return *this;}


    /**
     * <p>The updated rule name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The updated rule name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The updated rule name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The updated rule name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The updated rule name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The updated rule name.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The updated rule name.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The updated rule name.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The updated rule description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The updated rule description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The updated rule description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The updated rule description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The updated rule description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The updated rule description.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The updated rule description.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The updated rule description.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline const MobileDeviceAccessRuleEffect& GetEffect() const{ return m_effect; }

    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }

    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline void SetEffect(const MobileDeviceAccessRuleEffect& value) { m_effectHasBeenSet = true; m_effect = value; }

    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline void SetEffect(MobileDeviceAccessRuleEffect&& value) { m_effectHasBeenSet = true; m_effect = std::move(value); }

    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}

    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}


    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const{ return m_deviceTypes; }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline void SetDeviceTypes(const Aws::Vector<Aws::String>& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = value; }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline void SetDeviceTypes(Aws::Vector<Aws::String>&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::move(value); }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceTypes(const Aws::Vector<Aws::String>& value) { SetDeviceTypes(value); return *this;}

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceTypes(Aws::Vector<Aws::String>&& value) { SetDeviceTypes(std::move(value)); return *this;}

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceTypes(const Aws::String& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceTypes(Aws::String&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Device types that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceTypes(const char* value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }


    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceTypes() const{ return m_notDeviceTypes; }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline bool NotDeviceTypesHasBeenSet() const { return m_notDeviceTypesHasBeenSet; }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline void SetNotDeviceTypes(const Aws::Vector<Aws::String>& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = value; }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline void SetNotDeviceTypes(Aws::Vector<Aws::String>&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = std::move(value); }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceTypes(const Aws::Vector<Aws::String>& value) { SetNotDeviceTypes(value); return *this;}

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceTypes(Aws::Vector<Aws::String>&& value) { SetNotDeviceTypes(std::move(value)); return *this;}

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(const Aws::String& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(Aws::String&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>Device types that the updated rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceTypes(const char* value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }


    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceModels() const{ return m_deviceModels; }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline bool DeviceModelsHasBeenSet() const { return m_deviceModelsHasBeenSet; }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline void SetDeviceModels(const Aws::Vector<Aws::String>& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = value; }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline void SetDeviceModels(Aws::Vector<Aws::String>&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = std::move(value); }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceModels(const Aws::Vector<Aws::String>& value) { SetDeviceModels(value); return *this;}

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceModels(Aws::Vector<Aws::String>&& value) { SetDeviceModels(std::move(value)); return *this;}

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceModels(const Aws::String& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceModels(Aws::String&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(std::move(value)); return *this; }

    /**
     * <p>Device models that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceModels(const char* value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }


    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceModels() const{ return m_notDeviceModels; }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline bool NotDeviceModelsHasBeenSet() const { return m_notDeviceModelsHasBeenSet; }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline void SetNotDeviceModels(const Aws::Vector<Aws::String>& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = value; }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline void SetNotDeviceModels(Aws::Vector<Aws::String>&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = std::move(value); }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceModels(const Aws::Vector<Aws::String>& value) { SetNotDeviceModels(value); return *this;}

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceModels(Aws::Vector<Aws::String>&& value) { SetNotDeviceModels(std::move(value)); return *this;}

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceModels(const Aws::String& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceModels(Aws::String&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(std::move(value)); return *this; }

    /**
     * <p>Device models that the updated rule <b>will not</b> match. All other device
     * models will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceModels(const char* value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }


    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceOperatingSystems() const{ return m_deviceOperatingSystems; }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline bool DeviceOperatingSystemsHasBeenSet() const { return m_deviceOperatingSystemsHasBeenSet; }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline void SetDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = value; }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline void SetDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = std::move(value); }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetDeviceOperatingSystems(value); return *this;}

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetDeviceOperatingSystems(std::move(value)); return *this;}

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(const Aws::String& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(Aws::String&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(std::move(value)); return *this; }

    /**
     * <p>Device operating systems that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceOperatingSystems(const char* value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }


    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceOperatingSystems() const{ return m_notDeviceOperatingSystems; }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline bool NotDeviceOperatingSystemsHasBeenSet() const { return m_notDeviceOperatingSystemsHasBeenSet; }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline void SetNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = value; }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline void SetNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = std::move(value); }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetNotDeviceOperatingSystems(value); return *this;}

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetNotDeviceOperatingSystems(std::move(value)); return *this;}

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(const Aws::String& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(Aws::String&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(std::move(value)); return *this; }

    /**
     * <p>Device operating systems that the updated rule <b>will not</b> match. All
     * other device operating systems will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceOperatingSystems(const char* value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }


    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceUserAgents() const{ return m_deviceUserAgents; }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline bool DeviceUserAgentsHasBeenSet() const { return m_deviceUserAgentsHasBeenSet; }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline void SetDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = value; }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline void SetDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = std::move(value); }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetDeviceUserAgents(value); return *this;}

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetDeviceUserAgents(std::move(value)); return *this;}

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(const Aws::String& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(Aws::String&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(std::move(value)); return *this; }

    /**
     * <p>User agents that the updated rule will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddDeviceUserAgents(const char* value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }


    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceUserAgents() const{ return m_notDeviceUserAgents; }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline bool NotDeviceUserAgentsHasBeenSet() const { return m_notDeviceUserAgentsHasBeenSet; }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline void SetNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = value; }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline void SetNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = std::move(value); }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetNotDeviceUserAgents(value); return *this;}

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& WithNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetNotDeviceUserAgents(std::move(value)); return *this;}

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(const Aws::String& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(Aws::String&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(std::move(value)); return *this; }

    /**
     * <p>User agents that the updated rule <b>will not</b> match. All other user
     * agents will match.</p>
     */
    inline UpdateMobileDeviceAccessRuleRequest& AddNotDeviceUserAgents(const char* value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }

  private:

    Aws::String m_organizationId;
    bool m_organizationIdHasBeenSet = false;

    Aws::String m_mobileDeviceAccessRuleId;
    bool m_mobileDeviceAccessRuleIdHasBeenSet = false;

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
