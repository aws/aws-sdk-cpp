/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sms/SMS_EXPORTS.h>
#include <aws/sms/model/Source.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sms/model/ScriptType.h>
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
namespace SMS
{
namespace Model
{

  /**
   * <p>Contains validation parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sms-2016-10-24/SSMValidationParameters">AWS
   * API Reference</a></p>
   */
  class SSMValidationParameters
  {
  public:
    AWS_SMS_API SSMValidationParameters() = default;
    AWS_SMS_API SSMValidationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API SSMValidationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of the validation script.</p>
     */
    inline const Source& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Source>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Source>
    SSMValidationParameters& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    SSMValidationParameters& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of validation script.</p>
     */
    inline ScriptType GetScriptType() const { return m_scriptType; }
    inline bool ScriptTypeHasBeenSet() const { return m_scriptTypeHasBeenSet; }
    inline void SetScriptType(ScriptType value) { m_scriptTypeHasBeenSet = true; m_scriptType = value; }
    inline SSMValidationParameters& WithScriptType(ScriptType value) { SetScriptType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to run the validation script.</p>
     */
    inline const Aws::String& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::String>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::String>
    SSMValidationParameters& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timeout interval, in seconds.</p>
     */
    inline int GetExecutionTimeoutSeconds() const { return m_executionTimeoutSeconds; }
    inline bool ExecutionTimeoutSecondsHasBeenSet() const { return m_executionTimeoutSecondsHasBeenSet; }
    inline void SetExecutionTimeoutSeconds(int value) { m_executionTimeoutSecondsHasBeenSet = true; m_executionTimeoutSeconds = value; }
    inline SSMValidationParameters& WithExecutionTimeoutSeconds(int value) { SetExecutionTimeoutSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const { return m_outputS3BucketName; }
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }
    template<typename OutputS3BucketNameT = Aws::String>
    void SetOutputS3BucketName(OutputS3BucketNameT&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::forward<OutputS3BucketNameT>(value); }
    template<typename OutputS3BucketNameT = Aws::String>
    SSMValidationParameters& WithOutputS3BucketName(OutputS3BucketNameT&& value) { SetOutputS3BucketName(std::forward<OutputS3BucketNameT>(value)); return *this;}
    ///@}
  private:

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ScriptType m_scriptType{ScriptType::NOT_SET};
    bool m_scriptTypeHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    int m_executionTimeoutSeconds{0};
    bool m_executionTimeoutSecondsHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
