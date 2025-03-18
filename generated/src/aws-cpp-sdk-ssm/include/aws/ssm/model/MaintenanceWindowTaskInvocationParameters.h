/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/MaintenanceWindowRunCommandParameters.h>
#include <aws/ssm/model/MaintenanceWindowAutomationParameters.h>
#include <aws/ssm/model/MaintenanceWindowStepFunctionsParameters.h>
#include <aws/ssm/model/MaintenanceWindowLambdaParameters.h>
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
   * <p>The parameters for task execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/MaintenanceWindowTaskInvocationParameters">AWS
   * API Reference</a></p>
   */
  class MaintenanceWindowTaskInvocationParameters
  {
  public:
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters() = default;
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API MaintenanceWindowTaskInvocationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parameters for a <code>RUN_COMMAND</code> task type.</p>
     */
    inline const MaintenanceWindowRunCommandParameters& GetRunCommand() const { return m_runCommand; }
    inline bool RunCommandHasBeenSet() const { return m_runCommandHasBeenSet; }
    template<typename RunCommandT = MaintenanceWindowRunCommandParameters>
    void SetRunCommand(RunCommandT&& value) { m_runCommandHasBeenSet = true; m_runCommand = std::forward<RunCommandT>(value); }
    template<typename RunCommandT = MaintenanceWindowRunCommandParameters>
    MaintenanceWindowTaskInvocationParameters& WithRunCommand(RunCommandT&& value) { SetRunCommand(std::forward<RunCommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for an <code>AUTOMATION</code> task type.</p>
     */
    inline const MaintenanceWindowAutomationParameters& GetAutomation() const { return m_automation; }
    inline bool AutomationHasBeenSet() const { return m_automationHasBeenSet; }
    template<typename AutomationT = MaintenanceWindowAutomationParameters>
    void SetAutomation(AutomationT&& value) { m_automationHasBeenSet = true; m_automation = std::forward<AutomationT>(value); }
    template<typename AutomationT = MaintenanceWindowAutomationParameters>
    MaintenanceWindowTaskInvocationParameters& WithAutomation(AutomationT&& value) { SetAutomation(std::forward<AutomationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for a <code>STEP_FUNCTIONS</code> task type.</p>
     */
    inline const MaintenanceWindowStepFunctionsParameters& GetStepFunctions() const { return m_stepFunctions; }
    inline bool StepFunctionsHasBeenSet() const { return m_stepFunctionsHasBeenSet; }
    template<typename StepFunctionsT = MaintenanceWindowStepFunctionsParameters>
    void SetStepFunctions(StepFunctionsT&& value) { m_stepFunctionsHasBeenSet = true; m_stepFunctions = std::forward<StepFunctionsT>(value); }
    template<typename StepFunctionsT = MaintenanceWindowStepFunctionsParameters>
    MaintenanceWindowTaskInvocationParameters& WithStepFunctions(StepFunctionsT&& value) { SetStepFunctions(std::forward<StepFunctionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters for a <code>LAMBDA</code> task type.</p>
     */
    inline const MaintenanceWindowLambdaParameters& GetLambda() const { return m_lambda; }
    inline bool LambdaHasBeenSet() const { return m_lambdaHasBeenSet; }
    template<typename LambdaT = MaintenanceWindowLambdaParameters>
    void SetLambda(LambdaT&& value) { m_lambdaHasBeenSet = true; m_lambda = std::forward<LambdaT>(value); }
    template<typename LambdaT = MaintenanceWindowLambdaParameters>
    MaintenanceWindowTaskInvocationParameters& WithLambda(LambdaT&& value) { SetLambda(std::forward<LambdaT>(value)); return *this;}
    ///@}
  private:

    MaintenanceWindowRunCommandParameters m_runCommand;
    bool m_runCommandHasBeenSet = false;

    MaintenanceWindowAutomationParameters m_automation;
    bool m_automationHasBeenSet = false;

    MaintenanceWindowStepFunctionsParameters m_stepFunctions;
    bool m_stepFunctionsHasBeenSet = false;

    MaintenanceWindowLambdaParameters m_lambda;
    bool m_lambdaHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
