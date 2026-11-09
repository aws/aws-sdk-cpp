/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MaintenanceSettings.h>
#include <aws/s3tables/model/MigrationPolicies.h>

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
 * <p>The maintenance settings and migration policies for the destination
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/DataMigrationSettings">AWS
 * API Reference</a></p>
 */
class DataMigrationSettings {
 public:
  AWS_S3TABLES_API DataMigrationSettings() = default;
  AWS_S3TABLES_API DataMigrationSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API DataMigrationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maintenance settings for the destination table. The migration applies
   * them when it creates the table: snapshot management starts then, and compaction
   * starts after you complete the migration. If you don't specify a setting, the
   * migration uses its default: a target file size of 512 MB, the binpack compaction
   * strategy, at least 3 snapshots, and a maximum snapshot age of 120 hours.
   * Unreferenced file removal follows the table bucket's configuration after you
   * complete the migration.</p>
   */
  inline const MaintenanceSettings& GetMaintenanceSettings() const { return m_maintenanceSettings; }
  inline bool MaintenanceSettingsHasBeenSet() const { return m_maintenanceSettingsHasBeenSet; }
  template <typename MaintenanceSettingsT = MaintenanceSettings>
  void SetMaintenanceSettings(MaintenanceSettingsT&& value) {
    m_maintenanceSettingsHasBeenSet = true;
    m_maintenanceSettings = std::forward<MaintenanceSettingsT>(value);
  }
  template <typename MaintenanceSettingsT = MaintenanceSettings>
  DataMigrationSettings& WithMaintenanceSettings(MaintenanceSettingsT&& value) {
    SetMaintenanceSettings(std::forward<MaintenanceSettingsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The policies for source data that doesn't fit the destination schema.</p>
   */
  inline const MigrationPolicies& GetMigrationPolicies() const { return m_migrationPolicies; }
  inline bool MigrationPoliciesHasBeenSet() const { return m_migrationPoliciesHasBeenSet; }
  template <typename MigrationPoliciesT = MigrationPolicies>
  void SetMigrationPolicies(MigrationPoliciesT&& value) {
    m_migrationPoliciesHasBeenSet = true;
    m_migrationPolicies = std::forward<MigrationPoliciesT>(value);
  }
  template <typename MigrationPoliciesT = MigrationPolicies>
  DataMigrationSettings& WithMigrationPolicies(MigrationPoliciesT&& value) {
    SetMigrationPolicies(std::forward<MigrationPoliciesT>(value));
    return *this;
  }
  ///@}
 private:
  MaintenanceSettings m_maintenanceSettings;

  MigrationPolicies m_migrationPolicies;
  bool m_maintenanceSettingsHasBeenSet = false;
  bool m_migrationPoliciesHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
