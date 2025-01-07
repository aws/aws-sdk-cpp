/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MaintenanceStatus.h>
#include <aws/s3tables/model/TableBucketMaintenanceSettings.h>
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
   * <p>Details about the values that define the maintenance configuration for a
   * table bucket.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableBucketMaintenanceConfigurationValue">AWS
   * API Reference</a></p>
   */
  class TableBucketMaintenanceConfigurationValue
  {
  public:
    AWS_S3TABLES_API TableBucketMaintenanceConfigurationValue();
    AWS_S3TABLES_API TableBucketMaintenanceConfigurationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableBucketMaintenanceConfigurationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the maintenance configuration.</p>
     */
    inline const MaintenanceStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const MaintenanceStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(MaintenanceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline TableBucketMaintenanceConfigurationValue& WithStatus(const MaintenanceStatus& value) { SetStatus(value); return *this;}
    inline TableBucketMaintenanceConfigurationValue& WithStatus(MaintenanceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the settings of the maintenance configuration.</p>
     */
    inline const TableBucketMaintenanceSettings& GetSettings() const{ return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    inline void SetSettings(const TableBucketMaintenanceSettings& value) { m_settingsHasBeenSet = true; m_settings = value; }
    inline void SetSettings(TableBucketMaintenanceSettings&& value) { m_settingsHasBeenSet = true; m_settings = std::move(value); }
    inline TableBucketMaintenanceConfigurationValue& WithSettings(const TableBucketMaintenanceSettings& value) { SetSettings(value); return *this;}
    inline TableBucketMaintenanceConfigurationValue& WithSettings(TableBucketMaintenanceSettings&& value) { SetSettings(std::move(value)); return *this;}
    ///@}
  private:

    MaintenanceStatus m_status;
    bool m_statusHasBeenSet = false;

    TableBucketMaintenanceSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
