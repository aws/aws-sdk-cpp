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


    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline const Aws::String& GetScriptLocationS3Bucket() const{ return m_scriptLocationS3Bucket; }

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline bool ScriptLocationS3BucketHasBeenSet() const { return m_scriptLocationS3BucketHasBeenSet; }

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline void SetScriptLocationS3Bucket(const Aws::String& value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket = value; }

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline void SetScriptLocationS3Bucket(Aws::String&& value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket = std::move(value); }

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline void SetScriptLocationS3Bucket(const char* value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket.assign(value); }

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(const Aws::String& value) { SetScriptLocationS3Bucket(value); return *this;}

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(Aws::String&& value) { SetScriptLocationS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Bucket(const char* value) { SetScriptLocationS3Bucket(value); return *this;}


    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline const PlatformScriptKey& GetScriptLocationS3Key() const{ return m_scriptLocationS3Key; }

    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline bool ScriptLocationS3KeyHasBeenSet() const { return m_scriptLocationS3KeyHasBeenSet; }

    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline void SetScriptLocationS3Key(const PlatformScriptKey& value) { m_scriptLocationS3KeyHasBeenSet = true; m_scriptLocationS3Key = value; }

    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline void SetScriptLocationS3Key(PlatformScriptKey&& value) { m_scriptLocationS3KeyHasBeenSet = true; m_scriptLocationS3Key = std::move(value); }

    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Key(const PlatformScriptKey& value) { SetScriptLocationS3Key(value); return *this;}

    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithScriptLocationS3Key(PlatformScriptKey&& value) { SetScriptLocationS3Key(std::move(value)); return *this;}


    /**
     * <p>The command required to run the script.</p>
     */
    inline const PlatformCommand& GetCommand() const{ return m_command; }

    /**
     * <p>The command required to run the script.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command required to run the script.</p>
     */
    inline void SetCommand(const PlatformCommand& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command required to run the script.</p>
     */
    inline void SetCommand(PlatformCommand&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command required to run the script.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithCommand(const PlatformCommand& value) { SetCommand(value); return *this;}

    /**
     * <p>The command required to run the script.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithCommand(PlatformCommand&& value) { SetCommand(std::move(value)); return *this;}


    /**
     * <p>The source or target environment.</p>
     */
    inline const RunEnvironment& GetRunEnvironment() const{ return m_runEnvironment; }

    /**
     * <p>The source or target environment.</p>
     */
    inline bool RunEnvironmentHasBeenSet() const { return m_runEnvironmentHasBeenSet; }

    /**
     * <p>The source or target environment.</p>
     */
    inline void SetRunEnvironment(const RunEnvironment& value) { m_runEnvironmentHasBeenSet = true; m_runEnvironment = value; }

    /**
     * <p>The source or target environment.</p>
     */
    inline void SetRunEnvironment(RunEnvironment&& value) { m_runEnvironmentHasBeenSet = true; m_runEnvironment = std::move(value); }

    /**
     * <p>The source or target environment.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithRunEnvironment(const RunEnvironment& value) { SetRunEnvironment(value); return *this;}

    /**
     * <p>The source or target environment.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithRunEnvironment(RunEnvironment&& value) { SetRunEnvironment(std::move(value)); return *this;}


    /**
     * <p>The servers on which to run the script.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The servers on which to run the script.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The servers on which to run the script.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The servers on which to run the script.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The servers on which to run the script.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The servers on which to run the script.</p>
     */
    inline WorkflowStepAutomationConfiguration& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}

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
