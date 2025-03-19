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
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails() = default;
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2StageDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a client certificate for a stage. Supported only for
     * WebSocket API calls.</p>
     */
    inline const Aws::String& GetClientCertificateId() const { return m_clientCertificateId; }
    inline bool ClientCertificateIdHasBeenSet() const { return m_clientCertificateIdHasBeenSet; }
    template<typename ClientCertificateIdT = Aws::String>
    void SetClientCertificateId(ClientCertificateIdT&& value) { m_clientCertificateIdHasBeenSet = true; m_clientCertificateId = std::forward<ClientCertificateIdT>(value); }
    template<typename ClientCertificateIdT = Aws::String>
    AwsApiGatewayV2StageDetails& WithClientCertificateId(ClientCertificateIdT&& value) { SetClientCertificateId(std::forward<ClientCertificateIdT>(value)); return *this;}
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
    AwsApiGatewayV2StageDetails& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the stage.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsApiGatewayV2StageDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Default route settings for the stage.</p>
     */
    inline const AwsApiGatewayV2RouteSettings& GetDefaultRouteSettings() const { return m_defaultRouteSettings; }
    inline bool DefaultRouteSettingsHasBeenSet() const { return m_defaultRouteSettingsHasBeenSet; }
    template<typename DefaultRouteSettingsT = AwsApiGatewayV2RouteSettings>
    void SetDefaultRouteSettings(DefaultRouteSettingsT&& value) { m_defaultRouteSettingsHasBeenSet = true; m_defaultRouteSettings = std::forward<DefaultRouteSettingsT>(value); }
    template<typename DefaultRouteSettingsT = AwsApiGatewayV2RouteSettings>
    AwsApiGatewayV2StageDetails& WithDefaultRouteSettings(DefaultRouteSettingsT&& value) { SetDefaultRouteSettings(std::forward<DefaultRouteSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the deployment that the stage is associated with. </p>
     */
    inline const Aws::String& GetDeploymentId() const { return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    template<typename DeploymentIdT = Aws::String>
    void SetDeploymentId(DeploymentIdT&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::forward<DeploymentIdT>(value); }
    template<typename DeploymentIdT = Aws::String>
    AwsApiGatewayV2StageDetails& WithDeploymentId(DeploymentIdT&& value) { SetDeploymentId(std::forward<DeploymentIdT>(value)); return *this;}
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
    AwsApiGatewayV2StageDetails& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route settings for the stage.</p>
     */
    inline const AwsApiGatewayV2RouteSettings& GetRouteSettings() const { return m_routeSettings; }
    inline bool RouteSettingsHasBeenSet() const { return m_routeSettingsHasBeenSet; }
    template<typename RouteSettingsT = AwsApiGatewayV2RouteSettings>
    void SetRouteSettings(RouteSettingsT&& value) { m_routeSettingsHasBeenSet = true; m_routeSettings = std::forward<RouteSettingsT>(value); }
    template<typename RouteSettingsT = AwsApiGatewayV2RouteSettings>
    AwsApiGatewayV2StageDetails& WithRouteSettings(RouteSettingsT&& value) { SetRouteSettings(std::forward<RouteSettingsT>(value)); return *this;}
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
    AwsApiGatewayV2StageDetails& WithStageName(StageNameT&& value) { SetStageName(std::forward<StageNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that defines the stage variables for the stage.</p> <p>Variable names
     * can have alphanumeric and underscore characters.</p> <p>Variable values can
     * contain the following characters:</p> <ul> <li> <p>Uppercase and lowercase
     * letters</p> </li> <li> <p>Numbers</p> </li> <li> <p>Special characters
     * -._~:/?#&amp;=,</p> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const { return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetStageVariables(StageVariablesT&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::forward<StageVariablesT>(value); }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    AwsApiGatewayV2StageDetails& WithStageVariables(StageVariablesT&& value) { SetStageVariables(std::forward<StageVariablesT>(value)); return *this;}
    template<typename StageVariablesKeyT = Aws::String, typename StageVariablesValueT = Aws::String>
    AwsApiGatewayV2StageDetails& AddStageVariables(StageVariablesKeyT&& key, StageVariablesValueT&& value) {
      m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::forward<StageVariablesKeyT>(key), std::forward<StageVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Information about settings for logging access for the stage.</p>
     */
    inline const AwsApiGatewayAccessLogSettings& GetAccessLogSettings() const { return m_accessLogSettings; }
    inline bool AccessLogSettingsHasBeenSet() const { return m_accessLogSettingsHasBeenSet; }
    template<typename AccessLogSettingsT = AwsApiGatewayAccessLogSettings>
    void SetAccessLogSettings(AccessLogSettingsT&& value) { m_accessLogSettingsHasBeenSet = true; m_accessLogSettings = std::forward<AccessLogSettingsT>(value); }
    template<typename AccessLogSettingsT = AwsApiGatewayAccessLogSettings>
    AwsApiGatewayV2StageDetails& WithAccessLogSettings(AccessLogSettingsT&& value) { SetAccessLogSettings(std::forward<AccessLogSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether updates to an API automatically trigger a new
     * deployment.</p>
     */
    inline bool GetAutoDeploy() const { return m_autoDeploy; }
    inline bool AutoDeployHasBeenSet() const { return m_autoDeployHasBeenSet; }
    inline void SetAutoDeploy(bool value) { m_autoDeployHasBeenSet = true; m_autoDeploy = value; }
    inline AwsApiGatewayV2StageDetails& WithAutoDeploy(bool value) { SetAutoDeploy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last deployment of a stage. Supported only if the stage has
     * automatic deployment enabled.</p>
     */
    inline const Aws::String& GetLastDeploymentStatusMessage() const { return m_lastDeploymentStatusMessage; }
    inline bool LastDeploymentStatusMessageHasBeenSet() const { return m_lastDeploymentStatusMessageHasBeenSet; }
    template<typename LastDeploymentStatusMessageT = Aws::String>
    void SetLastDeploymentStatusMessage(LastDeploymentStatusMessageT&& value) { m_lastDeploymentStatusMessageHasBeenSet = true; m_lastDeploymentStatusMessage = std::forward<LastDeploymentStatusMessageT>(value); }
    template<typename LastDeploymentStatusMessageT = Aws::String>
    AwsApiGatewayV2StageDetails& WithLastDeploymentStatusMessage(LastDeploymentStatusMessageT&& value) { SetLastDeploymentStatusMessage(std::forward<LastDeploymentStatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the stage is managed by API Gateway.</p>
     */
    inline bool GetApiGatewayManaged() const { return m_apiGatewayManaged; }
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

    bool m_autoDeploy{false};
    bool m_autoDeployHasBeenSet = false;

    Aws::String m_lastDeploymentStatusMessage;
    bool m_lastDeploymentStatusMessageHasBeenSet = false;

    bool m_apiGatewayManaged{false};
    bool m_apiGatewayManagedHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
