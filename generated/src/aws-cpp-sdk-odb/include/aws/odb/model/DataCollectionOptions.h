/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>

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
namespace odb
{
namespace Model
{

  /**
   * <p>Information about the data collection options enabled for a VM
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/odb-2024-08-20/DataCollectionOptions">AWS
   * API Reference</a></p>
   */
  class DataCollectionOptions
  {
  public:
    AWS_ODB_API DataCollectionOptions() = default;
    AWS_ODB_API DataCollectionOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API DataCollectionOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Indicates whether diagnostic collection is enabled for the VM cluster.</p>
     */
    inline bool GetIsDiagnosticsEventsEnabled() const { return m_isDiagnosticsEventsEnabled; }
    inline bool IsDiagnosticsEventsEnabledHasBeenSet() const { return m_isDiagnosticsEventsEnabledHasBeenSet; }
    inline void SetIsDiagnosticsEventsEnabled(bool value) { m_isDiagnosticsEventsEnabledHasBeenSet = true; m_isDiagnosticsEventsEnabled = value; }
    inline DataCollectionOptions& WithIsDiagnosticsEventsEnabled(bool value) { SetIsDiagnosticsEventsEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether health monitoring is enabled for the VM cluster.</p>
     */
    inline bool GetIsHealthMonitoringEnabled() const { return m_isHealthMonitoringEnabled; }
    inline bool IsHealthMonitoringEnabledHasBeenSet() const { return m_isHealthMonitoringEnabledHasBeenSet; }
    inline void SetIsHealthMonitoringEnabled(bool value) { m_isHealthMonitoringEnabledHasBeenSet = true; m_isHealthMonitoringEnabled = value; }
    inline DataCollectionOptions& WithIsHealthMonitoringEnabled(bool value) { SetIsHealthMonitoringEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether incident logs are enabled for the cloud VM cluster.</p>
     */
    inline bool GetIsIncidentLogsEnabled() const { return m_isIncidentLogsEnabled; }
    inline bool IsIncidentLogsEnabledHasBeenSet() const { return m_isIncidentLogsEnabledHasBeenSet; }
    inline void SetIsIncidentLogsEnabled(bool value) { m_isIncidentLogsEnabledHasBeenSet = true; m_isIncidentLogsEnabled = value; }
    inline DataCollectionOptions& WithIsIncidentLogsEnabled(bool value) { SetIsIncidentLogsEnabled(value); return *this;}
    ///@}
  private:

    bool m_isDiagnosticsEventsEnabled{false};
    bool m_isDiagnosticsEventsEnabledHasBeenSet = false;

    bool m_isHealthMonitoringEnabled{false};
    bool m_isHealthMonitoringEnabledHasBeenSet = false;

    bool m_isIncidentLogsEnabled{false};
    bool m_isIncidentLogsEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
