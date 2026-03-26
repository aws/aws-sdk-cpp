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
  return AddKeyReplicationRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAliasOutcome PaymentCryptographyClient::CreateAlias(const CreateAliasRequest& request) const {
  return CreateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateKeyOutcome PaymentCryptographyClient::CreateKey(const CreateKeyRequest& request) const {
  return CreateKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAliasOutcome PaymentCryptographyClient::DeleteAlias(const DeleteAliasRequest& request) const {
  return DeleteAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteKeyOutcome PaymentCryptographyClient::DeleteKey(const DeleteKeyRequest& request) const {
  return DeleteKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DisableDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::DisableDefaultKeyReplicationRegions(
    const DisableDefaultKeyReplicationRegionsRequest& request) const {
  return DisableDefaultKeyReplicationRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

EnableDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::EnableDefaultKeyReplicationRegions(
    const EnableDefaultKeyReplicationRegionsRequest& request) const {
  return EnableDefaultKeyReplicationRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportKeyOutcome PaymentCryptographyClient::ExportKey(const ExportKeyRequest& request) const {
  return ExportKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAliasOutcome PaymentCryptographyClient::GetAlias(const GetAliasRequest& request) const {
  return GetAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCertificateSigningRequestOutcome PaymentCryptographyClient::GetCertificateSigningRequest(
    const GetCertificateSigningRequestRequest& request) const {
  return GetCertificateSigningRequestOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDefaultKeyReplicationRegionsOutcome PaymentCryptographyClient::GetDefaultKeyReplicationRegions(
    const GetDefaultKeyReplicationRegionsRequest& request) const {
  return GetDefaultKeyReplicationRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetKeyOutcome PaymentCryptographyClient::GetKey(const GetKeyRequest& request) const {
  return GetKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParametersForExportOutcome PaymentCryptographyClient::GetParametersForExport(const GetParametersForExportRequest& request) const {
  return GetParametersForExportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetParametersForImportOutcome PaymentCryptographyClient::GetParametersForImport(const GetParametersForImportRequest& request) const {
  return GetParametersForImportOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPublicKeyCertificateOutcome PaymentCryptographyClient::GetPublicKeyCertificate(const GetPublicKeyCertificateRequest& request) const {
  return GetPublicKeyCertificateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ImportKeyOutcome PaymentCryptographyClient::ImportKey(const ImportKeyRequest& request) const {
  return ImportKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListAliasesOutcome PaymentCryptographyClient::ListAliases(const ListAliasesRequest& request) const {
  return ListAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListKeysOutcome PaymentCryptographyClient::ListKeys(const ListKeysRequest& request) const {
  return ListKeysOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome PaymentCryptographyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveKeyReplicationRegionsOutcome PaymentCryptographyClient::RemoveKeyReplicationRegions(
    const RemoveKeyReplicationRegionsRequest& request) const {
  return RemoveKeyReplicationRegionsOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

RestoreKeyOutcome PaymentCryptographyClient::RestoreKey(const RestoreKeyRequest& request) const {
  return RestoreKeyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StartKeyUsageOutcome PaymentCryptographyClient::StartKeyUsage(const StartKeyUsageRequest& request) const {
  return StartKeyUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

StopKeyUsageOutcome PaymentCryptographyClient::StopKeyUsage(const StopKeyUsageRequest& request) const {
  return StopKeyUsageOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome PaymentCryptographyClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome PaymentCryptographyClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateAliasOutcome PaymentCryptographyClient::UpdateAlias(const UpdateAliasRequest& request) const {
  return UpdateAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
