/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsApiGatewayV2RouteSettings.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsApiGatewayAccessLogSettings.h>
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
   * <p>Contains information about a version 2 stage for Amazon API
   * Gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayV2StageDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayV2StageDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails();
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a client certificate for a stage. Supported only for
     * WebSocket API calls.</p>
     */
    inline const Aws::String& GetClientCertificateId() const{ return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    inline void SetClientCertificateId(const Aws::String& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = value; }
    inline void SetClientCertificateId(Aws::String&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::move(value); }
    inline void SetClientCertificateId(const char* value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId.assign(value); }
    inline AwsApiGatewayV2StageDetails& WithClientCertificateId(const Aws::String& value) { SetClientCertificateId(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithClientCertificateId(Aws::String&& value) { SetClientCertificateId(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithClientCertificateId(const char* value) { SetClientCertificateId(value); return *this;}
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
    inline AwsApiGatewayV2StageDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline AwsApiGatewayV2StageDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default route settings for the stage.</p>
     */
    inline const AwsApiGatewayV2RouteSettings& GetDefaultRouteSettings() const{ return m_defaultRouteSettings; }
    inline bool DefaultRouteSettingsHasBeenSet() const { return m_defaultRouteSettingsHasBeenSet; }
    inline void SetDefaultRouteSettings(const AwsApiGatewayV2RouteSettings& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = value; }
    inline void SetDefaultRouteSettings(AwsApiGatewayV2RouteSettings&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::move(value); }
    inline AwsApiGatewayV2StageDetails& WithDefaultRouteSettings(const AwsApiGatewayV2RouteSettings& value) { SetDefaultRouteSettings(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithDefaultRouteSettings(AwsApiGatewayV2RouteSettings&& value) { SetDefaultRouteSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the deployment that the stage is associated with. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline AwsApiGatewayV2StageDetails& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
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
    inline AwsApiGatewayV2StageDetails& WithLastUpdatedDate(const Aws::String& value) { SetLastUpdatedDate(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithLastUpdatedDate(Aws::String&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithLastUpdatedDate(const char* value) { SetLastUpdatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route settings for the stage.</p>
     */
    inline const AwsApiGatewayV2RouteSettings& GetRouteSettings() const{ return m_routeSettings; }
    inline bool RouteSettingsHasBeenSet() const { return m_routeSettingsHasBeenSet; }
    inline void SetRouteSettings(const AwsApiGatewayV2RouteSettings& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = value; }
    inline void SetRouteSettings(AwsApiGatewayV2RouteSettings&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::move(value); }
    inline AwsApiGatewayV2StageDetails& WithRouteSettings(const AwsApiGatewayV2RouteSettings& value) { SetRouteSettings(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithRouteSettings(AwsApiGatewayV2RouteSettings&& value) { SetRouteSettings(std::move(value)); return *this;}
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
    inline AwsApiGatewayV2StageDetails& WithStageName(const Aws::String& value) { SetStageName(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithStageName(Aws::String&& value) { SetStageName(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithStageName(const char* value) { SetStageName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the stage.</p> <p>Variable names
     * can have alphanumeric and underscore characters.</p> <p>Variable values can
     * contain the following characters:</p> <ul> <li> <p>Uppercase and lowercase
     * letters</p> </li> <li> <p>Numbers</p> </li> <li> <p>Special characters
     * -._~:/?#&amp;=,</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::move(value); }
    inline AwsApiGatewayV2StageDetails& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }
    inline AwsApiGatewayV2StageDetails& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about settings for logging access for the stage.</p>
     */
    inline const AwsApiGatewayAccessLogSettings& GetAccessLogSettings() const{ return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    inline void SetAccessLogSettings(const AwsApiGatewayAccessLogSettings& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = value; }
    inline void SetAccessLogSettings(AwsApiGatewayAccessLogSettings&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::move(value); }
    inline AwsApiGatewayV2StageDetails& WithAccessLogSettings(const AwsApiGatewayAccessLogSettings& value) { SetAccessLogSettings(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithAccessLogSettings(AwsApiGatewayAccessLogSettings&& value) { SetAccessLogSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether updates to an API automatically trigger a new
     * deployment.</p>
     */
    inline bool GetAutoDeploy() const{ return m_autoDeploy; }
    inline bool AutoDeployHasBeenSet() const { return m_autoDeployHasBeenSet; }
    inline void SetAutoDeploy(bool value) { m_autoDeployHasBeenSet = true; m_autoDeploy = value; }
    inline AwsApiGatewayV2StageDetails& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last deployment of a stage. Supported only if the stage has
     * automatic deployment enabled.</p>
     */
    inline const Aws::String& GetLastDeploymentStatusMessage() const{ return m_lastDeploymentStatusMessage; }
    inline bool LastDeploymentStatusMessageHasBeenSet() const { return m_lastDeploymentStatusMessageHasBeenSet; }
    inline void SetLastDeploymentStatusMessage(const Aws::String& value) { m_lastDeploymentStatusMessageHasBeenSet = true; m_lastDeploymentStatusMessage = value; }
    inline void SetLastDeploymentStatusMessage(Aws::String&& value) { m_lastDeploymentStatusMessageHasBeenSet = true; m_lastDeploymentStatusMessage = std::move(value); }
    inline void SetLastDeploymentStatusMessage(const char* value) { m_lastDeploymentStatusMessageHasBeenSet = true; m_lastDeploymentStatusMessage.assign(value); }
    inline AwsApiGatewayV2StageDetails& WithLastDeploymentStatusMessage(const Aws::String& value) { SetLastDeploymentStatusMessage(value); return *this;}
    inline AwsApiGatewayV2StageDetails& WithLastDeploymentStatusMessage(Aws::String&& value) { SetLastDeploymentStatusMessage(std::move(value)); return *this;}
    inline AwsApiGatewayV2StageDetails& WithLastDeploymentStatusMessage(const char* value) { SetLastDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the stage is managed by API Gateway.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }
    inline bool ApiGatewayManagedHasBeenSet() const { return m_apiGatewayManagedHasBeenSet; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }
    inline AwsApiGatewayV2StageDetails& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}
  private:

    Aws::String m_clientCertificateId;
    bool m_clientCertificateIdHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    AwsApiGatewayV2RouteSettings m_defaultRouteSettings;
    bool m_defaultRouteSettingsHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::String m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    AwsApiGatewayV2RouteSettings m_routeSettings;
    bool m_routeSettingsHasBeenSet = false;

    Aws::String m_stageName;
    bool m_stageNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet = false;

    AwsApiGatewayAccessLogSettings m_accessLogSettings;
    bool m_accessLogSettingsHasBeenSet = false;

    bool m_autoDeploy;
    bool m_autoDeployHasBeenSet = false;

    Aws::String m_lastDeploymentStatusMessage;
    bool m_lastDeploymentStatusMessageHasBeenSet = false;

    bool m_apiGatewayManaged;
    bool m_apiGatewayManagedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
