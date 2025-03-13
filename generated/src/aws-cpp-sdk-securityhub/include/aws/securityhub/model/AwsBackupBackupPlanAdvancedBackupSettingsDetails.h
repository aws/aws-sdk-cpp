/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides a list of backup options for each resource type. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsBackupBackupPlanAdvancedBackupSettingsDetails">AWS
   * API Reference</a></p>
   */
  class AwsBackupBackupPlanAdvancedBackupSettingsDetails
  {
  public:
    AWS_SECURITYHUB_API AwsBackupBackupPlanAdvancedBackupSettingsDetails() = default;
    AWS_SECURITYHUB_API AwsBackupBackupPlanAdvancedBackupSettingsDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsBackupBackupPlanAdvancedBackupSettingsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the backup option for a selected resource. This option is only
     * available for Windows Volume Shadow Copy Service (VSS) backup jobs. Valid values
     * are as follows:</p> <ul> <li> <p>Set to <code>WindowsVSS: enabled</code> to
     * enable the WindowsVSS backup option and create a Windows VSS backup.</p> </li>
     * <li> <p>Set to <code>WindowsVSS: disabled</code> to create a regular backup. The
     * <code>WindowsVSS</code> option is not enabled by default.</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBackupOptions() const { return m_backupOptions; }
    inline bool BackupOptionsHasBeenSet() const { return m_backupOptionsHasBeenSet; }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetBackupOptions(BackupOptionsT&& value) { m_backupOptionsHasBeenSet = true; m_backupOptions = std::forward<BackupOptionsT>(value); }
    template<typename BackupOptionsT = Aws::Map<Aws::String, Aws::String>>
    AwsBackupBackupPlanAdvancedBackupSettingsDetails& WithBackupOptions(BackupOptionsT&& value) { SetBackupOptions(std::forward<BackupOptionsT>(value)); return *this;}
    template<typename BackupOptionsKeyT = Aws::String, typename BackupOptionsValueT = Aws::String>
    AwsBackupBackupPlanAdvancedBackupSettingsDetails& AddBackupOptions(BackupOptionsKeyT&& key, BackupOptionsValueT&& value) {
      m_backupOptionsHasBeenSet = true; m_backupOptions.emplace(std::forward<BackupOptionsKeyT>(key), std::forward<BackupOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The name of a resource type. The only supported resource type is Amazon EC2
     * instances with Windows VSS.</p> <p>The only valid value is <code>EC2</code>.</p>
     */
    inline const Aws::String& GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    template<typename ResourceTypeT = Aws::String>
    void SetResourceType(ResourceTypeT&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::forward<ResourceTypeT>(value); }
    template<typename ResourceTypeT = Aws::String>
    AwsBackupBackupPlanAdvancedBackupSettingsDetails& WithResourceType(ResourceTypeT&& value) { SetResourceType(std::forward<ResourceTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_backupOptions;
    bool m_backupOptionsHasBeenSet = false;

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
