/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AlarmStateInformation.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Includes information about the specified association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecution">AWS
   * API Reference</a></p>
   */
  class AssociationExecution
  {
  public:
    AWS_SSM_API AssociationExecution() = default;
    AWS_SSM_API AssociationExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    AssociationExecution& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association version.</p>
     */
    inline const Aws::String& GetAssociationVersion() const { return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    template<typename AssociationVersionT = Aws::String>
    void SetAssociationVersion(AssociationVersionT&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::forward<AssociationVersionT>(value); }
    template<typename AssociationVersionT = Aws::String>
    AssociationExecution& WithAssociationVersion(AssociationVersionT&& value) { SetAssociationVersion(std::forward<AssociationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The execution ID for the association.</p>
     */
    inline const Aws::String& GetExecutionId() const { return m_executionId; }
    inline bool ExecutionIdHasBeenSet() const { return m_executionIdHasBeenSet; }
    template<typename ExecutionIdT = Aws::String>
    void SetExecutionId(ExecutionIdT&& value) { m_executionIdHasBeenSet = true; m_executionId = std::forward<ExecutionIdT>(value); }
    template<typename ExecutionIdT = Aws::String>
    AssociationExecution& WithExecutionId(ExecutionIdT&& value) { SetExecutionId(std::forward<ExecutionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the association execution.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AssociationExecution& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Detailed status information about the execution.</p>
     */
    inline const Aws::String& GetDetailedStatus() const { return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    template<typename DetailedStatusT = Aws::String>
    void SetDetailedStatus(DetailedStatusT&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::forward<DetailedStatusT>(value); }
    template<typename DetailedStatusT = Aws::String>
    AssociationExecution& WithDetailedStatus(DetailedStatusT&& value) { SetDetailedStatus(std::forward<DetailedStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the execution started.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    AssociationExecution& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date of the last execution.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const { return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    void SetLastExecutionDate(LastExecutionDateT&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::forward<LastExecutionDateT>(value); }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    AssociationExecution& WithLastExecutionDate(LastExecutionDateT&& value) { SetLastExecutionDate(std::forward<LastExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An aggregate status of the resources in the execution based on the status
     * type.</p>
     */
    inline const Aws::String& GetResourceCountByStatus() const { return m_resourceCountByStatus; }
    inline bool ResourceCountByStatusHasBeenSet() const { return m_resourceCountByStatusHasBeenSet; }
    template<typename ResourceCountByStatusT = Aws::String>
    void SetResourceCountByStatus(ResourceCountByStatusT&& value) { m_resourceCountByStatusHasBeenSet = true; m_resourceCountByStatus = std::forward<ResourceCountByStatusT>(value); }
    template<typename ResourceCountByStatusT = Aws::String>
    AssociationExecution& WithResourceCountByStatus(ResourceCountByStatusT&& value) { SetResourceCountByStatus(std::forward<ResourceCountByStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    AssociationExecution& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that were invoked by the association.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    AssociationExecution& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    AssociationExecution& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::String m_executionId;
    bool m_executionIdHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate{};
    bool m_lastExecutionDateHasBeenSet = false;

    Aws::String m_resourceCountByStatus;
    bool m_resourceCountByStatusHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
