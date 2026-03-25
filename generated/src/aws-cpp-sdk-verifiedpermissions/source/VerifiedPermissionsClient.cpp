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
#include <aws/verifiedpermissions/VerifiedPermissionsClient.h>
#include <aws/verifiedpermissions/VerifiedPermissionsEndpointProvider.h>
#include <aws/verifiedpermissions/VerifiedPermissionsErrorMarshaller.h>
#include <aws/verifiedpermissions/model/BatchGetPolicyRequest.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedRequest.h>
#include <aws/verifiedpermissions/model/BatchIsAuthorizedWithTokenRequest.h>
#include <aws/verifiedpermissions/model/CreateIdentitySourceRequest.h>
#include <aws/verifiedpermissions/model/CreatePolicyRequest.h>
#include <aws/verifiedpermissions/model/CreatePolicyStoreAliasRequest.h>
#include <aws/verifiedpermissions/model/CreatePolicyStoreRequest.h>
#include <aws/verifiedpermissions/model/CreatePolicyTemplateRequest.h>
#include <aws/verifiedpermissions/model/DeleteIdentitySourceRequest.h>
#include <aws/verifiedpermissions/model/DeletePolicyRequest.h>
#include <aws/verifiedpermissions/model/DeletePolicyStoreAliasRequest.h>
#include <aws/verifiedpermissions/model/DeletePolicyStoreRequest.h>
#include <aws/verifiedpermissions/model/DeletePolicyTemplateRequest.h>
#include <aws/verifiedpermissions/model/GetIdentitySourceRequest.h>
#include <aws/verifiedpermissions/model/GetPolicyRequest.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreAliasRequest.h>
#include <aws/verifiedpermissions/model/GetPolicyStoreRequest.h>
#include <aws/verifiedpermissions/model/GetPolicyTemplateRequest.h>
#include <aws/verifiedpermissions/model/GetSchemaRequest.h>
#include <aws/verifiedpermissions/model/IsAuthorizedRequest.h>
#include <aws/verifiedpermissions/model/IsAuthorizedWithTokenRequest.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesRequest.h>
#include <aws/verifiedpermissions/model/ListPoliciesRequest.h>
#include <aws/verifiedpermissions/model/ListPolicyStoreAliasesRequest.h>
#include <aws/verifiedpermissions/model/ListPolicyStoresRequest.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesRequest.h>
#include <aws/verifiedpermissions/model/ListTagsForResourceRequest.h>
#include <aws/verifiedpermissions/model/PutSchemaRequest.h>
#include <aws/verifiedpermissions/model/TagResourceRequest.h>
#include <aws/verifiedpermissions/model/UntagResourceRequest.h>
#include <aws/verifiedpermissions/model/UpdateIdentitySourceRequest.h>
#include <aws/verifiedpermissions/model/UpdatePolicyRequest.h>
#include <aws/verifiedpermissions/model/UpdatePolicyStoreRequest.h>
#include <aws/verifiedpermissions/model/UpdatePolicyTemplateRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::VerifiedPermissions;
using namespace Aws::VerifiedPermissions::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace VerifiedPermissions {
const char SERVICE_NAME[] = "verifiedpermissions";
const char ALLOCATION_TAG[] = "VerifiedPermissionsClient";
}  // namespace VerifiedPermissions
}  // namespace Aws
const char* VerifiedPermissionsClient::GetServiceName() { return SERVICE_NAME; }
const char* VerifiedPermissionsClient::GetAllocationTag() { return ALLOCATION_TAG; }

VerifiedPermissionsClient::VerifiedPermissionsClient(const VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VerifiedPermissionsClient::VerifiedPermissionsClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider,
                                                     const VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VerifiedPermissionsClient::VerifiedPermissionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider,
                                                     const VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
VerifiedPermissionsClient::VerifiedPermissionsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VerifiedPermissionsClient::VerifiedPermissionsClient(const AWSCredentials& credentials,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

VerifiedPermissionsClient::VerifiedPermissionsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<VerifiedPermissionsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<VerifiedPermissionsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
VerifiedPermissionsClient::~VerifiedPermissionsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<VerifiedPermissionsEndpointProviderBase>& VerifiedPermissionsClient::accessEndpointProvider() { return m_endpointProvider; }

void VerifiedPermissionsClient::init(const VerifiedPermissions::VerifiedPermissionsClientConfiguration& config) {
  AWSClient::SetServiceClientName("VerifiedPermissions");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "verifiedpermissions");
}

void VerifiedPermissionsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
VerifiedPermissionsClient::InvokeOperationOutcome VerifiedPermissionsClient::InvokeServiceOperation(
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

BatchGetPolicyOutcome VerifiedPermissionsClient::BatchGetPolicy(const BatchGetPolicyRequest& request) const {
  return BatchGetPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchIsAuthorizedOutcome VerifiedPermissionsClient::BatchIsAuthorized(const BatchIsAuthorizedRequest& request) const {
  return BatchIsAuthorizedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchIsAuthorizedWithTokenOutcome VerifiedPermissionsClient::BatchIsAuthorizedWithToken(
    const BatchIsAuthorizedWithTokenRequest& request) const {
  return BatchIsAuthorizedWithTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIdentitySourceOutcome VerifiedPermissionsClient::CreateIdentitySource(const CreateIdentitySourceRequest& request) const {
  return CreateIdentitySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyOutcome VerifiedPermissionsClient::CreatePolicy(const CreatePolicyRequest& request) const {
  return CreatePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyStoreOutcome VerifiedPermissionsClient::CreatePolicyStore(const CreatePolicyStoreRequest& request) const {
  return CreatePolicyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyStoreAliasOutcome VerifiedPermissionsClient::CreatePolicyStoreAlias(const CreatePolicyStoreAliasRequest& request) const {
  return CreatePolicyStoreAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePolicyTemplateOutcome VerifiedPermissionsClient::CreatePolicyTemplate(const CreatePolicyTemplateRequest& request) const {
  return CreatePolicyTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteIdentitySourceOutcome VerifiedPermissionsClient::DeleteIdentitySource(const DeleteIdentitySourceRequest& request) const {
  return DeleteIdentitySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyOutcome VerifiedPermissionsClient::DeletePolicy(const DeletePolicyRequest& request) const {
  return DeletePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyStoreOutcome VerifiedPermissionsClient::DeletePolicyStore(const DeletePolicyStoreRequest& request) const {
  return DeletePolicyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyStoreAliasOutcome VerifiedPermissionsClient::DeletePolicyStoreAlias(const DeletePolicyStoreAliasRequest& request) const {
  return DeletePolicyStoreAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

DeletePolicyTemplateOutcome VerifiedPermissionsClient::DeletePolicyTemplate(const DeletePolicyTemplateRequest& request) const {
  return DeletePolicyTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetIdentitySourceOutcome VerifiedPermissionsClient::GetIdentitySource(const GetIdentitySourceRequest& request) const {
  return GetIdentitySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyOutcome VerifiedPermissionsClient::GetPolicy(const GetPolicyRequest& request) const {
  return GetPolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyStoreOutcome VerifiedPermissionsClient::GetPolicyStore(const GetPolicyStoreRequest& request) const {
  return GetPolicyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyStoreAliasOutcome VerifiedPermissionsClient::GetPolicyStoreAlias(const GetPolicyStoreAliasRequest& request) const {
  return GetPolicyStoreAliasOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetPolicyTemplateOutcome VerifiedPermissionsClient::GetPolicyTemplate(const GetPolicyTemplateRequest& request) const {
  return GetPolicyTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

GetSchemaOutcome VerifiedPermissionsClient::GetSchema(const GetSchemaRequest& request) const {
  return GetSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IsAuthorizedOutcome VerifiedPermissionsClient::IsAuthorized(const IsAuthorizedRequest& request) const {
  return IsAuthorizedOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

IsAuthorizedWithTokenOutcome VerifiedPermissionsClient::IsAuthorizedWithToken(const IsAuthorizedWithTokenRequest& request) const {
  return IsAuthorizedWithTokenOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListIdentitySourcesOutcome VerifiedPermissionsClient::ListIdentitySources(const ListIdentitySourcesRequest& request) const {
  return ListIdentitySourcesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPoliciesOutcome VerifiedPermissionsClient::ListPolicies(const ListPoliciesRequest& request) const {
  return ListPoliciesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPolicyStoreAliasesOutcome VerifiedPermissionsClient::ListPolicyStoreAliases(const ListPolicyStoreAliasesRequest& request) const {
  return ListPolicyStoreAliasesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPolicyStoresOutcome VerifiedPermissionsClient::ListPolicyStores(const ListPolicyStoresRequest& request) const {
  return ListPolicyStoresOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPolicyTemplatesOutcome VerifiedPermissionsClient::ListPolicyTemplates(const ListPolicyTemplatesRequest& request) const {
  return ListPolicyTemplatesOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTagsForResourceOutcome VerifiedPermissionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  return ListTagsForResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

PutSchemaOutcome VerifiedPermissionsClient::PutSchema(const PutSchemaRequest& request) const {
  return PutSchemaOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome VerifiedPermissionsClient::TagResource(const TagResourceRequest& request) const {
  return TagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome VerifiedPermissionsClient::UntagResource(const UntagResourceRequest& request) const {
  return UntagResourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateIdentitySourceOutcome VerifiedPermissionsClient::UpdateIdentitySource(const UpdateIdentitySourceRequest& request) const {
  return UpdateIdentitySourceOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePolicyOutcome VerifiedPermissionsClient::UpdatePolicy(const UpdatePolicyRequest& request) const {
  return UpdatePolicyOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePolicyStoreOutcome VerifiedPermissionsClient::UpdatePolicyStore(const UpdatePolicyStoreRequest& request) const {
  return UpdatePolicyStoreOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePolicyTemplateOutcome VerifiedPermissionsClient::UpdatePolicyTemplate(const UpdatePolicyTemplateRequest& request) const {
  return UpdatePolicyTemplateOutcome{InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST)};
}
