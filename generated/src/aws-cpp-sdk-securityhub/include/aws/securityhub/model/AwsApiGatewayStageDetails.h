/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsApiGatewayAccessLogSettings.h>
#include <aws/securityhub/model/AwsApiGatewayCanarySettings.h>
#include <aws/securityhub/model/AwsApiGatewayMethodSettings.h>
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
   * <p>Provides information about a version 1 Amazon API Gateway
   * stage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayStageDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayStageDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails();
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the deployment that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline AwsApiGatewayStageDetails& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline AwsApiGatewayStageDetails& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the client certificate for the stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }
    inline AwsApiGatewayStageDetails& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline AwsApiGatewayStageDetails& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const{ return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    inline void SetStageName(const Aws::String& value) { m_stageNameHasBeenSet = true; m_stageName = value; }
    inline void SetStageName(Aws::String&& value) { m_stageNameHasBeenSet = true; m_stageName = std::move(value); }
    inline void SetStageName(const char* value) { m_stageNameHasBeenSet = true; m_stageName.assign(value); }
    inline AwsApiGatewayStageDetails& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline AwsApiGatewayStageDetails& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsApiGatewayStageDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsApiGatewayStageDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a cache cluster is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const{ return m_cacheClusterEnabled; }
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline AwsApiGatewayStageDetails& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a cache cluster is enabled, the size of the cache cluster.</p>
     */
    inline const Aws::String& GetCacheClusterSize() const{ return m_cacheClusterSize; }
    inline bool CacheClusterSizeHasBeenSet() const { return m_cacheClusterSizeHasBeenSet; }
    inline void SetCacheClusterSize(const Aws::String& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = value; }
    inline void SetCacheClusterSize(Aws::String&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = std::move(value); }
    inline void SetCacheClusterSize(const char* value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize.assign(value); }
    inline AwsApiGatewayStageDetails& WithCacheClusterSize(const Aws::String& value) { SetCacheClusterSize(value); return *this;}
    inline AwsApiGatewayStageDetails& WithCacheClusterSize(Aws::String&& value) { SetCacheClusterSize(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithCacheClusterSize(const char* value) { SetCacheClusterSize(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a cache cluster is enabled, the status of the cache cluster.</p>
     */
    inline const Aws::String& GetCacheClusterStatus() const{ return m_cacheClusterStatus; }
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }
    inline void SetCacheClusterStatus(const Aws::String& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = value; }
    inline void SetCacheClusterStatus(Aws::String&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::move(value); }
    inline void SetCacheClusterStatus(const char* value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus.assign(value); }
    inline AwsApiGatewayStageDetails& WithCacheClusterStatus(const Aws::String& value) { SetCacheClusterStatus(value); return *this;}
    inline AwsApiGatewayStageDetails& WithCacheClusterStatus(Aws::String&& value) { SetCacheClusterStatus(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithCacheClusterStatus(const char* value) { SetCacheClusterStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the method settings for the stage.</p>
     */
    inline const Aws::Vector<AwsApiGatewayMethodSettings>& GetMethodSettings() const{ return m_methodSettings; }
    inline bool MethodSettingsHasBeenSet() const { return m_methodSettingsHasBeenSet; }
    inline void SetMethodSettings(const Aws::Vector<AwsApiGatewayMethodSettings>& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = value; }
    inline void SetMethodSettings(Aws::Vector<AwsApiGatewayMethodSettings>&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = std::move(value); }
    inline AwsApiGatewayStageDetails& WithMethodSettings(const Aws::Vector<AwsApiGatewayMethodSettings>& value) { SetMethodSettings(value); return *this;}
    inline AwsApiGatewayStageDetails& WithMethodSettings(Aws::Vector<AwsApiGatewayMethodSettings>&& value) { SetMethodSettings(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& AddMethodSettings(const AwsApiGatewayMethodSettings& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.push_back(value); return *this; }
    inline AwsApiGatewayStageDetails& AddMethodSettings(AwsApiGatewayMethodSettings&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the stage.</p> <p>Variable names
     * can have alphanumeric and underscore characters.</p> <p>Variable values can
     * contain the following characters:</p> <ul> <li> <p>Uppercase and lowercase
     * letters</p> </li> <li> <p>Numbers</p> </li> <li> <p>Special characters
     * -._~:/?#&amp;=,</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline AwsApiGatewayStageDetails& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline AwsApiGatewayStageDetails& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline AwsApiGatewayStageDetails& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The version of the API documentation that is associated with the stage.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const{ return m_documentationVersion; }
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }
    inline void SetDocumentationVersion(const Aws::String& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = value; }
    inline void SetDocumentationVersion(Aws::String&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::move(value); }
    inline void SetDocumentationVersion(const char* value) { m_documentationVersionHasBeenSet = true; m_documentationVersion.assign(value); }
    inline AwsApiGatewayStageDetails& WithDocumentationVersion(const Aws::String& value) { SetDocumentationVersion(value); return *this;}
    inline AwsApiGatewayStageDetails& WithDocumentationVersion(Aws::String&& value) { SetDocumentationVersion(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithDocumentationVersion(const char* value) { SetDocumentationVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for logging access for the stage.</p>
     */
    inline const AwsApiGatewayAccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    inline void SetAccessLogSettings(const AwsApiGatewayAccessLogSettings& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = value; }
    inline void SetAccessLogSettings(AwsApiGatewayAccessLogSettings&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::move(value); }
    inline AwsApiGatewayStageDetails& WithAccessLogSettings(const AwsApiGatewayAccessLogSettings& value) { SetAccessLogSettings(value); return *this;}
    inline AwsApiGatewayStageDetails& WithAccessLogSettings(AwsApiGatewayAccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about settings for canary deployment in the stage.</p>
     */
    inline const AwsApiGatewayCanarySettings& GetCanarySettings() const{ return m_canarySettings; }
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }
    inline void SetCanarySettings(const AwsApiGatewayCanarySettings& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = value; }
    inline void SetCanarySettings(AwsApiGatewayCanarySettings&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::move(value); }
    inline AwsApiGatewayStageDetails& WithCanarySettings(const AwsApiGatewayCanarySettings& value) { SetCanarySettings(value); return *this;}
    inline AwsApiGatewayStageDetails& WithCanarySettings(AwsApiGatewayCanarySettings&& value) { SetCanarySettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether active tracing with X-Ray is enabled for the stage.</p>
     */
    inline bool GetTracingEnabled() const{ return m_tracingEnabled; }
    inline bool TracingEnabledHasBeenSet() const { return m_tracingEnabledHasBeenSet; }
    inline void SetTracingEnabled(bool value) { m_tracingEnabledHasBeenSet = true; m_tracingEnabled = value; }
    inline AwsApiGatewayStageDetails& WithTracingEnabled(bool value) { SetTracingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the stage was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }
    inline AwsApiGatewayStageDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}
    inline AwsApiGatewayStageDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the stage was most recently updated.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::String& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::String&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline void SetLastUpdatedDate(const char* value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate.assign(value); }
    inline AwsApiGatewayStageDetails& WithLastUpdatedDate(const Aws::String& value) { SetLastUpdatedDate(value); return *this;}
    inline AwsApiGatewayStageDetails& WithLastUpdatedDate(Aws::String&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithLastUpdatedDate(const char* value) { SetLastUpdatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web ACL associated with the stage.</p>
     */
    inline const Aws::String& GetWebAclArn() const{ return m_webAclArn; }
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
    inline void SetWebAclArn(const Aws::String& value) { m_webAclArnHasBeenSet = true; m_webAclArn = value; }
    inline void SetWebAclArn(Aws::String&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::move(value); }
    inline void SetWebAclArn(const char* value) { m_webAclArnHasBeenSet = true; m_webAclArn.assign(value); }
    inline AwsApiGatewayStageDetails& WithWebAclArn(const Aws::String& value) { SetWebAclArn(value); return *this;}
    inline AwsApiGatewayStageDetails& WithWebAclArn(Aws::String&& value) { SetWebAclArn(std::move(value)); return *this;}
    inline AwsApiGatewayStageDetails& WithWebAclArn(const char* value) { SetWebAclArn(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_cacheClusterEnabled;
    bool m_cacheClusterEnabledHasBeenSet = false;

    Aws::String m_cacheClusterSize;
    bool m_cacheClusterSizeHasBeenSet = false;

    Aws::String m_cacheClusterStatus;
    bool m_cacheClusterStatusHasBeenSet = false;

    Aws::Vector<AwsApiGatewayMethodSettings> m_methodSettings;
    bool m_methodSettingsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;

    Aws::String m_documentationVersion;
    bool m_documentationVersionHasBeenSet = false;

    AwsApiGatewayAccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    AwsApiGatewayCanarySettings m_canarySettings;
    bool m_canarySettingsHasBeenSet = false;

    bool m_tracingEnabled;
    bool m_tracingEnabledHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_webAclArn;
    bool m_webAclArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
