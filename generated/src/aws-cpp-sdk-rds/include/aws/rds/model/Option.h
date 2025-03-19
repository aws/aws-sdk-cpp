/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionSetting.h>
#include <aws/rds/model/DBSecurityGroupMembership.h>
#include <aws/rds/model/VpcSecurityGroupMembership.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>The details of an option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Option">AWS API
   * Reference</a></p>
   */
  class Option
  {
  public:
    AWS_RDS_API Option() = default;
    AWS_RDS_API Option(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Option& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const { return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    template<typename OptionNameT = Aws::String>
    void SetOptionName(OptionNameT&& value) { m_optionNameHasBeenSet = true; m_optionName = std::forward<OptionNameT>(value); }
    template<typename OptionNameT = Aws::String>
    Option& WithOptionName(OptionNameT&& value) { SetOptionName(std::forward<OptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option.</p>
     */
    inline const Aws::String& GetOptionDescription() const { return m_optionDescription; }
    inline bool OptionDescriptionHasBeenSet() const { return m_optionDescriptionHasBeenSet; }
    template<typename OptionDescriptionT = Aws::String>
    void SetOptionDescription(OptionDescriptionT&& value) { m_optionDescriptionHasBeenSet = true; m_optionDescription = std::forward<OptionDescriptionT>(value); }
    template<typename OptionDescriptionT = Aws::String>
    Option& WithOptionDescription(OptionDescriptionT&& value) { SetOptionDescription(std::forward<OptionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option is persistent.</p>
     */
    inline bool GetPersistent() const { return m_persistent; }
    inline bool PersistentHasBeenSet() const { return m_persistentHasBeenSet; }
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }
    inline Option& WithPersistent(bool value) { SetPersistent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option is permanent.</p>
     */
    inline bool GetPermanent() const { return m_permanent; }
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }
    inline Option& WithPermanent(bool value) { SetPermanent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Option& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetOptionVersion() const { return m_optionVersion; }
    inline bool OptionVersionHasBeenSet() const { return m_optionVersionHasBeenSet; }
    template<typename OptionVersionT = Aws::String>
    void SetOptionVersion(OptionVersionT&& value) { m_optionVersionHasBeenSet = true; m_optionVersion = std::forward<OptionVersionT>(value); }
    template<typename OptionVersionT = Aws::String>
    Option& WithOptionVersion(OptionVersionT&& value) { SetOptionVersion(std::forward<OptionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option settings for this option.</p>
     */
    inline const Aws::Vector<OptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<OptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<OptionSetting>>
    Option& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = OptionSetting>
    Option& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroupMemberships() const { return m_dBSecurityGroupMemberships; }
    inline bool DBSecurityGroupMembershipsHasBeenSet() const { return m_dBSecurityGroupMembershipsHasBeenSet; }
    template<typename DBSecurityGroupMembershipsT = Aws::Vector<DBSecurityGroupMembership>>
    void SetDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = std::forward<DBSecurityGroupMembershipsT>(value); }
    template<typename DBSecurityGroupMembershipsT = Aws::Vector<DBSecurityGroupMembership>>
    Option& WithDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { SetDBSecurityGroupMemberships(std::forward<DBSecurityGroupMembershipsT>(value)); return *this;}
    template<typename DBSecurityGroupMembershipsT = DBSecurityGroupMembership>
    Option& AddDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.emplace_back(std::forward<DBSecurityGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroupMemberships() const { return m_vpcSecurityGroupMemberships; }
    inline bool VpcSecurityGroupMembershipsHasBeenSet() const { return m_vpcSecurityGroupMembershipsHasBeenSet; }
    template<typename VpcSecurityGroupMembershipsT = Aws::Vector<VpcSecurityGroupMembership>>
    void SetVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = std::forward<VpcSecurityGroupMembershipsT>(value); }
    template<typename VpcSecurityGroupMembershipsT = Aws::Vector<VpcSecurityGroupMembership>>
    Option& WithVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { SetVpcSecurityGroupMemberships(std::forward<VpcSecurityGroupMembershipsT>(value)); return *this;}
    template<typename VpcSecurityGroupMembershipsT = VpcSecurityGroupMembership>
    Option& AddVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.emplace_back(std::forward<VpcSecurityGroupMembershipsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    Aws::String m_optionDescription;
    bool m_optionDescriptionHasBeenSet = false;

    bool m_persistent{false};
    bool m_persistentHasBeenSet = false;

    bool m_permanent{false};
    bool m_permanentHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_optionVersion;
    bool m_optionVersionHasBeenSet = false;

    Aws::Vector<OptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;

    Aws::Vector<DBSecurityGroupMembership> m_dBSecurityGroupMemberships;
    bool m_dBSecurityGroupMembershipsHasBeenSet = false;

    Aws::Vector<VpcSecurityGroupMembership> m_vpcSecurityGroupMemberships;
    bool m_vpcSecurityGroupMembershipsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
