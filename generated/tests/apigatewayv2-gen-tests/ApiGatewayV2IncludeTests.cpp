/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/apigatewayv2/ApiGatewayV2Client.h>
#include <aws/apigatewayv2/ApiGatewayV2EndpointProvider.h>
#include <aws/apigatewayv2/ApiGatewayV2EndpointRules.h>
#include <aws/apigatewayv2/ApiGatewayV2ErrorMarshaller.h>
#include <aws/apigatewayv2/ApiGatewayV2Errors.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/apigatewayv2/ApiGatewayV2ServiceClientModel.h>
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/AccessLogSettings.h>
#include <aws/apigatewayv2/model/Api.h>
#include <aws/apigatewayv2/model/ApiMapping.h>
#include <aws/apigatewayv2/model/AuthorizationType.h>
#include <aws/apigatewayv2/model/Authorizer.h>
#include <aws/apigatewayv2/model/AuthorizerType.h>
#include <aws/apigatewayv2/model/ConnectionType.h>
#include <aws/apigatewayv2/model/ContentHandlingStrategy.h>
#include <aws/apigatewayv2/model/Cors.h>
#include <aws/apigatewayv2/model/CreateApiMappingRequest.h>
#include <aws/apigatewayv2/model/CreateApiMappingResult.h>
#include <aws/apigatewayv2/model/CreateApiRequest.h>
#include <aws/apigatewayv2/model/CreateApiResult.h>
#include <aws/apigatewayv2/model/CreateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/CreateAuthorizerResult.h>
#include <aws/apigatewayv2/model/CreateDeploymentRequest.h>
#include <aws/apigatewayv2/model/CreateDeploymentResult.h>
#include <aws/apigatewayv2/model/CreateDomainNameRequest.h>
#include <aws/apigatewayv2/model/CreateDomainNameResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/CreateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/CreateIntegrationResult.h>
#include <aws/apigatewayv2/model/CreateModelRequest.h>
#include <aws/apigatewayv2/model/CreateModelResult.h>
#include <aws/apigatewayv2/model/CreateRouteRequest.h>
#include <aws/apigatewayv2/model/CreateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/CreateRouteResponseResult.h>
#include <aws/apigatewayv2/model/CreateRouteResult.h>
#include <aws/apigatewayv2/model/CreateRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/CreateRoutingRuleResult.h>
#include <aws/apigatewayv2/model/CreateStageRequest.h>
#include <aws/apigatewayv2/model/CreateStageResult.h>
#include <aws/apigatewayv2/model/CreateVpcLinkRequest.h>
#include <aws/apigatewayv2/model/CreateVpcLinkResult.h>
#include <aws/apigatewayv2/model/DeleteAccessLogSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteApiMappingRequest.h>
#include <aws/apigatewayv2/model/DeleteApiRequest.h>
#include <aws/apigatewayv2/model/DeleteAuthorizerRequest.h>
#include <aws/apigatewayv2/model/DeleteCorsConfigurationRequest.h>
#include <aws/apigatewayv2/model/DeleteDeploymentRequest.h>
#include <aws/apigatewayv2/model/DeleteDomainNameRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationRequest.h>
#include <aws/apigatewayv2/model/DeleteIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteModelRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteRequestParameterRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteResponseRequest.h>
#include <aws/apigatewayv2/model/DeleteRouteSettingsRequest.h>
#include <aws/apigatewayv2/model/DeleteRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/DeleteStageRequest.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkRequest.h>
#include <aws/apigatewayv2/model/DeleteVpcLinkResult.h>
#include <aws/apigatewayv2/model/Deployment.h>
#include <aws/apigatewayv2/model/DeploymentStatus.h>
#include <aws/apigatewayv2/model/DomainName.h>
#include <aws/apigatewayv2/model/DomainNameConfiguration.h>
#include <aws/apigatewayv2/model/DomainNameStatus.h>
#include <aws/apigatewayv2/model/EndpointType.h>
#include <aws/apigatewayv2/model/ExportApiRequest.h>
#include <aws/apigatewayv2/model/ExportApiResult.h>
#include <aws/apigatewayv2/model/GetApiMappingRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingResult.h>
#include <aws/apigatewayv2/model/GetApiMappingsRequest.h>
#include <aws/apigatewayv2/model/GetApiMappingsResult.h>
#include <aws/apigatewayv2/model/GetApiRequest.h>
#include <aws/apigatewayv2/model/GetApiResult.h>
#include <aws/apigatewayv2/model/GetApisRequest.h>
#include <aws/apigatewayv2/model/GetApisResult.h>
#include <aws/apigatewayv2/model/GetAuthorizerRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizerResult.h>
#include <aws/apigatewayv2/model/GetAuthorizersRequest.h>
#include <aws/apigatewayv2/model/GetAuthorizersResult.h>
#include <aws/apigatewayv2/model/GetDeploymentRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentResult.h>
#include <aws/apigatewayv2/model/GetDeploymentsRequest.h>
#include <aws/apigatewayv2/model/GetDeploymentsResult.h>
#include <aws/apigatewayv2/model/GetDomainNameRequest.h>
#include <aws/apigatewayv2/model/GetDomainNameResult.h>
#include <aws/apigatewayv2/model/GetDomainNamesRequest.h>
#include <aws/apigatewayv2/model/GetDomainNamesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationResponsesResult.h>
#include <aws/apigatewayv2/model/GetIntegrationResult.h>
#include <aws/apigatewayv2/model/GetIntegrationsRequest.h>
#include <aws/apigatewayv2/model/GetIntegrationsResult.h>
#include <aws/apigatewayv2/model/GetModelRequest.h>
#include <aws/apigatewayv2/model/GetModelResult.h>
#include <aws/apigatewayv2/model/GetModelTemplateRequest.h>
#include <aws/apigatewayv2/model/GetModelTemplateResult.h>
#include <aws/apigatewayv2/model/GetModelsRequest.h>
#include <aws/apigatewayv2/model/GetModelsResult.h>
#include <aws/apigatewayv2/model/GetRouteRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponseRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponseResult.h>
#include <aws/apigatewayv2/model/GetRouteResponsesRequest.h>
#include <aws/apigatewayv2/model/GetRouteResponsesResult.h>
#include <aws/apigatewayv2/model/GetRouteResult.h>
#include <aws/apigatewayv2/model/GetRoutesRequest.h>
#include <aws/apigatewayv2/model/GetRoutesResult.h>
#include <aws/apigatewayv2/model/GetRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/GetRoutingRuleResult.h>
#include <aws/apigatewayv2/model/GetStageRequest.h>
#include <aws/apigatewayv2/model/GetStageResult.h>
#include <aws/apigatewayv2/model/GetStagesRequest.h>
#include <aws/apigatewayv2/model/GetStagesResult.h>
#include <aws/apigatewayv2/model/GetTagsRequest.h>
#include <aws/apigatewayv2/model/GetTagsResult.h>
#include <aws/apigatewayv2/model/GetVpcLinkRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinkResult.h>
#include <aws/apigatewayv2/model/GetVpcLinksRequest.h>
#include <aws/apigatewayv2/model/GetVpcLinksResult.h>
#include <aws/apigatewayv2/model/ImportApiRequest.h>
#include <aws/apigatewayv2/model/ImportApiResult.h>
#include <aws/apigatewayv2/model/Integration.h>
#include <aws/apigatewayv2/model/IntegrationResponse.h>
#include <aws/apigatewayv2/model/IntegrationType.h>
#include <aws/apigatewayv2/model/IpAddressType.h>
#include <aws/apigatewayv2/model/JWTConfiguration.h>
#include <aws/apigatewayv2/model/ListRoutingRulesRequest.h>
#include <aws/apigatewayv2/model/ListRoutingRulesResult.h>
#include <aws/apigatewayv2/model/LoggingLevel.h>
#include <aws/apigatewayv2/model/Model.h>
#include <aws/apigatewayv2/model/MutualTlsAuthentication.h>
#include <aws/apigatewayv2/model/MutualTlsAuthenticationInput.h>
#include <aws/apigatewayv2/model/NotFoundException.h>
#include <aws/apigatewayv2/model/ParameterConstraints.h>
#include <aws/apigatewayv2/model/PassthroughBehavior.h>
#include <aws/apigatewayv2/model/ProtocolType.h>
#include <aws/apigatewayv2/model/PutRoutingRuleRequest.h>
#include <aws/apigatewayv2/model/PutRoutingRuleResult.h>
#include <aws/apigatewayv2/model/ReimportApiRequest.h>
#include <aws/apigatewayv2/model/ReimportApiResult.h>
#include <aws/apigatewayv2/model/ResetAuthorizersCacheRequest.h>
#include <aws/apigatewayv2/model/Route.h>
#include <aws/apigatewayv2/model/RouteResponse.h>
#include <aws/apigatewayv2/model/RouteSettings.h>
#include <aws/apigatewayv2/model/RoutingMode.h>
#include <aws/apigatewayv2/model/RoutingRule.h>
#include <aws/apigatewayv2/model/RoutingRuleAction.h>
#include <aws/apigatewayv2/model/RoutingRuleActionInvokeApi.h>
#include <aws/apigatewayv2/model/RoutingRuleCondition.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchBasePaths.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchHeaderValue.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchHeaders.h>
#include <aws/apigatewayv2/model/SecurityPolicy.h>
#include <aws/apigatewayv2/model/Stage.h>
#include <aws/apigatewayv2/model/TagResourceRequest.h>
#include <aws/apigatewayv2/model/TagResourceResult.h>
#include <aws/apigatewayv2/model/TlsConfig.h>
#include <aws/apigatewayv2/model/TlsConfigInput.h>
#include <aws/apigatewayv2/model/TooManyRequestsException.h>
#include <aws/apigatewayv2/model/UntagResourceRequest.h>
#include <aws/apigatewayv2/model/UpdateApiMappingRequest.h>
#include <aws/apigatewayv2/model/UpdateApiMappingResult.h>
#include <aws/apigatewayv2/model/UpdateApiRequest.h>
#include <aws/apigatewayv2/model/UpdateApiResult.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerRequest.h>
#include <aws/apigatewayv2/model/UpdateAuthorizerResult.h>
#include <aws/apigatewayv2/model/UpdateDeploymentRequest.h>
#include <aws/apigatewayv2/model/UpdateDeploymentResult.h>
#include <aws/apigatewayv2/model/UpdateDomainNameRequest.h>
#include <aws/apigatewayv2/model/UpdateDomainNameResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResponseResult.h>
#include <aws/apigatewayv2/model/UpdateIntegrationResult.h>
#include <aws/apigatewayv2/model/UpdateModelRequest.h>
#include <aws/apigatewayv2/model/UpdateModelResult.h>
#include <aws/apigatewayv2/model/UpdateRouteRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseRequest.h>
#include <aws/apigatewayv2/model/UpdateRouteResponseResult.h>
#include <aws/apigatewayv2/model/UpdateRouteResult.h>
#include <aws/apigatewayv2/model/UpdateStageRequest.h>
#include <aws/apigatewayv2/model/UpdateStageResult.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkRequest.h>
#include <aws/apigatewayv2/model/UpdateVpcLinkResult.h>
#include <aws/apigatewayv2/model/VpcLink.h>
#include <aws/apigatewayv2/model/VpcLinkStatus.h>
#include <aws/apigatewayv2/model/VpcLinkVersion.h>

using ApiGatewayV2IncludeTest = ::testing::Test;

TEST_F(ApiGatewayV2IncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ApiGatewayV2::ApiGatewayV2Client>("ApiGatewayV2IncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
