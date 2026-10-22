/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/DeletionProtection.h>
#include <aws/observabilityadmin/model/LogGroupNameConfiguration.h>
#include <aws/observabilityadmin/model/LogsBackupConfiguration.h>
#include <aws/observabilityadmin/model/LogsEncryptionConfiguration.h>
#include <aws/observabilityadmin/model/TagPropagationConfiguration.h>

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
 * <p>Configuration for centralization destination log groups, including encryption
 * and backup settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/DestinationLogsConfiguration">AWS
 * API Reference</a></p>
 */
class DestinationLogsConfiguration {
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
  template <typename LogsEncryptionConfigurationT = LogsEncryptionConfiguration>
  void SetLogsEncryptionConfiguration(LogsEncryptionConfigurationT&& value) {
    m_logsEncryptionConfigurationHasBeenSet = true;
    m_logsEncryptionConfiguration = std::forward<LogsEncryptionConfigurationT>(value);
  }
  template <typename LogsEncryptionConfigurationT = LogsEncryptionConfiguration>
  DestinationLogsConfiguration& WithLogsEncryptionConfiguration(LogsEncryptionConfigurationT&& value) {
    SetLogsEncryptionConfiguration(std::forward<LogsEncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration defining the backup region and an optional KMS key for the
   * backup destination.</p>
   */
  inline const LogsBackupConfiguration& GetBackupConfiguration() const { return m_backupConfiguration; }
  inline bool BackupConfigurationHasBeenSet() const { return m_backupConfigurationHasBeenSet; }
  template <typename BackupConfigurationT = LogsBackupConfiguration>
  void SetBackupConfiguration(BackupConfigurationT&& value) {
    m_backupConfigurationHasBeenSet = true;
    m_backupConfiguration = std::forward<BackupConfigurationT>(value);
  }
  template <typename BackupConfigurationT = LogsBackupConfiguration>
  DestinationLogsConfiguration& WithBackupConfiguration(BackupConfigurationT&& value) {
    SetBackupConfiguration(std::forward<BackupConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration that specifies a naming pattern for destination log groups
   * created during centralization. The pattern supports static text and dynamic
   * variables that are replaced with source attributes when log groups are
   * created.</p>
   */
  inline const LogGroupNameConfiguration& GetLogGroupNameConfiguration() const { return m_logGroupNameConfiguration; }
  inline bool LogGroupNameConfigurationHasBeenSet() const { return m_logGroupNameConfigurationHasBeenSet; }
  template <typename LogGroupNameConfigurationT = LogGroupNameConfiguration>
  void SetLogGroupNameConfiguration(LogGroupNameConfigurationT&& value) {
    m_logGroupNameConfigurationHasBeenSet = true;
    m_logGroupNameConfiguration = std::forward<LogGroupNameConfigurationT>(value);
  }
  template <typename LogGroupNameConfigurationT = LogGroupNameConfiguration>
  DestinationLogsConfiguration& WithLogGroupNameConfiguration(LogGroupNameConfigurationT&& value) {
    SetLogGroupNameConfiguration(std::forward<LogGroupNameConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the tag propagation configuration for this centralization rule.
   * When present, <code>LogGroupNameConfiguration</code> must use a
   * <code>LogGroupNamePattern</code> that contains <code>${source.logGroup}</code>,
   * <code>${source.accountId}</code>, and <code>${source.region}</code>.</p>
   */
  inline const TagPropagationConfiguration& GetTagPropagationConfiguration() const { return m_tagPropagationConfiguration; }
  inline bool TagPropagationConfigurationHasBeenSet() const { return m_tagPropagationConfigurationHasBeenSet; }
  template <typename TagPropagationConfigurationT = TagPropagationConfiguration>
  void SetTagPropagationConfiguration(TagPropagationConfigurationT&& value) {
    m_tagPropagationConfigurationHasBeenSet = true;
    m_tagPropagationConfiguration = std::forward<TagPropagationConfigurationT>(value);
  }
  template <typename TagPropagationConfigurationT = TagPropagationConfiguration>
  DestinationLogsConfiguration& WithTagPropagationConfiguration(TagPropagationConfigurationT&& value) {
    SetTagPropagationConfiguration(std::forward<TagPropagationConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this centralization rule enables deletion protection on the
   * destination log groups that it creates. If you don't specify this setting, the
   * rule doesn't enable deletion protection on the log groups that it creates. If
   * you specify a backup Region in <code>BackupConfiguration</code>, the setting
   * also applies to the log groups that the rule creates in the backup Region.</p>
   * <p>When you set this to <code>ENABLED</code>, the rule enables deletion
   * protection only on log groups that it creates after you enable the setting. It
   * does not add deletion protection to log groups the rule created before you
   * enabled the setting.</p> <p>If you remove this setting from the rule or delete
   * the rule, deletion protection stays enabled on log groups that already have it.
   * To delete one of these log groups, first disable deletion protection on the log
   * group in the destination account.</p>
   */
  inline DeletionProtection GetLogGroupDeletionProtection() const { return m_logGroupDeletionProtection; }
  inline bool LogGroupDeletionProtectionHasBeenSet() const { return m_logGroupDeletionProtectionHasBeenSet; }
  inline void SetLogGroupDeletionProtection(DeletionProtection value) {
    m_logGroupDeletionProtectionHasBeenSet = true;
    m_logGroupDeletionProtection = value;
  }
  inline DestinationLogsConfiguration& WithLogGroupDeletionProtection(DeletionProtection value) {
    SetLogGroupDeletionProtection(value);
    return *this;
  }
  ///@}
 private:
  LogsEncryptionConfiguration m_logsEncryptionConfiguration;

  LogsBackupConfiguration m_backupConfiguration;

  LogGroupNameConfiguration m_logGroupNameConfiguration;

  TagPropagationConfiguration m_tagPropagationConfiguration;

  DeletionProtection m_logGroupDeletionProtection{DeletionProtection::NOT_SET};
  bool m_logsEncryptionConfigurationHasBeenSet = false;
  bool m_backupConfigurationHasBeenSet = false;
  bool m_logGroupNameConfigurationHasBeenSet = false;
  bool m_tagPropagationConfigurationHasBeenSet = false;
  bool m_logGroupDeletionProtectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
