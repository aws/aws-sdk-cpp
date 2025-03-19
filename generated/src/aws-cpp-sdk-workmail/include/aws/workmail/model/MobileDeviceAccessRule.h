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
    AWS_WORKMAIL_API MobileDeviceAccessRule() = default;
    AWS_WORKMAIL_API MobileDeviceAccessRule(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API MobileDeviceAccessRule& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKMAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID assigned to a mobile access rule.</p>
     */
    inline const Aws::String& GetMobileDeviceAccessRuleId() const { return m_mobileDeviceAccessRuleId; }
    inline bool MobileDeviceAccessRuleIdHasBeenSet() const { return m_mobileDeviceAccessRuleIdHasBeenSet; }
    template<typename MobileDeviceAccessRuleIdT = Aws::String>
    void SetMobileDeviceAccessRuleId(MobileDeviceAccessRuleIdT&& value) { m_mobileDeviceAccessRuleIdHasBeenSet = true; m_mobileDeviceAccessRuleId = std::forward<MobileDeviceAccessRuleIdT>(value); }
    template<typename MobileDeviceAccessRuleIdT = Aws::String>
    MobileDeviceAccessRule& WithMobileDeviceAccessRuleId(MobileDeviceAccessRuleIdT&& value) { SetMobileDeviceAccessRuleId(std::forward<MobileDeviceAccessRuleIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of a mobile access rule.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    MobileDeviceAccessRule& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of a mobile access rule.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    MobileDeviceAccessRule& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The effect of the rule when it matches. Allowed values are <code>ALLOW</code>
     * or <code>DENY</code>.</p>
     */
    inline MobileDeviceAccessRuleEffect GetEffect() const { return m_effect; }
    inline bool EffectHasBeenSet() const { return m_effectHasBeenSet; }
    inline void SetEffect(MobileDeviceAccessRuleEffect value) { m_effectHasBeenSet = true; m_effect = value; }
    inline MobileDeviceAccessRule& WithEffect(MobileDeviceAccessRuleEffect value) { SetEffect(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Device types that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const { return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    void SetDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::forward<DeviceTypesT>(value); }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithDeviceTypes(DeviceTypesT&& value) { SetDeviceTypes(std::forward<DeviceTypesT>(value)); return *this;}
    template<typename DeviceTypesT = Aws::String>
    MobileDeviceAccessRule& AddDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.emplace_back(std::forward<DeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device types that a rule <b>will not</b> match. All other device types will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceTypes() const { return m_notDeviceTypes; }
    inline bool NotDeviceTypesHasBeenSet() const { return m_notDeviceTypesHasBeenSet; }
    template<typename NotDeviceTypesT = Aws::Vector<Aws::String>>
    void SetNotDeviceTypes(NotDeviceTypesT&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes = std::forward<NotDeviceTypesT>(value); }
    template<typename NotDeviceTypesT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithNotDeviceTypes(NotDeviceTypesT&& value) { SetNotDeviceTypes(std::forward<NotDeviceTypesT>(value)); return *this;}
    template<typename NotDeviceTypesT = Aws::String>
    MobileDeviceAccessRule& AddNotDeviceTypes(NotDeviceTypesT&& value) { m_notDeviceTypesHasBeenSet = true; m_notDeviceTypes.emplace_back(std::forward<NotDeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceModels() const { return m_deviceModels; }
    inline bool DeviceModelsHasBeenSet() const { return m_deviceModelsHasBeenSet; }
    template<typename DeviceModelsT = Aws::Vector<Aws::String>>
    void SetDeviceModels(DeviceModelsT&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels = std::forward<DeviceModelsT>(value); }
    template<typename DeviceModelsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithDeviceModels(DeviceModelsT&& value) { SetDeviceModels(std::forward<DeviceModelsT>(value)); return *this;}
    template<typename DeviceModelsT = Aws::String>
    MobileDeviceAccessRule& AddDeviceModels(DeviceModelsT&& value) { m_deviceModelsHasBeenSet = true; m_deviceModels.emplace_back(std::forward<DeviceModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device models that a rule <b>will not</b> match. All other device models will
     * match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceModels() const { return m_notDeviceModels; }
    inline bool NotDeviceModelsHasBeenSet() const { return m_notDeviceModelsHasBeenSet; }
    template<typename NotDeviceModelsT = Aws::Vector<Aws::String>>
    void SetNotDeviceModels(NotDeviceModelsT&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels = std::forward<NotDeviceModelsT>(value); }
    template<typename NotDeviceModelsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithNotDeviceModels(NotDeviceModelsT&& value) { SetNotDeviceModels(std::forward<NotDeviceModelsT>(value)); return *this;}
    template<typename NotDeviceModelsT = Aws::String>
    MobileDeviceAccessRule& AddNotDeviceModels(NotDeviceModelsT&& value) { m_notDeviceModelsHasBeenSet = true; m_notDeviceModels.emplace_back(std::forward<NotDeviceModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceOperatingSystems() const { return m_deviceOperatingSystems; }
    inline bool DeviceOperatingSystemsHasBeenSet() const { return m_deviceOperatingSystemsHasBeenSet; }
    template<typename DeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    void SetDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems = std::forward<DeviceOperatingSystemsT>(value); }
    template<typename DeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { SetDeviceOperatingSystems(std::forward<DeviceOperatingSystemsT>(value)); return *this;}
    template<typename DeviceOperatingSystemsT = Aws::String>
    MobileDeviceAccessRule& AddDeviceOperatingSystems(DeviceOperatingSystemsT&& value) { m_deviceOperatingSystemsHasBeenSet = true; m_deviceOperatingSystems.emplace_back(std::forward<DeviceOperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device operating systems that a rule <b>will not</b> match. All other device
     * types will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceOperatingSystems() const { return m_notDeviceOperatingSystems; }
    inline bool NotDeviceOperatingSystemsHasBeenSet() const { return m_notDeviceOperatingSystemsHasBeenSet; }
    template<typename NotDeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    void SetNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems = std::forward<NotDeviceOperatingSystemsT>(value); }
    template<typename NotDeviceOperatingSystemsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { SetNotDeviceOperatingSystems(std::forward<NotDeviceOperatingSystemsT>(value)); return *this;}
    template<typename NotDeviceOperatingSystemsT = Aws::String>
    MobileDeviceAccessRule& AddNotDeviceOperatingSystems(NotDeviceOperatingSystemsT&& value) { m_notDeviceOperatingSystemsHasBeenSet = true; m_notDeviceOperatingSystems.emplace_back(std::forward<NotDeviceOperatingSystemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that a rule will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceUserAgents() const { return m_deviceUserAgents; }
    inline bool DeviceUserAgentsHasBeenSet() const { return m_deviceUserAgentsHasBeenSet; }
    template<typename DeviceUserAgentsT = Aws::Vector<Aws::String>>
    void SetDeviceUserAgents(DeviceUserAgentsT&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents = std::forward<DeviceUserAgentsT>(value); }
    template<typename DeviceUserAgentsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithDeviceUserAgents(DeviceUserAgentsT&& value) { SetDeviceUserAgents(std::forward<DeviceUserAgentsT>(value)); return *this;}
    template<typename DeviceUserAgentsT = Aws::String>
    MobileDeviceAccessRule& AddDeviceUserAgents(DeviceUserAgentsT&& value) { m_deviceUserAgentsHasBeenSet = true; m_deviceUserAgents.emplace_back(std::forward<DeviceUserAgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Device user agents that a rule <b>will not</b> match. All other device user
     * agents will match.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNotDeviceUserAgents() const { return m_notDeviceUserAgents; }
    inline bool NotDeviceUserAgentsHasBeenSet() const { return m_notDeviceUserAgentsHasBeenSet; }
    template<typename NotDeviceUserAgentsT = Aws::Vector<Aws::String>>
    void SetNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents = std::forward<NotDeviceUserAgentsT>(value); }
    template<typename NotDeviceUserAgentsT = Aws::Vector<Aws::String>>
    MobileDeviceAccessRule& WithNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { SetNotDeviceUserAgents(std::forward<NotDeviceUserAgentsT>(value)); return *this;}
    template<typename NotDeviceUserAgentsT = Aws::String>
    MobileDeviceAccessRule& AddNotDeviceUserAgents(NotDeviceUserAgentsT&& value) { m_notDeviceUserAgentsHasBeenSet = true; m_notDeviceUserAgents.emplace_back(std::forward<NotDeviceUserAgentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The date and time at which an access rule was created.</p>
     */
    inline const Aws::Utils::DateTime& GetDateCreated() const { return m_dateCreated; }
    inline bool DateCreatedHasBeenSet() const { return m_dateCreatedHasBeenSet; }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    void SetDateCreated(DateCreatedT&& value) { m_dateCreatedHasBeenSet = true; m_dateCreated = std::forward<DateCreatedT>(value); }
    template<typename DateCreatedT = Aws::Utils::DateTime>
    MobileDeviceAccessRule& WithDateCreated(DateCreatedT&& value) { SetDateCreated(std::forward<DateCreatedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which an access rule was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetDateModified() const { return m_dateModified; }
    inline bool DateModifiedHasBeenSet() const { return m_dateModifiedHasBeenSet; }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    void SetDateModified(DateModifiedT&& value) { m_dateModifiedHasBeenSet = true; m_dateModified = std::forward<DateModifiedT>(value); }
    template<typename DateModifiedT = Aws::Utils::DateTime>
    MobileDeviceAccessRule& WithDateModified(DateModifiedT&& value) { SetDateModified(std::forward<DateModifiedT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_mobileDeviceAccessRuleId;
    bool m_mobileDeviceAccessRuleIdHasBeenSet = false;

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

    Aws::Utils::DateTime m_dateCreated{};
    bool m_dateCreatedHasBeenSet = false;

    Aws::Utils::DateTime m_dateModified{};
    bool m_dateModifiedHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
