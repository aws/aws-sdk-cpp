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
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails();
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsStepFunctionStateMachineDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p> A user-defined or an auto-generated string that identifies a
     * <code>Map</code> state. This parameter is present only if the
     * <code>stateMachineArn</code> specified in input is a qualified state machine
     * ARN. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline const AwsStepFunctionStateMachineLoggingConfigurationDetails& GetLoggingConfiguration() const{ return m_loggingConfiguration; }

    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }

    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline void SetLoggingConfiguration(const AwsStepFunctionStateMachineLoggingConfigurationDetails& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }

    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline void SetLoggingConfiguration(AwsStepFunctionStateMachineLoggingConfigurationDetails&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }

    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithLoggingConfiguration(const AwsStepFunctionStateMachineLoggingConfigurationDetails& value) { SetLoggingConfiguration(value); return *this;}

    /**
     * <p> Used to set CloudWatch Logs options. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithLoggingConfiguration(AwsStepFunctionStateMachineLoggingConfigurationDetails&& value) { SetLoggingConfiguration(std::move(value)); return *this;}


    /**
     * <p> The name of the state machine. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the state machine. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the state machine. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the state machine. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the state machine. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role used when creating this state
     * machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p> The ARN that identifies the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p> The current status of the state machine. </p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p> The current status of the state machine. </p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p> The current status of the state machine. </p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p> The current status of the state machine. </p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p> The current status of the state machine. </p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p> The current status of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p> The current status of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p> The current status of the state machine. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline const AwsStepFunctionStateMachineTracingConfigurationDetails& GetTracingConfiguration() const{ return m_tracingConfiguration; }

    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline bool TracingConfigurationHasBeenSet() const { return m_tracingConfigurationHasBeenSet; }

    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline void SetTracingConfiguration(const AwsStepFunctionStateMachineTracingConfigurationDetails& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = value; }

    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline void SetTracingConfiguration(AwsStepFunctionStateMachineTracingConfigurationDetails&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::move(value); }

    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithTracingConfiguration(const AwsStepFunctionStateMachineTracingConfigurationDetails& value) { SetTracingConfiguration(value); return *this;}

    /**
     * <p> Specifies whether X-Ray tracing is enabled. </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithTracingConfiguration(AwsStepFunctionStateMachineTracingConfigurationDetails&& value) { SetTracingConfiguration(std::move(value)); return *this;}


    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p> The type of the state machine (STANDARD or EXPRESS). </p>
     */
    inline AwsStepFunctionStateMachineDetails& WithType(const char* value) { SetType(value); return *this;}

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
