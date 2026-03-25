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
#include <aws/pca-connector-scep/PcaConnectorScepClient.h>
#include <aws/pca-connector-scep/PcaConnectorScepEndpointProvider.h>
#include <aws/pca-connector-scep/PcaConnectorScepErrorMarshaller.h>
#include <aws/pca-connector-scep/model/CreateChallengeRequest.h>
#include <aws/pca-connector-scep/model/CreateConnectorRequest.h>
#include <aws/pca-connector-scep/model/DeleteChallengeRequest.h>
#include <aws/pca-connector-scep/model/DeleteConnectorRequest.h>
#include <aws/pca-connector-scep/model/GetChallengeMetadataRequest.h>
#include <aws/pca-connector-scep/model/GetChallengePasswordRequest.h>
#include <aws/pca-connector-scep/model/GetConnectorRequest.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataRequest.h>
#include <aws/pca-connector-scep/model/ListConnectorsRequest.h>
#include <aws/pca-connector-scep/model/ListTagsForResourceRequest.h>
#include <aws/pca-connector-scep/model/TagResourceRequest.h>
#include <aws/pca-connector-scep/model/UntagResourceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PcaConnectorScep;
using namespace Aws::PcaConnectorScep::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PcaConnectorScep {
const char SERVICE_NAME[] = "pca-connector-scep";
const char ALLOCATION_TAG[] = "PcaConnectorScepClient";
}  // namespace PcaConnectorScep
}  // namespace Aws
const char* PcaConnectorScepClient::GetServiceName() { return SERVICE_NAME; }
const char* PcaConnectorScepClient::GetAllocationTag() { return ALLOCATION_TAG; }

PcaConnectorScepClient::PcaConnectorScepClient(const PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration,
                                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorScepClient::PcaConnectorScepClient(const AWSCredentials& credentials,
                                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider,
                                               const PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorScepClient::PcaConnectorScepClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider,
                                               const PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PcaConnectorScepClient::PcaConnectorScepClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorScepClient::PcaConnectorScepClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PcaConnectorScepClient::PcaConnectorScepClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PcaConnectorScepErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PcaConnectorScepEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PcaConnectorScepClient::~PcaConnectorScepClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PcaConnectorScepEndpointProviderBase>& PcaConnectorScepClient::accessEndpointProvider() { return m_endpointProvider; }

void PcaConnectorScepClient::init(const PcaConnectorScep::PcaConnectorScepClientConfiguration& config) {
  AWSClient::SetServiceClientName("Pca Connector Scep");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "pca-connector-scep");
}

void PcaConnectorScepClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PcaConnectorScepClient::InvokeOperationOutcome PcaConnectorScepClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
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

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

CreateChallengeOutcome PcaConnectorScepClient::CreateChallenge(const CreateChallengeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/challenges");
  };

  return CreateChallengeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateConnectorOutcome PcaConnectorScepClient::CreateConnector(const CreateConnectorRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors");
  };

  return CreateConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteChallengeOutcome PcaConnectorScepClient::DeleteChallenge(const DeleteChallengeRequest& request) const {
  if (!request.ChallengeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteChallenge", "Required field: ChallengeArn, is not set");
    return DeleteChallengeOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChallengeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/challenges/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChallengeArn());
  };

  return DeleteChallengeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteConnectorOutcome PcaConnectorScepClient::DeleteConnector(const DeleteConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteConnector", "Required field: ConnectorArn, is not set");
    return DeleteConnectorOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  return DeleteConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetChallengeMetadataOutcome PcaConnectorScepClient::GetChallengeMetadata(const GetChallengeMetadataRequest& request) const {
  if (!request.ChallengeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChallengeMetadata", "Required field: ChallengeArn, is not set");
    return GetChallengeMetadataOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChallengeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/challengeMetadata/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChallengeArn());
  };

  return GetChallengeMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetChallengePasswordOutcome PcaConnectorScepClient::GetChallengePassword(const GetChallengePasswordRequest& request) const {
  if (!request.ChallengeArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetChallengePassword", "Required field: ChallengeArn, is not set");
    return GetChallengePasswordOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ChallengeArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/challengePasswords/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetChallengeArn());
  };

  return GetChallengePasswordOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConnectorOutcome PcaConnectorScepClient::GetConnector(const GetConnectorRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConnector", "Required field: ConnectorArn, is not set");
    return GetConnectorOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetConnectorArn());
  };

  return GetConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListChallengeMetadataOutcome PcaConnectorScepClient::ListChallengeMetadata(const ListChallengeMetadataRequest& request) const {
  if (!request.ConnectorArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListChallengeMetadata", "Required field: ConnectorArn, is not set");
    return ListChallengeMetadataOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ConnectorArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/challengeMetadata");
  };

  return ListChallengeMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListConnectorsOutcome PcaConnectorScepClient::ListConnectors(const ListConnectorsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/connectors");
  };

  return ListConnectorsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome PcaConnectorScepClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome PcaConnectorScepClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PcaConnectorScepClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<PcaConnectorScepErrors>(
        PcaConnectorScepErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
