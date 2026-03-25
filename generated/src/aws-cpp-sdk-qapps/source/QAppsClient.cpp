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

  return AssociateLibraryItemReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return AssociateQAppWithUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchCreateCategoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchDeleteCategoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchUpdateCategoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateLibraryItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreatePresignedUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateQAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteLibraryItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteQAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DescribeQAppPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return DisassociateLibraryItemReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DisassociateQAppFromUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ExportQAppSessionDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetLibraryItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQAppSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return GetQAppSessionMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ImportDocumentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListCategoriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListLibraryItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQAppSessionDataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListQAppsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return PredictQAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StartQAppSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return StopQAppSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateLibraryItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateLibraryItemMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateQAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateQAppPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateQAppSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UpdateQAppSessionMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
