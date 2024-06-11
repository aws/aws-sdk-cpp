﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/LoggingConfiguration.h>
#include <aws/states/model/TracingConfiguration.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class UpdateStateMachineRequest : public SFNRequest
  {
  public:
    AWS_SFN_API UpdateStateMachineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateStateMachine"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }
    inline UpdateStateMachineRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}
    inline UpdateStateMachineRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}
    inline UpdateStateMachineRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon States Language definition of the state machine. See <a
     * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
     * States Language</a>.</p>
     */
    inline const Aws::String& GetDefinition() const{ return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    inline void SetDefinition(const Aws::String& value) { m_definitionHasBeenSet = true; m_definition = value; }
    inline void SetDefinition(Aws::String&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }
    inline void SetDefinition(const char* value) { m_definitionHasBeenSet = true; m_definition.assign(value); }
    inline UpdateStateMachineRequest& WithDefinition(const Aws::String& value) { SetDefinition(value); return *this;}
    inline UpdateStateMachineRequest& WithDefinition(Aws::String&& value) { SetDefinition(std::move(value)); return *this;}
    inline UpdateStateMachineRequest& WithDefinition(const char* value) { SetDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role of the state machine.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdateStateMachineRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdateStateMachineRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdateStateMachineRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use the <code>LoggingConfiguration</code> data type to set CloudWatch Logs
     * options.</p>
     */
    inline const LoggingConfiguration& GetLoggingConfiguration() const{ return m_loggingConfiguration; }
    inline bool LoggingConfigurationHasBeenSet() const { return m_loggingConfigurationHasBeenSet; }
    inline void SetLoggingConfiguration(const LoggingConfiguration& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = value; }
    inline void SetLoggingConfiguration(LoggingConfiguration&& value) { m_loggingConfigurationHasBeenSet = true; m_loggingConfiguration = std::move(value); }
    inline UpdateStateMachineRequest& WithLoggingConfiguration(const LoggingConfiguration& value) { SetLoggingConfiguration(value); return *this;}
    inline UpdateStateMachineRequest& WithLoggingConfiguration(LoggingConfiguration&& value) { SetLoggingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Selects whether X-Ray tracing is enabled.</p>
     */
    inline const TracingConfiguration& GetTracingConfiguration() const{ return m_tracingConfiguration; }
    inline bool TracingConfigurationHasBeenSet() const { return m_tracingConfigurationHasBeenSet; }
    inline void SetTracingConfiguration(const TracingConfiguration& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = value; }
    inline void SetTracingConfiguration(TracingConfiguration&& value) { m_tracingConfigurationHasBeenSet = true; m_tracingConfiguration = std::move(value); }
    inline UpdateStateMachineRequest& WithTracingConfiguration(const TracingConfiguration& value) { SetTracingConfiguration(value); return *this;}
    inline UpdateStateMachineRequest& WithTracingConfiguration(TracingConfiguration&& value) { SetTracingConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the state machine version is published. The default is
     * <code>false</code>. To publish a version after updating the state machine, set
     * <code>publish</code> to <code>true</code>.</p>
     */
    inline bool GetPublish() const{ return m_publish; }
    inline bool PublishHasBeenSet() const { return m_publishHasBeenSet; }
    inline void SetPublish(bool value) { m_publishHasBeenSet = true; m_publish = value; }
    inline UpdateStateMachineRequest& WithPublish(bool value) { SetPublish(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional description of the state machine version to publish.</p> <p>You
     * can only specify the <code>versionDescription</code> parameter if you've set
     * <code>publish</code> to <code>true</code>.</p>
     */
    inline const Aws::String& GetVersionDescription() const{ return m_versionDescription; }
    inline bool VersionDescriptionHasBeenSet() const { return m_versionDescriptionHasBeenSet; }
    inline void SetVersionDescription(const Aws::String& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = value; }
    inline void SetVersionDescription(Aws::String&& value) { m_versionDescriptionHasBeenSet = true; m_versionDescription = std::move(value); }
    inline void SetVersionDescription(const char* value) { m_versionDescriptionHasBeenSet = true; m_versionDescription.assign(value); }
    inline UpdateStateMachineRequest& WithVersionDescription(const Aws::String& value) { SetVersionDescription(value); return *this;}
    inline UpdateStateMachineRequest& WithVersionDescription(Aws::String&& value) { SetVersionDescription(std::move(value)); return *this;}
    inline UpdateStateMachineRequest& WithVersionDescription(const char* value) { SetVersionDescription(value); return *this;}
    ///@}
  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    LoggingConfiguration m_loggingConfiguration;
    bool m_loggingConfigurationHasBeenSet = false;

    TracingConfiguration m_tracingConfiguration;
    bool m_tracingConfigurationHasBeenSet = false;

    bool m_publish;
    bool m_publishHasBeenSet = false;

    Aws::String m_versionDescription;
    bool m_versionDescriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
