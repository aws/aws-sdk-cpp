﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/ssm/model/InstanceAssociationOutputLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/AssociationComplianceSeverity.h>
#include <aws/ssm/model/AssociationSyncCompliance.h>
#include <aws/ssm/model/AlarmConfiguration.h>
#include <aws/ssm/model/Target.h>
#include <aws/ssm/model/TargetLocation.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class UpdateAssociationRequest : public SSMRequest
  {
  public:
    AWS_SSM_API UpdateAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssociation"; }

    AWS_SSM_API Aws::String SerializePayload() const override;

    AWS_SSM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the association you want to update. </p>
     */
    inline const Aws::String& GetAssociationId() const { return m_associationId; }
    inline bool AssociationIdHasBeenSet() const { return m_associationIdHasBeenSet; }
    template<typename AssociationIdT = Aws::String>
    void SetAssociationId(AssociationIdT&& value) { m_associationIdHasBeenSet = true; m_associationId = std::forward<AssociationIdT>(value); }
    template<typename AssociationIdT = Aws::String>
    UpdateAssociationRequest& WithAssociationId(AssociationIdT&& value) { SetAssociationId(std::forward<AssociationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters you want to update for the association. If you create a
     * parameter using Parameter Store, a tool in Amazon Web Services Systems Manager,
     * you can reference the parameter using <code>{{ssm:parameter-name}}</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateAssociationRequest& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
    UpdateAssociationRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The document version you want update for the association. </p> 
     * <p>State Manager doesn't support running associations that use a new version of
     * a document if that document is shared from another account. State Manager always
     * runs the <code>default</code> version of a document if shared from another
     * account, even though the Systems Manager console shows that a new version was
     * processed. If you want to run an association using a new version of a document
     * shared form another account, you must set the document version to
     * <code>default</code>.</p> 
     */
    inline const Aws::String& GetDocumentVersion() const { return m_documentVersion; }
    inline bool DocumentVersionHasBeenSet() const { return m_documentVersionHasBeenSet; }
    template<typename DocumentVersionT = Aws::String>
    void SetDocumentVersion(DocumentVersionT&& value) { m_documentVersionHasBeenSet = true; m_documentVersion = std::forward<DocumentVersionT>(value); }
    template<typename DocumentVersionT = Aws::String>
    UpdateAssociationRequest& WithDocumentVersion(DocumentVersionT&& value) { SetDocumentVersion(std::forward<DocumentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cron expression used to schedule the association that you want to
     * update.</p>
     */
    inline const Aws::String& GetScheduleExpression() const { return m_scheduleExpression; }
    inline bool ScheduleExpressionHasBeenSet() const { return m_scheduleExpressionHasBeenSet; }
    template<typename ScheduleExpressionT = Aws::String>
    void SetScheduleExpression(ScheduleExpressionT&& value) { m_scheduleExpressionHasBeenSet = true; m_scheduleExpression = std::forward<ScheduleExpressionT>(value); }
    template<typename ScheduleExpressionT = Aws::String>
    UpdateAssociationRequest& WithScheduleExpression(ScheduleExpressionT&& value) { SetScheduleExpression(std::forward<ScheduleExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An S3 bucket where you want to store the results of this request.</p>
     */
    inline const InstanceAssociationOutputLocation& GetOutputLocation() const { return m_outputLocation; }
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
    template<typename OutputLocationT = InstanceAssociationOutputLocation>
    void SetOutputLocation(OutputLocationT&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::forward<OutputLocationT>(value); }
    template<typename OutputLocationT = InstanceAssociationOutputLocation>
    UpdateAssociationRequest& WithOutputLocation(OutputLocationT&& value) { SetOutputLocation(std::forward<OutputLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the SSM Command document or Automation runbook that contains the
     * configuration information for the managed node.</p> <p>You can specify Amazon
     * Web Services-predefined documents, documents you created, or a document that is
     * shared with you from another account.</p> <p>For Systems Manager document (SSM
     * document) that are shared with you from other Amazon Web Services accounts, you
     * must specify the complete SSM document ARN, in the following format:</p> <p>
     * <code>arn:aws:ssm:<i>region</i>:<i>account-id</i>:document/<i>document-name</i>
     * </code> </p> <p>For example:</p> <p>
     * <code>arn:aws:ssm:us-east-2:12345678912:document/My-Shared-Document</code> </p>
     * <p>For Amazon Web Services-predefined documents and SSM documents you created in
     * your account, you only need to specify the document name. For example,
     * <code>AWS-ApplyPatchBaseline</code> or <code>My-Document</code>.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateAssociationRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The targets of the association.</p>
     */
    inline const Aws::Vector<Target>& GetTargets() const { return m_targets; }
    inline bool TargetsHasBeenSet() const { return m_targetsHasBeenSet; }
    template<typename TargetsT = Aws::Vector<Target>>
    void SetTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets = std::forward<TargetsT>(value); }
    template<typename TargetsT = Aws::Vector<Target>>
    UpdateAssociationRequest& WithTargets(TargetsT&& value) { SetTargets(std::forward<TargetsT>(value)); return *this;}
    template<typename TargetsT = Target>
    UpdateAssociationRequest& AddTargets(TargetsT&& value) { m_targetsHasBeenSet = true; m_targets.emplace_back(std::forward<TargetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the association that you want to update.</p>
     */
    inline const Aws::String& GetAssociationName() const { return m_associationName; }
    inline bool AssociationNameHasBeenSet() const { return m_associationNameHasBeenSet; }
    template<typename AssociationNameT = Aws::String>
    void SetAssociationName(AssociationNameT&& value) { m_associationNameHasBeenSet = true; m_associationName = std::forward<AssociationNameT>(value); }
    template<typename AssociationNameT = Aws::String>
    UpdateAssociationRequest& WithAssociationName(AssociationNameT&& value) { SetAssociationName(std::forward<AssociationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter is provided for concurrency control purposes. You must specify
     * the latest association version in the service. If you want to ensure that this
     * request succeeds, either specify <code>$LATEST</code>, or omit this
     * parameter.</p>
     */
    inline const Aws::String& GetAssociationVersion() const { return m_associationVersion; }
    inline bool AssociationVersionHasBeenSet() const { return m_associationVersionHasBeenSet; }
    template<typename AssociationVersionT = Aws::String>
    void SetAssociationVersion(AssociationVersionT&& value) { m_associationVersionHasBeenSet = true; m_associationVersion = std::forward<AssociationVersionT>(value); }
    template<typename AssociationVersionT = Aws::String>
    UpdateAssociationRequest& WithAssociationVersion(AssociationVersionT&& value) { SetAssociationVersion(std::forward<AssociationVersionT>(value)); return *this;}
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
    UpdateAssociationRequest& WithAutomationTargetParameterName(AutomationTargetParameterNameT&& value) { SetAutomationTargetParameterName(std::forward<AutomationTargetParameterNameT>(value)); return *this;}
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
    UpdateAssociationRequest& WithMaxErrors(MaxErrorsT&& value) { SetMaxErrors(std::forward<MaxErrorsT>(value)); return *this;}
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
    UpdateAssociationRequest& WithMaxConcurrency(MaxConcurrencyT&& value) { SetMaxConcurrency(std::forward<MaxConcurrencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level to assign to the association.</p>
     */
    inline AssociationComplianceSeverity GetComplianceSeverity() const { return m_complianceSeverity; }
    inline bool ComplianceSeverityHasBeenSet() const { return m_complianceSeverityHasBeenSet; }
    inline void SetComplianceSeverity(AssociationComplianceSeverity value) { m_complianceSeverityHasBeenSet = true; m_complianceSeverity = value; }
    inline UpdateAssociationRequest& WithComplianceSeverity(AssociationComplianceSeverity value) { SetComplianceSeverity(value); return *this;}
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
    inline UpdateAssociationRequest& WithSyncCompliance(AssociationSyncCompliance value) { SetSyncCompliance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, when you update an association, the system runs it immediately
     * after it is updated and then according to the schedule you specified. Specify
     * <code>true</code> for <code>ApplyOnlyAtCronInterval</code> if you want the
     * association to run only according to the schedule you specified.</p> <p>If you
     * chose this option when you created an association and later you edit that
     * association or you make changes to the Automation runbook or SSM document on
     * which that association is based, State Manager applies the association at the
     * next specified cron interval. For example, if you chose the <code>Latest</code>
     * version of an SSM document when you created an association and you edit the
     * association by choosing a different document version on the Documents page,
     * State Manager applies the association at the next specified cron interval if you
     * previously set <code>ApplyOnlyAtCronInterval</code> to <code>true</code>. If
     * this option wasn't selected, State Manager immediately runs the association.</p>
     * <p>For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/state-manager-about.html#state-manager-about-scheduling">Understanding
     * when associations are applied to resources</a> and <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/state-manager-about.html#runbook-target-updates">About
     * target updates with Automation runbooks</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p> <p>This parameter isn't supported for rate
     * expressions.</p> <p>You can reset this parameter. To do so, specify the
     * <code>no-apply-only-at-cron-interval</code> parameter when you update the
     * association from the command line. This parameter forces the association to run
     * immediately after updating it and according to the interval specified.</p>
     */
    inline bool GetApplyOnlyAtCronInterval() const { return m_applyOnlyAtCronInterval; }
    inline bool ApplyOnlyAtCronIntervalHasBeenSet() const { return m_applyOnlyAtCronIntervalHasBeenSet; }
    inline void SetApplyOnlyAtCronInterval(bool value) { m_applyOnlyAtCronIntervalHasBeenSet = true; m_applyOnlyAtCronInterval = value; }
    inline UpdateAssociationRequest& WithApplyOnlyAtCronInterval(bool value) { SetApplyOnlyAtCronInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names or Amazon Resource Names (ARNs) of the Change Calendar type
     * documents you want to gate your associations under. The associations only run
     * when that change calendar is open. For more information, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-change-calendar">Amazon
     * Web Services Systems Manager Change Calendar</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCalendarNames() const { return m_calendarNames; }
    inline bool CalendarNamesHasBeenSet() const { return m_calendarNamesHasBeenSet; }
    template<typename CalendarNamesT = Aws::Vector<Aws::String>>
    void SetCalendarNames(CalendarNamesT&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames = std::forward<CalendarNamesT>(value); }
    template<typename CalendarNamesT = Aws::Vector<Aws::String>>
    UpdateAssociationRequest& WithCalendarNames(CalendarNamesT&& value) { SetCalendarNames(std::forward<CalendarNamesT>(value)); return *this;}
    template<typename CalendarNamesT = Aws::String>
    UpdateAssociationRequest& AddCalendarNames(CalendarNamesT&& value) { m_calendarNamesHasBeenSet = true; m_calendarNames.emplace_back(std::forward<CalendarNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A location is a combination of Amazon Web Services Regions and Amazon Web
     * Services accounts where you want to run the association. Use this action to
     * update an association in multiple Regions and multiple accounts.</p>
     */
    inline const Aws::Vector<TargetLocation>& GetTargetLocations() const { return m_targetLocations; }
    inline bool TargetLocationsHasBeenSet() const { return m_targetLocationsHasBeenSet; }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    void SetTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations = std::forward<TargetLocationsT>(value); }
    template<typename TargetLocationsT = Aws::Vector<TargetLocation>>
    UpdateAssociationRequest& WithTargetLocations(TargetLocationsT&& value) { SetTargetLocations(std::forward<TargetLocationsT>(value)); return *this;}
    template<typename TargetLocationsT = TargetLocation>
    UpdateAssociationRequest& AddTargetLocations(TargetLocationsT&& value) { m_targetLocationsHasBeenSet = true; m_targetLocations.emplace_back(std::forward<TargetLocationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Number of days to wait after the scheduled day to run an association. For
     * example, if you specified a cron schedule of <code>cron(0 0 ? * THU#2 *)</code>,
     * you could specify an offset of 3 to run the association each Sunday after the
     * second Thursday of the month. For more information about cron schedules for
     * associations, see <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/reference-cron-and-rate-expressions.html">Reference:
     * Cron and rate expressions for Systems Manager</a> in the <i>Amazon Web Services
     * Systems Manager User Guide</i>. </p>  <p>To use offsets, you must specify
     * the <code>ApplyOnlyAtCronInterval</code> parameter. This option tells the system
     * not to run an association immediately after you create it. </p> 
     */
    inline int GetScheduleOffset() const { return m_scheduleOffset; }
    inline bool ScheduleOffsetHasBeenSet() const { return m_scheduleOffsetHasBeenSet; }
    inline void SetScheduleOffset(int value) { m_scheduleOffsetHasBeenSet = true; m_scheduleOffset = value; }
    inline UpdateAssociationRequest& WithScheduleOffset(int value) { SetScheduleOffset(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hours the association can run before it is canceled. Duration
     * applies to associations that are currently running, and any pending and in
     * progress commands on all targets. If a target was taken offline for the
     * association to run, it is made available again immediately, without a reboot.
     * </p> <p>The <code>Duration</code> parameter applies only when both these
     * conditions are true:</p> <ul> <li> <p>The association for which you specify a
     * duration is cancelable according to the parameters of the SSM command document
     * or Automation runbook associated with this execution. </p> </li> <li> <p>The
     * command specifies the <code> <a
     * href="https://docs.aws.amazon.com/systems-manager/latest/APIReference/API_UpdateAssociation.html#systemsmanager-UpdateAssociation-request-ApplyOnlyAtCronInterval">ApplyOnlyAtCronInterval</a>
     * </code> parameter, which means that the association doesn't run immediately
     * after it is updated, but only according to the specified schedule.</p> </li>
     * </ul>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline UpdateAssociationRequest& WithDuration(int value) { SetDuration(value); return *this;}
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
    UpdateAssociationRequest& WithTargetMaps(TargetMapsT&& value) { SetTargetMaps(std::forward<TargetMapsT>(value)); return *this;}
    template<typename TargetMapsT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    UpdateAssociationRequest& AddTargetMaps(TargetMapsT&& value) { m_targetMapsHasBeenSet = true; m_targetMaps.emplace_back(std::forward<TargetMapsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AlarmConfiguration& GetAlarmConfiguration() const { return m_alarmConfiguration; }
    inline bool AlarmConfigurationHasBeenSet() const { return m_alarmConfigurationHasBeenSet; }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    void SetAlarmConfiguration(AlarmConfigurationT&& value) { m_alarmConfigurationHasBeenSet = true; m_alarmConfiguration = std::forward<AlarmConfigurationT>(value); }
    template<typename AlarmConfigurationT = AlarmConfiguration>
    UpdateAssociationRequest& WithAlarmConfiguration(AlarmConfigurationT&& value) { SetAlarmConfiguration(std::forward<AlarmConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
    bool m_parametersHasBeenSet = false;

    Aws::String m_documentVersion;
    bool m_documentVersionHasBeenSet = false;

    Aws::String m_scheduleExpression;
    bool m_scheduleExpressionHasBeenSet = false;

    InstanceAssociationOutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Target> m_targets;
    bool m_targetsHasBeenSet = false;

    Aws::String m_associationName;
    bool m_associationNameHasBeenSet = false;

    Aws::String m_associationVersion;
    bool m_associationVersionHasBeenSet = false;

    Aws::String m_automationTargetParameterName;
    bool m_automationTargetParameterNameHasBeenSet = false;

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
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
