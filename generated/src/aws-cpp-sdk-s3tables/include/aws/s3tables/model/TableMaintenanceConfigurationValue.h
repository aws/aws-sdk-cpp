/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/MaintenanceStatus.h>
#include <aws/s3tables/model/TableMaintenanceSettings.h>
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
   * <p>Contains the values that define a maintenance configuration for a
   * table.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/s3tables-2018-05-10/TableMaintenanceConfigurationValue">AWS
   * API Reference</a></p>
   */
  class TableMaintenanceConfigurationValue
  {
  public:
    AWS_S3TABLES_API TableMaintenanceConfigurationValue() = default;
    AWS_S3TABLES_API TableMaintenanceConfigurationValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API TableMaintenanceConfigurationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_S3TABLES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the maintenance configuration.</p>
     */
    inline MaintenanceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(MaintenanceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline TableMaintenanceConfigurationValue& WithStatus(MaintenanceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the settings for the maintenance configuration.</p>
     */
    inline const TableMaintenanceSettings& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = TableMaintenanceSettings>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = TableMaintenanceSettings>
    TableMaintenanceConfigurationValue& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    ///@}
  private:

    MaintenanceStatus m_status{MaintenanceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TableMaintenanceSettings m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace S3Tables
} // namespace Aws
