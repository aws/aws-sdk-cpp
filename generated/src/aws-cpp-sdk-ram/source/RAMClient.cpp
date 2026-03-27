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
#include <aws/ram/RAMClient.h>
#include <aws/ram/RAMEndpointProvider.h>
#include <aws/ram/RAMErrorMarshaller.h>
#include <aws/ram/model/AcceptResourceShareInvitationRequest.h>
#include <aws/ram/model/AssociateResourceSharePermissionRequest.h>
#include <aws/ram/model/AssociateResourceShareRequest.h>
#include <aws/ram/model/CreatePermissionRequest.h>
#include <aws/ram/model/CreatePermissionVersionRequest.h>
#include <aws/ram/model/CreateResourceShareRequest.h>
#include <aws/ram/model/DeletePermissionRequest.h>
#include <aws/ram/model/DeletePermissionVersionRequest.h>
#include <aws/ram/model/DeleteResourceShareRequest.h>
#include <aws/ram/model/DisassociateResourceSharePermissionRequest.h>
#include <aws/ram/model/DisassociateResourceShareRequest.h>
#include <aws/ram/model/EnableSharingWithAwsOrganizationRequest.h>
#include <aws/ram/model/GetPermissionRequest.h>
#include <aws/ram/model/GetResourcePoliciesRequest.h>
#include <aws/ram/model/GetResourceShareAssociationsRequest.h>
#include <aws/ram/model/GetResourceShareInvitationsRequest.h>
#include <aws/ram/model/GetResourceSharesRequest.h>
#include <aws/ram/model/ListPendingInvitationResourcesRequest.h>
#include <aws/ram/model/ListPermissionAssociationsRequest.h>
#include <aws/ram/model/ListPermissionVersionsRequest.h>
#include <aws/ram/model/ListPermissionsRequest.h>
#include <aws/ram/model/ListPrincipalsRequest.h>
#include <aws/ram/model/ListReplacePermissionAssociationsWorkRequest.h>
#include <aws/ram/model/ListResourceSharePermissionsRequest.h>
#include <aws/ram/model/ListResourceTypesRequest.h>
#include <aws/ram/model/ListResourcesRequest.h>
#include <aws/ram/model/ListSourceAssociationsRequest.h>
#include <aws/ram/model/PromotePermissionCreatedFromPolicyRequest.h>
#include <aws/ram/model/PromoteResourceShareCreatedFromPolicyRequest.h>
#include <aws/ram/model/RejectResourceShareInvitationRequest.h>
#include <aws/ram/model/ReplacePermissionAssociationsRequest.h>
#include <aws/ram/model/SetDefaultPermissionVersionRequest.h>
#include <aws/ram/model/TagResourceRequest.h>
#include <aws/ram/model/UntagResourceRequest.h>
#include <aws/ram/model/UpdateResourceShareRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::RAM;
using namespace Aws::RAM::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace RAM {
const char SERVICE_NAME[] = "ram";
const char ALLOCATION_TAG[] = "RAMClient";
}  // namespace RAM
}  // namespace Aws
const char* RAMClient::GetServiceName() { return SERVICE_NAME; }
const char* RAMClient::GetAllocationTag() { return ALLOCATION_TAG; }

RAMClient::RAMClient(const RAM::RAMClientConfiguration& clientConfiguration, std::shared_ptr<RAMEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RAMClient::RAMClient(const AWSCredentials& credentials, std::shared_ptr<RAMEndpointProviderBase> endpointProvider,
                     const RAM::RAMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RAMClient::RAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     std::shared_ptr<RAMEndpointProviderBase> endpointProvider, const RAM::RAMClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
RAMClient::RAMClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RAMClient::RAMClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

RAMClient::RAMClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<RAMErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<RAMEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
RAMClient::~RAMClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<RAMEndpointProviderBase>& RAMClient::accessEndpointProvider() { return m_endpointProvider; }

void RAMClient::init(const RAM::RAMClientConfiguration& config) {
  AWSClient::SetServiceClientName("RAM");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "ram");
}

void RAMClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
RAMClient::InvokeOperationOutcome RAMClient::InvokeServiceOperation(
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

AcceptResourceShareInvitationOutcome RAMClient::AcceptResourceShareInvitation(const AcceptResourceShareInvitationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/acceptresourceshareinvitation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptResourceShareInvitationOutcome(result.GetResultWithOwnership())
                            : AcceptResourceShareInvitationOutcome(std::move(result.GetError()));
}

AssociateResourceShareOutcome RAMClient::AssociateResourceShare(const AssociateResourceShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateresourceshare");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateResourceShareOutcome(result.GetResultWithOwnership())
                            : AssociateResourceShareOutcome(std::move(result.GetError()));
}

AssociateResourceSharePermissionOutcome RAMClient::AssociateResourceSharePermission(
    const AssociateResourceSharePermissionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateresourcesharepermission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateResourceSharePermissionOutcome(result.GetResultWithOwnership())
                            : AssociateResourceSharePermissionOutcome(std::move(result.GetError()));
}

CreatePermissionOutcome RAMClient::CreatePermission(const CreatePermissionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createpermission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePermissionOutcome(result.GetResultWithOwnership())
                            : CreatePermissionOutcome(std::move(result.GetError()));
}

CreatePermissionVersionOutcome RAMClient::CreatePermissionVersion(const CreatePermissionVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createpermissionversion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePermissionVersionOutcome(result.GetResultWithOwnership())
                            : CreatePermissionVersionOutcome(std::move(result.GetError()));
}

CreateResourceShareOutcome RAMClient::CreateResourceShare(const CreateResourceShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/createresourceshare");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateResourceShareOutcome(result.GetResultWithOwnership())
                            : CreateResourceShareOutcome(std::move(result.GetError()));
}

DeletePermissionOutcome RAMClient::DeletePermission(const DeletePermissionRequest& request) const {
  if (!request.PermissionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePermission", "Required field: PermissionArn, is not set");
    return DeletePermissionOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [PermissionArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deletepermission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePermissionOutcome(result.GetResultWithOwnership())
                            : DeletePermissionOutcome(std::move(result.GetError()));
}

DeletePermissionVersionOutcome RAMClient::DeletePermissionVersion(const DeletePermissionVersionRequest& request) const {
  if (!request.PermissionArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePermissionVersion", "Required field: PermissionArn, is not set");
    return DeletePermissionVersionOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PermissionArn]", false));
  }
  if (!request.PermissionVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePermissionVersion", "Required field: PermissionVersion, is not set");
    return DeletePermissionVersionOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [PermissionVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deletepermissionversion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeletePermissionVersionOutcome(result.GetResultWithOwnership())
                            : DeletePermissionVersionOutcome(std::move(result.GetError()));
}

DeleteResourceShareOutcome RAMClient::DeleteResourceShare(const DeleteResourceShareRequest& request) const {
  if (!request.ResourceShareArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteResourceShare", "Required field: ResourceShareArn, is not set");
    return DeleteResourceShareOutcome(Aws::Client::AWSError<RAMErrors>(RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceShareArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/deleteresourceshare");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteResourceShareOutcome(result.GetResultWithOwnership())
                            : DeleteResourceShareOutcome(std::move(result.GetError()));
}

DisassociateResourceShareOutcome RAMClient::DisassociateResourceShare(const DisassociateResourceShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateresourceshare");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateResourceShareOutcome(result.GetResultWithOwnership())
                            : DisassociateResourceShareOutcome(std::move(result.GetError()));
}

DisassociateResourceSharePermissionOutcome RAMClient::DisassociateResourceSharePermission(
    const DisassociateResourceSharePermissionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateresourcesharepermission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateResourceSharePermissionOutcome(result.GetResultWithOwnership())
                            : DisassociateResourceSharePermissionOutcome(std::move(result.GetError()));
}

EnableSharingWithAwsOrganizationOutcome RAMClient::EnableSharingWithAwsOrganization(
    const EnableSharingWithAwsOrganizationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/enablesharingwithawsorganization");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? EnableSharingWithAwsOrganizationOutcome(result.GetResultWithOwnership())
                            : EnableSharingWithAwsOrganizationOutcome(std::move(result.GetError()));
}

GetPermissionOutcome RAMClient::GetPermission(const GetPermissionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getpermission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetPermissionOutcome(result.GetResultWithOwnership()) : GetPermissionOutcome(std::move(result.GetError()));
}

GetResourcePoliciesOutcome RAMClient::GetResourcePolicies(const GetResourcePoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getresourcepolicies");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourcePoliciesOutcome(result.GetResultWithOwnership())
                            : GetResourcePoliciesOutcome(std::move(result.GetError()));
}

GetResourceShareAssociationsOutcome RAMClient::GetResourceShareAssociations(const GetResourceShareAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getresourceshareassociations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceShareAssociationsOutcome(result.GetResultWithOwnership())
                            : GetResourceShareAssociationsOutcome(std::move(result.GetError()));
}

GetResourceShareInvitationsOutcome RAMClient::GetResourceShareInvitations(const GetResourceShareInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getresourceshareinvitations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceShareInvitationsOutcome(result.GetResultWithOwnership())
                            : GetResourceShareInvitationsOutcome(std::move(result.GetError()));
}

GetResourceSharesOutcome RAMClient::GetResourceShares(const GetResourceSharesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/getresourceshares");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetResourceSharesOutcome(result.GetResultWithOwnership())
                            : GetResourceSharesOutcome(std::move(result.GetError()));
}

ListPendingInvitationResourcesOutcome RAMClient::ListPendingInvitationResources(
    const ListPendingInvitationResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listpendinginvitationresources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPendingInvitationResourcesOutcome(result.GetResultWithOwnership())
                            : ListPendingInvitationResourcesOutcome(std::move(result.GetError()));
}

ListPermissionAssociationsOutcome RAMClient::ListPermissionAssociations(const ListPermissionAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listpermissionassociations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionAssociationsOutcome(result.GetResultWithOwnership())
                            : ListPermissionAssociationsOutcome(std::move(result.GetError()));
}

ListPermissionVersionsOutcome RAMClient::ListPermissionVersions(const ListPermissionVersionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listpermissionversions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionVersionsOutcome(result.GetResultWithOwnership())
                            : ListPermissionVersionsOutcome(std::move(result.GetError()));
}

ListPermissionsOutcome RAMClient::ListPermissions(const ListPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listpermissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPermissionsOutcome(result.GetResultWithOwnership())
                            : ListPermissionsOutcome(std::move(result.GetError()));
}

ListPrincipalsOutcome RAMClient::ListPrincipals(const ListPrincipalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listprincipals");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListPrincipalsOutcome(result.GetResultWithOwnership()) : ListPrincipalsOutcome(std::move(result.GetError()));
}

ListReplacePermissionAssociationsWorkOutcome RAMClient::ListReplacePermissionAssociationsWork(
    const ListReplacePermissionAssociationsWorkRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listreplacepermissionassociationswork");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListReplacePermissionAssociationsWorkOutcome(result.GetResultWithOwnership())
                            : ListReplacePermissionAssociationsWorkOutcome(std::move(result.GetError()));
}

ListResourceSharePermissionsOutcome RAMClient::ListResourceSharePermissions(const ListResourceSharePermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listresourcesharepermissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceSharePermissionsOutcome(result.GetResultWithOwnership())
                            : ListResourceSharePermissionsOutcome(std::move(result.GetError()));
}

ListResourceTypesOutcome RAMClient::ListResourceTypes(const ListResourceTypesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listresourcetypes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourceTypesOutcome(result.GetResultWithOwnership())
                            : ListResourceTypesOutcome(std::move(result.GetError()));
}

ListResourcesOutcome RAMClient::ListResources(const ListResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listresources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListResourcesOutcome(result.GetResultWithOwnership()) : ListResourcesOutcome(std::move(result.GetError()));
}

ListSourceAssociationsOutcome RAMClient::ListSourceAssociations(const ListSourceAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/listsourceassociations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListSourceAssociationsOutcome(result.GetResultWithOwnership())
                            : ListSourceAssociationsOutcome(std::move(result.GetError()));
}

PromotePermissionCreatedFromPolicyOutcome RAMClient::PromotePermissionCreatedFromPolicy(
    const PromotePermissionCreatedFromPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/promotepermissioncreatedfrompolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PromotePermissionCreatedFromPolicyOutcome(result.GetResultWithOwnership())
                            : PromotePermissionCreatedFromPolicyOutcome(std::move(result.GetError()));
}

PromoteResourceShareCreatedFromPolicyOutcome RAMClient::PromoteResourceShareCreatedFromPolicy(
    const PromoteResourceShareCreatedFromPolicyRequest& request) const {
  if (!request.ResourceShareArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PromoteResourceShareCreatedFromPolicy", "Required field: ResourceShareArn, is not set");
    return PromoteResourceShareCreatedFromPolicyOutcome(Aws::Client::AWSError<RAMErrors>(
        RAMErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceShareArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/promoteresourcesharecreatedfrompolicy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PromoteResourceShareCreatedFromPolicyOutcome(result.GetResultWithOwnership())
                            : PromoteResourceShareCreatedFromPolicyOutcome(std::move(result.GetError()));
}

RejectResourceShareInvitationOutcome RAMClient::RejectResourceShareInvitation(const RejectResourceShareInvitationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rejectresourceshareinvitation");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RejectResourceShareInvitationOutcome(result.GetResultWithOwnership())
                            : RejectResourceShareInvitationOutcome(std::move(result.GetError()));
}

ReplacePermissionAssociationsOutcome RAMClient::ReplacePermissionAssociations(const ReplacePermissionAssociationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/replacepermissionassociations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ReplacePermissionAssociationsOutcome(result.GetResultWithOwnership())
                            : ReplacePermissionAssociationsOutcome(std::move(result.GetError()));
}

SetDefaultPermissionVersionOutcome RAMClient::SetDefaultPermissionVersion(const SetDefaultPermissionVersionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/setdefaultpermissionversion");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SetDefaultPermissionVersionOutcome(result.GetResultWithOwnership())
                            : SetDefaultPermissionVersionOutcome(std::move(result.GetError()));
}

TagResourceOutcome RAMClient::TagResource(const TagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tagresource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome RAMClient::UntagResource(const UntagResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/untagresource");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateResourceShareOutcome RAMClient::UpdateResourceShare(const UpdateResourceShareRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateresourceshare");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateResourceShareOutcome(result.GetResultWithOwnership())
                            : UpdateResourceShareOutcome(std::move(result.GetError()));
}
