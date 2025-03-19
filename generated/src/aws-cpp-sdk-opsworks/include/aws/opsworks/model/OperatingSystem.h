/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opsworks/model/OperatingSystemConfigurationManager.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Describes supported operating systems in OpsWorks Stacks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/OperatingSystem">AWS
   * API Reference</a></p>
   */
  class OperatingSystem
  {
  public:
    AWS_OPSWORKS_API OperatingSystem() = default;
    AWS_OPSWORKS_API OperatingSystem(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API OperatingSystem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPSWORKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the operating system, such as <code>Amazon Linux 2</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    OperatingSystem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a supported operating system, such as <code>Amazon Linux
     * 2</code>.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    OperatingSystem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of a supported operating system, either <code>Linux</code> or
     * <code>Windows</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    OperatingSystem& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Supported configuration manager name and versions for an OpsWorks Stacks
     * operating system.</p>
     */
    inline const Aws::Vector<OperatingSystemConfigurationManager>& GetConfigurationManagers() const { return m_configurationManagers; }
    inline bool ConfigurationManagersHasBeenSet() const { return m_configurationManagersHasBeenSet; }
    template<typename ConfigurationManagersT = Aws::Vector<OperatingSystemConfigurationManager>>
    void SetConfigurationManagers(ConfigurationManagersT&& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers = std::forward<ConfigurationManagersT>(value); }
    template<typename ConfigurationManagersT = Aws::Vector<OperatingSystemConfigurationManager>>
    OperatingSystem& WithConfigurationManagers(ConfigurationManagersT&& value) { SetConfigurationManagers(std::forward<ConfigurationManagersT>(value)); return *this;}
    template<typename ConfigurationManagersT = OperatingSystemConfigurationManager>
    OperatingSystem& AddConfigurationManagers(ConfigurationManagersT&& value) { m_configurationManagersHasBeenSet = true; m_configurationManagers.emplace_back(std::forward<ConfigurationManagersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A short name for the operating system manufacturer.</p>
     */
    inline const Aws::String& GetReportedName() const { return m_reportedName; }
    inline bool ReportedNameHasBeenSet() const { return m_reportedNameHasBeenSet; }
    template<typename ReportedNameT = Aws::String>
    void SetReportedName(ReportedNameT&& value) { m_reportedNameHasBeenSet = true; m_reportedName = std::forward<ReportedNameT>(value); }
    template<typename ReportedNameT = Aws::String>
    OperatingSystem& WithReportedName(ReportedNameT&& value) { SetReportedName(std::forward<ReportedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the operating system, including the release and edition, if
     * applicable.</p>
     */
    inline const Aws::String& GetReportedVersion() const { return m_reportedVersion; }
    inline bool ReportedVersionHasBeenSet() const { return m_reportedVersionHasBeenSet; }
    template<typename ReportedVersionT = Aws::String>
    void SetReportedVersion(ReportedVersionT&& value) { m_reportedVersionHasBeenSet = true; m_reportedVersion = std::forward<ReportedVersionT>(value); }
    template<typename ReportedVersionT = Aws::String>
    OperatingSystem& WithReportedVersion(ReportedVersionT&& value) { SetReportedVersion(std::forward<ReportedVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that an operating system is not supported for new instances.</p>
     */
    inline bool GetSupported() const { return m_supported; }
    inline bool SupportedHasBeenSet() const { return m_supportedHasBeenSet; }
    inline void SetSupported(bool value) { m_supportedHasBeenSet = true; m_supported = value; }
    inline OperatingSystem& WithSupported(bool value) { SetSupported(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Vector<OperatingSystemConfigurationManager> m_configurationManagers;
    bool m_configurationManagersHasBeenSet = false;

    Aws::String m_reportedName;
    bool m_reportedNameHasBeenSet = false;

    Aws::String m_reportedVersion;
    bool m_reportedVersionHasBeenSet = false;

    bool m_supported{false};
    bool m_supportedHasBeenSet = false;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
