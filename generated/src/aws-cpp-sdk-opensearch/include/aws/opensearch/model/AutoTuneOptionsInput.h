/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/AutoTuneDesiredState.h>
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
   * <p>Options for configuring Auto-Tune. For more information, see <a
   * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/auto-tune.html">Auto-Tune
   * for Amazon OpenSearch Service</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/AutoTuneOptionsInput">AWS
   * API Reference</a></p>
   */
  class AutoTuneOptionsInput
  {
  public:
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput() = default;
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptionsInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneDesiredState GetDesiredState() const { return m_desiredState; }
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }
    inline void SetDesiredState(AutoTuneDesiredState value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }
    inline AutoTuneOptionsInput& WithDesiredState(AutoTuneDesiredState value) { SetDesiredState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy changes.
     * Maintenance windows are deprecated and have been replaced with <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/off-peak.html">off-peak
     * windows</a>.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const { return m_maintenanceSchedules; }
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    void SetMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::forward<MaintenanceSchedulesT>(value); }
    template<typename MaintenanceSchedulesT = Aws::Vector<AutoTuneMaintenanceSchedule>>
    AutoTuneOptionsInput& WithMaintenanceSchedules(MaintenanceSchedulesT&& value) { SetMaintenanceSchedules(std::forward<MaintenanceSchedulesT>(value)); return *this;}
    template<typename MaintenanceSchedulesT = AutoTuneMaintenanceSchedule>
    AutoTuneOptionsInput& AddMaintenanceSchedules(MaintenanceSchedulesT&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.emplace_back(std::forward<MaintenanceSchedulesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Whether to schedule Auto-Tune optimizations that require blue/green
     * deployments during the domain's configured daily off-peak window.</p>
     */
    inline bool GetUseOffPeakWindow() const { return m_useOffPeakWindow; }
    inline bool UseOffPeakWindowHasBeenSet() const { return m_useOffPeakWindowHasBeenSet; }
    inline void SetUseOffPeakWindow(bool value) { m_useOffPeakWindowHasBeenSet = true; m_useOffPeakWindow = value; }
    inline AutoTuneOptionsInput& WithUseOffPeakWindow(bool value) { SetUseOffPeakWindow(value); return *this;}
    ///@}
  private:

    AutoTuneDesiredState m_desiredState{AutoTuneDesiredState::NOT_SET};
    bool m_desiredStateHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;

    bool m_useOffPeakWindow{false};
    bool m_useOffPeakWindowHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
