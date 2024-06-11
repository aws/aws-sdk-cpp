/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/MobileDeviceAccessRuleEffect.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A rule that controls access to mobile devices for an WorkMail
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/workmail-2017-10-01/MobileDeviceAccessRule">AWS
   * API Reference</a></p>
   */
  class MobileDeviceAccessRule
  {
  public:
    AWS_WORKMAIL_API MobileDeviceAccessRule();
    AWS_WORKMAIL_API MobileDeviceAccessRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MobileDeviceAccessRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID assigned to a mobile access rule.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const{ return m_mobileDeviceAccessRuleId; }
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }
    inline void SetMobileDeviceAccessRuleId(const Aws::String& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = value; }
    inline void SetMobileDeviceAccessRuleId(Aws::String&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::move(value); }
    inline void SetMobileDeviceAccessRuleId(const char* value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId.assign(value); }
    inline MobileDeviceAccessRule& WithMobileDeviceAccessRuleId(const Aws::String& value) { SetMobileDeviceAccessRuleId(value); return *this;}
    inline MobileDeviceAccessRule& WithMobileDeviceAccessRuleId(Aws::String&& value) { SetMobileDeviceAccessRuleId(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& WithMobileDeviceAccessRuleId(const char* value) { SetMobileDeviceAccessRuleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a mobile access rule.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline MobileDeviceAccessRule& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline MobileDeviceAccessRule& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a mobile access rule.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline MobileDeviceAccessRule& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline MobileDeviceAccessRule& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline MobileDeviceAccessRule& WithEffect(const MobileDeviceAccessRuleEffect& value) { SetEffect(value); return *this;}
    inline MobileDeviceAccessRule& WithEffect(MobileDeviceAccessRuleEffect&& value) { SetEffect(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device types that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const{ return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    inline void SetDeviceTypes(const Aws::Vector<Aws::String>& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = value; }
    inline void SetDeviceTypes(Aws::Vector<Aws::String>&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::move(value); }
    inline MobileDeviceAccessRule& WithDeviceTypes(const Aws::Vector<Aws::String>& value) { SetDeviceTypes(value); return *this;}
    inline MobileDeviceAccessRule& WithDeviceTypes(Aws::Vector<Aws::String>&& value) { SetDeviceTypes(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddDeviceTypes(const Aws::String& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddDeviceTypes(Aws::String&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddDeviceTypes(const char* value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device types that a rule <b>will not</b> match. All other device types will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceTypes() const{ return m_notDeviceTypes; }
    inline bool NotDeviceTypesHasBeenSet() const { return m_notDeviceTypesHasBeenSet; }
    inline void SetNotDeviceTypes(const Aws::Vector<Aws::String>& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = value; }
    inline void SetNotDeviceTypes(Aws::Vector<Aws::String>&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = std::move(value); }
    inline MobileDeviceAccessRule& WithNotDeviceTypes(const Aws::Vector<Aws::String>& value) { SetNotDeviceTypes(value); return *this;}
    inline MobileDeviceAccessRule& WithNotDeviceTypes(Aws::Vector<Aws::String>&& value) { SetNotDeviceTypes(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddNotDeviceTypes(const Aws::String& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceTypes(Aws::String&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceTypes(const char* value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceModels() const{ return m_deviceModels; }
    inline bool DeviceModelsHasBeenSet() const { return m_deviceModelsHasBeenSet; }
    inline void SetDeviceModels(const Aws::Vector<Aws::String>& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = value; }
    inline void SetDeviceModels(Aws::Vector<Aws::String>&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = std::move(value); }
    inline MobileDeviceAccessRule& WithDeviceModels(const Aws::Vector<Aws::String>& value) { SetDeviceModels(value); return *this;}
    inline MobileDeviceAccessRule& WithDeviceModels(Aws::Vector<Aws::String>&& value) { SetDeviceModels(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddDeviceModels(const Aws::String& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddDeviceModels(Aws::String&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddDeviceModels(const char* value) { m_deviceModelsHasBeenSet = true; m_deviceModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that a rule <b>will not</b> match. All other device models will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceModels() const{ return m_notDeviceModels; }
    inline bool NotDeviceModelsHasBeenSet() const { return m_notDeviceModelsHasBeenSet; }
    inline void SetNotDeviceModels(const Aws::Vector<Aws::String>& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = value; }
    inline void SetNotDeviceModels(Aws::Vector<Aws::String>&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = std::move(value); }
    inline MobileDeviceAccessRule& WithNotDeviceModels(const Aws::Vector<Aws::String>& value) { SetNotDeviceModels(value); return *this;}
    inline MobileDeviceAccessRule& WithNotDeviceModels(Aws::Vector<Aws::String>&& value) { SetNotDeviceModels(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddNotDeviceModels(const Aws::String& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceModels(Aws::String&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceModels(const char* value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceOperatingSystems() const{ return m_deviceOperatingSystems; }
    inline bool DeviceOperatingSystemsHasBeenSet() const { return m_deviceOperatingSystemsHasBeenSet; }
    inline void SetDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = value; }
    inline void SetDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = std::move(value); }
    inline MobileDeviceAccessRule& WithDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetDeviceOperatingSystems(value); return *this;}
    inline MobileDeviceAccessRule& WithDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetDeviceOperatingSystems(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddDeviceOperatingSystems(const Aws::String& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddDeviceOperatingSystems(Aws::String&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddDeviceOperatingSystems(const char* value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that a rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceOperatingSystems() const{ return m_notDeviceOperatingSystems; }
    inline bool NotDeviceOperatingSystemsHasBeenSet() const { return m_notDeviceOperatingSystemsHasBeenSet; }
    inline void SetNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = value; }
    inline void SetNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = std::move(value); }
    inline MobileDeviceAccessRule& WithNotDeviceOperatingSystems(const Aws::Vector<Aws::String>& value) { SetNotDeviceOperatingSystems(value); return *this;}
    inline MobileDeviceAccessRule& WithNotDeviceOperatingSystems(Aws::Vector<Aws::String>&& value) { SetNotDeviceOperatingSystems(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddNotDeviceOperatingSystems(const Aws::String& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceOperatingSystems(Aws::String&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceOperatingSystems(const char* value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceUserAgents() const{ return m_deviceUserAgents; }
    inline bool DeviceUserAgentsHasBeenSet() const { return m_deviceUserAgentsHasBeenSet; }
    inline void SetDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = value; }
    inline void SetDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = std::move(value); }
    inline MobileDeviceAccessRule& WithDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetDeviceUserAgents(value); return *this;}
    inline MobileDeviceAccessRule& WithDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetDeviceUserAgents(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddDeviceUserAgents(const Aws::String& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddDeviceUserAgents(Aws::String&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddDeviceUserAgents(const char* value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that a rule <b>will not</b> match. All other device user
     * agents will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceUserAgents() const{ return m_notDeviceUserAgents; }
    inline bool NotDeviceUserAgentsHasBeenSet() const { return m_notDeviceUserAgentsHasBeenSet; }
    inline void SetNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = value; }
    inline void SetNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = std::move(value); }
    inline MobileDeviceAccessRule& WithNotDeviceUserAgents(const Aws::Vector<Aws::String>& value) { SetNotDeviceUserAgents(value); return *this;}
    inline MobileDeviceAccessRule& WithNotDeviceUserAgents(Aws::Vector<Aws::String>&& value) { SetNotDeviceUserAgents(std::move(value)); return *this;}
    inline MobileDeviceAccessRule& AddNotDeviceUserAgents(const Aws::String& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceUserAgents(Aws::String&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(std::move(value)); return *this; }
    inline MobileDeviceAccessRule& AddNotDeviceUserAgents(const char* value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time at which an access rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const{ return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    inline void SetDateCreated(const Aws::Utils::DateTime& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = value; }
    inline void SetDateCreated(Aws::Utils::DateTime&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::move(value); }
    inline MobileDeviceAccessRule& WithDateCreated(const Aws::Utils::DateTime& value) { SetDateCreated(value); return *this;}
    inline MobileDeviceAccessRule& WithDateCreated(Aws::Utils::DateTime&& value) { SetDateCreated(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which an access rule was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const{ return m_dateModified; }
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }
    inline void SetDateModified(const Aws::Utils::DateTime& value) { m_dateModifiedHasBeenSet = true; m_dateModified = value; }
    inline void SetDateModified(Aws::Utils::DateTime&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::move(value); }
    inline MobileDeviceAccessRule& WithDateModified(const Aws::Utils::DateTime& value) { SetDateModified(value); return *this;}
    inline MobileDeviceAccessRule& WithDateModified(Aws::Utils::DateTime&& value) { SetDateModified(std::move(value)); return *this;}
    ///@}
  private:

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

    Aws::Utils::DateTime m_dateCreated;
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified;
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
