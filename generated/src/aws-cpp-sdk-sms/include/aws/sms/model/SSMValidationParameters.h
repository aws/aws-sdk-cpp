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
    AWS_SMS_API SSMValidationParameters();
    AWS_SMS_API SSMValidationParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API SSMValidationParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The location of the validation script.</p>
     */
    inline const Source& GetSource() const{ return m_source; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline void SetSource(const Source& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The location of the validation script.</p>
     */
    inline void SetSource(Source&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The location of the validation script.</p>
     */
    inline SSMValidationParameters& WithSource(const Source& value) { SetSource(value); return *this;}

    /**
     * <p>The location of the validation script.</p>
     */
    inline SSMValidationParameters& WithSource(Source&& value) { SetSource(std::move(value)); return *this;}


    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline SSMValidationParameters& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline SSMValidationParameters& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance. The instance must have the following tag:
     * UserForSMSApplicationValidation=true.</p>
     */
    inline SSMValidationParameters& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The type of validation script.</p>
     */
    inline const ScriptType& GetScriptType() const{ return m_scriptType; }

    /**
     * <p>The type of validation script.</p>
     */
    inline bool ScriptTypeHasBeenSet() const { return m_scriptTypeHasBeenSet; }

    /**
     * <p>The type of validation script.</p>
     */
    inline void SetScriptType(const ScriptType& value) { m_scriptTypeHasBeenSet = true; m_scriptType = value; }

    /**
     * <p>The type of validation script.</p>
     */
    inline void SetScriptType(ScriptType&& value) { m_scriptTypeHasBeenSet = true; m_scriptType = std::move(value); }

    /**
     * <p>The type of validation script.</p>
     */
    inline SSMValidationParameters& WithScriptType(const ScriptType& value) { SetScriptType(value); return *this;}

    /**
     * <p>The type of validation script.</p>
     */
    inline SSMValidationParameters& WithScriptType(ScriptType&& value) { SetScriptType(std::move(value)); return *this;}


    /**
     * <p>The command to run the validation script.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }

    /**
     * <p>The command to run the validation script.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to run the validation script.</p>
     */
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to run the validation script.</p>
     */
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to run the validation script.</p>
     */
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }

    /**
     * <p>The command to run the validation script.</p>
     */
    inline SSMValidationParameters& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to run the validation script.</p>
     */
    inline SSMValidationParameters& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to run the validation script.</p>
     */
    inline SSMValidationParameters& WithCommand(const char* value) { SetCommand(value); return *this;}


    /**
     * <p>The timeout interval, in seconds.</p>
     */
    inline int GetExecutionTimeoutSeconds() const{ return m_executionTimeoutSeconds; }

    /**
     * <p>The timeout interval, in seconds.</p>
     */
    inline bool ExecutionTimeoutSecondsHasBeenSet() const { return m_executionTimeoutSecondsHasBeenSet; }

    /**
     * <p>The timeout interval, in seconds.</p>
     */
    inline void SetExecutionTimeoutSeconds(int value) { m_executionTimeoutSecondsHasBeenSet = true; m_executionTimeoutSeconds = value; }

    /**
     * <p>The timeout interval, in seconds.</p>
     */
    inline SSMValidationParameters& WithExecutionTimeoutSeconds(int value) { SetExecutionTimeoutSeconds(value); return *this;}


    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline const Aws::String& GetOutputS3BucketName() const{ return m_outputS3BucketName; }

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline bool OutputS3BucketNameHasBeenSet() const { return m_outputS3BucketNameHasBeenSet; }

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline void SetOutputS3BucketName(const Aws::String& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = value; }

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline void SetOutputS3BucketName(Aws::String&& value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName = std::move(value); }

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline void SetOutputS3BucketName(const char* value) { m_outputS3BucketNameHasBeenSet = true; m_outputS3BucketName.assign(value); }

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline SSMValidationParameters& WithOutputS3BucketName(const Aws::String& value) { SetOutputS3BucketName(value); return *this;}

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline SSMValidationParameters& WithOutputS3BucketName(Aws::String&& value) { SetOutputS3BucketName(std::move(value)); return *this;}

    /**
     * <p>The name of the S3 bucket for output.</p>
     */
    inline SSMValidationParameters& WithOutputS3BucketName(const char* value) { SetOutputS3BucketName(value); return *this;}

  private:

    Source m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    ScriptType m_scriptType;
    bool m_scriptTypeHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    int m_executionTimeoutSeconds;
    bool m_executionTimeoutSecondsHasBeenSet = false;

    Aws::String m_outputS3BucketName;
    bool m_outputS3BucketNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SMS
} // namespace Aws
