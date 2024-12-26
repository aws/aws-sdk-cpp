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


    ///@{
    /**
     * <p>An <code>AwsLambdaFunctionCode</code> object.</p>
     */
    inline const AwsLambdaFunctionCode& GetCode() const{ return m_code; }
    inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
    inline void SetCode(const AwsLambdaFunctionCode& value) { m_codeHasBeenSet = true; m_code = value; }
    inline void SetCode(AwsLambdaFunctionCode&& value) { m_codeHasBeenSet = true; m_code = std::move(value); }
    inline AwsLambdaFunctionDetails& WithCode(const AwsLambdaFunctionCode& value) { SetCode(value); return *this;}
    inline AwsLambdaFunctionDetails& WithCode(AwsLambdaFunctionCode&& value) { SetCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SHA256 hash of the function's deployment package.</p>
     */
    inline const Aws::String& GetCodeSha256() const{ return m_codeSha256; }
    inline bool CodeSha256HasBeenSet() const { return m_codeSha256HasBeenSet; }
    inline void SetCodeSha256(const Aws::String& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = value; }
    inline void SetCodeSha256(Aws::String&& value) { m_codeSha256HasBeenSet = true; m_codeSha256 = std::move(value); }
    inline void SetCodeSha256(const char* value) { m_codeSha256HasBeenSet = true; m_codeSha256.assign(value); }
    inline AwsLambdaFunctionDetails& WithCodeSha256(const Aws::String& value) { SetCodeSha256(value); return *this;}
    inline AwsLambdaFunctionDetails& WithCodeSha256(Aws::String&& value) { SetCodeSha256(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithCodeSha256(const char* value) { SetCodeSha256(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's dead letter queue.</p>
     */
    inline const AwsLambdaFunctionDeadLetterConfig& GetDeadLetterConfig() const{ return m_deadLetterConfig; }
    inline bool DeadLetterConfigHasBeenSet() const { return m_deadLetterConfigHasBeenSet; }
    inline void SetDeadLetterConfig(const AwsLambdaFunctionDeadLetterConfig& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = value; }
    inline void SetDeadLetterConfig(AwsLambdaFunctionDeadLetterConfig&& value) { m_deadLetterConfigHasBeenSet = true; m_deadLetterConfig = std::move(value); }
    inline AwsLambdaFunctionDetails& WithDeadLetterConfig(const AwsLambdaFunctionDeadLetterConfig& value) { SetDeadLetterConfig(value); return *this;}
    inline AwsLambdaFunctionDetails& WithDeadLetterConfig(AwsLambdaFunctionDeadLetterConfig&& value) { SetDeadLetterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's environment variables.</p>
     */
    inline const AwsLambdaFunctionEnvironment& GetEnvironment() const{ return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(const AwsLambdaFunctionEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline void SetEnvironment(AwsLambdaFunctionEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }
    inline AwsLambdaFunctionDetails& WithEnvironment(const AwsLambdaFunctionEnvironment& value) { SetEnvironment(value); return *this;}
    inline AwsLambdaFunctionDetails& WithEnvironment(AwsLambdaFunctionEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the function.</p>
     */
    inline const Aws::String& GetFunctionName() const{ return m_functionName; }
    inline bool FunctionNameHasBeenSet() const { return m_functionNameHasBeenSet; }
    inline void SetFunctionName(const Aws::String& value) { m_functionNameHasBeenSet = true; m_functionName = value; }
    inline void SetFunctionName(Aws::String&& value) { m_functionNameHasBeenSet = true; m_functionName = std::move(value); }
    inline void SetFunctionName(const char* value) { m_functionNameHasBeenSet = true; m_functionName.assign(value); }
    inline AwsLambdaFunctionDetails& WithFunctionName(const Aws::String& value) { SetFunctionName(value); return *this;}
    inline AwsLambdaFunctionDetails& WithFunctionName(Aws::String&& value) { SetFunctionName(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithFunctionName(const char* value) { SetFunctionName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function that Lambda calls to begin executing your function.</p>
     */
    inline const Aws::String& GetHandler() const{ return m_handler; }
    inline bool HandlerHasBeenSet() const { return m_handlerHasBeenSet; }
    inline void SetHandler(const Aws::String& value) { m_handlerHasBeenSet = true; m_handler = value; }
    inline void SetHandler(Aws::String&& value) { m_handlerHasBeenSet = true; m_handler = std::move(value); }
    inline void SetHandler(const char* value) { m_handlerHasBeenSet = true; m_handler.assign(value); }
    inline AwsLambdaFunctionDetails& WithHandler(const Aws::String& value) { SetHandler(value); return *this;}
    inline AwsLambdaFunctionDetails& WithHandler(Aws::String&& value) { SetHandler(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithHandler(const char* value) { SetHandler(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The KMS key that is used to encrypt the function's environment variables.
     * This key is only returned if you've configured a customer managed customer
     * managed key.</p>
     */
    inline const Aws::String& GetKmsKeyArn() const{ return m_kmsKeyArn; }
    inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
    inline void SetKmsKeyArn(const Aws::String& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = value; }
    inline void SetKmsKeyArn(Aws::String&& value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn = std::move(value); }
    inline void SetKmsKeyArn(const char* value) { m_kmsKeyArnHasBeenSet = true; m_kmsKeyArn.assign(value); }
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(const Aws::String& value) { SetKmsKeyArn(value); return *this;}
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(Aws::String&& value) { SetKmsKeyArn(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithKmsKeyArn(const char* value) { SetKmsKeyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the function was last updated.</p> <p>For more information
     * about the validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::String& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::String&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline void SetLastModified(const char* value) { m_lastModifiedHasBeenSet = true; m_lastModified.assign(value); }
    inline AwsLambdaFunctionDetails& WithLastModified(const Aws::String& value) { SetLastModified(value); return *this;}
    inline AwsLambdaFunctionDetails& WithLastModified(Aws::String&& value) { SetLastModified(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithLastModified(const char* value) { SetLastModified(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's layers.</p>
     */
    inline const Aws::Vector<AwsLambdaFunctionLayer>& GetLayers() const{ return m_layers; }
    inline bool LayersHasBeenSet() const { return m_layersHasBeenSet; }
    inline void SetLayers(const Aws::Vector<AwsLambdaFunctionLayer>& value) { m_layersHasBeenSet = true; m_layers = value; }
    inline void SetLayers(Aws::Vector<AwsLambdaFunctionLayer>&& value) { m_layersHasBeenSet = true; m_layers = std::move(value); }
    inline AwsLambdaFunctionDetails& WithLayers(const Aws::Vector<AwsLambdaFunctionLayer>& value) { SetLayers(value); return *this;}
    inline AwsLambdaFunctionDetails& WithLayers(Aws::Vector<AwsLambdaFunctionLayer>&& value) { SetLayers(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& AddLayers(const AwsLambdaFunctionLayer& value) { m_layersHasBeenSet = true; m_layers.push_back(value); return *this; }
    inline AwsLambdaFunctionDetails& AddLayers(AwsLambdaFunctionLayer&& value) { m_layersHasBeenSet = true; m_layers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>For Lambda@Edge functions, the ARN of the master function.</p>
     */
    inline const Aws::String& GetMasterArn() const{ return m_masterArn; }
    inline bool MasterArnHasBeenSet() const { return m_masterArnHasBeenSet; }
    inline void SetMasterArn(const Aws::String& value) { m_masterArnHasBeenSet = true; m_masterArn = value; }
    inline void SetMasterArn(Aws::String&& value) { m_masterArnHasBeenSet = true; m_masterArn = std::move(value); }
    inline void SetMasterArn(const char* value) { m_masterArnHasBeenSet = true; m_masterArn.assign(value); }
    inline AwsLambdaFunctionDetails& WithMasterArn(const Aws::String& value) { SetMasterArn(value); return *this;}
    inline AwsLambdaFunctionDetails& WithMasterArn(Aws::String&& value) { SetMasterArn(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithMasterArn(const char* value) { SetMasterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The memory that is allocated to the function.</p>
     */
    inline int GetMemorySize() const{ return m_memorySize; }
    inline bool MemorySizeHasBeenSet() const { return m_memorySizeHasBeenSet; }
    inline void SetMemorySize(int value) { m_memorySizeHasBeenSet = true; m_memorySize = value; }
    inline AwsLambdaFunctionDetails& WithMemorySize(int value) { SetMemorySize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The latest updated revision of the function or alias.</p>
     */
    inline const Aws::String& GetRevisionId() const{ return m_revisionId; }
    inline bool RevisionIdHasBeenSet() const { return m_revisionIdHasBeenSet; }
    inline void SetRevisionId(const Aws::String& value) { m_revisionIdHasBeenSet = true; m_revisionId = value; }
    inline void SetRevisionId(Aws::String&& value) { m_revisionIdHasBeenSet = true; m_revisionId = std::move(value); }
    inline void SetRevisionId(const char* value) { m_revisionIdHasBeenSet = true; m_revisionId.assign(value); }
    inline AwsLambdaFunctionDetails& WithRevisionId(const Aws::String& value) { SetRevisionId(value); return *this;}
    inline AwsLambdaFunctionDetails& WithRevisionId(Aws::String&& value) { SetRevisionId(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithRevisionId(const char* value) { SetRevisionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's execution role.</p>
     */
    inline const Aws::String& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const Aws::String& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(Aws::String&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline void SetRole(const char* value) { m_roleHasBeenSet = true; m_role.assign(value); }
    inline AwsLambdaFunctionDetails& WithRole(const Aws::String& value) { SetRole(value); return *this;}
    inline AwsLambdaFunctionDetails& WithRole(Aws::String&& value) { SetRole(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithRole(const char* value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The runtime environment for the Lambda function.</p>
     */
    inline const Aws::String& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Aws::String& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Aws::String&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline void SetRuntime(const char* value) { m_runtimeHasBeenSet = true; m_runtime.assign(value); }
    inline AwsLambdaFunctionDetails& WithRuntime(const Aws::String& value) { SetRuntime(value); return *this;}
    inline AwsLambdaFunctionDetails& WithRuntime(Aws::String&& value) { SetRuntime(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithRuntime(const char* value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time that Lambda allows a function to run before stopping
     * it.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline AwsLambdaFunctionDetails& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's X-Ray tracing configuration.</p>
     */
    inline const AwsLambdaFunctionTracingConfig& GetTracingConfig() const{ return m_tracingConfig; }
    inline bool TracingConfigHasBeenSet() const { return m_tracingConfigHasBeenSet; }
    inline void SetTracingConfig(const AwsLambdaFunctionTracingConfig& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = value; }
    inline void SetTracingConfig(AwsLambdaFunctionTracingConfig&& value) { m_tracingConfigHasBeenSet = true; m_tracingConfig = std::move(value); }
    inline AwsLambdaFunctionDetails& WithTracingConfig(const AwsLambdaFunctionTracingConfig& value) { SetTracingConfig(value); return *this;}
    inline AwsLambdaFunctionDetails& WithTracingConfig(AwsLambdaFunctionTracingConfig&& value) { SetTracingConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The function's networking configuration.</p>
     */
    inline const AwsLambdaFunctionVpcConfig& GetVpcConfig() const{ return m_vpcConfig; }
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }
    inline void SetVpcConfig(const AwsLambdaFunctionVpcConfig& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }
    inline void SetVpcConfig(AwsLambdaFunctionVpcConfig&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }
    inline AwsLambdaFunctionDetails& WithVpcConfig(const AwsLambdaFunctionVpcConfig& value) { SetVpcConfig(value); return *this;}
    inline AwsLambdaFunctionDetails& WithVpcConfig(AwsLambdaFunctionVpcConfig&& value) { SetVpcConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the Lambda function.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline AwsLambdaFunctionDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline AwsLambdaFunctionDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instruction set architecture that the function uses. Valid values are
     * <code>x86_64</code> or <code>arm64</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArchitectures() const{ return m_architectures; }
    inline bool ArchitecturesHasBeenSet() const { return m_architecturesHasBeenSet; }
    inline void SetArchitectures(const Aws::Vector<Aws::String>& value) { m_architecturesHasBeenSet = true; m_architectures = value; }
    inline void SetArchitectures(Aws::Vector<Aws::String>&& value) { m_architecturesHasBeenSet = true; m_architectures = std::move(value); }
    inline AwsLambdaFunctionDetails& WithArchitectures(const Aws::Vector<Aws::String>& value) { SetArchitectures(value); return *this;}
    inline AwsLambdaFunctionDetails& WithArchitectures(Aws::Vector<Aws::String>&& value) { SetArchitectures(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& AddArchitectures(const Aws::String& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    inline AwsLambdaFunctionDetails& AddArchitectures(Aws::String&& value) { m_architecturesHasBeenSet = true; m_architectures.push_back(std::move(value)); return *this; }
    inline AwsLambdaFunctionDetails& AddArchitectures(const char* value) { m_architecturesHasBeenSet = true; m_architectures.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of deployment package that's used to deploy the function code to
     * Lambda. Set to <code>Image</code> for a container image and <code>Zip</code> for
     * a .zip file archive. </p>
     */
    inline const Aws::String& GetPackageType() const{ return m_packageType; }
    inline bool PackageTypeHasBeenSet() const { return m_packageTypeHasBeenSet; }
    inline void SetPackageType(const Aws::String& value) { m_packageTypeHasBeenSet = true; m_packageType = value; }
    inline void SetPackageType(Aws::String&& value) { m_packageTypeHasBeenSet = true; m_packageType = std::move(value); }
    inline void SetPackageType(const char* value) { m_packageTypeHasBeenSet = true; m_packageType.assign(value); }
    inline AwsLambdaFunctionDetails& WithPackageType(const Aws::String& value) { SetPackageType(value); return *this;}
    inline AwsLambdaFunctionDetails& WithPackageType(Aws::String&& value) { SetPackageType(std::move(value)); return *this;}
    inline AwsLambdaFunctionDetails& WithPackageType(const char* value) { SetPackageType(value); return *this;}
    ///@}
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
