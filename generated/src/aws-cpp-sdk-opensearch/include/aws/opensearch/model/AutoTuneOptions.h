/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneDesiredState.h>
#include <aws/opensearch/model/RollbackOnDisable.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AutoTuneMaintenanceSchedule.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Auto-Tune settings when updating a domain. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptions">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptions
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions() = default;
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(AutoTuneDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline AutoTuneOptions& WithDesiredState(AutoTuneDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline RollbackOnDisable GetRollbackOnDisable() const { return m_rollbackOnDisable; }
    inline bool RollbackOnDisableHasBeenSet() const { return m_rollbackOnDisableHasBeenSet; }
    inline void SetRollbackOnDisable(RollbackOnDisable value) { m_rollbackOnDisableHasBeenSet = true; m_rollbackOnDisable = value; }
    inline AutoTuneOptions& WithRollbackOnDisable(RollbackOnDisable value) { SetRollbackOnDisable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>DEPRECATED. Use <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/off-peak.html">off-peak
     * window</a> instead.</p> <p>A list of maintenance schedules during which
     * Auto-Tune can deploy changes.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const { return m_maintenanceSchedules; }
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    void SetMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::forward<MaintenanceSchedulesT>(value); }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    AutoTuneOptions& WithMaintenanceSchedules(MaintenanceSchedulesT&& value) { SetMaintenanceSchedules(std::forward<MaintenanceSchedulesT>(value)); return *this;}
    template<typename MaintenanceSchedulesT = AutoTuneMaintenanceSchedule>
    AutoTuneOptions& AddMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.emplace_back(std::forward<MaintenanceSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to use the domain's <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_OffPeakWindow.html">off-peak
     * window</a> to deploy configuration changes on the domain rather than a
     * maintenance schedule.</p>
     */
    inline bool GetUseOffPeakWindow() const { return m_useOffPeakWindow; }
    inline bool UseOffPeakWindowHasBeenSet() const { return m_useOffPeakWindowHasBeenSet; }
    inline void SetUseOffPeakWindow(bool value) { m_useOffPeakWindowHasBeenSet = true; m_useOffPeakWindow = value; }
    inline AutoTuneOptions& WithUseOffPeakWindow(bool value) { SetUseOffPeakWindow(value); return *this;}
    ///@}
  private:

    AutoTuneDesiredState m_desiredState{AutoTuneDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    RollbackOnDisable m_rollbackOnDisable{RollbackOnDisable::NOT_SET};
    bool m_rollbackOnDisableHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;

    bool m_useOffPeakWindow{false};
    bool m_useOffPeakWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
