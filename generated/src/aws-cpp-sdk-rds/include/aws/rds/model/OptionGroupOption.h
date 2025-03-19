/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/OptionGroupOptionSetting.h>
#include <aws/rds/model/OptionVersion.h>
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
   * <p>Available option.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/OptionGroupOption">AWS
   * API Reference</a></p>
   */
  class OptionGroupOption
  {
  public:
    AWS_RDS_API OptionGroupOption() = default;
    AWS_RDS_API OptionGroupOption(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API OptionGroupOption& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the option.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OptionGroupOption& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the option.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    OptionGroupOption& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the engine that this option can be applied to.</p>
     */
    inline const Aws::String& GetEngineName() const { return m_engineName; }
    inline bool EngineNameHasBeenSet() const { return m_engineNameHasBeenSet; }
    template<typename EngineNameT = Aws::String>
    void SetEngineName(EngineNameT&& value) { m_engineNameHasBeenSet = true; m_engineName = std::forward<EngineNameT>(value); }
    template<typename EngineNameT = Aws::String>
    OptionGroupOption& WithEngineName(EngineNameT&& value) { SetEngineName(std::forward<EngineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the major engine version that the option is available for.</p>
     */
    inline const Aws::String& GetMajorEngineVersion() const { return m_majorEngineVersion; }
    inline bool MajorEngineVersionHasBeenSet() const { return m_majorEngineVersionHasBeenSet; }
    template<typename MajorEngineVersionT = Aws::String>
    void SetMajorEngineVersion(MajorEngineVersionT&& value) { m_majorEngineVersionHasBeenSet = true; m_majorEngineVersion = std::forward<MajorEngineVersionT>(value); }
    template<typename MajorEngineVersionT = Aws::String>
    OptionGroupOption& WithMajorEngineVersion(MajorEngineVersionT&& value) { SetMajorEngineVersion(std::forward<MajorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum required engine version for the option to be applied.</p>
     */
    inline const Aws::String& GetMinimumRequiredMinorEngineVersion() const { return m_minimumRequiredMinorEngineVersion; }
    inline bool MinimumRequiredMinorEngineVersionHasBeenSet() const { return m_minimumRequiredMinorEngineVersionHasBeenSet; }
    template<typename MinimumRequiredMinorEngineVersionT = Aws::String>
    void SetMinimumRequiredMinorEngineVersion(MinimumRequiredMinorEngineVersionT&& value) { m_minimumRequiredMinorEngineVersionHasBeenSet = true; m_minimumRequiredMinorEngineVersion = std::forward<MinimumRequiredMinorEngineVersionT>(value); }
    template<typename MinimumRequiredMinorEngineVersionT = Aws::String>
    OptionGroupOption& WithMinimumRequiredMinorEngineVersion(MinimumRequiredMinorEngineVersionT&& value) { SetMinimumRequiredMinorEngineVersion(std::forward<MinimumRequiredMinorEngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the option requires a port.</p>
     */
    inline bool GetPortRequired() const { return m_portRequired; }
    inline bool PortRequiredHasBeenSet() const { return m_portRequiredHasBeenSet; }
    inline void SetPortRequired(bool value) { m_portRequiredHasBeenSet = true; m_portRequired = value; }
    inline OptionGroupOption& WithPortRequired(bool value) { SetPortRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the option requires a port, specifies the default port for the option.</p>
     */
    inline int GetDefaultPort() const { return m_defaultPort; }
    inline bool DefaultPortHasBeenSet() const { return m_defaultPortHasBeenSet; }
    inline void SetDefaultPort(int value) { m_defaultPortHasBeenSet = true; m_defaultPort = value; }
    inline OptionGroupOption& WithDefaultPort(int value) { SetDefaultPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The options that are prerequisites for this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsDependedOn() const { return m_optionsDependedOn; }
    inline bool OptionsDependedOnHasBeenSet() const { return m_optionsDependedOnHasBeenSet; }
    template<typename OptionsDependedOnT = Aws::Vector<Aws::String>>
    void SetOptionsDependedOn(OptionsDependedOnT&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn = std::forward<OptionsDependedOnT>(value); }
    template<typename OptionsDependedOnT = Aws::Vector<Aws::String>>
    OptionGroupOption& WithOptionsDependedOn(OptionsDependedOnT&& value) { SetOptionsDependedOn(std::forward<OptionsDependedOnT>(value)); return *this;}
    template<typename OptionsDependedOnT = Aws::String>
    OptionGroupOption& AddOptionsDependedOn(OptionsDependedOnT&& value) { m_optionsDependedOnHasBeenSet = true; m_optionsDependedOn.emplace_back(std::forward<OptionsDependedOnT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The options that conflict with this option.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOptionsConflictsWith() const { return m_optionsConflictsWith; }
    inline bool OptionsConflictsWithHasBeenSet() const { return m_optionsConflictsWithHasBeenSet; }
    template<typename OptionsConflictsWithT = Aws::Vector<Aws::String>>
    void SetOptionsConflictsWith(OptionsConflictsWithT&& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith = std::forward<OptionsConflictsWithT>(value); }
    template<typename OptionsConflictsWithT = Aws::Vector<Aws::String>>
    OptionGroupOption& WithOptionsConflictsWith(OptionsConflictsWithT&& value) { SetOptionsConflictsWith(std::forward<OptionsConflictsWithT>(value)); return *this;}
    template<typename OptionsConflictsWithT = Aws::String>
    OptionGroupOption& AddOptionsConflictsWith(OptionsConflictsWithT&& value) { m_optionsConflictsWithHasBeenSet = true; m_optionsConflictsWith.emplace_back(std::forward<OptionsConflictsWithT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Persistent options can't be removed from an option group while DB instances
     * are associated with the option group. If you disassociate all DB instances from
     * the option group, your can remove the persistent option from the option
     * group.</p>
     */
    inline bool GetPersistent() const { return m_persistent; }
    inline bool PersistentHasBeenSet() const { return m_persistentHasBeenSet; }
    inline void SetPersistent(bool value) { m_persistentHasBeenSet = true; m_persistent = value; }
    inline OptionGroupOption& WithPersistent(bool value) { SetPersistent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Permanent options can never be removed from an option group. An option group
     * containing a permanent option can't be removed from a DB instance.</p>
     */
    inline bool GetPermanent() const { return m_permanent; }
    inline bool PermanentHasBeenSet() const { return m_permanentHasBeenSet; }
    inline void SetPermanent(bool value) { m_permanentHasBeenSet = true; m_permanent = value; }
    inline OptionGroupOption& WithPermanent(bool value) { SetPermanent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, you must enable the Auto Minor Version Upgrade setting for your DB
     * instance before you can use this option. You can enable Auto Minor Version
     * Upgrade when you first create your DB instance, or by modifying your DB instance
     * later.</p>
     */
    inline bool GetRequiresAutoMinorEngineVersionUpgrade() const { return m_requiresAutoMinorEngineVersionUpgrade; }
    inline bool RequiresAutoMinorEngineVersionUpgradeHasBeenSet() const { return m_requiresAutoMinorEngineVersionUpgradeHasBeenSet; }
    inline void SetRequiresAutoMinorEngineVersionUpgrade(bool value) { m_requiresAutoMinorEngineVersionUpgradeHasBeenSet = true; m_requiresAutoMinorEngineVersionUpgrade = value; }
    inline OptionGroupOption& WithRequiresAutoMinorEngineVersionUpgrade(bool value) { SetRequiresAutoMinorEngineVersionUpgrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, you can only use this option with a DB instance that is in a
     * VPC.</p>
     */
    inline bool GetVpcOnly() const { return m_vpcOnly; }
    inline bool VpcOnlyHasBeenSet() const { return m_vpcOnlyHasBeenSet; }
    inline void SetVpcOnly(bool value) { m_vpcOnlyHasBeenSet = true; m_vpcOnly = value; }
    inline OptionGroupOption& WithVpcOnly(bool value) { SetVpcOnly(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, you can change the option to an earlier version of the option. This
     * only applies to options that have different versions available.</p>
     */
    inline bool GetSupportsOptionVersionDowngrade() const { return m_supportsOptionVersionDowngrade; }
    inline bool SupportsOptionVersionDowngradeHasBeenSet() const { return m_supportsOptionVersionDowngradeHasBeenSet; }
    inline void SetSupportsOptionVersionDowngrade(bool value) { m_supportsOptionVersionDowngradeHasBeenSet = true; m_supportsOptionVersionDowngrade = value; }
    inline OptionGroupOption& WithSupportsOptionVersionDowngrade(bool value) { SetSupportsOptionVersionDowngrade(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option settings that are available (and the default value) for each
     * option in an option group.</p>
     */
    inline const Aws::Vector<OptionGroupOptionSetting>& GetOptionGroupOptionSettings() const { return m_optionGroupOptionSettings; }
    inline bool OptionGroupOptionSettingsHasBeenSet() const { return m_optionGroupOptionSettingsHasBeenSet; }
    template<typename OptionGroupOptionSettingsT = Aws::Vector<OptionGroupOptionSetting>>
    void SetOptionGroupOptionSettings(OptionGroupOptionSettingsT&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings = std::forward<OptionGroupOptionSettingsT>(value); }
    template<typename OptionGroupOptionSettingsT = Aws::Vector<OptionGroupOptionSetting>>
    OptionGroupOption& WithOptionGroupOptionSettings(OptionGroupOptionSettingsT&& value) { SetOptionGroupOptionSettings(std::forward<OptionGroupOptionSettingsT>(value)); return *this;}
    template<typename OptionGroupOptionSettingsT = OptionGroupOptionSetting>
    OptionGroupOption& AddOptionGroupOptionSettings(OptionGroupOptionSettingsT&& value) { m_optionGroupOptionSettingsHasBeenSet = true; m_optionGroupOptionSettings.emplace_back(std::forward<OptionGroupOptionSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The versions that are available for the option.</p>
     */
    inline const Aws::Vector<OptionVersion>& GetOptionGroupOptionVersions() const { return m_optionGroupOptionVersions; }
    inline bool OptionGroupOptionVersionsHasBeenSet() const { return m_optionGroupOptionVersionsHasBeenSet; }
    template<typename OptionGroupOptionVersionsT = Aws::Vector<OptionVersion>>
    void SetOptionGroupOptionVersions(OptionGroupOptionVersionsT&& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions = std::forward<OptionGroupOptionVersionsT>(value); }
    template<typename OptionGroupOptionVersionsT = Aws::Vector<OptionVersion>>
    OptionGroupOption& WithOptionGroupOptionVersions(OptionGroupOptionVersionsT&& value) { SetOptionGroupOptionVersions(std::forward<OptionGroupOptionVersionsT>(value)); return *this;}
    template<typename OptionGroupOptionVersionsT = OptionVersion>
    OptionGroupOption& AddOptionGroupOptionVersions(OptionGroupOptionVersionsT&& value) { m_optionGroupOptionVersionsHasBeenSet = true; m_optionGroupOptionVersions.emplace_back(std::forward<OptionGroupOptionVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether the option can be copied across Amazon Web Services
     * accounts.</p>
     */
    inline bool GetCopyableCrossAccount() const { return m_copyableCrossAccount; }
    inline bool CopyableCrossAccountHasBeenSet() const { return m_copyableCrossAccountHasBeenSet; }
    inline void SetCopyableCrossAccount(bool value) { m_copyableCrossAccountHasBeenSet = true; m_copyableCrossAccount = value; }
    inline OptionGroupOption& WithCopyableCrossAccount(bool value) { SetCopyableCrossAccount(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_engineName;
    bool m_engineNameHasBeenSet = false;

    Aws::String m_majorEngineVersion;
    bool m_majorEngineVersionHasBeenSet = false;

    Aws::String m_minimumRequiredMinorEngineVersion;
    bool m_minimumRequiredMinorEngineVersionHasBeenSet = false;

    bool m_portRequired{false};
    bool m_portRequiredHasBeenSet = false;

    int m_defaultPort{0};
    bool m_defaultPortHasBeenSet = false;

    Aws::Vector<Aws::String> m_optionsDependedOn;
    bool m_optionsDependedOnHasBeenSet = false;

    Aws::Vector<Aws::String> m_optionsConflictsWith;
    bool m_optionsConflictsWithHasBeenSet = false;

    bool m_persistent{false};
    bool m_persistentHasBeenSet = false;

    bool m_permanent{false};
    bool m_permanentHasBeenSet = false;

    bool m_requiresAutoMinorEngineVersionUpgrade{false};
    bool m_requiresAutoMinorEngineVersionUpgradeHasBeenSet = false;

    bool m_vpcOnly{false};
    bool m_vpcOnlyHasBeenSet = false;

    bool m_supportsOptionVersionDowngrade{false};
    bool m_supportsOptionVersionDowngradeHasBeenSet = false;

    Aws::Vector<OptionGroupOptionSetting> m_optionGroupOptionSettings;
    bool m_optionGroupOptionSettingsHasBeenSet = false;

    Aws::Vector<OptionVersion> m_optionGroupOptionVersions;
    bool m_optionGroupOptionVersionsHasBeenSet = false;

    bool m_copyableCrossAccount{false};
    bool m_copyableCrossAccountHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
