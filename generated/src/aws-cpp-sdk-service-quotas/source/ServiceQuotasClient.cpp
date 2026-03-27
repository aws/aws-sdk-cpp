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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateServiceQuotaTemplateOutcome(result.GetResultWithOwnership())
                            : AssociateServiceQuotaTemplateOutcome(std::move(result.GetError()));
}

CreateSupportCaseOutcome ServiceQuotasClient::CreateSupportCase(const CreateSupportCaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateSupportCaseOutcome(result.GetResultWithOwnership())
                            : CreateSupportCaseOutcome(std::move(result.GetError()));
}

DeleteServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::DeleteServiceQuotaIncreaseRequestFromTemplate(
    const DeleteServiceQuotaIncreaseRequestFromTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteServiceQuotaIncreaseRequestFromTemplateOutcome(result.GetResultWithOwnership())
                            : DeleteServiceQuotaIncreaseRequestFromTemplateOutcome(std::move(result.GetError()));
}

DisassociateServiceQuotaTemplateOutcome ServiceQuotasClient::DisassociateServiceQuotaTemplate(
    const DisassociateServiceQuotaTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateServiceQuotaTemplateOutcome(result.GetResultWithOwnership())
                            : DisassociateServiceQuotaTemplateOutcome(std::move(result.GetError()));
}

GetAWSDefaultServiceQuotaOutcome ServiceQuotasClient::GetAWSDefaultServiceQuota(const GetAWSDefaultServiceQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAWSDefaultServiceQuotaOutcome(result.GetResultWithOwnership())
                            : GetAWSDefaultServiceQuotaOutcome(std::move(result.GetError()));
}

GetAssociationForServiceQuotaTemplateOutcome ServiceQuotasClient::GetAssociationForServiceQuotaTemplate(
    const GetAssociationForServiceQuotaTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAssociationForServiceQuotaTemplateOutcome(result.GetResultWithOwnership())
                            : GetAssociationForServiceQuotaTemplateOutcome(std::move(result.GetError()));
}

GetAutoManagementConfigurationOutcome ServiceQuotasClient::GetAutoManagementConfiguration(
    const GetAutoManagementConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAutoManagementConfigurationOutcome(result.GetResultWithOwnership())
                            : GetAutoManagementConfigurationOutcome(std::move(result.GetError()));
}

GetQuotaUtilizationReportOutcome ServiceQuotasClient::GetQuotaUtilizationReport(const GetQuotaUtilizationReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetQuotaUtilizationReportOutcome(result.GetResultWithOwnership())
                            : GetQuotaUtilizationReportOutcome(std::move(result.GetError()));
}

GetRequestedServiceQuotaChangeOutcome ServiceQuotasClient::GetRequestedServiceQuotaChange(
    const GetRequestedServiceQuotaChangeRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetRequestedServiceQuotaChangeOutcome(result.GetResultWithOwnership())
                            : GetRequestedServiceQuotaChangeOutcome(std::move(result.GetError()));
}

GetServiceQuotaOutcome ServiceQuotasClient::GetServiceQuota(const GetServiceQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceQuotaOutcome(result.GetResultWithOwnership())
                            : GetServiceQuotaOutcome(std::move(result.GetError()));
}

GetServiceQuotaIncreaseRequestFromTemplateOutcome ServiceQuotasClient::GetServiceQuotaIncreaseRequestFromTemplate(
    const GetServiceQuotaIncreaseRequestFromTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetServiceQuotaIncreaseRequestFromTemplateOutcome(result.GetResultWithOwnership())
                            : GetServiceQuotaIncreaseRequestFromTemplateOutcome(std::move(result.GetError()));
}

ListAWSDefaultServiceQuotasOutcome ServiceQuotasClient::ListAWSDefaultServiceQuotas(
    const ListAWSDefaultServiceQuotasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAWSDefaultServiceQuotasOutcome(result.GetResultWithOwnership())
                            : ListAWSDefaultServiceQuotasOutcome(std::move(result.GetError()));
}

ListRequestedServiceQuotaChangeHistoryOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistory(
    const ListRequestedServiceQuotaChangeHistoryRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRequestedServiceQuotaChangeHistoryOutcome(result.GetResultWithOwnership())
                            : ListRequestedServiceQuotaChangeHistoryOutcome(std::move(result.GetError()));
}

ListRequestedServiceQuotaChangeHistoryByQuotaOutcome ServiceQuotasClient::ListRequestedServiceQuotaChangeHistoryByQuota(
    const ListRequestedServiceQuotaChangeHistoryByQuotaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListRequestedServiceQuotaChangeHistoryByQuotaOutcome(result.GetResultWithOwnership())
                            : ListRequestedServiceQuotaChangeHistoryByQuotaOutcome(std::move(result.GetError()));
}

ListServiceQuotaIncreaseRequestsInTemplateOutcome ServiceQuotasClient::ListServiceQuotaIncreaseRequestsInTemplate(
    const ListServiceQuotaIncreaseRequestsInTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceQuotaIncreaseRequestsInTemplateOutcome(result.GetResultWithOwnership())
                            : ListServiceQuotaIncreaseRequestsInTemplateOutcome(std::move(result.GetError()));
}

ListServiceQuotasOutcome ServiceQuotasClient::ListServiceQuotas(const ListServiceQuotasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServiceQuotasOutcome(result.GetResultWithOwnership())
                            : ListServiceQuotasOutcome(std::move(result.GetError()));
}

ListServicesOutcome ServiceQuotasClient::ListServices(const ListServicesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListServicesOutcome(result.GetResultWithOwnership()) : ListServicesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ServiceQuotasClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutServiceQuotaIncreaseRequestIntoTemplateOutcome ServiceQuotasClient::PutServiceQuotaIncreaseRequestIntoTemplate(
    const PutServiceQuotaIncreaseRequestIntoTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutServiceQuotaIncreaseRequestIntoTemplateOutcome(result.GetResultWithOwnership())
                            : PutServiceQuotaIncreaseRequestIntoTemplateOutcome(std::move(result.GetError()));
}

RequestServiceQuotaIncreaseOutcome ServiceQuotasClient::RequestServiceQuotaIncrease(
    const RequestServiceQuotaIncreaseRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RequestServiceQuotaIncreaseOutcome(result.GetResultWithOwnership())
                            : RequestServiceQuotaIncreaseOutcome(std::move(result.GetError()));
}

StartAutoManagementOutcome ServiceQuotasClient::StartAutoManagement(const StartAutoManagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutoManagementOutcome(result.GetResultWithOwnership())
                            : StartAutoManagementOutcome(std::move(result.GetError()));
}

StartQuotaUtilizationReportOutcome ServiceQuotasClient::StartQuotaUtilizationReport(
    const StartQuotaUtilizationReportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQuotaUtilizationReportOutcome(result.GetResultWithOwnership())
                            : StartQuotaUtilizationReportOutcome(std::move(result.GetError()));
}

StopAutoManagementOutcome ServiceQuotasClient::StopAutoManagement(const StopAutoManagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopAutoManagementOutcome(result.GetResultWithOwnership())
                            : StopAutoManagementOutcome(std::move(result.GetError()));
}

TagResourceOutcome ServiceQuotasClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ServiceQuotasClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAutoManagementOutcome ServiceQuotasClient::UpdateAutoManagement(const UpdateAutoManagementRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAutoManagementOutcome(result.GetResultWithOwnership())
                            : UpdateAutoManagementOutcome(std::move(result.GetError()));
}
