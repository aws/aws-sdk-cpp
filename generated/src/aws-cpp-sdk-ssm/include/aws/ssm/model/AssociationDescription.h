/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ssm/model/AssociationStatus.h>
#include <aws/ssm/model/AssociationOverview.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/ssm/model/AssociationSyncCompliance.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
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
   * <p>Describes the parameters for a document.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationDescription">AWS
   * API Reference</a></p>
   */
  class AssociationDescription
  {
  public:
    AWS_SSM_API AssociationDescription() = default;
    AWS_SSM_API AssociationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SSM document.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AssociationDescription& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed node ID.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    AssociationDescription& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
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
    AssociationDescription& WithAssociationVersion(AssociationVersionT&& value) { SetAssociationVersion(std::forward<AssociationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the association was made.</p>
     */
    inline const Aws::Utils::DateTime& GetDate() const { return m_date; }
    inline bool DateHasBeenSet() const { return m_dateHasBeenSet; }
    template<typename DateT = Aws::Utils::DateTime>
    void SetDate(DateT&& value) { m_dateHasBeenSet = true; m_date = std::forward<DateT>(value); }
    template<typename DateT = Aws::Utils::DateTime>
    AssociationDescription& WithDate(DateT&& value) { SetDate(std::forward<DateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the association was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateAssociationDate() const { return m_lastUpdateAssociationDate; }
    inline bool LastUpdateAssociationDateHasBeenSet() const { return m_lastUpdateAssociationDateHasBeenSet; }
    template<typename LastUpdateAssociationDateT = Aws::Utils::DateTime>
    void SetLastUpdateAssociationDate(LastUpdateAssociationDateT&& value) { m_lastUpdateAssociationDateHasBeenSet = true; m_lastUpdateAssociationDate = std::forward<LastUpdateAssociationDateT>(value); }
    template<typename LastUpdateAssociationDateT = Aws::Utils::DateTime>
    AssociationDescription& WithLastUpdateAssociationDate(LastUpdateAssociationDateT&& value) { SetLastUpdateAssociationDate(std::forward<LastUpdateAssociationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association status.</p>
     */
    inline const AssociationStatus& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = AssociationStatus>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = AssociationStatus>
    AssociationDescription& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the association.</p>
     */
    inline const AssociationOverview& GetOverview() const { return m_overview; }
    inline bool OverviewHasBeenSet() const { return m_overviewHasBeenSet; }
    template<typename OverviewT = AssociationOverview>
    void SetOverview(OverviewT&& value) { m_overviewHasBeenSet = true; m_overview = std::forward<OverviewT>(value); }
    template<typename OverviewT = AssociationOverview>
    AssociationDescription& WithOverview(OverviewT&& value) { SetOverview(std::forward<OverviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The document version.</p>
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    AssociationDescription& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Choose the parameter that will define how your automation will branch out.
     * This target is required for associations that use an Automation runbook and
     * target resources by using rate controls. Automation is a tool in Amazon Web
     * Services Systems Manager.</p>
     */
    inline const Aws::String& GetAutomationTargetParameterName() const { return m_automationTargetParameterName; }
    inline bool AutomationTargetParameterNameHasBeenSet() const { return m_automationTargetParameterNameHasBeenSet; }
    template<typename AutomationTargetParameterNameT = Aws::String>
    void SetAutomationTargetParameterName(AutomationTargetParameterNameT&& value) { m_automationTargetParameterNameHasBeenSet = true; m_automationTargetParameterName = std::forward<AutomationTargetParameterNameT>(value); }
    template<typename AutomationTargetParameterNameT = Aws::String>
    AssociationDescription& WithAutomationTargetParameterName(AutomationTargetParameterNameT&& value) { SetAutomationTargetParameterName(std::forward<AutomationTargetParameterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the parameters for a document. </p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AssociationDescription& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    AssociationDescription& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    AssociationDescription& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The managed nodes targeted by the request. </p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    AssociationDescription& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    AssociationDescription& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A cron expression that specifies a schedule when the association runs.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    AssociationDescription& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 bucket where you want to store the output details of the request.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = InstanceAssociationOutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = InstanceAssociationOutputLocation>
    AssociationDescription& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date on which the association was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionDate() const { return m_lastExecutionDate; }
    inline bool LastExecutionDateHasBeenSet() const { return m_lastExecutionDateHasBeenSet; }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    void SetLastExecutionDate(LastExecutionDateT&& value) { m_lastExecutionDateHasBeenSet = true; m_lastExecutionDate = std::forward<LastExecutionDateT>(value); }
    template<typename LastExecutionDateT = Aws::Utils::DateTime>
    AssociationDescription& WithLastExecutionDate(LastExecutionDateT&& value) { SetLastExecutionDate(std::forward<LastExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last date on which the association was successfully run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastSuccessfulExecutionDate() const { return m_lastSuccessfulExecutionDate; }
    inline bool LastSuccessfulExecutionDateHasBeenSet() const { return m_lastSuccessfulExecutionDateHasBeenSet; }
    template<typename LastSuccessfulExecutionDateT = Aws::Utils::DateTime>
    void SetLastSuccessfulExecutionDate(LastSuccessfulExecutionDateT&& value) { m_lastSuccessfulExecutionDateHasBeenSet = true; m_lastSuccessfulExecutionDate = std::forward<LastSuccessfulExecutionDateT>(value); }
    template<typename LastSuccessfulExecutionDateT = Aws::Utils::DateTime>
    AssociationDescription& WithLastSuccessfulExecutionDate(LastSuccessfulExecutionDateT&& value) { SetLastSuccessfulExecutionDate(std::forward<LastSuccessfulExecutionDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The association name.</p>
     */
    inline const Aws::String& GetAssociationName() const { return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    template<typename AssociationNameT = Aws::String>
    void SetAssociationName(AssociationNameT&& value) { m_associationNameHasBeenSet = true; m_associationName = std::forward<AssociationNameT>(value); }
    template<typename AssociationNameT = Aws::String>
    AssociationDescription& WithAssociationName(AssociationNameT&& value) { SetAssociationName(std::forward<AssociationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of errors that are allowed before the system stops sending
     * requests to run the association on additional targets. You can specify either an
     * absolute number of errors, for example 10, or a percentage of the target set,
     * for example 10%. If you specify 3, for example, the system stops sending
     * requests when the fourth error is received. If you specify 0, then the system
     * stops sending requests after the first error is returned. If you run an
     * association on 50 managed nodes and set <code>MaxError</code> to 10%, then the
     * system stops sending the request when the sixth error is received.</p>
     * <p>Executions that are already running an association when
     * <code>MaxErrors</code> is reached are allowed to complete, but some of these
     * executions may fail as well. If you need to ensure that there won't be more than
     * max-errors failed executions, set <code>MaxConcurrency</code> to 1 so that
     * executions proceed one at a time.</p>
     */
    inline const Aws::String& GetMaxErrors() const { return m_maxErrors; }
    inline bool MaxErrorsHasBeenSet() const { return m_maxErrorsHasBeenSet; }
    template<typename MaxErrorsT = Aws::String>
    void SetMaxErrors(MaxErrorsT&& value) { m_maxErrorsHasBeenSet = true; m_maxErrors = std::forward<MaxErrorsT>(value); }
    template<typename MaxErrorsT = Aws::String>
    AssociationDescription& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of targets allowed to run the association at the same
     * time. You can specify a number, for example 10, or a percentage of the target
     * set, for example 10%. The default value is 100%, which means all targets run the
     * association at the same time.</p> <p>If a new managed node starts and attempts
     * to run an association while Systems Manager is running
     * <code>MaxConcurrency</code> associations, the association is allowed to run.
     * During the next association interval, the new managed node will process its
     * association within the limit specified for <code>MaxConcurrency</code>.</p>
     */
    inline const Aws::String& GetMaxConcurrency() const { return m_maxConcurrency; }
    inline bool MaxConcurrencyHasBeenSet() const { return m_maxConcurrencyHasBeenSet; }
    template<typename MaxConcurrencyT = Aws::String>
    void SetMaxConcurrency(MaxConcurrencyT&& value) { m_maxConcurrencyHasBeenSet = true; m_maxConcurrency = std::forward<MaxConcurrencyT>(value); }
    template<typename MaxConcurrencyT = Aws::String>
    AssociationDescription& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level that is assigned to the association.</p>
     */
    inline AssociationComplianceSeverity GetComplianceSeverity() const { return m_complianceSeverity; }
    inline bool ComplianceSeverityHasBeenSet() const { return m_complianceSeverityHasBeenSet; }
    inline void SetComplianceSeverity(AssociationComplianceSeverity value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = value; }
    inline AssociationDescription& WithComplianceSeverity(AssociationComplianceSeverity value) { SetComplianceSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mode for generating association compliance. You can specify
     * <code>AUTO</code> or <code>MANUAL</code>. In <code>AUTO</code> mode, the system
     * uses the status of the association execution to determine the compliance status.
     * If the association execution runs successfully, then the association is
     * <code>COMPLIANT</code>. If the association execution doesn't run successfully,
     * the association is <code>NON-COMPLIANT</code>.</p> <p>In <code>MANUAL</code>
     * mode, you must specify the <code>AssociationId</code> as a parameter for the
     * <a>PutComplianceItems</a> API operation. In this case, compliance data isn't
     * managed by State Manager, a tool in Amazon Web Services Systems Manager. It is
     * managed by your direct call to the <a>PutComplianceItems</a> API operation.</p>
     * <p>By default, all associations use <code>AUTO</code> mode.</p>
     */
    inline AssociationSyncCompliance GetSyncCompliance() const { return m_syncCompliance; }
    inline bool SyncComplianceHasBeenSet() const { return m_syncComplianceHasBeenSet; }
    inline void SetSyncCompliance(AssociationSyncCompliance value) { m_syncComplianceHasBeenSet = true; m_syncCompliance = value; }
    inline AssociationDescription& WithSyncCompliance(AssociationSyncCompliance value) { SetSyncCompliance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, when you create a new associations, the system runs it
     * immediately after it is created and then according to the schedule you
     * specified. Specify this option if you don't want an association to run
     * immediately after you create it. This parameter isn't supported for rate
     * expressions.</p>
     */
    inline bool GetApplyOnlyAtCronInterval() const { return m_applyOnlyAtCronInterval; }
    inline bool ApplyOnlyAtCronIntervalHasBeenSet() const { return m_applyOnlyAtCronIntervalHasBeenSet; }
    inline void SetApplyOnlyAtCronInterval(bool value) { m_applyOnlyAtCronIntervalHasBeenSet = true; m_applyOnlyAtCronInterval = value; }
    inline AssociationDescription& WithApplyOnlyAtCronInterval(bool value) { SetApplyOnlyAtCronInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Change Calendar type
     * documents your associations are gated under. The associations only run when that
     * change calendar is open. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar">Amazon
     * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCalendarNames() const { return m_calendarNames; }
    inline bool CalendarNamesHasBeenSet() const { return m_calendarNamesHasBeenSet; }
    template<typename CalendarNamesT = Aws::Vector<Aws::String>>
    void SetCalendarNames(CalendarNamesT&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = std::forward<CalendarNamesT>(value); }
    template<typename CalendarNamesT = Aws::Vector<Aws::String>>
    AssociationDescription& WithCalendarNames(CalendarNamesT&& value) { SetCalendarNames(std::forward<CalendarNamesT>(value)); return *this;}
    template<typename CalendarNamesT = Aws::String>
    AssociationDescription& AddCalendarNames(CalendarNamesT&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.emplace_back(std::forward<CalendarNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The combination of Amazon Web Services Regions and Amazon Web Services
     * accounts where you want to run the association.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const { return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    void SetTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::forward<TargetLocationsT>(value); }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    AssociationDescription& WithTargetLocations(TargetLocationsT&& value) { SetTargetLocations(std::forward<TargetLocationsT>(value)); return *this;}
    template<typename TargetLocationsT = TargetLocation>
    AssociationDescription& AddTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.emplace_back(std::forward<TargetLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of days to wait after the scheduled day to run an association.</p>
     */
    inline int GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline AssociationDescription& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours that an association can run on specified targets. After
     * the resulting cutoff time passes, associations that are currently running are
     * cancelled, and no pending executions are started on remaining targets.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline AssociationDescription& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value mapping of document parameters to target resources. Both Targets
     * and TargetMaps can't be specified together.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetTargetMaps() const { return m_targetMaps; }
    inline bool TargetMapsHasBeenSet() const { return m_targetMapsHasBeenSet; }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps = std::forward<TargetMapsT>(value); }
    template<typename TargetMapsT = Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    AssociationDescription& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    AssociationDescription& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    AssociationDescription& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarm that was invoked during the association.</p>
     */
    inline const Aws::Vector<AlarmStateInformation>& GetTriggeredAlarms() const { return m_triggeredAlarms; }
    inline bool TriggeredAlarmsHasBeenSet() const { return m_triggeredAlarmsHasBeenSet; }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    void SetTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms = std::forward<TriggeredAlarmsT>(value); }
    template<typename TriggeredAlarmsT = Aws::Vector<AlarmStateInformation>>
    AssociationDescription& WithTriggeredAlarms(TriggeredAlarmsT&& value) { SetTriggeredAlarms(std::forward<TriggeredAlarmsT>(value)); return *this;}
    template<typename TriggeredAlarmsT = AlarmStateInformation>
    AssociationDescription& AddTriggeredAlarms(TriggeredAlarmsT&& value) { m_triggeredAlarmsHasBeenSet = true; m_triggeredAlarms.emplace_back(std::forward<TriggeredAlarmsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::Utils::DateTime m_date{};
    bool m_dateHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateAssociationDate{};
    bool m_lastUpdateAssociationDateHasBeenSet = false;

    AssociationStatus m_status;
    bool m_statusHasBeenSet = false;

    AssociationOverview m_overview;
    bool m_overviewHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_automationTargetParameterName;
    bool m_automationTargetParameterNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionDate{};
    bool m_lastExecutionDateHasBeenSet = false;

    Aws::Utils::DateTime m_lastSuccessfulExecutionDate{};
    bool m_lastSuccessfulExecutionDateHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;

    Aws::String m_maxErrors;
    bool m_maxErrorsHasBeenSet = false;

    Aws::String m_maxConcurrency;
    bool m_maxConcurrencyHasBeenSet = false;

    AssociationComplianceSeverity m_complianceSeverity{AssociationComplianceSeverity::NOT_SET};
    bool m_complianceSeverityHasBeenSet = false;

    AssociationSyncCompliance m_syncCompliance{AssociationSyncCompliance::NOT_SET};
    bool m_syncComplianceHasBeenSet = false;

    bool m_applyOnlyAtCronInterval{false};
    bool m_applyOnlyAtCronIntervalHasBeenSet = false;

    Aws::Vector<Aws::String> m_calendarNames;
    bool m_calendarNamesHasBeenSet = false;

    Aws::Vector<TargetLocation> m_targetLocations;
    bool m_targetLocationsHasBeenSet = false;

    int m_scheduleOffset{0};
    bool m_scheduleOffsetHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    Aws::Vector<Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_targetMaps;
    bool m_targetMapsHasBeenSet = false;

    AlarmConfiguration m_alarmConfiguration;
    bool m_alarmConfigurationHasBeenSet = false;

    Aws::Vector<AlarmStateInformation> m_triggeredAlarms;
    bool m_triggeredAlarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
