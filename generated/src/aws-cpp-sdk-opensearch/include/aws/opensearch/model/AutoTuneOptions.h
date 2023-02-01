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
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions();
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API AutoTuneOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline const AutoTuneDesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline void SetDesiredState(const AutoTuneDesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline void SetDesiredState(AutoTuneDesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneOptions& WithDesiredState(const AutoTuneDesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>Whether Auto-Tune is enabled or disabled.</p>
     */
    inline AutoTuneOptions& WithDesiredState(AutoTuneDesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline const RollbackOnDisable& GetRollbackOnDisable() const{ return m_rollbackOnDisable; }

    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline bool RollbackOnDisableHasBeenSet() const { return m_rollbackOnDisableHasBeenSet; }

    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline void SetRollbackOnDisable(const RollbackOnDisable& value) { m_rollbackOnDisableHasBeenSet = true; m_rollbackOnDisable = value; }

    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline void SetRollbackOnDisable(RollbackOnDisable&& value) { m_rollbackOnDisableHasBeenSet = true; m_rollbackOnDisable = std::move(value); }

    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline AutoTuneOptions& WithRollbackOnDisable(const RollbackOnDisable& value) { SetRollbackOnDisable(value); return *this;}

    /**
     * <p>When disabling Auto-Tune, specify <code>NO_ROLLBACK</code> to retain all
     * prior Auto-Tune settings or <code>DEFAULT_ROLLBACK</code> to revert to the
     * OpenSearch Service defaults. If you specify <code>DEFAULT_ROLLBACK</code>, you
     * must include a <code>MaintenanceSchedule</code> in the request. Otherwise,
     * OpenSearch Service is unable to perform the rollback.</p>
     */
    inline AutoTuneOptions& WithRollbackOnDisable(RollbackOnDisable&& value) { SetRollbackOnDisable(std::move(value)); return *this;}


    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline const Aws::Vector<AutoTuneMaintenanceSchedule>& GetMaintenanceSchedules() const{ return m_maintenanceSchedules; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline bool MaintenanceSchedulesHasBeenSet() const { return m_maintenanceSchedulesHasBeenSet; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline void SetMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = value; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline void SetMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules = std::move(value); }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline AutoTuneOptions& WithMaintenanceSchedules(const Aws::Vector<AutoTuneMaintenanceSchedule>& value) { SetMaintenanceSchedules(value); return *this;}

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline AutoTuneOptions& WithMaintenanceSchedules(Aws::Vector<AutoTuneMaintenanceSchedule>&& value) { SetMaintenanceSchedules(std::move(value)); return *this;}

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline AutoTuneOptions& AddMaintenanceSchedules(const AutoTuneMaintenanceSchedule& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(value); return *this; }

    /**
     * <p>A list of maintenance schedules during which Auto-Tune can deploy
     * changes.</p>
     */
    inline AutoTuneOptions& AddMaintenanceSchedules(AutoTuneMaintenanceSchedule&& value) { m_maintenanceSchedulesHasBeenSet = true; m_maintenanceSchedules.push_back(std::move(value)); return *this; }

  private:

    AutoTuneDesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    RollbackOnDisable m_rollbackOnDisable;
    bool m_rollbackOnDisableHasBeenSet = false;

    Aws::Vector<AutoTuneMaintenanceSchedule> m_maintenanceSchedules;
    bool m_maintenanceSchedulesHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
