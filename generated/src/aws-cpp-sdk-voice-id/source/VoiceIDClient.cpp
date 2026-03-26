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
#include <aws/voice-id/VoiceIDClient.h>
#include <aws/voice-id/VoiceIDEndpointProvider.h>
#include <aws/voice-id/VoiceIDErrorMarshaller.h>
#include <aws/voice-id/model/AssociateFraudsterRequest.h>
#include <aws/voice-id/model/CreateDomainRequest.h>
#include <aws/voice-id/model/CreateWatchlistRequest.h>
#include <aws/voice-id/model/DeleteDomainRequest.h>
#include <aws/voice-id/model/DeleteFraudsterRequest.h>
#include <aws/voice-id/model/DeleteSpeakerRequest.h>
#include <aws/voice-id/model/DeleteWatchlistRequest.h>
#include <aws/voice-id/model/DescribeDomainRequest.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/DescribeFraudsterRequest.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/DescribeSpeakerRequest.h>
#include <aws/voice-id/model/DescribeWatchlistRequest.h>
#include <aws/voice-id/model/DisassociateFraudsterRequest.h>
#include <aws/voice-id/model/EvaluateSessionRequest.h>
#include <aws/voice-id/model/ListDomainsRequest.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsRequest.h>
#include <aws/voice-id/model/ListFraudstersRequest.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsRequest.h>
#include <aws/voice-id/model/ListSpeakersRequest.h>
#include <aws/voice-id/model/ListTagsForResourceRequest.h>
#include <aws/voice-id/model/ListWatchlistsRequest.h>
#include <aws/voice-id/model/OptOutSpeakerRequest.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobRequest.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobRequest.h>
#include <aws/voice-id/model/TagResourceRequest.h>
#include <aws/voice-id/model/UntagResourceRequest.h>
#include <aws/voice-id/model/UpdateDomainRequest.h>
#include <aws/voice-id/model/UpdateWatchlistRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VoiceID;
using namespace Aws::VoiceID::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace VoiceID {
const char SERVICE_NAME[] = "voiceid";
const char ALLOCATION_TAG[] = "VoiceIDClient";
}  // namespace VoiceID
}  // namespace Aws
const char* VoiceIDClient::GetServiceName() { return SERVICE_NAME; }
const char* VoiceIDClient::GetAllocationTag() { return ALLOCATION_TAG; }

VoiceIDClient::VoiceIDClient(const VoiceID::VoiceIDClientConfiguration& clientConfiguration,
                             std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const AWSCredentials& credentials, std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider,
                             const VoiceID::VoiceIDClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider,
                             const VoiceID::VoiceIDClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
VoiceIDClient::VoiceIDClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VoiceIDClient::VoiceIDClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VoiceIDErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VoiceIDEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
VoiceIDClient::~VoiceIDClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<VoiceIDEndpointProviderBase>& VoiceIDClient::accessEndpointProvider() { return m_endpointProvider; }

void VoiceIDClient::init(const VoiceID::VoiceIDClientConfiguration& config) {
  AWSClient::SetServiceClientName("Voice ID");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "voiceid");
}

void VoiceIDClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
VoiceIDClient::InvokeOperationOutcome VoiceIDClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateFraudsterOutcome VoiceIDClient::AssociateFraudster(const AssociateFraudsterRequest& request) const {
  return AssociateFraudsterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome VoiceIDClient::CreateDomain(const CreateDomainRequest& request) const {
  return CreateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWatchlistOutcome VoiceIDClient::CreateWatchlist(const CreateWatchlistRequest& request) const {
  return CreateWatchlistOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDomainOutcome VoiceIDClient::DeleteDomain(const DeleteDomainRequest& request) const {
  return DeleteDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteFraudsterOutcome VoiceIDClient::DeleteFraudster(const DeleteFraudsterRequest& request) const {
  return DeleteFraudsterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteSpeakerOutcome VoiceIDClient::DeleteSpeaker(const DeleteSpeakerRequest& request) const {
  return DeleteSpeakerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteWatchlistOutcome VoiceIDClient::DeleteWatchlist(const DeleteWatchlistRequest& request) const {
  return DeleteWatchlistOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeDomainOutcome VoiceIDClient::DescribeDomain(const DescribeDomainRequest& request) const {
  return DescribeDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFraudsterOutcome VoiceIDClient::DescribeFraudster(const DescribeFraudsterRequest& request) const {
  return DescribeFraudsterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeFraudsterRegistrationJobOutcome VoiceIDClient::DescribeFraudsterRegistrationJob(
    const DescribeFraudsterRegistrationJobRequest& request) const {
  return DescribeFraudsterRegistrationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpeakerOutcome VoiceIDClient::DescribeSpeaker(const DescribeSpeakerRequest& request) const {
  return DescribeSpeakerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeSpeakerEnrollmentJobOutcome VoiceIDClient::DescribeSpeakerEnrollmentJob(const DescribeSpeakerEnrollmentJobRequest& request) const {
  return DescribeSpeakerEnrollmentJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeWatchlistOutcome VoiceIDClient::DescribeWatchlist(const DescribeWatchlistRequest& request) const {
  return DescribeWatchlistOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateFraudsterOutcome VoiceIDClient::DisassociateFraudster(const DisassociateFraudsterRequest& request) const {
  return DisassociateFraudsterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EvaluateSessionOutcome VoiceIDClient::EvaluateSession(const EvaluateSessionRequest& request) const {
  return EvaluateSessionOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainsOutcome VoiceIDClient::ListDomains(const ListDomainsRequest& request) const {
  return ListDomainsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFraudsterRegistrationJobsOutcome VoiceIDClient::ListFraudsterRegistrationJobs(
    const ListFraudsterRegistrationJobsRequest& request) const {
  return ListFraudsterRegistrationJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListFraudstersOutcome VoiceIDClient::ListFraudsters(const ListFraudstersRequest& request) const {
  return ListFraudstersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSpeakerEnrollmentJobsOutcome VoiceIDClient::ListSpeakerEnrollmentJobs(const ListSpeakerEnrollmentJobsRequest& request) const {
  return ListSpeakerEnrollmentJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListSpeakersOutcome VoiceIDClient::ListSpeakers(const ListSpeakersRequest& request) const {
  return ListSpeakersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome VoiceIDClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListWatchlistsOutcome VoiceIDClient::ListWatchlists(const ListWatchlistsRequest& request) const {
  return ListWatchlistsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

OptOutSpeakerOutcome VoiceIDClient::OptOutSpeaker(const OptOutSpeakerRequest& request) const {
  return OptOutSpeakerOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartFraudsterRegistrationJobOutcome VoiceIDClient::StartFraudsterRegistrationJob(
    const StartFraudsterRegistrationJobRequest& request) const {
  return StartFraudsterRegistrationJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartSpeakerEnrollmentJobOutcome VoiceIDClient::StartSpeakerEnrollmentJob(const StartSpeakerEnrollmentJobRequest& request) const {
  return StartSpeakerEnrollmentJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome VoiceIDClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome VoiceIDClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainOutcome VoiceIDClient::UpdateDomain(const UpdateDomainRequest& request) const {
  return UpdateDomainOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWatchlistOutcome VoiceIDClient::UpdateWatchlist(const UpdateWatchlistRequest& request) const {
  return UpdateWatchlistOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
