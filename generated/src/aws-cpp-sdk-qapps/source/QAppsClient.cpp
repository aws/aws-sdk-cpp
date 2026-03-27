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
#include <aws/qapps/QAppsClient.h>
#include <aws/qapps/QAppsEndpointProvider.h>
#include <aws/qapps/QAppsErrorMarshaller.h>
#include <aws/qapps/model/AssociateLibraryItemReviewRequest.h>
#include <aws/qapps/model/AssociateQAppWithUserRequest.h>
#include <aws/qapps/model/BatchCreateCategoryRequest.h>
#include <aws/qapps/model/BatchDeleteCategoryRequest.h>
#include <aws/qapps/model/BatchUpdateCategoryRequest.h>
#include <aws/qapps/model/CreateLibraryItemRequest.h>
#include <aws/qapps/model/CreatePresignedUrlRequest.h>
#include <aws/qapps/model/CreateQAppRequest.h>
#include <aws/qapps/model/DeleteLibraryItemRequest.h>
#include <aws/qapps/model/DeleteQAppRequest.h>
#include <aws/qapps/model/DescribeQAppPermissionsRequest.h>
#include <aws/qapps/model/DisassociateLibraryItemReviewRequest.h>
#include <aws/qapps/model/DisassociateQAppFromUserRequest.h>
#include <aws/qapps/model/ExportQAppSessionDataRequest.h>
#include <aws/qapps/model/GetLibraryItemRequest.h>
#include <aws/qapps/model/GetQAppRequest.h>
#include <aws/qapps/model/GetQAppSessionMetadataRequest.h>
#include <aws/qapps/model/GetQAppSessionRequest.h>
#include <aws/qapps/model/ImportDocumentRequest.h>
#include <aws/qapps/model/ListCategoriesRequest.h>
#include <aws/qapps/model/ListLibraryItemsRequest.h>
#include <aws/qapps/model/ListQAppSessionDataRequest.h>
#include <aws/qapps/model/ListQAppsRequest.h>
#include <aws/qapps/model/ListTagsForResourceRequest.h>
#include <aws/qapps/model/PredictQAppRequest.h>
#include <aws/qapps/model/StartQAppSessionRequest.h>
#include <aws/qapps/model/StopQAppSessionRequest.h>
#include <aws/qapps/model/TagResourceRequest.h>
#include <aws/qapps/model/UntagResourceRequest.h>
#include <aws/qapps/model/UpdateLibraryItemMetadataRequest.h>
#include <aws/qapps/model/UpdateLibraryItemRequest.h>
#include <aws/qapps/model/UpdateQAppPermissionsRequest.h>
#include <aws/qapps/model/UpdateQAppRequest.h>
#include <aws/qapps/model/UpdateQAppSessionMetadataRequest.h>
#include <aws/qapps/model/UpdateQAppSessionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QApps;
using namespace Aws::QApps::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QApps {
const char SERVICE_NAME[] = "qapps";
const char ALLOCATION_TAG[] = "QAppsClient";
}  // namespace QApps
}  // namespace Aws
const char* QAppsClient::GetServiceName() { return SERVICE_NAME; }
const char* QAppsClient::GetAllocationTag() { return ALLOCATION_TAG; }

QAppsClient::QAppsClient(const QApps::QAppsClientConfiguration& clientConfiguration,
                         std::shared_ptr<QAppsEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QAppsClient::QAppsClient(const AWSCredentials& credentials, std::shared_ptr<QAppsEndpointProviderBase> endpointProvider,
                         const QApps::QAppsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QAppsClient::QAppsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<QAppsEndpointProviderBase> endpointProvider,
                         const QApps::QAppsClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QAppsClient::QAppsClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QAppsClient::QAppsClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QAppsClient::QAppsClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QAppsErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QAppsEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QAppsClient::~QAppsClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QAppsEndpointProviderBase>& QAppsClient::accessEndpointProvider() { return m_endpointProvider; }

void QAppsClient::init(const QApps::QAppsClientConfiguration& config) {
  AWSClient::SetServiceClientName("QApps");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "qapps");
}

void QAppsClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
QAppsClient::InvokeOperationOutcome QAppsClient::InvokeServiceOperation(
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

AssociateLibraryItemReviewOutcome QAppsClient::AssociateLibraryItemReview(const AssociateLibraryItemReviewRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLibraryItemReview", "Required field: InstanceId, is not set");
    return AssociateLibraryItemReviewOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.associateItemRating");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateLibraryItemReviewOutcome(result.GetResultWithOwnership())
                            : AssociateLibraryItemReviewOutcome(std::move(result.GetError()));
}

AssociateQAppWithUserOutcome QAppsClient::AssociateQAppWithUser(const AssociateQAppWithUserRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateQAppWithUser", "Required field: InstanceId, is not set");
    return AssociateQAppWithUserOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.install");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateQAppWithUserOutcome(result.GetResultWithOwnership())
                            : AssociateQAppWithUserOutcome(std::move(result.GetError()));
}

BatchCreateCategoryOutcome QAppsClient::BatchCreateCategory(const BatchCreateCategoryRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateCategory", "Required field: InstanceId, is not set");
    return BatchCreateCategoryOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.createCategories");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchCreateCategoryOutcome(result.GetResultWithOwnership())
                            : BatchCreateCategoryOutcome(std::move(result.GetError()));
}

BatchDeleteCategoryOutcome QAppsClient::BatchDeleteCategory(const BatchDeleteCategoryRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteCategory", "Required field: InstanceId, is not set");
    return BatchDeleteCategoryOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.deleteCategories");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchDeleteCategoryOutcome(result.GetResultWithOwnership())
                            : BatchDeleteCategoryOutcome(std::move(result.GetError()));
}

BatchUpdateCategoryOutcome QAppsClient::BatchUpdateCategory(const BatchUpdateCategoryRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchUpdateCategory", "Required field: InstanceId, is not set");
    return BatchUpdateCategoryOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.updateCategories");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchUpdateCategoryOutcome(result.GetResultWithOwnership())
                            : BatchUpdateCategoryOutcome(std::move(result.GetError()));
}

CreateLibraryItemOutcome QAppsClient::CreateLibraryItem(const CreateLibraryItemRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLibraryItem", "Required field: InstanceId, is not set");
    return CreateLibraryItemOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.createItem");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLibraryItemOutcome(result.GetResultWithOwnership())
                            : CreateLibraryItemOutcome(std::move(result.GetError()));
}

CreatePresignedUrlOutcome QAppsClient::CreatePresignedUrl(const CreatePresignedUrlRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreatePresignedUrl", "Required field: InstanceId, is not set");
    return CreatePresignedUrlOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.createPresignedUrl");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreatePresignedUrlOutcome(result.GetResultWithOwnership())
                            : CreatePresignedUrlOutcome(std::move(result.GetError()));
}

CreateQAppOutcome QAppsClient::CreateQApp(const CreateQAppRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateQApp", "Required field: InstanceId, is not set");
    return CreateQAppOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.create");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateQAppOutcome(result.GetResultWithOwnership()) : CreateQAppOutcome(std::move(result.GetError()));
}

DeleteLibraryItemOutcome QAppsClient::DeleteLibraryItem(const DeleteLibraryItemRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLibraryItem", "Required field: InstanceId, is not set");
    return DeleteLibraryItemOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.deleteItem");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteLibraryItemOutcome(result.GetResultWithOwnership())
                            : DeleteLibraryItemOutcome(std::move(result.GetError()));
}

DeleteQAppOutcome QAppsClient::DeleteQApp(const DeleteQAppRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteQApp", "Required field: InstanceId, is not set");
    return DeleteQAppOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.delete");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteQAppOutcome(result.GetResultWithOwnership()) : DeleteQAppOutcome(std::move(result.GetError()));
}

DescribeQAppPermissionsOutcome QAppsClient::DescribeQAppPermissions(const DescribeQAppPermissionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQAppPermissions", "Required field: InstanceId, is not set");
    return DescribeQAppPermissionsOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQAppPermissions", "Required field: AppId, is not set");
    return DescribeQAppPermissionsOutcome(
        Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.describeQAppPermissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? DescribeQAppPermissionsOutcome(result.GetResultWithOwnership())
                            : DescribeQAppPermissionsOutcome(std::move(result.GetError()));
}

DisassociateLibraryItemReviewOutcome QAppsClient::DisassociateLibraryItemReview(const DisassociateLibraryItemReviewRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLibraryItemReview", "Required field: InstanceId, is not set");
    return DisassociateLibraryItemReviewOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.disassociateItemRating");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateLibraryItemReviewOutcome(result.GetResultWithOwnership())
                            : DisassociateLibraryItemReviewOutcome(std::move(result.GetError()));
}

DisassociateQAppFromUserOutcome QAppsClient::DisassociateQAppFromUser(const DisassociateQAppFromUserRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateQAppFromUser", "Required field: InstanceId, is not set");
    return DisassociateQAppFromUserOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.uninstall");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateQAppFromUserOutcome(result.GetResultWithOwnership())
                            : DisassociateQAppFromUserOutcome(std::move(result.GetError()));
}

ExportQAppSessionDataOutcome QAppsClient::ExportQAppSessionData(const ExportQAppSessionDataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportQAppSessionData", "Required field: InstanceId, is not set");
    return ExportQAppSessionDataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.exportQAppSessionData");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ExportQAppSessionDataOutcome(result.GetResultWithOwnership())
                            : ExportQAppSessionDataOutcome(std::move(result.GetError()));
}

GetLibraryItemOutcome QAppsClient::GetLibraryItem(const GetLibraryItemRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLibraryItem", "Required field: InstanceId, is not set");
    return GetLibraryItemOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.LibraryItemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLibraryItem", "Required field: LibraryItemId, is not set");
    return GetLibraryItemOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [LibraryItemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.getItem");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetLibraryItemOutcome(result.GetResultWithOwnership()) : GetLibraryItemOutcome(std::move(result.GetError()));
}

GetQAppOutcome QAppsClient::GetQApp(const GetQAppRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQApp", "Required field: InstanceId, is not set");
    return GetQAppOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                             "Missing required field [InstanceId]", false));
  }
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQApp", "Required field: AppId, is not set");
    return GetQAppOutcome(
        Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.get");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQAppOutcome(result.GetResultWithOwnership()) : GetQAppOutcome(std::move(result.GetError()));
}

GetQAppSessionOutcome QAppsClient::GetQAppSession(const GetQAppSessionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQAppSession", "Required field: InstanceId, is not set");
    return GetQAppSessionOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQAppSession", "Required field: SessionId, is not set");
    return GetQAppSessionOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.getQAppSession");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQAppSessionOutcome(result.GetResultWithOwnership()) : GetQAppSessionOutcome(std::move(result.GetError()));
}

GetQAppSessionMetadataOutcome QAppsClient::GetQAppSessionMetadata(const GetQAppSessionMetadataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQAppSessionMetadata", "Required field: InstanceId, is not set");
    return GetQAppSessionMetadataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetQAppSessionMetadata", "Required field: SessionId, is not set");
    return GetQAppSessionMetadataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.getQAppSessionMetadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetQAppSessionMetadataOutcome(result.GetResultWithOwnership())
                            : GetQAppSessionMetadataOutcome(std::move(result.GetError()));
}

ImportDocumentOutcome QAppsClient::ImportDocument(const ImportDocumentRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ImportDocument", "Required field: InstanceId, is not set");
    return ImportDocumentOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.importDocument");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ImportDocumentOutcome(result.GetResultWithOwnership()) : ImportDocumentOutcome(std::move(result.GetError()));
}

ListCategoriesOutcome QAppsClient::ListCategories(const ListCategoriesRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCategories", "Required field: InstanceId, is not set");
    return ListCategoriesOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.listCategories");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListCategoriesOutcome(result.GetResultWithOwnership()) : ListCategoriesOutcome(std::move(result.GetError()));
}

ListLibraryItemsOutcome QAppsClient::ListLibraryItems(const ListLibraryItemsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLibraryItems", "Required field: InstanceId, is not set");
    return ListLibraryItemsOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLibraryItemsOutcome(result.GetResultWithOwnership())
                            : ListLibraryItemsOutcome(std::move(result.GetError()));
}

ListQAppSessionDataOutcome QAppsClient::ListQAppSessionData(const ListQAppSessionDataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQAppSessionData", "Required field: InstanceId, is not set");
    return ListQAppSessionDataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [InstanceId]", false));
  }
  if (!request.SessionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQAppSessionData", "Required field: SessionId, is not set");
    return ListQAppSessionDataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SessionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.listQAppSessionData");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQAppSessionDataOutcome(result.GetResultWithOwnership())
                            : ListQAppSessionDataOutcome(std::move(result.GetError()));
}

ListQAppsOutcome QAppsClient::ListQApps(const ListQAppsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListQApps", "Required field: InstanceId, is not set");
    return ListQAppsOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListQAppsOutcome(result.GetResultWithOwnership()) : ListQAppsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome QAppsClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceARN, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

PredictQAppOutcome QAppsClient::PredictQApp(const PredictQAppRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PredictQApp", "Required field: InstanceId, is not set");
    return PredictQAppOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.predictQApp");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PredictQAppOutcome(result.GetResultWithOwnership()) : PredictQAppOutcome(std::move(result.GetError()));
}

StartQAppSessionOutcome QAppsClient::StartQAppSession(const StartQAppSessionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartQAppSession", "Required field: InstanceId, is not set");
    return StartQAppSessionOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.startQAppSession");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartQAppSessionOutcome(result.GetResultWithOwnership())
                            : StartQAppSessionOutcome(std::move(result.GetError()));
}

StopQAppSessionOutcome QAppsClient::StopQAppSession(const StopQAppSessionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopQAppSession", "Required field: InstanceId, is not set");
    return StopQAppSessionOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.deleteMiniAppRun");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StopQAppSessionOutcome(result.GetResultWithOwnership())
                            : StopQAppSessionOutcome(std::move(result.GetError()));
}

TagResourceOutcome QAppsClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceARN, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [ResourceARN]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome QAppsClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceARNHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceARN, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceARN]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(
        Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceARN());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateLibraryItemOutcome QAppsClient::UpdateLibraryItem(const UpdateLibraryItemRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLibraryItem", "Required field: InstanceId, is not set");
    return UpdateLibraryItemOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.updateItem");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLibraryItemOutcome(result.GetResultWithOwnership())
                            : UpdateLibraryItemOutcome(std::move(result.GetError()));
}

UpdateLibraryItemMetadataOutcome QAppsClient::UpdateLibraryItemMetadata(const UpdateLibraryItemMetadataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLibraryItemMetadata", "Required field: InstanceId, is not set");
    return UpdateLibraryItemMetadataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/catalog.updateItemMetadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateLibraryItemMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateLibraryItemMetadataOutcome(std::move(result.GetError()));
}

UpdateQAppOutcome QAppsClient::UpdateQApp(const UpdateQAppRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQApp", "Required field: InstanceId, is not set");
    return UpdateQAppOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.update");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateQAppOutcome(result.GetResultWithOwnership()) : UpdateQAppOutcome(std::move(result.GetError()));
}

UpdateQAppPermissionsOutcome QAppsClient::UpdateQAppPermissions(const UpdateQAppPermissionsRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQAppPermissions", "Required field: InstanceId, is not set");
    return UpdateQAppPermissionsOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps.updateQAppPermissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateQAppPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateQAppPermissionsOutcome(std::move(result.GetError()));
}

UpdateQAppSessionOutcome QAppsClient::UpdateQAppSession(const UpdateQAppSessionRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQAppSession", "Required field: InstanceId, is not set");
    return UpdateQAppSessionOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.updateQAppSession");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateQAppSessionOutcome(result.GetResultWithOwnership())
                            : UpdateQAppSessionOutcome(std::move(result.GetError()));
}

UpdateQAppSessionMetadataOutcome QAppsClient::UpdateQAppSessionMetadata(const UpdateQAppSessionMetadataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQAppSessionMetadata", "Required field: InstanceId, is not set");
    return UpdateQAppSessionMetadataOutcome(Aws::Client::AWSError<QAppsErrors>(QAppsErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/runtime.updateQAppSessionMetadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateQAppSessionMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateQAppSessionMetadataOutcome(std::move(result.GetError()));
}
