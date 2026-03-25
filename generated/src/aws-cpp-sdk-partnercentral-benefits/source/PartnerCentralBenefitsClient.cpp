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
#include <aws/partnercentral-benefits/PartnerCentralBenefitsClient.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointProvider.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrorMarshaller.h>
#include <aws/partnercentral-benefits/model/AmendBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/AssociateBenefitApplicationResourceRequest.h>
#include <aws/partnercentral-benefits/model/CancelBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/CreateBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/DisassociateBenefitApplicationResourceRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitAllocationRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitsRequest.h>
#include <aws/partnercentral-benefits/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-benefits/model/RecallBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/SubmitBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/TagResourceRequest.h>
#include <aws/partnercentral-benefits/model/UntagResourceRequest.h>
#include <aws/partnercentral-benefits/model/UpdateBenefitApplicationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PartnerCentralBenefits;
using namespace Aws::PartnerCentralBenefits::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PartnerCentralBenefits {
const char SERVICE_NAME[] = "partnercentral-benefits";
const char ALLOCATION_TAG[] = "PartnerCentralBenefitsClient";
}  // namespace PartnerCentralBenefits
}  // namespace Aws
const char* PartnerCentralBenefitsClient::GetServiceName() { return SERVICE_NAME; }
const char* PartnerCentralBenefitsClient::GetAllocationTag() { return ALLOCATION_TAG; }

PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(
    const PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration,
    std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(
    const AWSCredentials& credentials, std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider,
    const PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase> endpointProvider,
    const PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PartnerCentralBenefitsClient::PartnerCentralBenefitsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PartnerCentralBenefitsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PartnerCentralBenefitsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PartnerCentralBenefitsClient::~PartnerCentralBenefitsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PartnerCentralBenefitsEndpointProviderBase>& PartnerCentralBenefitsClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void PartnerCentralBenefitsClient::init(const PartnerCentralBenefits::PartnerCentralBenefitsClientConfiguration& config) {
  AWSClient::SetServiceClientName("PartnerCentral Benefits");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "partnercentral-benefits");
}

void PartnerCentralBenefitsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PartnerCentralBenefitsClient::InvokeOperationOutcome PartnerCentralBenefitsClient::InvokeServiceOperation(
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

AmendBenefitApplicationOutcome PartnerCentralBenefitsClient::AmendBenefitApplication(const AmendBenefitApplicationRequest& request) const {
  return AmendBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateBenefitApplicationResourceOutcome PartnerCentralBenefitsClient::AssociateBenefitApplicationResource(
    const AssociateBenefitApplicationResourceRequest& request) const {
  return AssociateBenefitApplicationResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelBenefitApplicationOutcome PartnerCentralBenefitsClient::CancelBenefitApplication(
    const CancelBenefitApplicationRequest& request) const {
  return CancelBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBenefitApplicationOutcome PartnerCentralBenefitsClient::CreateBenefitApplication(
    const CreateBenefitApplicationRequest& request) const {
  return CreateBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateBenefitApplicationResourceOutcome PartnerCentralBenefitsClient::DisassociateBenefitApplicationResource(
    const DisassociateBenefitApplicationResourceRequest& request) const {
  return DisassociateBenefitApplicationResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBenefitOutcome PartnerCentralBenefitsClient::GetBenefit(const GetBenefitRequest& request) const {
  return GetBenefitOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBenefitAllocationOutcome PartnerCentralBenefitsClient::GetBenefitAllocation(const GetBenefitAllocationRequest& request) const {
  return GetBenefitAllocationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetBenefitApplicationOutcome PartnerCentralBenefitsClient::GetBenefitApplication(const GetBenefitApplicationRequest& request) const {
  return GetBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBenefitAllocationsOutcome PartnerCentralBenefitsClient::ListBenefitAllocations(const ListBenefitAllocationsRequest& request) const {
  return ListBenefitAllocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBenefitApplicationsOutcome PartnerCentralBenefitsClient::ListBenefitApplications(const ListBenefitApplicationsRequest& request) const {
  return ListBenefitApplicationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListBenefitsOutcome PartnerCentralBenefitsClient::ListBenefits(const ListBenefitsRequest& request) const {
  return ListBenefitsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PartnerCentralBenefitsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RecallBenefitApplicationOutcome PartnerCentralBenefitsClient::RecallBenefitApplication(
    const RecallBenefitApplicationRequest& request) const {
  return RecallBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

SubmitBenefitApplicationOutcome PartnerCentralBenefitsClient::SubmitBenefitApplication(
    const SubmitBenefitApplicationRequest& request) const {
  return SubmitBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PartnerCentralBenefitsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PartnerCentralBenefitsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBenefitApplicationOutcome PartnerCentralBenefitsClient::UpdateBenefitApplication(
    const UpdateBenefitApplicationRequest& request) const {
  return UpdateBenefitApplicationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
