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
#include <aws/workdocs/WorkDocsClient.h>
#include <aws/workdocs/WorkDocsEndpointProvider.h>
#include <aws/workdocs/WorkDocsErrorMarshaller.h>
#include <aws/workdocs/model/AbortDocumentVersionUploadRequest.h>
#include <aws/workdocs/model/ActivateUserRequest.h>
#include <aws/workdocs/model/AddResourcePermissionsRequest.h>
#include <aws/workdocs/model/CreateCommentRequest.h>
#include <aws/workdocs/model/CreateCustomMetadataRequest.h>
#include <aws/workdocs/model/CreateFolderRequest.h>
#include <aws/workdocs/model/CreateLabelsRequest.h>
#include <aws/workdocs/model/CreateNotificationSubscriptionRequest.h>
#include <aws/workdocs/model/CreateUserRequest.h>
#include <aws/workdocs/model/DeactivateUserRequest.h>
#include <aws/workdocs/model/DeleteCommentRequest.h>
#include <aws/workdocs/model/DeleteCustomMetadataRequest.h>
#include <aws/workdocs/model/DeleteDocumentRequest.h>
#include <aws/workdocs/model/DeleteDocumentVersionRequest.h>
#include <aws/workdocs/model/DeleteFolderContentsRequest.h>
#include <aws/workdocs/model/DeleteFolderRequest.h>
#include <aws/workdocs/model/DeleteLabelsRequest.h>
#include <aws/workdocs/model/DeleteNotificationSubscriptionRequest.h>
#include <aws/workdocs/model/DeleteUserRequest.h>
#include <aws/workdocs/model/DescribeActivitiesRequest.h>
#include <aws/workdocs/model/DescribeCommentsRequest.h>
#include <aws/workdocs/model/DescribeDocumentVersionsRequest.h>
#include <aws/workdocs/model/DescribeFolderContentsRequest.h>
#include <aws/workdocs/model/DescribeGroupsRequest.h>
#include <aws/workdocs/model/DescribeNotificationSubscriptionsRequest.h>
#include <aws/workdocs/model/DescribeResourcePermissionsRequest.h>
#include <aws/workdocs/model/DescribeRootFoldersRequest.h>
#include <aws/workdocs/model/DescribeUsersRequest.h>
#include <aws/workdocs/model/GetCurrentUserRequest.h>
#include <aws/workdocs/model/GetDocumentPathRequest.h>
#include <aws/workdocs/model/GetDocumentRequest.h>
#include <aws/workdocs/model/GetDocumentVersionRequest.h>
#include <aws/workdocs/model/GetFolderPathRequest.h>
#include <aws/workdocs/model/GetFolderRequest.h>
#include <aws/workdocs/model/GetResourcesRequest.h>
#include <aws/workdocs/model/InitiateDocumentVersionUploadRequest.h>
#include <aws/workdocs/model/RemoveAllResourcePermissionsRequest.h>
#include <aws/workdocs/model/RemoveResourcePermissionRequest.h>
#include <aws/workdocs/model/RestoreDocumentVersionsRequest.h>
#include <aws/workdocs/model/SearchResourcesRequest.h>
#include <aws/workdocs/model/UpdateDocumentRequest.h>
#include <aws/workdocs/model/UpdateDocumentVersionRequest.h>
#include <aws/workdocs/model/UpdateFolderRequest.h>
#include <aws/workdocs/model/UpdateUserRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WorkDocs;
using namespace Aws::WorkDocs::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WorkDocs {
const char SERVICE_NAME[] = "workdocs";
const char ALLOCATION_TAG[] = "WorkDocsClient";
}  // namespace WorkDocs
}  // namespace Aws
const char* WorkDocsClient::GetServiceName() { return SERVICE_NAME; }
const char* WorkDocsClient::GetAllocationTag() { return ALLOCATION_TAG; }

WorkDocsClient::WorkDocsClient(const WorkDocs::WorkDocsClientConfiguration& clientConfiguration,
                               std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const AWSCredentials& credentials, std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider,
                               const WorkDocs::WorkDocsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<WorkDocsEndpointProviderBase> endpointProvider,
                               const WorkDocs::WorkDocsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WorkDocsClient::WorkDocsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WorkDocsClient::WorkDocsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WorkDocsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WorkDocsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WorkDocsClient::~WorkDocsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WorkDocsEndpointProviderBase>& WorkDocsClient::accessEndpointProvider() { return m_endpointProvider; }

void WorkDocsClient::init(const WorkDocs::WorkDocsClientConfiguration& config) {
  AWSClient::SetServiceClientName("WorkDocs");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "workdocs");
}

void WorkDocsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WorkDocsClient::InvokeOperationOutcome WorkDocsClient::InvokeServiceOperation(
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

AbortDocumentVersionUploadOutcome WorkDocsClient::AbortDocumentVersionUpload(const AbortDocumentVersionUploadRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortDocumentVersionUpload", "Required field: DocumentId, is not set");
    return AbortDocumentVersionUploadOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AbortDocumentVersionUpload", "Required field: VersionId, is not set");
    return AbortDocumentVersionUploadOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  return AbortDocumentVersionUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ActivateUserOutcome WorkDocsClient::ActivateUser(const ActivateUserRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ActivateUser", "Required field: UserId, is not set");
    return ActivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activation");
  };

  return ActivateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AddResourcePermissionsOutcome WorkDocsClient::AddResourcePermissions(const AddResourcePermissionsRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AddResourcePermissions", "Required field: ResourceId, is not set");
    return AddResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return AddResourcePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCommentOutcome WorkDocsClient::CreateComment(const CreateCommentRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComment", "Required field: DocumentId, is not set");
    return CreateCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComment", "Required field: VersionId, is not set");
    return CreateCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/comment");
  };

  return CreateCommentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomMetadataOutcome WorkDocsClient::CreateCustomMetadata(const CreateCustomMetadataRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCustomMetadata", "Required field: ResourceId, is not set");
    return CreateCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customMetadata");
  };

  return CreateCustomMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateFolderOutcome WorkDocsClient::CreateFolder(const CreateFolderRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders");
  };

  return CreateFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLabelsOutcome WorkDocsClient::CreateLabels(const CreateLabelsRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLabels", "Required field: ResourceId, is not set");
    return CreateLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/labels");
  };

  return CreateLabelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateNotificationSubscriptionOutcome WorkDocsClient::CreateNotificationSubscription(
    const CreateNotificationSubscriptionRequest& request) const {
  if (!request.OrganizationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNotificationSubscription", "Required field: OrganizationId, is not set");
    return CreateNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(
        WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  return CreateNotificationSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateUserOutcome WorkDocsClient::CreateUser(const CreateUserRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users");
  };

  return CreateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeactivateUserOutcome WorkDocsClient::DeactivateUser(const DeactivateUserRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeactivateUser", "Required field: UserId, is not set");
    return DeactivateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/activation");
  };

  return DeactivateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCommentOutcome WorkDocsClient::DeleteComment(const DeleteCommentRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: DocumentId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: VersionId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [VersionId]", false));
  }
  if (!request.CommentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComment", "Required field: CommentId, is not set");
    return DeleteCommentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [CommentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/comment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCommentId());
  };

  return DeleteCommentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCustomMetadataOutcome WorkDocsClient::DeleteCustomMetadata(const DeleteCustomMetadataRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomMetadata", "Required field: ResourceId, is not set");
    return DeleteCustomMetadataOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customMetadata");
  };

  return DeleteCustomMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDocumentOutcome WorkDocsClient::DeleteDocument(const DeleteDocumentRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocument", "Required field: DocumentId, is not set");
    return DeleteDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  };

  return DeleteDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDocumentVersionOutcome WorkDocsClient::DeleteDocumentVersion(const DeleteDocumentVersionRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: DocumentId, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: VersionId, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VersionId]", false));
  }
  if (!request.DeletePriorVersionsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDocumentVersion", "Required field: DeletePriorVersions, is not set");
    return DeleteDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DeletePriorVersions]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documentVersions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  return DeleteDocumentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFolderOutcome WorkDocsClient::DeleteFolder(const DeleteFolderRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return DeleteFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFolderContentsOutcome WorkDocsClient::DeleteFolderContents(const DeleteFolderContentsRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolderContents", "Required field: FolderId, is not set");
    return DeleteFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return DeleteFolderContentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLabelsOutcome WorkDocsClient::DeleteLabels(const DeleteLabelsRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLabels", "Required field: ResourceId, is not set");
    return DeleteLabelsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/labels");
  };

  return DeleteLabelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNotificationSubscriptionOutcome WorkDocsClient::DeleteNotificationSubscription(
    const DeleteNotificationSubscriptionRequest& request) const {
  if (!request.SubscriptionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotificationSubscription", "Required field: SubscriptionId, is not set");
    return DeleteNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(
        WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SubscriptionId]", false));
  }
  if (!request.OrganizationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNotificationSubscription", "Required field: OrganizationId, is not set");
    return DeleteNotificationSubscriptionOutcome(Aws::Client::AWSError<WorkDocsErrors>(
        WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSubscriptionId());
  };

  return DeleteNotificationSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserOutcome WorkDocsClient::DeleteUser(const DeleteUserRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeActivitiesOutcome WorkDocsClient::DescribeActivities(const DescribeActivitiesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/activities");
  };

  return DescribeActivitiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeCommentsOutcome WorkDocsClient::DescribeComments(const DescribeCommentsRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeComments", "Required field: DocumentId, is not set");
    return DescribeCommentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeComments", "Required field: VersionId, is not set");
    return DescribeCommentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/comments");
  };

  return DescribeCommentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDocumentVersionsOutcome WorkDocsClient::DescribeDocumentVersions(const DescribeDocumentVersionsRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDocumentVersions", "Required field: DocumentId, is not set");
    return DescribeDocumentVersionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return DescribeDocumentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFolderContentsOutcome WorkDocsClient::DescribeFolderContents(const DescribeFolderContentsRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolderContents", "Required field: FolderId, is not set");
    return DescribeFolderContentsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/contents");
  };

  return DescribeFolderContentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGroupsOutcome WorkDocsClient::DescribeGroups(const DescribeGroupsRequest& request) const {
  if (!request.SearchQueryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroups", "Required field: SearchQuery, is not set");
    return DescribeGroupsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [SearchQuery]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/groups");
  };

  return DescribeGroupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNotificationSubscriptionsOutcome WorkDocsClient::DescribeNotificationSubscriptions(
    const DescribeNotificationSubscriptionsRequest& request) const {
  if (!request.OrganizationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNotificationSubscriptions", "Required field: OrganizationId, is not set");
    return DescribeNotificationSubscriptionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(
        WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OrganizationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/organizations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOrganizationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions");
  };

  return DescribeNotificationSubscriptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeResourcePermissionsOutcome WorkDocsClient::DescribeResourcePermissions(const DescribeResourcePermissionsRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeResourcePermissions", "Required field: ResourceId, is not set");
    return DescribeResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                    "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeResourcePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRootFoldersOutcome WorkDocsClient::DescribeRootFolders(const DescribeRootFoldersRequest& request) const {
  if (!request.AuthenticationTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRootFolders", "Required field: AuthenticationToken, is not set");
    return DescribeRootFoldersOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AuthenticationToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/me/root");
  };

  return DescribeRootFoldersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeUsersOutcome WorkDocsClient::DescribeUsers(const DescribeUsersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users");
  };

  return DescribeUsersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCurrentUserOutcome WorkDocsClient::GetCurrentUser(const GetCurrentUserRequest& request) const {
  if (!request.AuthenticationTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCurrentUser", "Required field: AuthenticationToken, is not set");
    return GetCurrentUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AuthenticationToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/me");
  };

  return GetCurrentUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentOutcome WorkDocsClient::GetDocument(const GetDocumentRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocument", "Required field: DocumentId, is not set");
    return GetDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  };

  return GetDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentPathOutcome WorkDocsClient::GetDocumentPath(const GetDocumentPathRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentPath", "Required field: DocumentId, is not set");
    return GetDocumentPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/path");
  };

  return GetDocumentPathOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDocumentVersionOutcome WorkDocsClient::GetDocumentVersion(const GetDocumentVersionRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentVersion", "Required field: DocumentId, is not set");
    return GetDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDocumentVersion", "Required field: VersionId, is not set");
    return GetDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  return GetDocumentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFolderOutcome WorkDocsClient::GetFolder(const GetFolderRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFolder", "Required field: FolderId, is not set");
    return GetFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return GetFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFolderPathOutcome WorkDocsClient::GetFolderPath(const GetFolderPathRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetFolderPath", "Required field: FolderId, is not set");
    return GetFolderPathOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/path");
  };

  return GetFolderPathOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetResourcesOutcome WorkDocsClient::GetResources(const GetResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources");
  };

  return GetResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InitiateDocumentVersionUploadOutcome WorkDocsClient::InitiateDocumentVersionUpload(
    const InitiateDocumentVersionUploadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents");
  };

  return InitiateDocumentVersionUploadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveAllResourcePermissionsOutcome WorkDocsClient::RemoveAllResourcePermissions(const RemoveAllResourcePermissionsRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveAllResourcePermissions", "Required field: ResourceId, is not set");
    return RemoveAllResourcePermissionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                     "Missing required field [ResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return RemoveAllResourcePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RemoveResourcePermissionOutcome WorkDocsClient::RemoveResourcePermission(const RemoveResourcePermissionRequest& request) const {
  if (!request.ResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveResourcePermission", "Required field: ResourceId, is not set");
    return RemoveResourcePermissionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ResourceId]", false));
  }
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RemoveResourcePermission", "Required field: PrincipalId, is not set");
    return RemoveResourcePermissionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PrincipalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  return RemoveResourcePermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

RestoreDocumentVersionsOutcome WorkDocsClient::RestoreDocumentVersions(const RestoreDocumentVersionsRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreDocumentVersions", "Required field: DocumentId, is not set");
    return RestoreDocumentVersionsOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documentVersions/restore/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  };

  return RestoreDocumentVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchResourcesOutcome WorkDocsClient::SearchResources(const SearchResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/search");
  };

  return SearchResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDocumentOutcome WorkDocsClient::UpdateDocument(const UpdateDocumentRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocument", "Required field: DocumentId, is not set");
    return UpdateDocumentOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DocumentId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
  };

  return UpdateDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDocumentVersionOutcome WorkDocsClient::UpdateDocumentVersion(const UpdateDocumentVersionRequest& request) const {
  if (!request.DocumentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentVersion", "Required field: DocumentId, is not set");
    return UpdateDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DocumentId]", false));
  }
  if (!request.VersionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDocumentVersion", "Required field: VersionId, is not set");
    return UpdateDocumentVersionOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VersionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/documents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDocumentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionId());
  };

  return UpdateDocumentVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFolderOutcome WorkDocsClient::UpdateFolder(const UpdateFolderRequest& request) const {
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return UpdateFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateUserOutcome WorkDocsClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.UserIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<WorkDocsErrors>(WorkDocsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [UserId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/api/v1/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserId());
  };

  return UpdateUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
