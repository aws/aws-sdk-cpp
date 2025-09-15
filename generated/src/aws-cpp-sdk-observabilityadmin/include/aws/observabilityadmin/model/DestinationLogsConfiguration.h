/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/LogsEncryptionConfiguration.h>
#include <aws/observabilityadmin/model/LogsBackupConfiguration.h>
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
namespace ObservabilityAdmin
{
namespace Model
{

  /**
   * <p>Configuration for centralization destination log groups, including encryption
   * and backup settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DestinationLogsConfiguration">AWS
   * API Reference</a></p>
   */
  class DestinationLogsConfiguration
  {
  public:
    AWS_OBSERVABILITYADMIN_API DestinationLogsConfiguration() = default;
    AWS_OBSERVABILITYADMIN_API DestinationLogsConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API DestinationLogsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The encryption configuration for centralization destination log groups.</p>
     */
    inline const LogsEncryptionConfiguration& GetLogsEncryptionConfiguration() const { return m_logsEncryptionConfiguration; }
    inline bool LogsEncryptionConfigurationHasBeenSet() const { return m_logsEncryptionConfigurationHasBeenSet; }
    template<typename LogsEncryptionConfigurationT = LogsEncryptionConfiguration>
    void SetLogsEncryptionConfiguration(LogsEncryptionConfigurationT&& value) { m_logsEncryptionConfigurationHasBeenSet = true; m_logsEncryptionConfiguration = std::forward<LogsEncryptionConfigurationT>(value); }
    template<typename LogsEncryptionConfigurationT = LogsEncryptionConfiguration>
    DestinationLogsConfiguration& WithLogsEncryptionConfiguration(LogsEncryptionConfigurationT&& value) { SetLogsEncryptionConfiguration(std::forward<LogsEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration defining the backup region and an optional KMS key for the
     * backup destination.</p>
     */
    inline const LogsBackupConfiguration& GetBackupConfiguration() const { return m_backupConfiguration; }
    inline bool BackupConfigurationHasBeenSet() const { return m_backupConfigurationHasBeenSet; }
    template<typename BackupConfigurationT = LogsBackupConfiguration>
    void SetBackupConfiguration(BackupConfigurationT&& value) { m_backupConfigurationHasBeenSet = true; m_backupConfiguration = std::forward<BackupConfigurationT>(value); }
    template<typename BackupConfigurationT = LogsBackupConfiguration>
    DestinationLogsConfiguration& WithBackupConfiguration(BackupConfigurationT&& value) { SetBackupConfiguration(std::forward<BackupConfigurationT>(value)); return *this;}
    ///@}
  private:

    LogsEncryptionConfiguration m_logsEncryptionConfiguration;
    bool m_logsEncryptionConfigurationHasBeenSet = false;

    LogsBackupConfiguration m_backupConfiguration;
    bool m_backupConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ObservabilityAdmin
} // namespace Aws
