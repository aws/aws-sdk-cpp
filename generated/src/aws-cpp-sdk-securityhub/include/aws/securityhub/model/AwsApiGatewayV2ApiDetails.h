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
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails();
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsApiGatewayV2ApiDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline const Aws::String& GetApiEndpoint() const{ return m_apiEndpoint; }

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline bool ApiEndpointHasBeenSet() const { return m_apiEndpointHasBeenSet; }

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline void SetApiEndpoint(const Aws::String& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = value; }

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline void SetApiEndpoint(Aws::String&& value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint = std::move(value); }

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline void SetApiEndpoint(const char* value) { m_apiEndpointHasBeenSet = true; m_apiEndpoint.assign(value); }

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiEndpoint(const Aws::String& value) { SetApiEndpoint(value); return *this;}

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiEndpoint(Aws::String&& value) { SetApiEndpoint(std::move(value)); return *this;}

    /**
     * <p>The URI of the API. </p> <p>Uses the format <code>
     * <i>&lt;api-id&gt;</i>.execute-api.<i>&lt;region&gt;</i>.amazonaws.com</code>
     * </p> <p>The stage name is typically appended to the URI to form a complete path
     * to a deployed API stage.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiEndpoint(const char* value) { SetApiEndpoint(value); return *this;}


    /**
     * <p>The identifier of the API.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The identifier of the API.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The identifier of the API.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The identifier of the API.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The identifier of the API.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The identifier of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The identifier of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline const Aws::String& GetApiKeySelectionExpression() const{ return m_apiKeySelectionExpression; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline bool ApiKeySelectionExpressionHasBeenSet() const { return m_apiKeySelectionExpressionHasBeenSet; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline void SetApiKeySelectionExpression(const Aws::String& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = value; }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline void SetApiKeySelectionExpression(Aws::String&& value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression = std::move(value); }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline void SetApiKeySelectionExpression(const char* value) { m_apiKeySelectionExpressionHasBeenSet = true; m_apiKeySelectionExpression.assign(value); }

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiKeySelectionExpression(const Aws::String& value) { SetApiKeySelectionExpression(value); return *this;}

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiKeySelectionExpression(Aws::String&& value) { SetApiKeySelectionExpression(std::move(value)); return *this;}

    /**
     * <p>An API key selection expression. Supported only for WebSocket APIs. </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithApiKeySelectionExpression(const char* value) { SetApiKeySelectionExpression(value); return *this;}


    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline const Aws::String& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(const Aws::String& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(Aws::String&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline void SetCreatedDate(const char* value) { m_createdDateHasBeenSet = true; m_createdDate.assign(value); }

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithCreatedDate(const Aws::String& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithCreatedDate(Aws::String&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>Indicates when the API was created.</p> <p>Uses the <code>date-time</code>
     * format specified in <a
     * href="https://tools.ietf.org/html/rfc3339#section-5.6">RFC 3339 section 5.6,
     * Internet Date/Time Format</a>. The value cannot contain spaces. For example,
     * <code>2020-03-22T13:22:13.933Z</code>.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithCreatedDate(const char* value) { SetCreatedDate(value); return *this;}


    /**
     * <p>A description of the API.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the API.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the API.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the API.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the API.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The version identifier for the API.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>The version identifier for the API.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version identifier for the API.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version identifier for the API.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version identifier for the API.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>The version identifier for the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>The version identifier for the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>The version identifier for the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>The name of the API.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the API.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the API.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline const Aws::String& GetProtocolType() const{ return m_protocolType; }

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline bool ProtocolTypeHasBeenSet() const { return m_protocolTypeHasBeenSet; }

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline void SetProtocolType(const Aws::String& value) { m_protocolTypeHasBeenSet = true; m_protocolType = value; }

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline void SetProtocolType(Aws::String&& value) { m_protocolTypeHasBeenSet = true; m_protocolType = std::move(value); }

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline void SetProtocolType(const char* value) { m_protocolTypeHasBeenSet = true; m_protocolType.assign(value); }

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithProtocolType(const Aws::String& value) { SetProtocolType(value); return *this;}

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithProtocolType(Aws::String&& value) { SetProtocolType(std::move(value)); return *this;}

    /**
     * <p>The API protocol for the API.</p> <p>Valid values: <code>WEBSOCKET</code> |
     * <code>HTTP</code> </p>
     */
    inline AwsApiGatewayV2ApiDetails& WithProtocolType(const char* value) { SetProtocolType(value); return *this;}


    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline const Aws::String& GetRouteSelectionExpression() const{ return m_routeSelectionExpression; }

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline bool RouteSelectionExpressionHasBeenSet() const { return m_routeSelectionExpressionHasBeenSet; }

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline void SetRouteSelectionExpression(const Aws::String& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = value; }

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline void SetRouteSelectionExpression(Aws::String&& value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression = std::move(value); }

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline void SetRouteSelectionExpression(const char* value) { m_routeSelectionExpressionHasBeenSet = true; m_routeSelectionExpression.assign(value); }

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithRouteSelectionExpression(const Aws::String& value) { SetRouteSelectionExpression(value); return *this;}

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithRouteSelectionExpression(Aws::String&& value) { SetRouteSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route selection expression for the API.</p> <p>For HTTP APIs, must be
     * <code>${request.method} ${request.path}</code>. This is the default value for
     * HTTP APIs.</p> <p>For WebSocket APIs, there is no default value.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithRouteSelectionExpression(const char* value) { SetRouteSelectionExpression(value); return *this;}


    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline const AwsCorsConfiguration& GetCorsConfiguration() const{ return m_corsConfiguration; }

    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline bool CorsConfigurationHasBeenSet() const { return m_corsConfigurationHasBeenSet; }

    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetCorsConfiguration(const AwsCorsConfiguration& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = value; }

    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline void SetCorsConfiguration(AwsCorsConfiguration&& value) { m_corsConfigurationHasBeenSet = true; m_corsConfiguration = std::move(value); }

    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithCorsConfiguration(const AwsCorsConfiguration& value) { SetCorsConfiguration(value); return *this;}

    /**
     * <p>A cross-origin resource sharing (CORS) configuration. Supported only for HTTP
     * APIs.</p>
     */
    inline AwsApiGatewayV2ApiDetails& WithCorsConfiguration(AwsCorsConfiguration&& value) { SetCorsConfiguration(std::move(value)); return *this;}

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
