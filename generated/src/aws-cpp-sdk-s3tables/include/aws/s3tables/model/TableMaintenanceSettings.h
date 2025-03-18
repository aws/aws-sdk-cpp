/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/IcebergCompactionSettings.h>
#include <aws/s3tables/model/IcebergSnapshotManagementSettings.h>
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
namespace S3Tables
{
namespace Model
{

  /**
   * <p>Contains details about maintenance settings for the table.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableMaintenanceSettings">AWS
   * API Reference</a></p>
   */
  class TableMaintenanceSettings
  {
  public:
    AWS_S3TABLES_API TableMaintenanceSettings() = default;
    AWS_S3TABLES_API TableMaintenanceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableMaintenanceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Contains details about the Iceberg compaction settings for the table.</p>
     */
    inline const IcebergCompactionSettings& GetIcebergCompaction() const { return m_icebergCompaction; }
    inline bool IcebergCompactionHasBeenSet() const { return m_icebergCompactionHasBeenSet; }
    template<typename IcebergCompactionT = IcebergCompactionSettings>
    void SetIcebergCompaction(IcebergCompactionT&& value) { m_icebergCompactionHasBeenSet = true; m_icebergCompaction = std::forward<IcebergCompactionT>(value); }
    template<typename IcebergCompactionT = IcebergCompactionSettings>
    TableMaintenanceSettings& WithIcebergCompaction(IcebergCompactionT&& value) { SetIcebergCompaction(std::forward<IcebergCompactionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the Iceberg snapshot management settings for the
     * table.</p>
     */
    inline const IcebergSnapshotManagementSettings& GetIcebergSnapshotManagement() const { return m_icebergSnapshotManagement; }
    inline bool IcebergSnapshotManagementHasBeenSet() const { return m_icebergSnapshotManagementHasBeenSet; }
    template<typename IcebergSnapshotManagementT = IcebergSnapshotManagementSettings>
    void SetIcebergSnapshotManagement(IcebergSnapshotManagementT&& value) { m_icebergSnapshotManagementHasBeenSet = true; m_icebergSnapshotManagement = std::forward<IcebergSnapshotManagementT>(value); }
    template<typename IcebergSnapshotManagementT = IcebergSnapshotManagementSettings>
    TableMaintenanceSettings& WithIcebergSnapshotManagement(IcebergSnapshotManagementT&& value) { SetIcebergSnapshotManagement(std::forward<IcebergSnapshotManagementT>(value)); return *this;}
    ///@}
  private:

    IcebergCompactionSettings m_icebergCompaction;
    bool m_icebergCompactionHasBeenSet = false;

    IcebergSnapshotManagementSettings m_icebergSnapshotManagement;
    bool m_icebergSnapshotManagementHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
