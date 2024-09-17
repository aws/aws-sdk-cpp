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
    AWS_RDS_API OptionConfiguration();
    AWS_RDS_API OptionConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The configuration of options to include in a group.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }
    inline OptionConfiguration& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}
    inline OptionConfiguration& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}
    inline OptionConfiguration& WithOptionName(const char* value) { SetOptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional port for the option.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline OptionConfiguration& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version for the option.</p>
     */
    inline const Aws::String& GetOptionVersion() const{ return m_optionVersion; }
    inline bool OptionVersionHasBeenSet() const { return m_optionVersionHasBeenSet; }
    inline void SetOptionVersion(const Aws::String& value) { m_optionVersionHasBeenSet = true; m_optionVersion = value; }
    inline void SetOptionVersion(Aws::String&& value) { m_optionVersionHasBeenSet = true; m_optionVersion = std::move(value); }
    inline void SetOptionVersion(const char* value) { m_optionVersionHasBeenSet = true; m_optionVersion.assign(value); }
    inline OptionConfiguration& WithOptionVersion(const Aws::String& value) { SetOptionVersion(value); return *this;}
    inline OptionConfiguration& WithOptionVersion(Aws::String&& value) { SetOptionVersion(std::move(value)); return *this;}
    inline OptionConfiguration& WithOptionVersion(const char* value) { SetOptionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of DB security groups used for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDBSecurityGroupMemberships() const{ return m_dBSecurityGroupMemberships; }
    inline bool DBSecurityGroupMembershipsHasBeenSet() const { return m_dBSecurityGroupMembershipsHasBeenSet; }
    inline void SetDBSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = value; }
    inline void SetDBSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = std::move(value); }
    inline OptionConfiguration& WithDBSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { SetDBSecurityGroupMemberships(value); return *this;}
    inline OptionConfiguration& WithDBSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { SetDBSecurityGroupMemberships(std::move(value)); return *this;}
    inline OptionConfiguration& AddDBSecurityGroupMemberships(const Aws::String& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }
    inline OptionConfiguration& AddDBSecurityGroupMemberships(Aws::String&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(std::move(value)); return *this; }
    inline OptionConfiguration& AddDBSecurityGroupMemberships(const char* value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of VPC security group names used for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVpcSecurityGroupMemberships() const{ return m_vpcSecurityGroupMemberships; }
    inline bool VpcSecurityGroupMembershipsHasBeenSet() const { return m_vpcSecurityGroupMembershipsHasBeenSet; }
    inline void SetVpcSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = value; }
    inline void SetVpcSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = std::move(value); }
    inline OptionConfiguration& WithVpcSecurityGroupMemberships(const Aws::Vector<Aws::String>& value) { SetVpcSecurityGroupMemberships(value); return *this;}
    inline OptionConfiguration& WithVpcSecurityGroupMemberships(Aws::Vector<Aws::String>&& value) { SetVpcSecurityGroupMemberships(std::move(value)); return *this;}
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(const Aws::String& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(Aws::String&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(std::move(value)); return *this; }
    inline OptionConfiguration& AddVpcSecurityGroupMemberships(const char* value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The option settings to include in an option group.</p>
     */
    inline const Aws::Vector<OptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<OptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<OptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline OptionConfiguration& WithOptionSettings(const Aws::Vector<OptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline OptionConfiguration& WithOptionSettings(Aws::Vector<OptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline OptionConfiguration& AddOptionSettings(const OptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline OptionConfiguration& AddOptionSettings(OptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    int m_port;
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
