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
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetPolicyOutcome(result.GetResultWithOwnership()) : BatchGetPolicyOutcome(std::move(result.GetError()));
}

BatchIsAuthorizedOutcome VerifiedPermissionsClient::BatchIsAuthorized(const BatchIsAuthorizedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchIsAuthorizedOutcome(result.GetResultWithOwnership())
                            : BatchIsAuthorizedOutcome(std::move(result.GetError()));
}

BatchIsAuthorizedWithTokenOutcome VerifiedPermissionsClient::BatchIsAuthorizedWithToken(
    const BatchIsAuthorizedWithTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchIsAuthorizedWithTokenOutcome(result.GetResultWithOwnership())
                            : BatchIsAuthorizedWithTokenOutcome(std::move(result.GetError()));
}

CreateIdentitySourceOutcome VerifiedPermissionsClient::CreateIdentitySource(const CreateIdentitySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateIdentitySourceOutcome(result.GetResultWithOwnership())
                            : CreateIdentitySourceOutcome(std::move(result.GetError()));
}

CreatePolicyOutcome VerifiedPermissionsClient::CreatePolicy(const CreatePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyOutcome(result.GetResultWithOwnership()) : CreatePolicyOutcome(std::move(result.GetError()));
}

CreatePolicyStoreOutcome VerifiedPermissionsClient::CreatePolicyStore(const CreatePolicyStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyStoreOutcome(result.GetResultWithOwnership())
                            : CreatePolicyStoreOutcome(std::move(result.GetError()));
}

CreatePolicyStoreAliasOutcome VerifiedPermissionsClient::CreatePolicyStoreAlias(const CreatePolicyStoreAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyStoreAliasOutcome(result.GetResultWithOwnership())
                            : CreatePolicyStoreAliasOutcome(std::move(result.GetError()));
}

CreatePolicyTemplateOutcome VerifiedPermissionsClient::CreatePolicyTemplate(const CreatePolicyTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePolicyTemplateOutcome(result.GetResultWithOwnership())
                            : CreatePolicyTemplateOutcome(std::move(result.GetError()));
}

DeleteIdentitySourceOutcome VerifiedPermissionsClient::DeleteIdentitySource(const DeleteIdentitySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteIdentitySourceOutcome(result.GetResultWithOwnership())
                            : DeleteIdentitySourceOutcome(std::move(result.GetError()));
}

DeletePolicyOutcome VerifiedPermissionsClient::DeletePolicy(const DeletePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyOutcome(result.GetResultWithOwnership()) : DeletePolicyOutcome(std::move(result.GetError()));
}

DeletePolicyStoreOutcome VerifiedPermissionsClient::DeletePolicyStore(const DeletePolicyStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyStoreOutcome(result.GetResultWithOwnership())
                            : DeletePolicyStoreOutcome(std::move(result.GetError()));
}

DeletePolicyStoreAliasOutcome VerifiedPermissionsClient::DeletePolicyStoreAlias(const DeletePolicyStoreAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyStoreAliasOutcome(result.GetResultWithOwnership())
                            : DeletePolicyStoreAliasOutcome(std::move(result.GetError()));
}

DeletePolicyTemplateOutcome VerifiedPermissionsClient::DeletePolicyTemplate(const DeletePolicyTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeletePolicyTemplateOutcome(result.GetResultWithOwnership())
                            : DeletePolicyTemplateOutcome(std::move(result.GetError()));
}

GetIdentitySourceOutcome VerifiedPermissionsClient::GetIdentitySource(const GetIdentitySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetIdentitySourceOutcome(result.GetResultWithOwnership())
                            : GetIdentitySourceOutcome(std::move(result.GetError()));
}

GetPolicyOutcome VerifiedPermissionsClient::GetPolicy(const GetPolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyOutcome(result.GetResultWithOwnership()) : GetPolicyOutcome(std::move(result.GetError()));
}

GetPolicyStoreOutcome VerifiedPermissionsClient::GetPolicyStore(const GetPolicyStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyStoreOutcome(result.GetResultWithOwnership()) : GetPolicyStoreOutcome(std::move(result.GetError()));
}

GetPolicyStoreAliasOutcome VerifiedPermissionsClient::GetPolicyStoreAlias(const GetPolicyStoreAliasRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyStoreAliasOutcome(result.GetResultWithOwnership())
                            : GetPolicyStoreAliasOutcome(std::move(result.GetError()));
}

GetPolicyTemplateOutcome VerifiedPermissionsClient::GetPolicyTemplate(const GetPolicyTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPolicyTemplateOutcome(result.GetResultWithOwnership())
                            : GetPolicyTemplateOutcome(std::move(result.GetError()));
}

GetSchemaOutcome VerifiedPermissionsClient::GetSchema(const GetSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetSchemaOutcome(result.GetResultWithOwnership()) : GetSchemaOutcome(std::move(result.GetError()));
}

IsAuthorizedOutcome VerifiedPermissionsClient::IsAuthorized(const IsAuthorizedRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IsAuthorizedOutcome(result.GetResultWithOwnership()) : IsAuthorizedOutcome(std::move(result.GetError()));
}

IsAuthorizedWithTokenOutcome VerifiedPermissionsClient::IsAuthorizedWithToken(const IsAuthorizedWithTokenRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? IsAuthorizedWithTokenOutcome(result.GetResultWithOwnership())
                            : IsAuthorizedWithTokenOutcome(std::move(result.GetError()));
}

ListIdentitySourcesOutcome VerifiedPermissionsClient::ListIdentitySources(const ListIdentitySourcesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListIdentitySourcesOutcome(result.GetResultWithOwnership())
                            : ListIdentitySourcesOutcome(std::move(result.GetError()));
}

ListPoliciesOutcome VerifiedPermissionsClient::ListPolicies(const ListPoliciesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPoliciesOutcome(result.GetResultWithOwnership()) : ListPoliciesOutcome(std::move(result.GetError()));
}

ListPolicyStoreAliasesOutcome VerifiedPermissionsClient::ListPolicyStoreAliases(const ListPolicyStoreAliasesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyStoreAliasesOutcome(result.GetResultWithOwnership())
                            : ListPolicyStoreAliasesOutcome(std::move(result.GetError()));
}

ListPolicyStoresOutcome VerifiedPermissionsClient::ListPolicyStores(const ListPolicyStoresRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyStoresOutcome(result.GetResultWithOwnership())
                            : ListPolicyStoresOutcome(std::move(result.GetError()));
}

ListPolicyTemplatesOutcome VerifiedPermissionsClient::ListPolicyTemplates(const ListPolicyTemplatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPolicyTemplatesOutcome(result.GetResultWithOwnership())
                            : ListPolicyTemplatesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome VerifiedPermissionsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PutSchemaOutcome VerifiedPermissionsClient::PutSchema(const PutSchemaRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PutSchemaOutcome(result.GetResultWithOwnership()) : PutSchemaOutcome(std::move(result.GetError()));
}

TagResourceOutcome VerifiedPermissionsClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome VerifiedPermissionsClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateIdentitySourceOutcome VerifiedPermissionsClient::UpdateIdentitySource(const UpdateIdentitySourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIdentitySourceOutcome(result.GetResultWithOwnership())
                            : UpdateIdentitySourceOutcome(std::move(result.GetError()));
}

UpdatePolicyOutcome VerifiedPermissionsClient::UpdatePolicy(const UpdatePolicyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePolicyOutcome(result.GetResultWithOwnership()) : UpdatePolicyOutcome(std::move(result.GetError()));
}

UpdatePolicyStoreOutcome VerifiedPermissionsClient::UpdatePolicyStore(const UpdatePolicyStoreRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePolicyStoreOutcome(result.GetResultWithOwnership())
                            : UpdatePolicyStoreOutcome(std::move(result.GetError()));
}

UpdatePolicyTemplateOutcome VerifiedPermissionsClient::UpdatePolicyTemplate(const UpdatePolicyTemplateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdatePolicyTemplateOutcome(result.GetResultWithOwnership())
                            : UpdatePolicyTemplateOutcome(std::move(result.GetError()));
}
