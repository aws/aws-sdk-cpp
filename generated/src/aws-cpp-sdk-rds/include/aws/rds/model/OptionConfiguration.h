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
   * <p>A list of all available options for an option group.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionConfiguration">AWS
   * API Reference</a></p>
   */
  class OptionConfiguration
  {
  public:
    AWS_RDS_API OptionConfiguration() = default;
    AWS_RDS_API OptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The configuration of options to include in a group.</p>
     */
    inline const Aws::String& GetOptionName() const { return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    template<typename OptionNameT = Aws::String>
    void SetOptionName(OptionNameT&& value) { m_optionNameHasBeenSet = true; m_optionName = std::forward<OptionNameT>(value); }
    template<typename OptionNameT = Aws::String>
    OptionConfiguration& WithOptionName(OptionNameT&& value) { SetOptionName(std::forward<OptionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional port for the option.</p>
     */
    inline int GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline OptionConfiguration& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the option.</p>
     */
    inline const Aws::String& GetOptionVersion() const { return m_optionVersion; }
    inline bool OptionVersionHasBeenSet() const { return m_optionVersionHasBeenSet; }
    template<typename OptionVersionT = Aws::String>
    void SetOptionVersion(OptionVersionT&& value) { m_optionVersionHasBeenSet = true; m_optionVersion = std::forward<OptionVersionT>(value); }
    template<typename OptionVersionT = Aws::String>
    OptionConfiguration& WithOptionVersion(OptionVersionT&& value) { SetOptionVersion(std::forward<OptionVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups used for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroupMemberships() const { return m_dBSecurityGroupMemberships; }
    inline bool DBSecurityGroupMembershipsHasBeenSet() const { return m_dBSecurityGroupMembershipsHasBeenSet; }
    template<typename DBSecurityGroupMembershipsT = Aws::Vector<Aws::String>>
    void SetDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = std::forward<DBSecurityGroupMembershipsT>(value); }
    template<typename DBSecurityGroupMembershipsT = Aws::Vector<Aws::String>>
    OptionConfiguration& WithDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { SetDBSecurityGroupMemberships(std::forward<DBSecurityGroupMembershipsT>(value)); return *this;}
    template<typename DBSecurityGroupMembershipsT = Aws::String>
    OptionConfiguration& AddDBSecurityGroupMemberships(DBSecurityGroupMembershipsT&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.emplace_back(std::forward<DBSecurityGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group names used for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupMemberships() const { return m_vpcSecurityGroupMemberships; }
    inline bool VpcSecurityGroupMembershipsHasBeenSet() const { return m_vpcSecurityGroupMembershipsHasBeenSet; }
    template<typename VpcSecurityGroupMembershipsT = Aws::Vector<Aws::String>>
    void SetVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = std::forward<VpcSecurityGroupMembershipsT>(value); }
    template<typename VpcSecurityGroupMembershipsT = Aws::Vector<Aws::String>>
    OptionConfiguration& WithVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { SetVpcSecurityGroupMemberships(std::forward<VpcSecurityGroupMembershipsT>(value)); return *this;}
    template<typename VpcSecurityGroupMembershipsT = Aws::String>
    OptionConfiguration& AddVpcSecurityGroupMemberships(VpcSecurityGroupMembershipsT&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.emplace_back(std::forward<VpcSecurityGroupMembershipsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option settings to include in an option group.</p>
     */
    inline const Aws::Vector<OptionSetting>& GetOptionSettings() const { return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    template<typename OptionSettingsT = Aws::Vector<OptionSetting>>
    void SetOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::forward<OptionSettingsT>(value); }
    template<typename OptionSettingsT = Aws::Vector<OptionSetting>>
    OptionConfiguration& WithOptionSettings(OptionSettingsT&& value) { SetOptionSettings(std::forward<OptionSettingsT>(value)); return *this;}
    template<typename OptionSettingsT = OptionSetting>
    OptionConfiguration& AddOptionSettings(OptionSettingsT&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.emplace_back(std::forward<OptionSettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    int m_port{0};
    bool m_portHasBeenSet = false;

    Aws::String m_optionVersion;
    bool m_optionVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_dBSecurityGroupMemberships;
    bool m_dBSecurityGroupMembershipsHasBeenSet = false;

    Aws::Vector<Aws::String> m_vpcSecurityGroupMemberships;
    bool m_vpcSecurityGroupMembershipsHasBeenSet = false;

    Aws::Vector<OptionSetting> m_optionSettings;
    bool m_optionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
