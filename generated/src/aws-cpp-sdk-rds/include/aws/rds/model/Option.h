﻿/**
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
    AWS_RDS_API Option();
    AWS_RDS_API Option(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Option& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetOptionName() const{ return m_optionName; }
    inline bool OptionNameHasBeenSet() const { return m_optionNameHasBeenSet; }
    inline void SetOptionName(const Aws::String& value) { m_optionNameHasBeenSet = true; m_optionName = value; }
    inline void SetOptionName(Aws::String&& value) { m_optionNameHasBeenSet = true; m_optionName = std::move(value); }
    inline void SetOptionName(const char* value) { m_optionNameHasBeenSet = true; m_optionName.assign(value); }
    inline Option& WithOptionName(const Aws::String& value) { SetOptionName(value); return *this;}
    inline Option& WithOptionName(Aws::String&& value) { SetOptionName(std::move(value)); return *this;}
    inline Option& WithOptionName(const char* value) { SetOptionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option.</p>
     */
    inline const Aws::String& GetOptionDescription() const{ return m_optionDescription; }
    inline bool OptionDescriptionHasBeenSet() const { return m_optionDescriptionHasBeenSet; }
    inline void SetOptionDescription(const Aws::String& value) { m_optionDescriptionHasBeenSet = true; m_optionDescription = value; }
    inline void SetOptionDescription(Aws::String&& value) { m_optionDescriptionHasBeenSet = true; m_optionDescription = std::move(value); }
    inline void SetOptionDescription(const char* value) { m_optionDescriptionHasBeenSet = true; m_optionDescription.assign(value); }
    inline Option& WithOptionDescription(const Aws::String& value) { SetOptionDescription(value); return *this;}
    inline Option& WithOptionDescription(Aws::String&& value) { SetOptionDescription(std::move(value)); return *this;}
    inline Option& WithOptionDescription(const char* value) { SetOptionDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option is persistent.</p>
     */
    inline bool GetPersistent() const{ return m_persistent; }
    inline bool PersistentHasBeenSet() const { return m_persistentHasBeenSet; }
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }
    inline Option& WithPersistent(bool value) { SetPersistent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether this option is permanent.</p>
     */
    inline bool GetPermanent() const{ return m_permanent; }
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }
    inline Option& WithPermanent(bool value) { SetPermanent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If required, the port configured for this option to use.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline Option& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the option.</p>
     */
    inline const Aws::String& GetOptionVersion() const{ return m_optionVersion; }
    inline bool OptionVersionHasBeenSet() const { return m_optionVersionHasBeenSet; }
    inline void SetOptionVersion(const Aws::String& value) { m_optionVersionHasBeenSet = true; m_optionVersion = value; }
    inline void SetOptionVersion(Aws::String&& value) { m_optionVersionHasBeenSet = true; m_optionVersion = std::move(value); }
    inline void SetOptionVersion(const char* value) { m_optionVersionHasBeenSet = true; m_optionVersion.assign(value); }
    inline Option& WithOptionVersion(const Aws::String& value) { SetOptionVersion(value); return *this;}
    inline Option& WithOptionVersion(Aws::String&& value) { SetOptionVersion(std::move(value)); return *this;}
    inline Option& WithOptionVersion(const char* value) { SetOptionVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option settings for this option.</p>
     */
    inline const Aws::Vector<OptionSetting>& GetOptionSettings() const{ return m_optionSettings; }
    inline bool OptionSettingsHasBeenSet() const { return m_optionSettingsHasBeenSet; }
    inline void SetOptionSettings(const Aws::Vector<OptionSetting>& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = value; }
    inline void SetOptionSettings(Aws::Vector<OptionSetting>&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings = std::move(value); }
    inline Option& WithOptionSettings(const Aws::Vector<OptionSetting>& value) { SetOptionSettings(value); return *this;}
    inline Option& WithOptionSettings(Aws::Vector<OptionSetting>&& value) { SetOptionSettings(std::move(value)); return *this;}
    inline Option& AddOptionSettings(const OptionSetting& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(value); return *this; }
    inline Option& AddOptionSettings(OptionSetting&& value) { m_optionSettingsHasBeenSet = true; m_optionSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the option requires access to a port, then this DB security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<DBSecurityGroupMembership>& GetDBSecurityGroupMemberships() const{ return m_dBSecurityGroupMemberships; }
    inline bool DBSecurityGroupMembershipsHasBeenSet() const { return m_dBSecurityGroupMembershipsHasBeenSet; }
    inline void SetDBSecurityGroupMemberships(const Aws::Vector<DBSecurityGroupMembership>& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = value; }
    inline void SetDBSecurityGroupMemberships(Aws::Vector<DBSecurityGroupMembership>&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships = std::move(value); }
    inline Option& WithDBSecurityGroupMemberships(const Aws::Vector<DBSecurityGroupMembership>& value) { SetDBSecurityGroupMemberships(value); return *this;}
    inline Option& WithDBSecurityGroupMemberships(Aws::Vector<DBSecurityGroupMembership>&& value) { SetDBSecurityGroupMemberships(std::move(value)); return *this;}
    inline Option& AddDBSecurityGroupMemberships(const DBSecurityGroupMembership& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(value); return *this; }
    inline Option& AddDBSecurityGroupMemberships(DBSecurityGroupMembership&& value) { m_dBSecurityGroupMembershipsHasBeenSet = true; m_dBSecurityGroupMemberships.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the option requires access to a port, then this VPC security group allows
     * access to the port.</p>
     */
    inline const Aws::Vector<VpcSecurityGroupMembership>& GetVpcSecurityGroupMemberships() const{ return m_vpcSecurityGroupMemberships; }
    inline bool VpcSecurityGroupMembershipsHasBeenSet() const { return m_vpcSecurityGroupMembershipsHasBeenSet; }
    inline void SetVpcSecurityGroupMemberships(const Aws::Vector<VpcSecurityGroupMembership>& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = value; }
    inline void SetVpcSecurityGroupMemberships(Aws::Vector<VpcSecurityGroupMembership>&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships = std::move(value); }
    inline Option& WithVpcSecurityGroupMemberships(const Aws::Vector<VpcSecurityGroupMembership>& value) { SetVpcSecurityGroupMemberships(value); return *this;}
    inline Option& WithVpcSecurityGroupMemberships(Aws::Vector<VpcSecurityGroupMembership>&& value) { SetVpcSecurityGroupMemberships(std::move(value)); return *this;}
    inline Option& AddVpcSecurityGroupMemberships(const VpcSecurityGroupMembership& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(value); return *this; }
    inline Option& AddVpcSecurityGroupMemberships(VpcSecurityGroupMembership&& value) { m_vpcSecurityGroupMembershipsHasBeenSet = true; m_vpcSecurityGroupMemberships.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_optionName;
    bool m_optionNameHasBeenSet = false;

    Aws::String m_optionDescription;
    bool m_optionDescriptionHasBeenSet = false;

    bool m_persistent;
    bool m_persistentHasBeenSet = false;

    bool m_permanent;
    bool m_permanentHasBeenSet = false;

    int m_port;
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
