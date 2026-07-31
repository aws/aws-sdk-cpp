/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2Request.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/LoggingConfiguration.h>
#include <aws/resiliencehubv2/model/StopCondition.h>

#include <utility>

namespace Aws {
namespace resiliencehubv2 {
namespace Model {

/**
 */
class CreateTestRequest : public Resiliencehubv2Request {
 public:
  AWS_RESILIENCEHUBV2_API CreateTestRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateTest"; }

  AWS_RESILIENCEHUBV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the service to create the test for.</p>
   */
  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  CreateTestRequest& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the test template to configure.</p>
   */
  inline const Aws::String& GetTestTemplateArn() const { return m_testTemplateArn; }
  inline bool TestTemplateArnHasBeenSet() const { return m_testTemplateArnHasBeenSet; }
  template <typename TestTemplateArnT = Aws::String>
  void SetTestTemplateArn(TestTemplateArnT&& value) {
    m_testTemplateArnHasBeenSet = true;
    m_testTemplateArn = std::forward<TestTemplateArnT>(value);
  }
  template <typename TestTemplateArnT = Aws::String>
  CreateTestRequest& WithTestTemplateArn(TestTemplateArnT&& value) {
    SetTestTemplateArn(std::forward<TestTemplateArnT>(value));
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
  CreateTestRequest& WithLoggingConfiguration(LoggingConfigurationT&& value) {
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
  CreateTestRequest& WithStopConditions(StopConditionsT&& value) {
    SetStopConditions(std::forward<StopConditionsT>(value));
    return *this;
  }
  template <typename StopConditionsT = StopCondition>
  CreateTestRequest& AddStopConditions(StopConditionsT&& value) {
    m_stopConditionsHasBeenSet = true;
    m_stopConditions.emplace_back(std::forward<StopConditionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the IAM execution role to use when running the test.</p>
   */
  inline const Aws::String& GetRoleName() const { return m_roleName; }
  inline bool RoleNameHasBeenSet() const { return m_roleNameHasBeenSet; }
  template <typename RoleNameT = Aws::String>
  void SetRoleName(RoleNameT&& value) {
    m_roleNameHasBeenSet = true;
    m_roleName = std::forward<RoleNameT>(value);
  }
  template <typename RoleNameT = Aws::String>
  CreateTestRequest& WithRoleName(RoleNameT&& value) {
    SetRoleName(std::forward<RoleNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parameter values for the test.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  CreateTestRequest& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::Vector<Aws::String>>
  CreateTestRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceArn;

  Aws::String m_testTemplateArn;

  LoggingConfiguration m_loggingConfiguration;

  Aws::Vector<StopCondition> m_stopConditions;

  Aws::String m_roleName;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_parameters;
  bool m_serviceArnHasBeenSet = false;
  bool m_testTemplateArnHasBeenSet = false;
  bool m_loggingConfigurationHasBeenSet = false;
  bool m_stopConditionsHasBeenSet = false;
  bool m_roleNameHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
