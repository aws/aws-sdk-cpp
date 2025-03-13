/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsCorsConfiguration.h>
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
   * <p>Contains information about a version 2 API in Amazon API
   * Gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsApiGatewayV2ApiDetails">AWS
   * API Reference</a></p>
   */
  class AwsApiGatewayV2ApiDetails
  {
  public:
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails() = default;
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline const Aws::String& GetApiEndpoint() const { return m_apiEndpoint; }
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }
    template<typename ApiEndpointT = Aws::String>
    void SetApiEndpoint(ApiEndpointT&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::forward<ApiEndpointT>(value); }
    template<typename ApiEndpointT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithApiEndpoint(ApiEndpointT&& value) { SetApiEndpoint(std::forward<ApiEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the API.</p>
     */
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const { return m_apiKeySelectionExpression; }
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }
    template<typename ApiKeySelectionExpressionT = Aws::String>
    void SetApiKeySelectionExpression(ApiKeySelectionExpressionT&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::forward<ApiKeySelectionExpressionT>(value); }
    template<typename ApiKeySelectionExpressionT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithApiKeySelectionExpression(ApiKeySelectionExpressionT&& value) { SetApiKeySelectionExpression(std::forward<ApiKeySelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the API was created.</p> <p>For more information about the
     * validation and formatting of timestamp fields in Security Hub, see <a
     * href="https://docs.aws.amazon.com/securityhub/1.0/APIReference/Welcome.html#timestamps">Timestamps</a>.</p>
     */
    inline const Aws::String& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::String>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the API.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline const Aws::String& GetProtocolType() const { return m_protocolType; }
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }
    template<typename ProtocolTypeT = Aws::String>
    void SetProtocolType(ProtocolTypeT&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::forward<ProtocolTypeT>(value); }
    template<typename ProtocolTypeT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithProtocolType(ProtocolTypeT&& value) { SetProtocolType(std::forward<ProtocolTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const { return m_routeSelectionExpression; }
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }
    template<typename RouteSelectionExpressionT = Aws::String>
    void SetRouteSelectionExpression(RouteSelectionExpressionT&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::forward<RouteSelectionExpressionT>(value); }
    template<typename RouteSelectionExpressionT = Aws::String>
    AwsApiGatewayV2ApiDetails& WithRouteSelectionExpression(RouteSelectionExpressionT&& value) { SetRouteSelectionExpression(std::forward<RouteSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline const AwsCorsConfiguration& GetCorsConfiguration() const { return m_corsConfiguration; }
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }
    template<typename CorsConfigurationT = AwsCorsConfiguration>
    void SetCorsConfiguration(CorsConfigurationT&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::forward<CorsConfigurationT>(value); }
    template<typename CorsConfigurationT = AwsCorsConfiguration>
    AwsApiGatewayV2ApiDetails& WithCorsConfiguration(CorsConfigurationT&& value) { SetCorsConfiguration(std::forward<CorsConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_apiEndpoint;
    bool m_apiEndpointHasBeenSet = false;

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_apiKeySelectionExpression;
    bool m_apiKeySelectionExpressionHasBeenSet = false;

    Aws::String m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_protocolType;
    bool m_protocolTypeHasBeenSet = false;

    Aws::String m_routeSelectionExpression;
    bool m_routeSelectionExpressionHasBeenSet = false;

    AwsCorsConfiguration m_corsConfiguration;
    bool m_corsConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
