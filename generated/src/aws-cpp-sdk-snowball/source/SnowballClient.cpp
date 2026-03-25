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
#include <aws/snowball/SnowballClient.h>
#include <aws/snowball/SnowballEndpointProvider.h>
#include <aws/snowball/SnowballErrorMarshaller.h>
#include <aws/snowball/model/CancelClusterRequest.h>
#include <aws/snowball/model/CancelJobRequest.h>
#include <aws/snowball/model/CreateAddressRequest.h>
#include <aws/snowball/model/CreateClusterRequest.h>
#include <aws/snowball/model/CreateJobRequest.h>
#include <aws/snowball/model/CreateLongTermPricingRequest.h>
#include <aws/snowball/model/CreateReturnShippingLabelRequest.h>
#include <aws/snowball/model/DescribeAddressRequest.h>
#include <aws/snowball/model/DescribeAddressesRequest.h>
#include <aws/snowball/model/DescribeClusterRequest.h>
#include <aws/snowball/model/DescribeJobRequest.h>
#include <aws/snowball/model/DescribeReturnShippingLabelRequest.h>
#include <aws/snowball/model/GetJobManifestRequest.h>
#include <aws/snowball/model/GetJobUnlockCodeRequest.h>
#include <aws/snowball/model/GetSnowballUsageRequest.h>
#include <aws/snowball/model/GetSoftwareUpdatesRequest.h>
#include <aws/snowball/model/ListClusterJobsRequest.h>
#include <aws/snowball/model/ListClustersRequest.h>
#include <aws/snowball/model/ListCompatibleImagesRequest.h>
#include <aws/snowball/model/ListJobsRequest.h>
#include <aws/snowball/model/ListLongTermPricingRequest.h>
#include <aws/snowball/model/ListPickupLocationsRequest.h>
#include <aws/snowball/model/ListServiceVersionsRequest.h>
#include <aws/snowball/model/UpdateClusterRequest.h>
#include <aws/snowball/model/UpdateJobRequest.h>
#include <aws/snowball/model/UpdateJobShipmentStateRequest.h>
#include <aws/snowball/model/UpdateLongTermPricingRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Snowball;
using namespace Aws::Snowball::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Snowball {
const char SERVICE_NAME[] = "snowball";
const char ALLOCATION_TAG[] = "SnowballClient";
}  // namespace Snowball
}  // namespace Aws
const char* SnowballClient::GetServiceName() { return SERVICE_NAME; }
const char* SnowballClient::GetAllocationTag() { return ALLOCATION_TAG; }

SnowballClient::SnowballClient(const Snowball::SnowballClientConfiguration& clientConfiguration,
                               std::shared_ptr<SnowballEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowballClient::SnowballClient(const AWSCredentials& credentials, std::shared_ptr<SnowballEndpointProviderBase> endpointProvider,
                               const Snowball::SnowballClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowballClient::SnowballClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<SnowballEndpointProviderBase> endpointProvider,
                               const Snowball::SnowballClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SnowballClient::SnowballClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowballClient::SnowballClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SnowballClient::SnowballClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SnowballErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SnowballEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SnowballClient::~SnowballClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SnowballEndpointProviderBase>& SnowballClient::accessEndpointProvider() { return m_endpointProvider; }

void SnowballClient::init(const Snowball::SnowballClientConfiguration& config) {
  AWSClient::SetServiceClientName("Snowball");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "snowball");
}

void SnowballClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SnowballClient::InvokeOperationOutcome SnowballClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

CancelClusterOutcome SnowballClient::CancelCluster(const CancelClusterRequest& request) const {
  return CancelClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelJobOutcome SnowballClient::CancelJob(const CancelJobRequest& request) const {
  return CancelJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAddressOutcome SnowballClient::CreateAddress(const CreateAddressRequest& request) const {
  return CreateAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateClusterOutcome SnowballClient::CreateCluster(const CreateClusterRequest& request) const {
  return CreateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateJobOutcome SnowballClient::CreateJob(const CreateJobRequest& request) const {
  return CreateJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLongTermPricingOutcome SnowballClient::CreateLongTermPricing(const CreateLongTermPricingRequest& request) const {
  return CreateLongTermPricingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReturnShippingLabelOutcome SnowballClient::CreateReturnShippingLabel(const CreateReturnShippingLabelRequest& request) const {
  return CreateReturnShippingLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAddressOutcome SnowballClient::DescribeAddress(const DescribeAddressRequest& request) const {
  return DescribeAddressOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAddressesOutcome SnowballClient::DescribeAddresses(const DescribeAddressesRequest& request) const {
  return DescribeAddressesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeClusterOutcome SnowballClient::DescribeCluster(const DescribeClusterRequest& request) const {
  return DescribeClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeJobOutcome SnowballClient::DescribeJob(const DescribeJobRequest& request) const {
  return DescribeJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeReturnShippingLabelOutcome SnowballClient::DescribeReturnShippingLabel(const DescribeReturnShippingLabelRequest& request) const {
  return DescribeReturnShippingLabelOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobManifestOutcome SnowballClient::GetJobManifest(const GetJobManifestRequest& request) const {
  return GetJobManifestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetJobUnlockCodeOutcome SnowballClient::GetJobUnlockCode(const GetJobUnlockCodeRequest& request) const {
  return GetJobUnlockCodeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSnowballUsageOutcome SnowballClient::GetSnowballUsage(const GetSnowballUsageRequest& request) const {
  return GetSnowballUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSoftwareUpdatesOutcome SnowballClient::GetSoftwareUpdates(const GetSoftwareUpdatesRequest& request) const {
  return GetSoftwareUpdatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClusterJobsOutcome SnowballClient::ListClusterJobs(const ListClusterJobsRequest& request) const {
  return ListClusterJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListClustersOutcome SnowballClient::ListClusters(const ListClustersRequest& request) const {
  return ListClustersOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCompatibleImagesOutcome SnowballClient::ListCompatibleImages(const ListCompatibleImagesRequest& request) const {
  return ListCompatibleImagesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListJobsOutcome SnowballClient::ListJobs(const ListJobsRequest& request) const {
  return ListJobsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLongTermPricingOutcome SnowballClient::ListLongTermPricing(const ListLongTermPricingRequest& request) const {
  return ListLongTermPricingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPickupLocationsOutcome SnowballClient::ListPickupLocations(const ListPickupLocationsRequest& request) const {
  return ListPickupLocationsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceVersionsOutcome SnowballClient::ListServiceVersions(const ListServiceVersionsRequest& request) const {
  return ListServiceVersionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateClusterOutcome SnowballClient::UpdateCluster(const UpdateClusterRequest& request) const {
  return UpdateClusterOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateJobOutcome SnowballClient::UpdateJob(const UpdateJobRequest& request) const {
  return UpdateJobOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateJobShipmentStateOutcome SnowballClient::UpdateJobShipmentState(const UpdateJobShipmentStateRequest& request) const {
  return UpdateJobShipmentStateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLongTermPricingOutcome SnowballClient::UpdateLongTermPricing(const UpdateLongTermPricingRequest& request) const {
  return UpdateLongTermPricingOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
