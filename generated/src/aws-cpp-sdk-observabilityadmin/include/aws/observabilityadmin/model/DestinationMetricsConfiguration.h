/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/MetricsBackupConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>Configuration for centralization destination metrics, including backup
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DestinationMetricsConfiguration">AWS
 * API Reference</a></p>
 */
class DestinationMetricsConfiguration {
 public:
  AWS_OBSERVABILITYADMIN_API DestinationMetricsConfiguration() = default;
  AWS_OBSERVABILITYADMIN_API DestinationMetricsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API DestinationMetricsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Configuration defining the backup region for the metrics backup
   * destination.</p>
   */
  inline const MetricsBackupConfiguration& GetBackupConfiguration() const { return m_backupConfiguration; }
  inline bool BackupConfigurationHasBeenSet() const { return m_backupConfigurationHasBeenSet; }
  template <typename BackupConfigurationT = MetricsBackupConfiguration>
  void SetBackupConfiguration(BackupConfigurationT&& value) {
    m_backupConfigurationHasBeenSet = true;
    m_backupConfiguration = std::forward<BackupConfigurationT>(value);
  }
  template <typename BackupConfigurationT = MetricsBackupConfiguration>
  DestinationMetricsConfiguration& WithBackupConfiguration(BackupConfigurationT&& value) {
    SetBackupConfiguration(std::forward<BackupConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  MetricsBackupConfiguration m_backupConfiguration;
  bool m_backupConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
