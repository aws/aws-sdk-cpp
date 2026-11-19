/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingClient.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingEndpointProvider.h>
#include <aws/partnercentral-marketing/PartnerCentralMarketingErrorMarshaller.h>
#include <aws/partnercentral-marketing/model/BatchCreateCampaignAssetRequest.h>
#include <aws/partnercentral-marketing/model/CreateCampaignRequest.h>
#include <aws/partnercentral-marketing/model/CreateSocialConnectionAuthorizationUrlRequest.h>
#include <aws/partnercentral-marketing/model/DeactivateCampaignAssetRequest.h>
#include <aws/partnercentral-marketing/model/DeleteCampaignAssetRequest.h>
#include <aws/partnercentral-marketing/model/DeleteCampaignRequest.h>
#include <aws/partnercentral-marketing/model/DeleteSocialConnectionRequest.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetActivationTaskRequest.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetExportTaskRequest.h>
#include <aws/partnercentral-marketing/model/GetCampaignAssetRequest.h>
#include <aws/partnercentral-marketing/model/GetCampaignRequest.h>
#include <aws/partnercentral-marketing/model/GetCampaignTemplateRequest.h>
#include <aws/partnercentral-marketing/model/ListCampaignAssetsRequest.h>
#include <aws/partnercentral-marketing/model/ListCampaignsRequest.h>
#include <aws/partnercentral-marketing/model/ListSocialConnectionsRequest.h>
#include <aws/partnercentral-marketing/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-marketing/model/SearchCampaignTemplatesRequest.h>
#include <aws/partnercentral-marketing/model/StartCampaignAssetActivationTaskRequest.h>
#include <aws/partnercentral-marketing/model/StartCampaignAssetExportTaskRequest.h>
#include <aws/partnercentral-marketing/model/TagResourceRequest.h>
#include <aws/partnercentral-marketing/model/UntagResourceRequest.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignAssetRequest.h>
#include <aws/partnercentral-marketing/model/UpdateCampaignRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralMarketing;
using namespace Aws::PartnerCentralMarketing::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralMarketing {
const char SERVICE_NAME[] = "partnercentral-marketing";
const char ALLOCATION_TAG[] = "PartnerCentralMarketingClient";
}  // namespace PartnerCentralMarketing
}  // namespace Aws
const char* PartnerCentralMarketingClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralMarketingClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralMarketingClient::PartnerCentralMarketingClient(
    const PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralMarketingClient::PartnerCentralMarketingClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider,
    const PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralMarketingClient::PartnerCentralMarketingClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralMarketingEndpointProviderBase> endpointProvider,
    const PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralMarketingClient::PartnerCentralMarketingClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralMarketingClient::PartnerCentralMarketingClient(const AWSCredentials& credentials,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralMarketingClient::PartnerCentralMarketingClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralMarketingErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralMarketingEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralMarketingClient::~PartnerCentralMarketingClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralMarketingEndpointProviderBase>& PartnerCentralMarketingClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralMarketingClient::init(const PartnerCentralMarketing::PartnerCentralMarketingClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Marketing");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral-marketing");
}

void PartnerCentralMarketingClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralMarketingClient::InvokeOperationOutcome PartnerCentralMarketingClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/AWSPartnerDemandGenerator/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

BatchCreateCampaignAssetOutcome PartnerCentralMarketingClient::BatchCreateCampaignAsset(
    const BatchCreateCampaignAssetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateCampaignAssetOutcome(result.GetResultWithOwnership())
                            : BatchCreateCampaignAssetOutcome(std::move(result.GetError()));
}

CreateCampaignOutcome PartnerCentralMarketingClient::CreateCampaign(const CreateCampaignRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCampaignOutcome(result.GetResultWithOwnership()) : CreateCampaignOutcome(std::move(result.GetError()));
}

CreateSocialConnectionAuthorizationUrlOutcome PartnerCentralMarketingClient::CreateSocialConnectionAuthorizationUrl(
    const CreateSocialConnectionAuthorizationUrlRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSocialConnectionAuthorizationUrlOutcome(result.GetResultWithOwnership())
                            : CreateSocialConnectionAuthorizationUrlOutcome(std::move(result.GetError()));
}

DeactivateCampaignAssetOutcome PartnerCentralMarketingClient::DeactivateCampaignAsset(const DeactivateCampaignAssetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeactivateCampaignAssetOutcome(result.GetResultWithOwnership())
                            : DeactivateCampaignAssetOutcome(std::move(result.GetError()));
}

DeleteCampaignOutcome PartnerCentralMarketingClient::DeleteCampaign(const DeleteCampaignRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCampaignOutcome(result.GetResultWithOwnership()) : DeleteCampaignOutcome(std::move(result.GetError()));
}

DeleteCampaignAssetOutcome PartnerCentralMarketingClient::DeleteCampaignAsset(const DeleteCampaignAssetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteCampaignAssetOutcome(result.GetResultWithOwnership())
                            : DeleteCampaignAssetOutcome(std::move(result.GetError()));
}

DeleteSocialConnectionOutcome PartnerCentralMarketingClient::DeleteSocialConnection(const DeleteSocialConnectionRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteSocialConnectionOutcome(result.GetResultWithOwnership())
                            : DeleteSocialConnectionOutcome(std::move(result.GetError()));
}

GetCampaignOutcome PartnerCentralMarketingClient::GetCampaign(const GetCampaignRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignOutcome(result.GetResultWithOwnership()) : GetCampaignOutcome(std::move(result.GetError()));
}

GetCampaignAssetOutcome PartnerCentralMarketingClient::GetCampaignAsset(const GetCampaignAssetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignAssetOutcome(result.GetResultWithOwnership())
                            : GetCampaignAssetOutcome(std::move(result.GetError()));
}

GetCampaignAssetActivationTaskOutcome PartnerCentralMarketingClient::GetCampaignAssetActivationTask(
    const GetCampaignAssetActivationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignAssetActivationTaskOutcome(result.GetResultWithOwnership())
                            : GetCampaignAssetActivationTaskOutcome(std::move(result.GetError()));
}

GetCampaignAssetExportTaskOutcome PartnerCentralMarketingClient::GetCampaignAssetExportTask(
    const GetCampaignAssetExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignAssetExportTaskOutcome(result.GetResultWithOwnership())
                            : GetCampaignAssetExportTaskOutcome(std::move(result.GetError()));
}

GetCampaignTemplateOutcome PartnerCentralMarketingClient::GetCampaignTemplate(const GetCampaignTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCampaignTemplateOutcome(result.GetResultWithOwnership())
                            : GetCampaignTemplateOutcome(std::move(result.GetError()));
}

ListCampaignAssetsOutcome PartnerCentralMarketingClient::ListCampaignAssets(const ListCampaignAssetsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCampaignAssetsOutcome(result.GetResultWithOwnership())
                            : ListCampaignAssetsOutcome(std::move(result.GetError()));
}

ListCampaignsOutcome PartnerCentralMarketingClient::ListCampaigns(const ListCampaignsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCampaignsOutcome(result.GetResultWithOwnership()) : ListCampaignsOutcome(std::move(result.GetError()));
}

ListSocialConnectionsOutcome PartnerCentralMarketingClient::ListSocialConnections(const ListSocialConnectionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSocialConnectionsOutcome(result.GetResultWithOwnership())
                            : ListSocialConnectionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PartnerCentralMarketingClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SearchCampaignTemplatesOutcome PartnerCentralMarketingClient::SearchCampaignTemplates(const SearchCampaignTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchCampaignTemplatesOutcome(result.GetResultWithOwnership())
                            : SearchCampaignTemplatesOutcome(std::move(result.GetError()));
}

StartCampaignAssetActivationTaskOutcome PartnerCentralMarketingClient::StartCampaignAssetActivationTask(
    const StartCampaignAssetActivationTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCampaignAssetActivationTaskOutcome(result.GetResultWithOwnership())
                            : StartCampaignAssetActivationTaskOutcome(std::move(result.GetError()));
}

StartCampaignAssetExportTaskOutcome PartnerCentralMarketingClient::StartCampaignAssetExportTask(
    const StartCampaignAssetExportTaskRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartCampaignAssetExportTaskOutcome(result.GetResultWithOwnership())
                            : StartCampaignAssetExportTaskOutcome(std::move(result.GetError()));
}

TagResourceOutcome PartnerCentralMarketingClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PartnerCentralMarketingClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCampaignOutcome PartnerCentralMarketingClient::UpdateCampaign(const UpdateCampaignRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignOutcome(result.GetResultWithOwnership()) : UpdateCampaignOutcome(std::move(result.GetError()));
}

UpdateCampaignAssetOutcome PartnerCentralMarketingClient::UpdateCampaignAsset(const UpdateCampaignAssetRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateCampaignAssetOutcome(result.GetResultWithOwnership())
                            : UpdateCampaignAssetOutcome(std::move(result.GetError()));
}
