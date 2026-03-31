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
#include <aws/supplychain/SupplyChainClient.h>
#include <aws/supplychain/SupplyChainEndpointProvider.h>
#include <aws/supplychain/SupplyChainErrorMarshaller.h>
#include <aws/supplychain/model/CreateBillOfMaterialsImportJobRequest.h>
#include <aws/supplychain/model/CreateDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/CreateDataLakeDatasetRequest.h>
#include <aws/supplychain/model/CreateDataLakeNamespaceRequest.h>
#include <aws/supplychain/model/CreateInstanceRequest.h>
#include <aws/supplychain/model/DeleteDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/DeleteDataLakeDatasetRequest.h>
#include <aws/supplychain/model/DeleteDataLakeNamespaceRequest.h>
#include <aws/supplychain/model/DeleteInstanceRequest.h>
#include <aws/supplychain/model/GetBillOfMaterialsImportJobRequest.h>
#include <aws/supplychain/model/GetDataIntegrationEventRequest.h>
#include <aws/supplychain/model/GetDataIntegrationFlowExecutionRequest.h>
#include <aws/supplychain/model/GetDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/GetDataLakeDatasetRequest.h>
#include <aws/supplychain/model/GetDataLakeNamespaceRequest.h>
#include <aws/supplychain/model/GetInstanceRequest.h>
#include <aws/supplychain/model/ListDataIntegrationEventsRequest.h>
#include <aws/supplychain/model/ListDataIntegrationFlowExecutionsRequest.h>
#include <aws/supplychain/model/ListDataIntegrationFlowsRequest.h>
#include <aws/supplychain/model/ListDataLakeDatasetsRequest.h>
#include <aws/supplychain/model/ListDataLakeNamespacesRequest.h>
#include <aws/supplychain/model/ListInstancesRequest.h>
#include <aws/supplychain/model/ListTagsForResourceRequest.h>
#include <aws/supplychain/model/SendDataIntegrationEventRequest.h>
#include <aws/supplychain/model/TagResourceRequest.h>
#include <aws/supplychain/model/UntagResourceRequest.h>
#include <aws/supplychain/model/UpdateDataIntegrationFlowRequest.h>
#include <aws/supplychain/model/UpdateDataLakeDatasetRequest.h>
#include <aws/supplychain/model/UpdateDataLakeNamespaceRequest.h>
#include <aws/supplychain/model/UpdateInstanceRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::SupplyChain;
using namespace Aws::SupplyChain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace SupplyChain {
const char SERVICE_NAME[] = "scn";
const char ALLOCATION_TAG[] = "SupplyChainClient";
}  // namespace SupplyChain
}  // namespace Aws
const char* SupplyChainClient::GetServiceName() { return SERVICE_NAME; }
const char* SupplyChainClient::GetAllocationTag() { return ALLOCATION_TAG; }

SupplyChainClient::SupplyChainClient(const SupplyChain::SupplyChainClientConfiguration& clientConfiguration,
                                     std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupplyChainClient::SupplyChainClient(const AWSCredentials& credentials, std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider,
                                     const SupplyChain::SupplyChainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupplyChainClient::SupplyChainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider,
                                     const SupplyChain::SupplyChainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
SupplyChainClient::SupplyChainClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupplyChainClient::SupplyChainClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

SupplyChainClient::SupplyChainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<SupplyChainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<SupplyChainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
SupplyChainClient::~SupplyChainClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<SupplyChainEndpointProviderBase>& SupplyChainClient::accessEndpointProvider() { return m_endpointProvider; }

void SupplyChainClient::init(const SupplyChain::SupplyChainClientConfiguration& config) {
  AWSClient::SetServiceClientName("SupplyChain");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "scn");
}

void SupplyChainClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
SupplyChainClient::InvokeOperationOutcome SupplyChainClient::InvokeServiceOperation(
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

CreateBillOfMaterialsImportJobOutcome SupplyChainClient::CreateBillOfMaterialsImportJob(
    const CreateBillOfMaterialsImportJobRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBillOfMaterialsImportJob", "Required field: InstanceId, is not set");
    return CreateBillOfMaterialsImportJobOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/configuration/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bill-of-materials-import-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateBillOfMaterialsImportJobOutcome(result.GetResultWithOwnership())
                            : CreateBillOfMaterialsImportJobOutcome(std::move(result.GetError()));
}

CreateDataIntegrationFlowOutcome SupplyChainClient::CreateDataIntegrationFlow(const CreateDataIntegrationFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataIntegrationFlow", "Required field: InstanceId, is not set");
    return CreateDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataIntegrationFlow", "Required field: Name, is not set");
    return CreateDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataIntegrationFlowOutcome(result.GetResultWithOwnership())
                            : CreateDataIntegrationFlowOutcome(std::move(result.GetError()));
}

CreateDataLakeDatasetOutcome SupplyChainClient::CreateDataLakeDataset(const CreateDataLakeDatasetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataLakeDataset", "Required field: InstanceId, is not set");
    return CreateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataLakeDataset", "Required field: Namespace, is not set");
    return CreateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataLakeDataset", "Required field: Name, is not set");
    return CreateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataLakeDatasetOutcome(result.GetResultWithOwnership())
                            : CreateDataLakeDatasetOutcome(std::move(result.GetError()));
}

CreateDataLakeNamespaceOutcome SupplyChainClient::CreateDataLakeNamespace(const CreateDataLakeNamespaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataLakeNamespace", "Required field: InstanceId, is not set");
    return CreateDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataLakeNamespace", "Required field: Name, is not set");
    return CreateDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? CreateDataLakeNamespaceOutcome(result.GetResultWithOwnership())
                            : CreateDataLakeNamespaceOutcome(std::move(result.GetError()));
}

CreateInstanceOutcome SupplyChainClient::CreateInstance(const CreateInstanceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/instance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateInstanceOutcome(result.GetResultWithOwnership()) : CreateInstanceOutcome(std::move(result.GetError()));
}

DeleteDataIntegrationFlowOutcome SupplyChainClient::DeleteDataIntegrationFlow(const DeleteDataIntegrationFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataIntegrationFlow", "Required field: InstanceId, is not set");
    return DeleteDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataIntegrationFlow", "Required field: Name, is not set");
    return DeleteDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataIntegrationFlowOutcome(result.GetResultWithOwnership())
                            : DeleteDataIntegrationFlowOutcome(std::move(result.GetError()));
}

DeleteDataLakeDatasetOutcome SupplyChainClient::DeleteDataLakeDataset(const DeleteDataLakeDatasetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataLakeDataset", "Required field: InstanceId, is not set");
    return DeleteDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataLakeDataset", "Required field: Namespace, is not set");
    return DeleteDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataLakeDataset", "Required field: Name, is not set");
    return DeleteDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataLakeDatasetOutcome(result.GetResultWithOwnership())
                            : DeleteDataLakeDatasetOutcome(std::move(result.GetError()));
}

DeleteDataLakeNamespaceOutcome SupplyChainClient::DeleteDataLakeNamespace(const DeleteDataLakeNamespaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataLakeNamespace", "Required field: InstanceId, is not set");
    return DeleteDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataLakeNamespace", "Required field: Name, is not set");
    return DeleteDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataLakeNamespaceOutcome(result.GetResultWithOwnership())
                            : DeleteDataLakeNamespaceOutcome(std::move(result.GetError()));
}

DeleteInstanceOutcome SupplyChainClient::DeleteInstance(const DeleteInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteInstance", "Required field: InstanceId, is not set");
    return DeleteInstanceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteInstanceOutcome(result.GetResultWithOwnership()) : DeleteInstanceOutcome(std::move(result.GetError()));
}

GetBillOfMaterialsImportJobOutcome SupplyChainClient::GetBillOfMaterialsImportJob(const GetBillOfMaterialsImportJobRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBillOfMaterialsImportJob", "Required field: InstanceId, is not set");
    return GetBillOfMaterialsImportJobOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBillOfMaterialsImportJob", "Required field: JobId, is not set");
    return GetBillOfMaterialsImportJobOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/configuration/instances/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bill-of-materials-import-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetBillOfMaterialsImportJobOutcome(result.GetResultWithOwnership())
                            : GetBillOfMaterialsImportJobOutcome(std::move(result.GetError()));
}

GetDataIntegrationEventOutcome SupplyChainClient::GetDataIntegrationEvent(const GetDataIntegrationEventRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationEvent", "Required field: InstanceId, is not set");
    return GetDataIntegrationEventOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.EventIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationEvent", "Required field: EventId, is not set");
    return GetDataIntegrationEventOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-data/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-events/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataIntegrationEventOutcome(result.GetResultWithOwnership())
                            : GetDataIntegrationEventOutcome(std::move(result.GetError()));
}

GetDataIntegrationFlowOutcome SupplyChainClient::GetDataIntegrationFlow(const GetDataIntegrationFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationFlow", "Required field: InstanceId, is not set");
    return GetDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationFlow", "Required field: Name, is not set");
    return GetDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataIntegrationFlowOutcome(result.GetResultWithOwnership())
                            : GetDataIntegrationFlowOutcome(std::move(result.GetError()));
}

GetDataIntegrationFlowExecutionOutcome SupplyChainClient::GetDataIntegrationFlowExecution(
    const GetDataIntegrationFlowExecutionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationFlowExecution", "Required field: InstanceId, is not set");
    return GetDataIntegrationFlowExecutionOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.FlowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationFlowExecution", "Required field: FlowName, is not set");
    return GetDataIntegrationFlowExecutionOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowName]", false));
  }
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegrationFlowExecution", "Required field: ExecutionId, is not set");
    return GetDataIntegrationFlowExecutionOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-data/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataIntegrationFlowExecutionOutcome(result.GetResultWithOwnership())
                            : GetDataIntegrationFlowExecutionOutcome(std::move(result.GetError()));
}

GetDataLakeDatasetOutcome SupplyChainClient::GetDataLakeDataset(const GetDataLakeDatasetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataLakeDataset", "Required field: InstanceId, is not set");
    return GetDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataLakeDataset", "Required field: Namespace, is not set");
    return GetDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataLakeDataset", "Required field: Name, is not set");
    return GetDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataLakeDatasetOutcome(result.GetResultWithOwnership())
                            : GetDataLakeDatasetOutcome(std::move(result.GetError()));
}

GetDataLakeNamespaceOutcome SupplyChainClient::GetDataLakeNamespace(const GetDataLakeNamespaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataLakeNamespace", "Required field: InstanceId, is not set");
    return GetDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataLakeNamespace", "Required field: Name, is not set");
    return GetDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataLakeNamespaceOutcome(result.GetResultWithOwnership())
                            : GetDataLakeNamespaceOutcome(std::move(result.GetError()));
}

GetInstanceOutcome SupplyChainClient::GetInstance(const GetInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInstance", "Required field: InstanceId, is not set");
    return GetInstanceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetInstanceOutcome(result.GetResultWithOwnership()) : GetInstanceOutcome(std::move(result.GetError()));
}

ListDataIntegrationEventsOutcome SupplyChainClient::ListDataIntegrationEvents(const ListDataIntegrationEventsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationEvents", "Required field: InstanceId, is not set");
    return ListDataIntegrationEventsOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-data/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataIntegrationEventsOutcome(result.GetResultWithOwnership())
                            : ListDataIntegrationEventsOutcome(std::move(result.GetError()));
}

ListDataIntegrationFlowExecutionsOutcome SupplyChainClient::ListDataIntegrationFlowExecutions(
    const ListDataIntegrationFlowExecutionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationFlowExecutions", "Required field: InstanceId, is not set");
    return ListDataIntegrationFlowExecutionsOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.FlowNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationFlowExecutions", "Required field: FlowName, is not set");
    return ListDataIntegrationFlowExecutionsOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FlowName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-data/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataIntegrationFlowExecutionsOutcome(result.GetResultWithOwnership())
                            : ListDataIntegrationFlowExecutionsOutcome(std::move(result.GetError()));
}

ListDataIntegrationFlowsOutcome SupplyChainClient::ListDataIntegrationFlows(const ListDataIntegrationFlowsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationFlows", "Required field: InstanceId, is not set");
    return ListDataIntegrationFlowsOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataIntegrationFlowsOutcome(result.GetResultWithOwnership())
                            : ListDataIntegrationFlowsOutcome(std::move(result.GetError()));
}

ListDataLakeDatasetsOutcome SupplyChainClient::ListDataLakeDatasets(const ListDataLakeDatasetsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataLakeDatasets", "Required field: InstanceId, is not set");
    return ListDataLakeDatasetsOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataLakeDatasets", "Required field: Namespace, is not set");
    return ListDataLakeDatasetsOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataLakeDatasetsOutcome(result.GetResultWithOwnership())
                            : ListDataLakeDatasetsOutcome(std::move(result.GetError()));
}

ListDataLakeNamespacesOutcome SupplyChainClient::ListDataLakeNamespaces(const ListDataLakeNamespacesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataLakeNamespaces", "Required field: InstanceId, is not set");
    return ListDataLakeNamespacesOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataLakeNamespacesOutcome(result.GetResultWithOwnership())
                            : ListDataLakeNamespacesOutcome(std::move(result.GetError()));
}

ListInstancesOutcome SupplyChainClient::ListInstances(const ListInstancesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/instance");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInstancesOutcome(result.GetResultWithOwnership()) : ListInstancesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome SupplyChainClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

SendDataIntegrationEventOutcome SupplyChainClient::SendDataIntegrationEvent(const SendDataIntegrationEventRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDataIntegrationEvent", "Required field: InstanceId, is not set");
    return SendDataIntegrationEventOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api-data/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-events");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDataIntegrationEventOutcome(result.GetResultWithOwnership())
                            : SendDataIntegrationEventOutcome(std::move(result.GetError()));
}

TagResourceOutcome SupplyChainClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome SupplyChainClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateDataIntegrationFlowOutcome SupplyChainClient::UpdateDataIntegrationFlow(const UpdateDataIntegrationFlowRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegrationFlow", "Required field: InstanceId, is not set");
    return UpdateDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegrationFlow", "Required field: Name, is not set");
    return UpdateDataIntegrationFlowOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/data-integration/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-integration-flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataIntegrationFlowOutcome(result.GetResultWithOwnership())
                            : UpdateDataIntegrationFlowOutcome(std::move(result.GetError()));
}

UpdateDataLakeDatasetOutcome SupplyChainClient::UpdateDataLakeDataset(const UpdateDataLakeDatasetRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataLakeDataset", "Required field: InstanceId, is not set");
    return UpdateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataLakeDataset", "Required field: Namespace, is not set");
    return UpdateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Namespace]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataLakeDataset", "Required field: Name, is not set");
    return UpdateDataLakeDatasetOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataLakeDatasetOutcome(result.GetResultWithOwnership())
                            : UpdateDataLakeDatasetOutcome(std::move(result.GetError()));
}

UpdateDataLakeNamespaceOutcome SupplyChainClient::UpdateDataLakeNamespace(const UpdateDataLakeNamespaceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataLakeNamespace", "Required field: InstanceId, is not set");
    return UpdateDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InstanceId]", false));
  }
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataLakeNamespace", "Required field: Name, is not set");
    return UpdateDataLakeNamespaceOutcome(Aws::Client::AWSError<SupplyChainErrors>(
        SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/datalake/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataLakeNamespaceOutcome(result.GetResultWithOwnership())
                            : UpdateDataLakeNamespaceOutcome(std::move(result.GetError()));
}

UpdateInstanceOutcome SupplyChainClient::UpdateInstance(const UpdateInstanceRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInstance", "Required field: InstanceId, is not set");
    return UpdateInstanceOutcome(Aws::Client::AWSError<SupplyChainErrors>(SupplyChainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/instance/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateInstanceOutcome(result.GetResultWithOwnership()) : UpdateInstanceOutcome(std::move(result.GetError()));
}
