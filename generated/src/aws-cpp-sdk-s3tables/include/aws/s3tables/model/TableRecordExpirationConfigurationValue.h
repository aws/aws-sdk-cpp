/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/TableRecordExpirationSettings.h>
#include <aws/s3tables/model/TableRecordExpirationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace S3Tables {
namespace Model {

/**
 * <p>The expiration configuration settings for records in a table, and the status
 * of the configuration. If the status of the configuration is enabled, records
 * expire and are automatically removed after the number of days specified in the
 * record expiration settings for the table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableRecordExpirationConfigurationValue">AWS
 * API Reference</a></p>
 */
class TableRecordExpirationConfigurationValue {
 public:
  AWS_S3TABLES_API TableRecordExpirationConfigurationValue() = default;
  AWS_S3TABLES_API TableRecordExpirationConfigurationValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API TableRecordExpirationConfigurationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of the expiration settings for records in the table.</p>
   */
  inline TableRecordExpirationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TableRecordExpirationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TableRecordExpirationConfigurationValue& WithStatus(TableRecordExpirationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expiration settings for records in the table.</p>
   */
  inline const TableRecordExpirationSettings& GetSettings() const { return m_settings; }
  inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
  template <typename SettingsT = TableRecordExpirationSettings>
  void SetSettings(SettingsT&& value) {
    m_settingsHasBeenSet = true;
    m_settings = std::forward<SettingsT>(value);
  }
  template <typename SettingsT = TableRecordExpirationSettings>
  TableRecordExpirationConfigurationValue& WithSettings(SettingsT&& value) {
    SetSettings(std::forward<SettingsT>(value));
    return *this;
  }
  ///@}
 private:
  TableRecordExpirationStatus m_status{TableRecordExpirationStatus::NOT_SET};

  TableRecordExpirationSettings m_settings;
  bool m_statusHasBeenSet = false;
  bool m_settingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
