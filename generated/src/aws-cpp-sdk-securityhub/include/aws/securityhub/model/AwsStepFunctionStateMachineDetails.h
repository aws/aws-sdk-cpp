/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsStepFunctionStateMachineLoggingConfigurationDetails.h>
#include <aws/securityhub/model/AwsStepFunctionStateMachineTracingConfigurationDetails.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p> Provides details about an Step Functions state machine, which is a workflow
   * consisting of a series of event- driven steps. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsStepFunctionStateMachineDetails">AWS
   * API Reference</a></p>
   */
  class AwsStepFunctionStateMachineDetails
  {
  public:
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails() = default;
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline const AwsStepFunctionStateMachineLoggingConfigurationDetails& GetLoggingConfiguration() const { return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    template<typename LoggingConfigurationT = AwsStepFunctionStateMachineLoggingConfigurationDetails>
    void SetLoggingConfiguration(LoggingConfigurationT&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::forward<LoggingConfigurationT>(value); }
    template<typename LoggingConfigurationT = AwsStepFunctionStateMachineLoggingConfigurationDetails>
    AwsStepFunctionStateMachineDetails& WithLoggingConfiguration(LoggingConfigurationT&& value) { SetLoggingConfiguration(std::forward<LoggingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the state machine. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline const Aws::String& GetStateMachineArn() const { return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    template<typename StateMachineArnT = Aws::String>
    void SetStateMachineArn(StateMachineArnT&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::forward<StateMachineArnT>(value); }
    template<typename StateMachineArnT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithStateMachineArn(StateMachineArnT&& value) { SetStateMachineArn(std::forward<StateMachineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of the state machine. </p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline const AwsStepFunctionStateMachineTracingConfigurationDetails& GetTracingConfiguration() const { return m_tracingConfiguration; }
    inline bool TracingConfigurationHasBeenSet() const { return m_tracingConfigurationHasBeenSet; }
    template<typename TracingConfigurationT = AwsStepFunctionStateMachineTracingConfigurationDetails>
    void SetTracingConfiguration(TracingConfigurationT&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::forward<TracingConfigurationT>(value); }
    template<typename TracingConfigurationT = AwsStepFunctionStateMachineTracingConfigurationDetails>
    AwsStepFunctionStateMachineDetails& WithTracingConfiguration(TracingConfigurationT&& value) { SetTracingConfiguration(std::forward<TracingConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    AwsStepFunctionStateMachineDetails& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    AwsStepFunctionStateMachineLoggingConfigurationDetails m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    AwsStepFunctionStateMachineTracingConfigurationDetails m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
