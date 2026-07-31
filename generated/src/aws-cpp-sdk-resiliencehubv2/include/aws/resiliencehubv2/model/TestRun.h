/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/AccountTargeting.h>
#include <aws/resiliencehubv2/model/ExperimentDetails.h>
#include <aws/resiliencehubv2/model/LoggingConfiguration.h>
#include <aws/resiliencehubv2/model/PermissionModel.h>
#include <aws/resiliencehubv2/model/ReportGenerationResult.h>
#include <aws/resiliencehubv2/model/StopCondition.h>
#include <aws/resiliencehubv2/model/TestRunPolicySnapshot.h>
#include <aws/resiliencehubv2/model/TestRunReportConfiguration.h>
#include <aws/resiliencehubv2/model/TestRunStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents a single run of a test. Configuration is snapshotted from the test
 * and service at the time the run is started.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRun">AWS
 * API Reference</a></p>
 */
class TestRun {
 public:
  AWS_RESILIENCEHUBV2_API TestRun() = default;
  AWS_RESILIENCEHUBV2_API TestRun(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRun& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the test run.</p>
   */
  inline const Aws::String& GetTestRunId() const { return m_testRunId; }
  inline bool TestRunIdHasBeenSet() const { return m_testRunIdHasBeenSet; }
  template <typename TestRunIdT = Aws::String>
  void SetTestRunId(TestRunIdT&& value) {
    m_testRunIdHasBeenSet = true;
    m_testRunId = std::forward<TestRunIdT>(value);
  }
  template <typename TestRunIdT = Aws::String>
  TestRun& WithTestRunId(TestRunIdT&& value) {
    SetTestRunId(std::forward<TestRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test that was run.</p>
   */
  inline const Aws::String& GetTestId() const { return m_testId; }
  inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  TestRun& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the test run.</p>
   */
  inline TestRunStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(TestRunStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline TestRun& WithStatus(TestRunStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service the test run belongs to.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  TestRun& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test run started.</p>
   */
  inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
  inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
  template <typename StartedAtT = Aws::Utils::DateTime>
  void SetStartedAt(StartedAtT&& value) {
    m_startedAtHasBeenSet = true;
    m_startedAt = std::forward<StartedAtT>(value);
  }
  template <typename StartedAtT = Aws::Utils::DateTime>
  TestRun& WithStartedAt(StartedAtT&& value) {
    SetStartedAt(std::forward<StartedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test run ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  TestRun& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Fault Injection Service (AWS FIS) experiments run as part of the test
   * run.</p>
   */
  inline const Aws::Vector<ExperimentDetails>& GetExperiments() const { return m_experiments; }
  inline bool ExperimentsHasBeenSet() const { return m_experimentsHasBeenSet; }
  template <typename ExperimentsT = Aws::Vector<ExperimentDetails>>
  void SetExperiments(ExperimentsT&& value) {
    m_experimentsHasBeenSet = true;
    m_experiments = std::forward<ExperimentsT>(value);
  }
  template <typename ExperimentsT = Aws::Vector<ExperimentDetails>>
  TestRun& WithExperiments(ExperimentsT&& value) {
    SetExperiments(std::forward<ExperimentsT>(value));
    return *this;
  }
  template <typename ExperimentsT = ExperimentDetails>
  TestRun& AddExperiments(ExperimentsT&& value) {
    m_experimentsHasBeenSet = true;
    m_experiments.emplace_back(std::forward<ExperimentsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of events recorded for the test run. Use ListTestRunEvents to
   * retrieve the details.</p>
   */
  inline int GetEventCount() const { return m_eventCount; }
  inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
  inline void SetEventCount(int value) {
    m_eventCountHasBeenSet = true;
    m_eventCount = value;
  }
  inline TestRun& WithEventCount(int value) {
    SetEventCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter values used for the test run.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  TestRun& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
  TestRun& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable reason for test run failure. Only present when the status is
   * FAILED or ERROR.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  TestRun& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stop conditions snapshotted from the test when the run was started.</p>
   */
  inline const Aws::Vector<StopCondition>& GetStopConditions() const { return m_stopConditions; }
  inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
  template <typename StopConditionsT = Aws::Vector<StopCondition>>
  void SetStopConditions(StopConditionsT&& value) {
    m_stopConditionsHasBeenSet = true;
    m_stopConditions = std::forward<StopConditionsT>(value);
  }
  template <typename StopConditionsT = Aws::Vector<StopCondition>>
  TestRun& WithStopConditions(StopConditionsT&& value) {
    SetStopConditions(std::forward<StopConditionsT>(value));
    return *this;
  }
  template <typename StopConditionsT = StopCondition>
  TestRun& AddStopConditions(StopConditionsT&& value) {
    m_stopConditionsHasBeenSet = true;
    m_stopConditions.emplace_back(std::forward<StopConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration snapshotted from the test when the run was
   * started.</p>
   */
  inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  TestRun& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM execution role name snapshotted from the test when the run was
   * started.</p>
   */
  inline const Aws::String& GetRoleName() const { return m_roleName; }
  inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
  template <typename RoleNameT = Aws::String>
  void SetRoleName(RoleNameT&& value) {
    m_roleNameHasBeenSet = true;
    m_roleName = std::forward<RoleNameT>(value);
  }
  template <typename RoleNameT = Aws::String>
  TestRun& WithRoleName(RoleNameT&& value) {
    SetRoleName(std::forward<RoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the test template snapshotted from the test when the run was
   * started.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  TestRun& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The report configuration snapshotted from the service when the run was
   * started.</p>
   */
  inline const TestRunReportConfiguration& GetReportConfiguration() const { return m_reportConfiguration; }
  inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }
  template <typename ReportConfigurationT = TestRunReportConfiguration>
  void SetReportConfiguration(ReportConfigurationT&& value) {
    m_reportConfigurationHasBeenSet = true;
    m_reportConfiguration = std::forward<ReportConfigurationT>(value);
  }
  template <typename ReportConfigurationT = TestRunReportConfiguration>
  TestRun& WithReportConfiguration(ReportConfigurationT&& value) {
    SetReportConfiguration(std::forward<ReportConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resilience policy snapshotted from the service when the run was
   * started.</p>
   */
  inline const TestRunPolicySnapshot& GetPolicy() const { return m_policy; }
  inline bool PolicyHasBeenSet() const { return m_policyHasBeenSet; }
  template <typename PolicyT = TestRunPolicySnapshot>
  void SetPolicy(PolicyT&& value) {
    m_policyHasBeenSet = true;
    m_policy = std::forward<PolicyT>(value);
  }
  template <typename PolicyT = TestRunPolicySnapshot>
  TestRun& WithPolicy(PolicyT&& value) {
    SetPolicy(std::forward<PolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The report generation result for the test run. Present after report
   * generation completes or fails.</p>
   */
  inline const ReportGenerationResult& GetReportOutput() const { return m_reportOutput; }
  inline bool ReportOutputHasBeenSet() const { return m_reportOutputHasBeenSet; }
  template <typename ReportOutputT = ReportGenerationResult>
  void SetReportOutput(ReportOutputT&& value) {
    m_reportOutputHasBeenSet = true;
    m_reportOutput = std::forward<ReportOutputT>(value);
  }
  template <typename ReportOutputT = ReportGenerationResult>
  TestRun& WithReportOutput(ReportOutputT&& value) {
    SetReportOutput(std::forward<ReportOutputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the ARC Region switch plan associated with the test run.</p>
   */
  inline const Aws::String& GetRegionSwitchPlanArn() const { return m_regionSwitchPlanArn; }
  inline bool RegionSwitchPlanArnHasBeenSet() const { return m_regionSwitchPlanArnHasBeenSet; }
  template <typename RegionSwitchPlanArnT = Aws::String>
  void SetRegionSwitchPlanArn(RegionSwitchPlanArnT&& value) {
    m_regionSwitchPlanArnHasBeenSet = true;
    m_regionSwitchPlanArn = std::forward<RegionSwitchPlanArnT>(value);
  }
  template <typename RegionSwitchPlanArnT = Aws::String>
  TestRun& WithRegionSwitchPlanArn(RegionSwitchPlanArnT&& value) {
    SetRegionSwitchPlanArn(std::forward<RegionSwitchPlanArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the ARC Region switch execution detected during the test
   * run.</p>
   */
  inline const Aws::String& GetRegionSwitchExecutionId() const { return m_regionSwitchExecutionId; }
  inline bool RegionSwitchExecutionIdHasBeenSet() const { return m_regionSwitchExecutionIdHasBeenSet; }
  template <typename RegionSwitchExecutionIdT = Aws::String>
  void SetRegionSwitchExecutionId(RegionSwitchExecutionIdT&& value) {
    m_regionSwitchExecutionIdHasBeenSet = true;
    m_regionSwitchExecutionId = std::forward<RegionSwitchExecutionIdT>(value);
  }
  template <typename RegionSwitchExecutionIdT = Aws::String>
  TestRun& WithRegionSwitchExecutionId(RegionSwitchExecutionIdT&& value) {
    SetRegionSwitchExecutionId(std::forward<RegionSwitchExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission model snapshotted from the service when the run was
   * started.</p>
   */
  inline const PermissionModel& GetPermissionModel() const { return m_permissionModel; }
  inline bool PermissionModelHasBeenSet() const { return m_permissionModelHasBeenSet; }
  template <typename PermissionModelT = PermissionModel>
  void SetPermissionModel(PermissionModelT&& value) {
    m_permissionModelHasBeenSet = true;
    m_permissionModel = std::forward<PermissionModelT>(value);
  }
  template <typename PermissionModelT = PermissionModel>
  TestRun& WithPermissionModel(PermissionModelT&& value) {
    SetPermissionModel(std::forward<PermissionModelT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Regions snapshotted from the service when the run was started.</p>
   */
  inline const Aws::Vector<Aws::String>& GetRegions() const { return m_regions; }
  inline bool RegionsHasBeenSet() const { return m_regionsHasBeenSet; }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  void SetRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions = std::forward<RegionsT>(value);
  }
  template <typename RegionsT = Aws::Vector<Aws::String>>
  TestRun& WithRegions(RegionsT&& value) {
    SetRegions(std::forward<RegionsT>(value));
    return *this;
  }
  template <typename RegionsT = Aws::String>
  TestRun& AddRegions(RegionsT&& value) {
    m_regionsHasBeenSet = true;
    m_regions.emplace_back(std::forward<RegionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether this test run targets a single account or multiple
   * accounts.</p>
   */
  inline AccountTargeting GetAccountTargeting() const { return m_accountTargeting; }
  inline bool AccountTargetingHasBeenSet() const { return m_accountTargetingHasBeenSet; }
  inline void SetAccountTargeting(AccountTargeting value) {
    m_accountTargetingHasBeenSet = true;
    m_accountTargeting = value;
  }
  inline TestRun& WithAccountTargeting(AccountTargeting value) {
    SetAccountTargeting(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_testRunId;

  Aws::String m_testId;

  TestRunStatus m_status{TestRunStatus::NOT_SET};

  Aws::String m_serviceArn;

  Aws::Utils::DateTime m_startedAt{};

  Aws::Utils::DateTime m_endedAt{};

  Aws::Vector<ExperimentDetails> m_experiments;

  int m_eventCount{0};

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;

  Aws::String m_errorMessage;

  Aws::Vector<StopCondition> m_stopConditions;

  LoggingConfiguration m_loggingConfiguration;

  Aws::String m_roleName;

  Aws::String m_testTemplateArn;

  TestRunReportConfiguration m_reportConfiguration;

  TestRunPolicySnapshot m_policy;

  ReportGenerationResult m_reportOutput;

  Aws::String m_regionSwitchPlanArn;

  Aws::String m_regionSwitchExecutionId;

  PermissionModel m_permissionModel;

  Aws::Vector<Aws::String> m_regions;

  AccountTargeting m_accountTargeting{AccountTargeting::NOT_SET};
  bool m_testRunIdHasBeenSet = false;
  bool m_testIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_startedAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_experimentsHasBeenSet = false;
  bool m_eventCountHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_stopConditionsHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_roleNameHasBeenSet = false;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_reportConfigurationHasBeenSet = false;
  bool m_policyHasBeenSet = false;
  bool m_reportOutputHasBeenSet = false;
  bool m_regionSwitchPlanArnHasBeenSet = false;
  bool m_regionSwitchExecutionIdHasBeenSet = false;
  bool m_permissionModelHasBeenSet = false;
  bool m_regionsHasBeenSet = false;
  bool m_accountTargetingHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
