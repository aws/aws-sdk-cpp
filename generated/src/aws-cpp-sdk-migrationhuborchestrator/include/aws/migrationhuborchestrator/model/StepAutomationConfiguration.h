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
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhuborchestrator-2021-08-28/StepAutomationConfiguration">AWS
   * API Reference</a></p>
   */
  class StepAutomationConfiguration
  {
  public:
    AWS_MIGRATIONHUBORCHESTRATOR_API StepAutomationConfiguration() = default;
    AWS_MIGRATIONHUBORCHESTRATOR_API StepAutomationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API StepAutomationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBORCHESTRATOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon S3 bucket where the script is located.</p>
     */
    inline const Aws::String& GetScriptLocationS3Bucket() const { return m_scriptLocationS3Bucket; }
    inline bool ScriptLocationS3BucketHasBeenSet() const { return m_scriptLocationS3BucketHasBeenSet; }
    template<typename ScriptLocationS3BucketT = Aws::String>
    void SetScriptLocationS3Bucket(ScriptLocationS3BucketT&& value) { m_scriptLocationS3BucketHasBeenSet = true; m_scriptLocationS3Bucket = std::forward<ScriptLocationS3BucketT>(value); }
    template<typename ScriptLocationS3BucketT = Aws::String>
    StepAutomationConfiguration& WithScriptLocationS3Bucket(ScriptLocationS3BucketT&& value) { SetScriptLocationS3Bucket(std::forward<ScriptLocationS3BucketT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon S3 key for the script location.</p>
     */
    inline const PlatformScriptKey& GetScriptLocationS3Key() const { return m_scriptLocationS3Key; }
    inline bool ScriptLocationS3KeyHasBeenSet() const { return m_scriptLocationS3KeyHasBeenSet; }
    template<typename ScriptLocationS3KeyT = PlatformScriptKey>
    void SetScriptLocationS3Key(ScriptLocationS3KeyT&& value) { m_scriptLocationS3KeyHasBeenSet = true; m_scriptLocationS3Key = std::forward<ScriptLocationS3KeyT>(value); }
    template<typename ScriptLocationS3KeyT = PlatformScriptKey>
    StepAutomationConfiguration& WithScriptLocationS3Key(ScriptLocationS3KeyT&& value) { SetScriptLocationS3Key(std::forward<ScriptLocationS3KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to run the script.</p>
     */
    inline const PlatformCommand& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = PlatformCommand>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = PlatformCommand>
    StepAutomationConfiguration& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source or target environment.</p>
     */
    inline RunEnvironment GetRunEnvironment() const { return m_runEnvironment; }
    inline bool RunEnvironmentHasBeenSet() const { return m_runEnvironmentHasBeenSet; }
    inline void SetRunEnvironment(RunEnvironment value) { m_runEnvironmentHasBeenSet = true; m_runEnvironment = value; }
    inline StepAutomationConfiguration& WithRunEnvironment(RunEnvironment value) { SetRunEnvironment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The servers on which to run the script.</p>
     */
    inline TargetType GetTargetType() const { return m_targetType; }
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
    inline void SetTargetType(TargetType value) { m_targetTypeHasBeenSet = true; m_targetType = value; }
    inline StepAutomationConfiguration& WithTargetType(TargetType value) { SetTargetType(value); return *this;}
    ///@}
  private:

    Aws::String m_scriptLocationS3Bucket;
    bool m_scriptLocationS3BucketHasBeenSet = false;

    PlatformScriptKey m_scriptLocationS3Key;
    bool m_scriptLocationS3KeyHasBeenSet = false;

    PlatformCommand m_command;
    bool m_commandHasBeenSet = false;

    RunEnvironment m_runEnvironment{RunEnvironment::NOT_SET};
    bool m_runEnvironmentHasBeenSet = false;

    TargetType m_targetType{TargetType::NOT_SET};
    bool m_targetTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubOrchestrator
} // namespace Aws
