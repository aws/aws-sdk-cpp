/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhuborchestrator/MigrationHubOrchestrator_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/migrationhuborchestrator/model/PlatformScriptKey.h>
#include <aws/migrationhuborchestrator/model/PlatformCommand.h>
#include <aws/migrationhuborchestrator/model/RunEnvironment.h>
#include <aws/migrationhuborchestrator/model/TargetType.h>
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
namespace MigrationHubOrchestrator
{
namespace Model
{

  /**
   * <p>The custom script to run tests on source or target
   * environments.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/WorkflowStepAutomationConfiguration">AWS
   * API Reference</a></p>
   */
  class WorkflowStepAutomationConfiguration
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepAutomationConfiguration();
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepAutomationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API WorkflowStepAutomationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline const Aws::String& GetScriptLocationS3Bucket() const{ return m_scriptLocationS3Bucket; }
    inline bool ScriptLocationS3BucketHasBeenSet() const { return m_scriptLocationS3BucketHasBeenSet; }
    inline void SetScriptLocationS3Bucket(const Aws::String& value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket = value; }
    inline void SetScriptLocationS3Bucket(Aws::String&& value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket = std::move(value); }
    inline void SetScriptLocationS3Bucket(const char* value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket.assign(value); }
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(const Aws::String& value) { SetScriptLocationS3Bucket(value); return *this;}
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(Aws::String&& value) { SetScriptLocationS3Bucket(std::move(value)); return *this;}
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(const char* value) { SetScriptLocationS3Bucket(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline const PlatformScriptKey& GetScriptLocationS3Key() const{ return m_scriptLocationS3Key; }
    inline bool ScriptLocationS3KeyHasBeenSet() const { return m_scriptLocationS3KeyHasBeenSet; }
    inline void SetScriptLocationS3Key(const PlatformScriptKey& value) { m_scriptLocationS3KeyHasBeenSet = true; m_scriptLocationS3Key = value; }
    inline void SetScriptLocationS3Key(PlatformScriptKey&& value) { m_scriptLocationS3KeyHasBeenSet = true; m_scriptLocationS3Key = std::move(value); }
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Key(const PlatformScriptKey& value) { SetScriptLocationS3Key(value); return *this;}
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Key(PlatformScriptKey&& value) { SetScriptLocationS3Key(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command required to run the script.</p>
     */
    inline const PlatformCommand& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const PlatformCommand& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(PlatformCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline WorkflowStepAutomationConfiguration& WithCommand(const PlatformCommand& value) { SetCommand(value); return *this;}
    inline WorkflowStepAutomationConfiguration& WithCommand(PlatformCommand&& value) { SetCommand(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source or target environment.</p>
     */
    inline const RunEnvironment& GetRunEnvironment() const{ return m_runEnvironment; }
    inline bool RunEnvironmentHasBeenSet() const { return m_runEnvironmentHasBeenSet; }
    inline void SetRunEnvironment(const RunEnvironment& value) { m_runEnvironmentHasBeenSet = true; m_runEnvironment = value; }
    inline void SetRunEnvironment(RunEnvironment&& value) { m_runEnvironmentHasBeenSet = true; m_runEnvironment = std::move(value); }
    inline WorkflowStepAutomationConfiguration& WithRunEnvironment(const RunEnvironment& value) { SetRunEnvironment(value); return *this;}
    inline WorkflowStepAutomationConfiguration& WithRunEnvironment(RunEnvironment&& value) { SetRunEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which to run the script.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }
    inline WorkflowStepAutomationConfiguration& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}
    inline WorkflowStepAutomationConfiguration& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_scriptLocationS3Bucket;
    bool m_scriptLocationS3BucketHasBeenSet = false;

    PlatformScriptKey m_scriptLocationS3Key;
    bool m_scriptLocationS3KeyHasBeenSet = false;

    PlatformCommand m_command;
    bool m_commandHasBeenSet = false;

    RunEnvironment m_runEnvironment;
    bool m_runEnvironmentHasBeenSet = false;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
