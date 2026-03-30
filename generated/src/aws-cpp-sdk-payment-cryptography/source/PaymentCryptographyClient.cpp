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
#include <aws/payment-cryptography/PaymentCryptographyClient.h>
#include <aws/payment-cryptography/PaymentCryptographyEndpointProvider.h>
#include <aws/payment-cryptography/PaymentCryptographyErrorMarshaller.h>
#include <aws/payment-cryptography/model/AddKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/CreateAliasRequest.h>
#include <aws/payment-cryptography/model/CreateKeyRequest.h>
#include <aws/payment-cryptography/model/DeleteAliasRequest.h>
#include <aws/payment-cryptography/model/DeleteKeyRequest.h>
#include <aws/payment-cryptography/model/DisableDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/EnableDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/ExportKeyRequest.h>
#include <aws/payment-cryptography/model/GetAliasRequest.h>
#include <aws/payment-cryptography/model/GetCertificateSigningRequestRequest.h>
#include <aws/payment-cryptography/model/GetDefaultKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/GetKeyRequest.h>
#include <aws/payment-cryptography/model/GetParametersForExportRequest.h>
#include <aws/payment-cryptography/model/GetParametersForImportRequest.h>
#include <aws/payment-cryptography/model/GetPublicKeyCertificateRequest.h>
#include <aws/payment-cryptography/model/ImportKeyRequest.h>
#include <aws/payment-cryptography/model/ListAliasesRequest.h>
#include <aws/payment-cryptography/model/ListKeysRequest.h>
#include <aws/payment-cryptography/model/ListTagsForResourceRequest.h>
#include <aws/payment-cryptography/model/RemoveKeyReplicationRegionsRequest.h>
#include <aws/payment-cryptography/model/RestoreKeyRequest.h>
#include <aws/payment-cryptography/model/StartKeyUsageRequest.h>
#include <aws/payment-cryptography/model/StopKeyUsageRequest.h>
#include <aws/payment-cryptography/model/TagResourceRequest.h>
#include <aws/payment-cryptography/model/UntagResourceRequest.h>
#include <aws/payment-cryptography/model/UpdateAliasRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::PaymentCryptography;
using namespace Aws::PaymentCryptography::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace PaymentCryptography {
const char SERVICE_NAME[] = "payment-cryptography";
const char ALLOCATION_TAG[] = "PaymentCryptographyClient";
}  // namespace PaymentCryptography
}  // namespace Aws
const char* PaymentCryptographyClient::GetServiceName() { return SERVICE_NAME; }
const char* PaymentCryptographyClient::GetAllocationTag() { return ALLOCATION_TAG; }

PaymentCryptographyClient::PaymentCryptographyClient(const PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyClient::PaymentCryptographyClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider,
                                                     const PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyClient::PaymentCryptographyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<PaymentCryptographyEndpointProviderBase> endpointProvider,
                                                     const PaymentCryptography::PaymentCryptographyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
PaymentCryptographyClient::PaymentCryptographyClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyClient::PaymentCryptographyClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

PaymentCryptographyClient::PaymentCryptographyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<PaymentCryptographyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<PaymentCryptographyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
PaymentCryptographyClient::~PaymentCryptographyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<PaymentCryptographyEndpointProviderBase>& PaymentCryptographyClient::accessEndpointProvider() { return m_endpointProvider; }

void PaymentCryptographyClient::init(const PaymentCryptography::PaymentCryptographyClientConfiguration& config) {
  AWSClient::SetServiceClientName("Payment Cryptography");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "payment-cryptography");
}

void PaymentCryptographyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
PaymentCryptographyClient::InvokeOperationOutcome PaymentCryptographyClient::InvokeServiceOperation(
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

AddKeyReplicationRegionsOutcome PaymentCryptographyClient::AddKeyReplicationRegions(const AddKeyReplicationRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AddKeyReplicationRegionsOutcome(result.GetResultWithOwnership())
                            : AddKeyReplicationRegionsOutcome(std::move(result.GetError()));
}

CreateAliasOutcome PaymentCryptographyClient::CreateAlias(const CreateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateAliasOutcome(result.GetResultWithOwnership()) : CreateAliasOutcome(std::move(result.GetError()));
}

CreateKeyOutcome PaymentCryptographyClient::CreateKey(const CreateKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateKeyOutcome(result.GetResultWithOwnership()) : CreateKeyOutcome(std::move(result.GetError()));
}

DeleteAliasOutcome PaymentCryptographyClient::DeleteAlias(const DeleteAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteAliasOutcome(result.GetResultWithOwnership()) : DeleteAliasOutcome(std::move(result.GetError()));
}

DeleteKeyOutcome PaymentCryptographyClient::DeleteKey(const DeleteKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteKeyOutcome(result.GetResultWithOwnership()) : DeleteKeyOutcome(std::move(result.GetError()));
}

DisableDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::DisableDefaultKeyReplicationRegions(
    const DisableDefaultKeyReplicationRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisableDefaultKeyReplicationRegionsOutcome(result.GetResultWithOwnership())
                            : DisableDefaultKeyReplicationRegionsOutcome(std::move(result.GetError()));
}

EnableDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::EnableDefaultKeyReplicationRegions(
    const EnableDefaultKeyReplicationRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableDefaultKeyReplicationRegionsOutcome(result.GetResultWithOwnership())
                            : EnableDefaultKeyReplicationRegionsOutcome(std::move(result.GetError()));
}

ExportKeyOutcome PaymentCryptographyClient::ExportKey(const ExportKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportKeyOutcome(result.GetResultWithOwnership()) : ExportKeyOutcome(std::move(result.GetError()));
}

GetAliasOutcome PaymentCryptographyClient::GetAlias(const GetAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetAliasOutcome(result.GetResultWithOwnership()) : GetAliasOutcome(std::move(result.GetError()));
}

GetCertificateSigningRequestOutcome PaymentCryptographyClient::GetCertificateSigningRequest(
    const GetCertificateSigningRequestRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCertificateSigningRequestOutcome(result.GetResultWithOwnership())
                            : GetCertificateSigningRequestOutcome(std::move(result.GetError()));
}

GetDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::GetDefaultKeyReplicationRegions(
    const GetDefaultKeyReplicationRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDefaultKeyReplicationRegionsOutcome(result.GetResultWithOwnership())
                            : GetDefaultKeyReplicationRegionsOutcome(std::move(result.GetError()));
}

GetKeyOutcome PaymentCryptographyClient::GetKey(const GetKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetKeyOutcome(result.GetResultWithOwnership()) : GetKeyOutcome(std::move(result.GetError()));
}

GetParametersForExportOutcome PaymentCryptographyClient::GetParametersForExport(const GetParametersForExportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParametersForExportOutcome(result.GetResultWithOwnership())
                            : GetParametersForExportOutcome(std::move(result.GetError()));
}

GetParametersForImportOutcome PaymentCryptographyClient::GetParametersForImport(const GetParametersForImportRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetParametersForImportOutcome(result.GetResultWithOwnership())
                            : GetParametersForImportOutcome(std::move(result.GetError()));
}

GetPublicKeyCertificateOutcome PaymentCryptographyClient::GetPublicKeyCertificate(const GetPublicKeyCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPublicKeyCertificateOutcome(result.GetResultWithOwnership())
                            : GetPublicKeyCertificateOutcome(std::move(result.GetError()));
}

ImportKeyOutcome PaymentCryptographyClient::ImportKey(const ImportKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportKeyOutcome(result.GetResultWithOwnership()) : ImportKeyOutcome(std::move(result.GetError()));
}

ListAliasesOutcome PaymentCryptographyClient::ListAliases(const ListAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListAliasesOutcome(result.GetResultWithOwnership()) : ListAliasesOutcome(std::move(result.GetError()));
}

ListKeysOutcome PaymentCryptographyClient::ListKeys(const ListKeysRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListKeysOutcome(result.GetResultWithOwnership()) : ListKeysOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome PaymentCryptographyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RemoveKeyReplicationRegionsOutcome PaymentCryptographyClient::RemoveKeyReplicationRegions(
    const RemoveKeyReplicationRegionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RemoveKeyReplicationRegionsOutcome(result.GetResultWithOwnership())
                            : RemoveKeyReplicationRegionsOutcome(std::move(result.GetError()));
}

RestoreKeyOutcome PaymentCryptographyClient::RestoreKey(const RestoreKeyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreKeyOutcome(result.GetResultWithOwnership()) : RestoreKeyOutcome(std::move(result.GetError()));
}

StartKeyUsageOutcome PaymentCryptographyClient::StartKeyUsage(const StartKeyUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartKeyUsageOutcome(result.GetResultWithOwnership()) : StartKeyUsageOutcome(std::move(result.GetError()));
}

StopKeyUsageOutcome PaymentCryptographyClient::StopKeyUsage(const StopKeyUsageRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopKeyUsageOutcome(result.GetResultWithOwnership()) : StopKeyUsageOutcome(std::move(result.GetError()));
}

TagResourceOutcome PaymentCryptographyClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome PaymentCryptographyClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAliasOutcome PaymentCryptographyClient::UpdateAlias(const UpdateAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateAliasOutcome(result.GetResultWithOwnership()) : UpdateAliasOutcome(std::move(result.GetError()));
}
