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
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails() = default;
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayStageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the deployment that the stage points to.</p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    AwsApiGatewayStageDetails& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the client certificate for the stage.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    AwsApiGatewayStageDetails& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the stage.</p>
     */
    inline const Aws::String& GetStageName() const { return m_stageName; }
    inline bool StageNameHasBeenSet() const { return m_stageNameHasBeenSet; }
    template<typename StageNameT = Aws::String>
    void SetStageName(StageNameT&& value) { m_stageNameHasBeenSet = true; m_stageName = std::forward<StageNameT>(value); }
    template<typename StageNameT = Aws::String>
    AwsApiGatewayStageDetails& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsApiGatewayStageDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a cache cluster is enabled for the stage.</p>
     */
    inline bool GetCacheClusterEnabled() const { return m_cacheClusterEnabled; }
    inline bool CacheClusterEnabledHasBeenSet() const { return m_cacheClusterEnabledHasBeenSet; }
    inline void SetCacheClusterEnabled(bool value) { m_cacheClusterEnabledHasBeenSet = true; m_cacheClusterEnabled = value; }
    inline AwsApiGatewayStageDetails& WithCacheClusterEnabled(bool value) { SetCacheClusterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a cache cluster is enabled, the size of the cache cluster.</p>
     */
    inline const Aws::String& GetCacheClusterSize() const { return m_cacheClusterSize; }
    inline bool CacheClusterSizeHasBeenSet() const { return m_cacheClusterSizeHasBeenSet; }
    template<typename CacheClusterSizeT = Aws::String>
    void SetCacheClusterSize(CacheClusterSizeT&& value) { m_cacheClusterSizeHasBeenSet = true; m_cacheClusterSize = std::forward<CacheClusterSizeT>(value); }
    template<typename CacheClusterSizeT = Aws::String>
    AwsApiGatewayStageDetails& WithCacheClusterSize(CacheClusterSizeT&& value) { SetCacheClusterSize(std::forward<CacheClusterSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a cache cluster is enabled, the status of the cache cluster.</p>
     */
    inline const Aws::String& GetCacheClusterStatus() const { return m_cacheClusterStatus; }
    inline bool CacheClusterStatusHasBeenSet() const { return m_cacheClusterStatusHasBeenSet; }
    template<typename CacheClusterStatusT = Aws::String>
    void SetCacheClusterStatus(CacheClusterStatusT&& value) { m_cacheClusterStatusHasBeenSet = true; m_cacheClusterStatus = std::forward<CacheClusterStatusT>(value); }
    template<typename CacheClusterStatusT = Aws::String>
    AwsApiGatewayStageDetails& WithCacheClusterStatus(CacheClusterStatusT&& value) { SetCacheClusterStatus(std::forward<CacheClusterStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines the method settings for the stage.</p>
     */
    inline const Aws::Vector<AwsApiGatewayMethodSettings>& GetMethodSettings() const { return m_methodSettings; }
    inline bool MethodSettingsHasBeenSet() const { return m_methodSettingsHasBeenSet; }
    template<typename MethodSettingsT = Aws::Vector<AwsApiGatewayMethodSettings>>
    void SetMethodSettings(MethodSettingsT&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings = std::forward<MethodSettingsT>(value); }
    template<typename MethodSettingsT = Aws::Vector<AwsApiGatewayMethodSettings>>
    AwsApiGatewayStageDetails& WithMethodSettings(MethodSettingsT&& value) { SetMethodSettings(std::forward<MethodSettingsT>(value)); return *this;}
    template<typename MethodSettingsT = AwsApiGatewayMethodSettings>
    AwsApiGatewayStageDetails& AddMethodSettings(MethodSettingsT&& value) { m_methodSettingsHasBeenSet = true; m_methodSettings.emplace_back(std::forward<MethodSettingsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the stage.</p> <p>Variable names
     * can have alphanumeric and underscore characters.</p> <p>Variable values can
     * contain the following characters:</p> <ul> <li> <p>Uppercase and lowercase
     * letters</p> </li> <li> <p>Numbers</p> </li> <li> <p>Special characters
     * -._~:/?#&amp;=,</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    AwsApiGatewayStageDetails& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    AwsApiGatewayStageDetails& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The version of the API documentation that is associated with the stage.</p>
     */
    inline const Aws::String& GetDocumentationVersion() const { return m_documentationVersion; }
    inline bool DocumentationVersionHasBeenSet() const { return m_documentationVersionHasBeenSet; }
    template<typename DocumentationVersionT = Aws::String>
    void SetDocumentationVersion(DocumentationVersionT&& value) { m_documentationVersionHasBeenSet = true; m_documentationVersion = std::forward<DocumentationVersionT>(value); }
    template<typename DocumentationVersionT = Aws::String>
    AwsApiGatewayStageDetails& WithDocumentationVersion(DocumentationVersionT&& value) { SetDocumentationVersion(std::forward<DocumentationVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Settings for logging access for the stage.</p>
     */
    inline const AwsApiGatewayAccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    template<typename AccessLogSettingsT = AwsApiGatewayAccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AwsApiGatewayAccessLogSettings>
    AwsApiGatewayStageDetails& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about settings for canary deployment in the stage.</p>
     */
    inline const AwsApiGatewayCanarySettings& GetCanarySettings() const { return m_canarySettings; }
    inline bool CanarySettingsHasBeenSet() const { return m_canarySettingsHasBeenSet; }
    template<typename CanarySettingsT = AwsApiGatewayCanarySettings>
    void SetCanarySettings(CanarySettingsT&& value) { m_canarySettingsHasBeenSet = true; m_canarySettings = std::forward<CanarySettingsT>(value); }
    template<typename CanarySettingsT = AwsApiGatewayCanarySettings>
    AwsApiGatewayStageDetails& WithCanarySettings(CanarySettingsT&& value) { SetCanarySettings(std::forward<CanarySettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether active tracing with X-Ray is enabled for the stage.</p>
     */
    inline bool GetTracingEnabled() const { return m_tracingEnabled; }
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
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    AwsApiGatewayStageDetails& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the stage was most recently updated.</p> <p>For more
     * information about the validation and formatting of timestamp fields in Security
     * Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::String>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::String>
    AwsApiGatewayStageDetails& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the web ACL associated with the stage.</p>
     */
    inline const Aws::String& GetWebAclArn() const { return m_webAclArn; }
    inline bool WebAclArnHasBeenSet() const { return m_webAclArnHasBeenSet; }
    template<typename WebAclArnT = Aws::String>
    void SetWebAclArn(WebAclArnT&& value) { m_webAclArnHasBeenSet = true; m_webAclArn = std::forward<WebAclArnT>(value); }
    template<typename WebAclArnT = Aws::String>
    AwsApiGatewayStageDetails& WithWebAclArn(WebAclArnT&& value) { SetWebAclArn(std::forward<WebAclArnT>(value)); return *this;}
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

    bool m_cacheClusterEnabled{false};
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

    bool m_tracingEnabled{false};
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
