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
#include <aws/service-quotas/ServiceQuotasClient.h>
#include <aws/service-quotas/ServiceQuotasEndpointProvider.h>
#include <aws/service-quotas/ServiceQuotasErrorMarshaller.h>
#include <aws/service-quotas/model/AssociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/CreateSupportCaseRequest.h>
#include <aws/service-quotas/model/DeleteServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/DisassociateServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/GetAWSDefaultServiceQuotaRequest.h>
#include <aws/service-quotas/model/GetAssociationForServiceQuotaTemplateRequest.h>
#include <aws/service-quotas/model/GetAutoManagementConfigurationRequest.h>
#include <aws/service-quotas/model/GetQuotaUtilizationReportRequest.h>
#include <aws/service-quotas/model/GetRequestedServiceQuotaChangeRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaIncreaseRequestFromTemplateRequest.h>
#include <aws/service-quotas/model/GetServiceQuotaRequest.h>
#include <aws/service-quotas/model/ListAWSDefaultServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryByQuotaRequest.h>
#include <aws/service-quotas/model/ListRequestedServiceQuotaChangeHistoryRequest.h>
#include <aws/service-quotas/model/ListServiceQuotaIncreaseRequestsInTemplateRequest.h>
#include <aws/service-quotas/model/ListServiceQuotasRequest.h>
#include <aws/service-quotas/model/ListServicesRequest.h>
#include <aws/service-quotas/model/ListTagsForResourceRequest.h>
#include <aws/service-quotas/model/PutServiceQuotaIncreaseRequestIntoTemplateRequest.h>
#include <aws/service-quotas/model/RequestServiceQuotaIncreaseRequest.h>
#include <aws/service-quotas/model/StartAutoManagementRequest.h>
#include <aws/service-quotas/model/StartQuotaUtilizationReportRequest.h>
#include <aws/service-quotas/model/StopAutoManagementRequest.h>
#include <aws/service-quotas/model/TagResourceRequest.h>
#include <aws/service-quotas/model/UntagResourceRequest.h>
#include <aws/service-quotas/model/UpdateAutoManagementRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ServiceQuotas;
using namespace Aws::ServiceQuotas::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ServiceQuotas {
const char SERVICE_NAME[] = "servicequotas";
const char ALLOCATION_TAG[] = "ServiceQuotasClient";
}  // namespace ServiceQuotas
}  // namespace Aws
const char* ServiceQuotasClient::GetServiceName() { return SERVICE_NAME; }
const char* ServiceQuotasClient::GetAllocationTag() { return ALLOCATION_TAG; }

ServiceQuotasClient::ServiceQuotasClient(const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const AWSCredentials& credentials,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider,
                                         const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<ServiceQuotasEndpointProviderBase> endpointProvider,
                                         const ServiceQuotas::ServiceQuotasClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ServiceQuotasClient::ServiceQuotasClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ServiceQuotasClient::ServiceQuotasClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ServiceQuotasErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ServiceQuotasEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ServiceQuotasClient::~ServiceQuotasClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ServiceQuotasEndpointProviderBase>& ServiceQuotasClient::accessEndpointProvider() { return m_endpointProvider; }

void ServiceQuotasClient::init(const ServiceQuotas::ServiceQuotasClientConfiguration& config) {
  AWSClient::SetServiceClientName("Service Quotas");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "servicequotas");
}

void ServiceQuotasClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ServiceQuotasClient::InvokeOperationOutcome ServiceQuotasClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

AssociateServiceQuotaTemplateOutcome ServiceQuotasClient::AssociateServiceQuotaTemplate(
    const AssociateServiceQuotaTemplateRequest& request) const {
  return AssociateServiceQuotaTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateSupportCaseOutcome ServiceQuotasClient::CreateSupportCase(const CreateSupportCaseRequest& request) const {
  return CreateSupportCaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate(
    const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const {
  return DeleteServiceQuotaIncreaseRequestFromTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateServiceQuotaTemplateOutcome ServiceQuotasClient::DisassociateServiceQuotaTemplate(
    const DisassociateServiceQuotaTemplateRequest& request) const {
  return DisassociateServiceQuotaTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAWSDefaultServiceQuotaOutcome ServiceQuotasClient::GetAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest& request) const {
  return GetAWSDefaultServiceQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAssociationForServiceQuotaTemplateOutcome ServiceQuotasClient::GetAssociationForServiceQuotaTemplate(
    const GetAssociationForServiceQuotaTemplateRequest& request) const {
  return GetAssociationForServiceQuotaTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAutoManagementConfigurationOutcome ServiceQuotasClient::GetAutoManagementConfiguration(
    const GetAutoManagementConfigurationRequest& request) const {
  return GetAutoManagementConfigurationOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQuotaUtilizationReportOutcome ServiceQuotasClient::GetQuotaUtilizationReport(const GetQuotaUtilizationReportRequest& request) const {
  return GetQuotaUtilizationReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetRequestedServiceQuotaChangeOutcome ServiceQuotasClient::GetRequestedServiceQuotaChange(
    const GetRequestedServiceQuotaChangeRequest& request) const {
  return GetRequestedServiceQuotaChangeOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceQuotaOutcome ServiceQuotasClient::GetServiceQuota(const GetServiceQuotaRequest& request) const {
  return GetServiceQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate(
    const GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const {
  return GetServiceQuotaIncreaseRequestFromTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAWSDefaultServiceQuotasOutcome ServiceQuotasClient::ListAWSDefaultServiceQuotas(
    const ListAWSDefaultServiceQuotasRequest& request) const {
  return ListAWSDefaultServiceQuotasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRequestedServiceQuotaChangeHistoryOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory(
    const ListRequestedServiceQuotaChangeHistoryRequest& request) const {
  return ListRequestedServiceQuotaChangeHistoryOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota(
    const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const {
  return ListRequestedServiceQuotaChangeHistoryByQuotaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceQuotaIncreaseRequestsInTemplateOutcome ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate(
    const ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const {
  return ListServiceQuotaIncreaseRequestsInTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServiceQuotasOutcome ServiceQuotasClient::ListServiceQuotas(const ListServiceQuotasRequest& request) const {
  return ListServiceQuotasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListServicesOutcome ServiceQuotasClient::ListServices(const ListServicesRequest& request) const {
  return ListServicesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome ServiceQuotasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutServiceQuotaIncreaseRequestIntoTemplateOutcome ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate(
    const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const {
  return PutServiceQuotaIncreaseRequestIntoTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RequestServiceQuotaIncreaseOutcome ServiceQuotasClient::RequestServiceQuotaIncrease(
    const RequestServiceQuotaIncreaseRequest& request) const {
  return RequestServiceQuotaIncreaseOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartAutoManagementOutcome ServiceQuotasClient::StartAutoManagement(const StartAutoManagementRequest& request) const {
  return StartAutoManagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartQuotaUtilizationReportOutcome ServiceQuotasClient::StartQuotaUtilizationReport(
    const StartQuotaUtilizationReportRequest& request) const {
  return StartQuotaUtilizationReportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopAutoManagementOutcome ServiceQuotasClient::StopAutoManagement(const StopAutoManagementRequest& request) const {
  return StopAutoManagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome ServiceQuotasClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome ServiceQuotasClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAutoManagementOutcome ServiceQuotasClient::UpdateAutoManagement(const UpdateAutoManagementRequest& request) const {
  return UpdateAutoManagementOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
