/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MigrationCompactionSettings.h>
#include <aws/s3tables/model/MigrationSnapshotManagementSettings.h>

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
 * <p>The maintenance settings for the destination table. The migration applies
 * them when it creates the table: snapshot management starts then, and compaction
 * starts after you complete the migration. If you don't specify a setting, the
 * migration uses its default: a target file size of 512 MB, the binpack compaction
 * strategy, at least 3 snapshots, and a maximum snapshot age of 120 hours.
 * Unreferenced file removal follows the table bucket's configuration after you
 * complete the migration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/MaintenanceSettings">AWS
 * API Reference</a></p>
 */
class MaintenanceSettings {
 public:
  AWS_S3TABLES_API MaintenanceSettings() = default;
  AWS_S3TABLES_API MaintenanceSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API MaintenanceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The compaction settings.</p>
   */
  inline const MigrationCompactionSettings& GetIcebergCompaction() const { return m_icebergCompaction; }
  inline bool IcebergCompactionHasBeenSet() const { return m_icebergCompactionHasBeenSet; }
  template <typename IcebergCompactionT = MigrationCompactionSettings>
  void SetIcebergCompaction(IcebergCompactionT&& value) {
    m_icebergCompactionHasBeenSet = true;
    m_icebergCompaction = std::forward<IcebergCompactionT>(value);
  }
  template <typename IcebergCompactionT = MigrationCompactionSettings>
  MaintenanceSettings& WithIcebergCompaction(IcebergCompactionT&& value) {
    SetIcebergCompaction(std::forward<IcebergCompactionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot management settings.</p>
   */
  inline const MigrationSnapshotManagementSettings& GetIcebergSnapshotManagement() const { return m_icebergSnapshotManagement; }
  inline bool IcebergSnapshotManagementHasBeenSet() const { return m_icebergSnapshotManagementHasBeenSet; }
  template <typename IcebergSnapshotManagementT = MigrationSnapshotManagementSettings>
  void SetIcebergSnapshotManagement(IcebergSnapshotManagementT&& value) {
    m_icebergSnapshotManagementHasBeenSet = true;
    m_icebergSnapshotManagement = std::forward<IcebergSnapshotManagementT>(value);
  }
  template <typename IcebergSnapshotManagementT = MigrationSnapshotManagementSettings>
  MaintenanceSettings& WithIcebergSnapshotManagement(IcebergSnapshotManagementT&& value) {
    SetIcebergSnapshotManagement(std::forward<IcebergSnapshotManagementT>(value));
    return *this;
  }
  ///@}
 private:
  MigrationCompactionSettings m_icebergCompaction;

  MigrationSnapshotManagementSettings m_icebergSnapshotManagement;
  bool m_icebergCompactionHasBeenSet = false;
  bool m_icebergSnapshotManagementHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3Tables
}  // namespace Aws
