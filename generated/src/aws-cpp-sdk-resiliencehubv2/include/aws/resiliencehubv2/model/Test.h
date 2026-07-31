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
#include <aws/resiliencehubv2/model/LoggingConfiguration.h>
#include <aws/resiliencehubv2/model/StopCondition.h>
#include <aws/resiliencehubv2/model/TestAction.h>

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
 * <p>Represents a test created for a service by configuring a test
 * template.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/Test">AWS
 * API Reference</a></p>
 */
class Test {
 public:
  AWS_RESILIENCEHUBV2_API Test() = default;
  AWS_RESILIENCEHUBV2_API Test(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Test& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the test.</p>
   */
  inline const Aws::String& GetTestId() const { return m_testId; }
  inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  Test& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the test template the test was created from.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  Test& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service the test belongs to.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  Test& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the test.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Test& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The fault actions the test runs.</p>
   */
  inline const Aws::Vector<TestAction>& GetActions() const { return m_actions; }
  inline bool ActionsHasBeenSet() const { return m_actionsHasBeenSet; }
  template <typename ActionsT = Aws::Vector<TestAction>>
  void SetActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions = std::forward<ActionsT>(value);
  }
  template <typename ActionsT = Aws::Vector<TestAction>>
  Test& WithActions(ActionsT&& value) {
    SetActions(std::forward<ActionsT>(value));
    return *this;
  }
  template <typename ActionsT = TestAction>
  Test& AddActions(ActionsT&& value) {
    m_actionsHasBeenSet = true;
    m_actions.emplace_back(std::forward<ActionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The logging configuration for the test.</p>
   */
  inline const LoggingConfiguration& GetLoggingConfiguration() const { return m_loggingConfiguration; }
  inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  void SetLoggingConfiguration(LoggingConfigurationT&& value) {
    m_loggingConfigurationHasBeenSet = true;
    m_loggingConfiguration = std::forward<LoggingConfigurationT>(value);
  }
  template <typename LoggingConfigurationT = LoggingConfiguration>
  Test& WithLoggingConfiguration(LoggingConfigurationT&& value) {
    SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The stop conditions for the test.</p>
   */
  inline const Aws::Vector<StopCondition>& GetStopConditions() const { return m_stopConditions; }
  inline bool StopConditionsHasBeenSet() const { return m_stopConditionsHasBeenSet; }
  template <typename StopConditionsT = Aws::Vector<StopCondition>>
  void SetStopConditions(StopConditionsT&& value) {
    m_stopConditionsHasBeenSet = true;
    m_stopConditions = std::forward<StopConditionsT>(value);
  }
  template <typename StopConditionsT = Aws::Vector<StopCondition>>
  Test& WithStopConditions(StopConditionsT&& value) {
    SetStopConditions(std::forward<StopConditionsT>(value));
    return *this;
  }
  template <typename StopConditionsT = StopCondition>
  Test& AddStopConditions(StopConditionsT&& value) {
    m_stopConditionsHasBeenSet = true;
    m_stopConditions.emplace_back(std::forward<StopConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IAM execution role used to run the test.</p>
   */
  inline const Aws::String& GetRoleName() const { return m_roleName; }
  inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
  template <typename RoleNameT = Aws::String>
  void SetRoleName(RoleNameT&& value) {
    m_roleNameHasBeenSet = true;
    m_roleName = std::forward<RoleNameT>(value);
  }
  template <typename RoleNameT = Aws::String>
  Test& WithRoleName(RoleNameT&& value) {
    SetRoleName(std::forward<RoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter values configured for the test.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  Test& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
  Test& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of runs of the test.</p>
   */
  inline int GetTotalTestRuns() const { return m_totalTestRuns; }
  inline bool TotalTestRunsHasBeenSet() const { return m_totalTestRunsHasBeenSet; }
  inline void SetTotalTestRuns(int value) {
    m_totalTestRunsHasBeenSet = true;
    m_totalTestRuns = value;
  }
  inline Test& WithTotalTestRuns(int value) {
    SetTotalTestRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of successful runs of the test.</p>
   */
  inline int GetSuccessfulTestRuns() const { return m_successfulTestRuns; }
  inline bool SuccessfulTestRunsHasBeenSet() const { return m_successfulTestRunsHasBeenSet; }
  inline void SetSuccessfulTestRuns(int value) {
    m_successfulTestRunsHasBeenSet = true;
    m_successfulTestRuns = value;
  }
  inline Test& WithSuccessfulTestRuns(int value) {
    SetSuccessfulTestRuns(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the test was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  Test& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testId;

  Aws::String m_testTemplateArn;

  Aws::String m_serviceArn;

  Aws::String m_name;

  Aws::Vector<TestAction> m_actions;

  LoggingConfiguration m_loggingConfiguration;

  Aws::Vector<StopCondition> m_stopConditions;

  Aws::String m_roleName;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;

  int m_totalTestRuns{0};

  int m_successfulTestRuns{0};

  Aws::Utils::DateTime m_creationTime{};
  bool m_testIdHasBeenSet = false;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_actionsHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_stopConditionsHasBeenSet = false;
  bool m_roleNameHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_totalTestRunsHasBeenSet = false;
  bool m_successfulTestRunsHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
