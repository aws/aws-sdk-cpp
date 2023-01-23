/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/AwsLambdaFunctionCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsLambdaFunctionDeadLetterConfig.h>
#include <aws/securityhub/model/AwsLambdaFunctionEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsLambdaFunctionTracingConfig.h>
#include <aws/securityhub/model/AwsLambdaFunctionVpcConfig.h>
#include <aws/securityhub/model/AwsLambdaFunctionLayer.h>
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
   * <p>Details about an Lambda function's configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsLambdaFunctionDetails">AWS
   * API Reference</a></p>
   */
  class AwsLambdaFunctionDetails
  {
  public:
    AWS_SECURITYHUB_API AwsLambdaFunctionDetails();
    AWS_SECURITYHUB_API AwsLambdaFunctionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsLambdaFunctionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline const AwsLambdaFunctionCode& GetCode() const{ return m_code; }

    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }

    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline void SetCode(const AwsLambdaFunctionCode& value) { m_codeHasBeenSet = true; m_code = value; }

    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline void SetCode(AwsLambdaFunctionCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }

    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline AwsLambdaFunctionDetails& WithCode(const AwsLambdaFunctionCode& value) { SetCode(value); return *this;}

    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline AwsLambdaFunctionDetails& WithCode(AwsLambdaFunctionCode&& value) { SetCode(std::move(value)); return *this;}


    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline AwsLambdaFunctionDetails& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline AwsLambdaFunctionDetails& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}

    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline AwsLambdaFunctionDetails& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}


    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const AwsLambdaFunctionDeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(const AwsLambdaFunctionDeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline void SetDeadLetterConfig(AwsLambdaFunctionDeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline AwsLambdaFunctionDetails& WithDeadLetterConfig(const AwsLambdaFunctionDeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}

    /**
     * <p>The function's dead letter queue.</p>
     */
    inline AwsLambdaFunctionDetails& WithDeadLetterConfig(AwsLambdaFunctionDeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}


    /**
     * <p>The function's environment variables.</p>
     */
    inline const AwsLambdaFunctionEnvironment& GetEnvironment() const{ return m_environment; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(const AwsLambdaFunctionEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    /**
     * <p>The function's environment variables.</p>
     */
    inline void SetEnvironment(AwsLambdaFunctionEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    /**
     * <p>The function's environment variables.</p>
     */
    inline AwsLambdaFunctionDetails& WithEnvironment(const AwsLambdaFunctionEnvironment& value) { SetEnvironment(value); return *this;}

    /**
     * <p>The function's environment variables.</p>
     */
    inline AwsLambdaFunctionDetails& WithEnvironment(AwsLambdaFunctionEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }

    /**
     * <p>The name of the function.</p>
     */
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }

    /**
     * <p>The name of the function.</p>
     */
    inline AwsLambdaFunctionDetails& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline AwsLambdaFunctionDetails& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}

    /**
     * <p>The name of the function.</p>
     */
    inline AwsLambdaFunctionDetails& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}


    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline AwsLambdaFunctionDetails& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline AwsLambdaFunctionDetails& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}

    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline AwsLambdaFunctionDetails& WithHandler(const char* value) { SetHandler(value); return *this;}


    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}

    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}


    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsLambdaFunctionDetails& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsLambdaFunctionDetails& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}

    /**
     * <p>Indicates when the function was last updated.</p> <p>Uses the
     * <code>date-time</code> format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsLambdaFunctionDetails& WithLastModified(const char* value) { SetLastModified(value); return *this;}


    /**
     * <p>The function's layers.</p>
     */
    inline const Aws::Vector<AwsLambdaFunctionLayer>& GetLayers() const{ return m_layers; }

    /**
     * <p>The function's layers.</p>
     */
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }

    /**
     * <p>The function's layers.</p>
     */
    inline void SetLayers(const Aws::Vector<AwsLambdaFunctionLayer>& value) { m_layersHasBeenSet = true; m_layers = value; }

    /**
     * <p>The function's layers.</p>
     */
    inline void SetLayers(Aws::Vector<AwsLambdaFunctionLayer>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }

    /**
     * <p>The function's layers.</p>
     */
    inline AwsLambdaFunctionDetails& WithLayers(const Aws::Vector<AwsLambdaFunctionLayer>& value) { SetLayers(value); return *this;}

    /**
     * <p>The function's layers.</p>
     */
    inline AwsLambdaFunctionDetails& WithLayers(Aws::Vector<AwsLambdaFunctionLayer>&& value) { SetLayers(std::move(value)); return *this;}

    /**
     * <p>The function's layers.</p>
     */
    inline AwsLambdaFunctionDetails& AddLayers(const AwsLambdaFunctionLayer& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }

    /**
     * <p>The function's layers.</p>
     */
    inline AwsLambdaFunctionDetails& AddLayers(AwsLambdaFunctionLayer&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }


    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline bool MasterArnHasBeenSet() const { return m_masterArnHasBeenSet; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const Aws::String& value) { m_masterArnHasBeenSet = true; m_masterArn = value; }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(Aws::String&& value) { m_masterArnHasBeenSet = true; m_masterArn = std::move(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline void SetMasterArn(const char* value) { m_masterArnHasBeenSet = true; m_masterArn.assign(value); }

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline AwsLambdaFunctionDetails& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline AwsLambdaFunctionDetails& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}

    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline AwsLambdaFunctionDetails& WithMasterArn(const char* value) { SetMasterArn(value); return *this;}


    /**
     * <p>The memory that is allocated to the function.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }

    /**
     * <p>The memory that is allocated to the function.</p>
     */
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }

    /**
     * <p>The memory that is allocated to the function.</p>
     */
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }

    /**
     * <p>The memory that is allocated to the function.</p>
     */
    inline AwsLambdaFunctionDetails& WithMemorySize(int value) { SetMemorySize(value); return *this;}


    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline AwsLambdaFunctionDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline AwsLambdaFunctionDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}

    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline AwsLambdaFunctionDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}


    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }

    /**
     * <p>The function's execution role.</p>
     */
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }

    /**
     * <p>The function's execution role.</p>
     */
    inline AwsLambdaFunctionDetails& WithRole(const Aws::String& value) { SetRole(value); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline AwsLambdaFunctionDetails& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}

    /**
     * <p>The function's execution role.</p>
     */
    inline AwsLambdaFunctionDetails& WithRole(const char* value) { SetRole(value); return *this;}


    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}

    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithRuntime(const char* value) { SetRuntime(value); return *this;}


    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline AwsLambdaFunctionDetails& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline const AwsLambdaFunctionTracingConfig& GetTracingConfig() const{ return m_tracingConfig; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(const AwsLambdaFunctionTracingConfig& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline void SetTracingConfig(AwsLambdaFunctionTracingConfig&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline AwsLambdaFunctionDetails& WithTracingConfig(const AwsLambdaFunctionTracingConfig& value) { SetTracingConfig(value); return *this;}

    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline AwsLambdaFunctionDetails& WithTracingConfig(AwsLambdaFunctionTracingConfig&& value) { SetTracingConfig(std::move(value)); return *this;}


    /**
     * <p>The function's networking configuration.</p>
     */
    inline const AwsLambdaFunctionVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(const AwsLambdaFunctionVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline void SetVpcConfig(AwsLambdaFunctionVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>The function's networking configuration.</p>
     */
    inline AwsLambdaFunctionDetails& WithVpcConfig(const AwsLambdaFunctionVpcConfig& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>The function's networking configuration.</p>
     */
    inline AwsLambdaFunctionDetails& WithVpcConfig(AwsLambdaFunctionVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}


    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the Lambda function.</p>
     */
    inline AwsLambdaFunctionDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const{ return m_architectures; }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline void SetArchitectures(const Aws::Vector<Aws::String>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline void SetArchitectures(Aws::Vector<Aws::String>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline AwsLambdaFunctionDetails& WithArchitectures(const Aws::Vector<Aws::String>& value) { SetArchitectures(value); return *this;}

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline AwsLambdaFunctionDetails& WithArchitectures(Aws::Vector<Aws::String>&& value) { SetArchitectures(std::move(value)); return *this;}

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline AwsLambdaFunctionDetails& AddArchitectures(const Aws::String& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline AwsLambdaFunctionDetails& AddArchitectures(Aws::String&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }

    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline AwsLambdaFunctionDetails& AddArchitectures(const char* value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }


    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline const Aws::String& GetPackageType() const{ return m_packageType; }

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline void SetPackageType(const Aws::String& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline void SetPackageType(Aws::String&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline void SetPackageType(const char* value) { m_packageTypeHasBeenSet = true; m_packageType.assign(value); }

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline AwsLambdaFunctionDetails& WithPackageType(const Aws::String& value) { SetPackageType(value); return *this;}

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline AwsLambdaFunctionDetails& WithPackageType(Aws::String&& value) { SetPackageType(std::move(value)); return *this;}

    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline AwsLambdaFunctionDetails& WithPackageType(const char* value) { SetPackageType(value); return *this;}

  private:

    AwsLambdaFunctionCode m_code;
    bool m_codeHasBeenSet = false;

    Aws::String m_codeSha256;
    bool m_codeSha256HasBeenSet = false;

    AwsLambdaFunctionDeadLetterConfig m_deadLetterConfig;
    bool m_deadLetterConfigHasBeenSet = false;

    AwsLambdaFunctionEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::String m_functionName;
    bool m_functionNameHasBeenSet = false;

    Aws::String m_handler;
    bool m_handlerHasBeenSet = false;

    Aws::String m_kmsKeyArn;
    bool m_kmsKeyArnHasBeenSet = false;

    Aws::String m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::Vector<AwsLambdaFunctionLayer> m_layers;
    bool m_layersHasBeenSet = false;

    Aws::String m_masterArn;
    bool m_masterArnHasBeenSet = false;

    int m_memorySize;
    bool m_memorySizeHasBeenSet = false;

    Aws::String m_revisionId;
    bool m_revisionIdHasBeenSet = false;

    Aws::String m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_runtime;
    bool m_runtimeHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    AwsLambdaFunctionTracingConfig m_tracingConfig;
    bool m_tracingConfigHasBeenSet = false;

    AwsLambdaFunctionVpcConfig m_vpcConfig;
    bool m_vpcConfigHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Vector<Aws::String> m_architectures;
    bool m_architecturesHasBeenSet = false;

    Aws::String m_packageType;
    bool m_packageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
