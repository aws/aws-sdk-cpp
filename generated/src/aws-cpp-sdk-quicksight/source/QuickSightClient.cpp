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
#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/model/BatchCreateTopicReviewedAnswerRequest.h>
#include <aws/quicksight/model/BatchDeleteTopicReviewedAnswerRequest.h>
#include <aws/quicksight/model/CancelIngestionRequest.h>
#include <aws/quicksight/model/CreateAccountCustomizationRequest.h>
#include <aws/quicksight/model/CreateAccountSubscriptionRequest.h>
#include <aws/quicksight/model/CreateActionConnectorRequest.h>
#include <aws/quicksight/model/CreateAnalysisRequest.h>
#include <aws/quicksight/model/CreateBrandRequest.h>
#include <aws/quicksight/model/CreateCustomPermissionsRequest.h>
#include <aws/quicksight/model/CreateDashboardRequest.h>
#include <aws/quicksight/model/CreateDataSetRequest.h>
#include <aws/quicksight/model/CreateDataSourceRequest.h>
#include <aws/quicksight/model/CreateFolderMembershipRequest.h>
#include <aws/quicksight/model/CreateFolderRequest.h>
#include <aws/quicksight/model/CreateGroupMembershipRequest.h>
#include <aws/quicksight/model/CreateGroupRequest.h>
#include <aws/quicksight/model/CreateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/CreateIngestionRequest.h>
#include <aws/quicksight/model/CreateNamespaceRequest.h>
#include <aws/quicksight/model/CreateRefreshScheduleRequest.h>
#include <aws/quicksight/model/CreateRoleMembershipRequest.h>
#include <aws/quicksight/model/CreateTemplateAliasRequest.h>
#include <aws/quicksight/model/CreateTemplateRequest.h>
#include <aws/quicksight/model/CreateThemeAliasRequest.h>
#include <aws/quicksight/model/CreateThemeRequest.h>
#include <aws/quicksight/model/CreateTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/CreateTopicRequest.h>
#include <aws/quicksight/model/CreateVPCConnectionRequest.h>
#include <aws/quicksight/model/DeleteAccountCustomPermissionRequest.h>
#include <aws/quicksight/model/DeleteAccountCustomizationRequest.h>
#include <aws/quicksight/model/DeleteAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DeleteActionConnectorRequest.h>
#include <aws/quicksight/model/DeleteAnalysisRequest.h>
#include <aws/quicksight/model/DeleteBrandAssignmentRequest.h>
#include <aws/quicksight/model/DeleteBrandRequest.h>
#include <aws/quicksight/model/DeleteCustomPermissionsRequest.h>
#include <aws/quicksight/model/DeleteDashboardRequest.h>
#include <aws/quicksight/model/DeleteDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/DeleteDataSetRequest.h>
#include <aws/quicksight/model/DeleteDataSourceRequest.h>
#include <aws/quicksight/model/DeleteDefaultQBusinessApplicationRequest.h>
#include <aws/quicksight/model/DeleteFolderMembershipRequest.h>
#include <aws/quicksight/model/DeleteFolderRequest.h>
#include <aws/quicksight/model/DeleteGroupMembershipRequest.h>
#include <aws/quicksight/model/DeleteGroupRequest.h>
#include <aws/quicksight/model/DeleteIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DeleteIdentityPropagationConfigRequest.h>
#include <aws/quicksight/model/DeleteNamespaceRequest.h>
#include <aws/quicksight/model/DeleteRefreshScheduleRequest.h>
#include <aws/quicksight/model/DeleteRoleCustomPermissionRequest.h>
#include <aws/quicksight/model/DeleteRoleMembershipRequest.h>
#include <aws/quicksight/model/DeleteTemplateAliasRequest.h>
#include <aws/quicksight/model/DeleteTemplateRequest.h>
#include <aws/quicksight/model/DeleteThemeAliasRequest.h>
#include <aws/quicksight/model/DeleteThemeRequest.h>
#include <aws/quicksight/model/DeleteTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/DeleteTopicRequest.h>
#include <aws/quicksight/model/DeleteUserByPrincipalIdRequest.h>
#include <aws/quicksight/model/DeleteUserCustomPermissionRequest.h>
#include <aws/quicksight/model/DeleteUserRequest.h>
#include <aws/quicksight/model/DeleteVPCConnectionRequest.h>
#include <aws/quicksight/model/DescribeAccountCustomPermissionRequest.h>
#include <aws/quicksight/model/DescribeAccountCustomizationRequest.h>
#include <aws/quicksight/model/DescribeAccountSettingsRequest.h>
#include <aws/quicksight/model/DescribeAccountSubscriptionRequest.h>
#include <aws/quicksight/model/DescribeActionConnectorPermissionsRequest.h>
#include <aws/quicksight/model/DescribeActionConnectorRequest.h>
#include <aws/quicksight/model/DescribeAnalysisDefinitionRequest.h>
#include <aws/quicksight/model/DescribeAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/DescribeAnalysisRequest.h>
#include <aws/quicksight/model/DescribeAssetBundleExportJobRequest.h>
#include <aws/quicksight/model/DescribeAssetBundleImportJobRequest.h>
#include <aws/quicksight/model/DescribeBrandAssignmentRequest.h>
#include <aws/quicksight/model/DescribeBrandPublishedVersionRequest.h>
#include <aws/quicksight/model/DescribeBrandRequest.h>
#include <aws/quicksight/model/DescribeCustomPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDashboardDefinitionRequest.h>
#include <aws/quicksight/model/DescribeDashboardPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDashboardRequest.h>
#include <aws/quicksight/model/DescribeDashboardSnapshotJobRequest.h>
#include <aws/quicksight/model/DescribeDashboardSnapshotJobResultRequest.h>
#include <aws/quicksight/model/DescribeDashboardsQAConfigurationRequest.h>
#include <aws/quicksight/model/DescribeDataSetPermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/DescribeDataSetRequest.h>
#include <aws/quicksight/model/DescribeDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/DescribeDataSourceRequest.h>
#include <aws/quicksight/model/DescribeDefaultQBusinessApplicationRequest.h>
#include <aws/quicksight/model/DescribeFolderPermissionsRequest.h>
#include <aws/quicksight/model/DescribeFolderRequest.h>
#include <aws/quicksight/model/DescribeFolderResolvedPermissionsRequest.h>
#include <aws/quicksight/model/DescribeGroupMembershipRequest.h>
#include <aws/quicksight/model/DescribeGroupRequest.h>
#include <aws/quicksight/model/DescribeIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/DescribeIngestionRequest.h>
#include <aws/quicksight/model/DescribeIpRestrictionRequest.h>
#include <aws/quicksight/model/DescribeKeyRegistrationRequest.h>
#include <aws/quicksight/model/DescribeNamespaceRequest.h>
#include <aws/quicksight/model/DescribeQPersonalizationConfigurationRequest.h>
#include <aws/quicksight/model/DescribeQuickSightQSearchConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::QuickSight;
using namespace Aws::QuickSight::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace QuickSight {
const char SERVICE_NAME[] = "quicksight";
const char ALLOCATION_TAG[] = "QuickSightClient";
}  // namespace QuickSight
}  // namespace Aws
const char* QuickSightClient::GetServiceName() { return SERVICE_NAME; }
const char* QuickSightClient::GetAllocationTag() { return ALLOCATION_TAG; }

QuickSightClient::QuickSightClient(const QuickSight::QuickSightClientConfiguration& clientConfiguration,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials, std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<QuickSightEndpointProviderBase> endpointProvider,
                                   const QuickSight::QuickSightClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
QuickSightClient::QuickSightClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

QuickSightClient::QuickSightClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<QuickSightErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<QuickSightEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
QuickSightClient::~QuickSightClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<QuickSightEndpointProviderBase>& QuickSightClient::accessEndpointProvider() { return m_endpointProvider; }

void QuickSightClient::init(const QuickSight::QuickSightClientConfiguration& config) {
  AWSClient::SetServiceClientName("QuickSight");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "quicksight");
}

void QuickSightClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
QuickSightClient::InvokeOperationOutcome QuickSightClient::InvokeServiceOperation(
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

BatchCreateTopicReviewedAnswerOutcome QuickSightClient::BatchCreateTopicReviewedAnswer(
    const BatchCreateTopicReviewedAnswerRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateTopicReviewedAnswer", "Required field: AwsAccountId, is not set");
    return BatchCreateTopicReviewedAnswerOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchCreateTopicReviewedAnswer", "Required field: TopicId, is not set");
    return BatchCreateTopicReviewedAnswerOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-create-reviewed-answers");
  };

  return BatchCreateTopicReviewedAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDeleteTopicReviewedAnswerOutcome QuickSightClient::BatchDeleteTopicReviewedAnswer(
    const BatchDeleteTopicReviewedAnswerRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteTopicReviewedAnswer", "Required field: AwsAccountId, is not set");
    return BatchDeleteTopicReviewedAnswerOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteTopicReviewedAnswer", "Required field: TopicId, is not set");
    return BatchDeleteTopicReviewedAnswerOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batch-delete-reviewed-answers");
  };

  return BatchDeleteTopicReviewedAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelIngestionOutcome QuickSightClient::CancelIngestion(const CancelIngestionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: AwsAccountId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: DataSetId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelIngestion", "Required field: IngestionId, is not set");
    return CancelIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IngestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  };

  return CancelIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

CreateAccountCustomizationOutcome QuickSightClient::CreateAccountCustomization(const CreateAccountCustomizationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccountCustomization", "Required field: AwsAccountId, is not set");
    return CreateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  };

  return CreateAccountCustomizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccountSubscriptionOutcome QuickSightClient::CreateAccountSubscription(const CreateAccountSubscriptionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAccountSubscription", "Required field: AwsAccountId, is not set");
    return CreateAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  };

  return CreateAccountSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateActionConnectorOutcome QuickSightClient::CreateActionConnector(const CreateActionConnectorRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateActionConnector", "Required field: AwsAccountId, is not set");
    return CreateActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/action-connectors");
  };

  return CreateActionConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAnalysisOutcome QuickSightClient::CreateAnalysis(const CreateAnalysisRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AwsAccountId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAnalysis", "Required field: AnalysisId, is not set");
    return CreateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  return CreateAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBrandOutcome QuickSightClient::CreateBrand(const CreateBrandRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBrand", "Required field: AwsAccountId, is not set");
    return CreateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBrand", "Required field: BrandId, is not set");
    return CreateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BrandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
  };

  return CreateBrandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateCustomPermissionsOutcome QuickSightClient::CreateCustomPermissions(const CreateCustomPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCustomPermissions", "Required field: AwsAccountId, is not set");
    return CreateCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions");
  };

  return CreateCustomPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDashboardOutcome QuickSightClient::CreateDashboard(const CreateDashboardRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: AwsAccountId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDashboard", "Required field: DashboardId, is not set");
    return CreateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return CreateDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataSetOutcome QuickSightClient::CreateDataSet(const CreateDataSetRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSet", "Required field: AwsAccountId, is not set");
    return CreateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
  };

  return CreateDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataSourceOutcome QuickSightClient::CreateDataSource(const CreateDataSourceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataSource", "Required field: AwsAccountId, is not set");
    return CreateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
  };

  return CreateDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFolderOutcome QuickSightClient::CreateFolder(const CreateFolderRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: AwsAccountId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolder", "Required field: FolderId, is not set");
    return CreateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return CreateFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFolderMembershipOutcome QuickSightClient::CreateFolderMembership(const CreateFolderMembershipRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: AwsAccountId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: FolderId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberId, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateFolderMembership", "Required field: MemberType, is not set");
    return CreateFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MemberType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  return CreateFolderMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateGroupOutcome QuickSightClient::CreateGroup(const CreateGroupRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: AwsAccountId, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroup", "Required field: Namespace, is not set");
    return CreateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  return CreateGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGroupMembershipOutcome QuickSightClient::CreateGroupMembership(const CreateGroupMembershipRequest& request) const {
  if (!request.MemberNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: MemberName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: GroupName, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: AwsAccountId, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateGroupMembership", "Required field: Namespace, is not set");
    return CreateGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  };

  return CreateGroupMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateIAMPolicyAssignmentOutcome QuickSightClient::CreateIAMPolicyAssignment(const CreateIAMPolicyAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return CreateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
  };

  return CreateIAMPolicyAssignmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateIngestionOutcome QuickSightClient::CreateIngestion(const CreateIngestionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: DataSetId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: IngestionId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IngestionId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateIngestion", "Required field: AwsAccountId, is not set");
    return CreateIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  };

  return CreateIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

CreateNamespaceOutcome QuickSightClient::CreateNamespace(const CreateNamespaceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateNamespace", "Required field: AwsAccountId, is not set");
    return CreateNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  };

  return CreateNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRefreshScheduleOutcome QuickSightClient::CreateRefreshSchedule(const CreateRefreshScheduleRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRefreshSchedule", "Required field: DataSetId, is not set");
    return CreateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRefreshSchedule", "Required field: AwsAccountId, is not set");
    return CreateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
  };

  return CreateRefreshScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRoleMembershipOutcome QuickSightClient::CreateRoleMembership(const CreateRoleMembershipRequest& request) const {
  if (!request.MemberNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoleMembership", "Required field: MemberName, is not set");
    return CreateRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MemberName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoleMembership", "Required field: AwsAccountId, is not set");
    return CreateRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoleMembership", "Required field: Namespace, is not set");
    return CreateRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Namespace]", false));
  }
  if (!request.RoleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRoleMembership", "Required field: Role, is not set");
    return CreateRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Role]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(RoleMapper::GetNameForRole(request.GetRole()));
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  };

  return CreateRoleMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTemplateOutcome QuickSightClient::CreateTemplate(const CreateTemplateRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: AwsAccountId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: TemplateId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  return CreateTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTemplateAliasOutcome QuickSightClient::CreateTemplateAlias(const CreateTemplateAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AwsAccountId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: TemplateId, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateAlias", "Required field: AliasName, is not set");
    return CreateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AliasName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  };

  return CreateTemplateAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThemeOutcome QuickSightClient::CreateTheme(const CreateThemeRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: AwsAccountId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: ThemeId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  };

  return CreateThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThemeAliasOutcome QuickSightClient::CreateThemeAlias(const CreateThemeAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AwsAccountId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: ThemeId, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateThemeAlias", "Required field: AliasName, is not set");
    return CreateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AliasName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  };

  return CreateThemeAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTopicOutcome QuickSightClient::CreateTopic(const CreateTopicRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTopic", "Required field: AwsAccountId, is not set");
    return CreateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  };

  return CreateTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTopicRefreshScheduleOutcome QuickSightClient::CreateTopicRefreshSchedule(const CreateTopicRefreshScheduleRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return CreateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTopicRefreshSchedule", "Required field: TopicId, is not set");
    return CreateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  };

  return CreateTopicRefreshScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateVPCConnectionOutcome QuickSightClient::CreateVPCConnection(const CreateVPCConnectionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateVPCConnection", "Required field: AwsAccountId, is not set");
    return CreateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections");
  };

  return CreateVPCConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccountCustomPermissionOutcome QuickSightClient::DeleteAccountCustomPermission(
    const DeleteAccountCustomPermissionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountCustomPermission", "Required field: AwsAccountId, is not set");
    return DeleteAccountCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
  };

  return DeleteAccountCustomPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAccountCustomizationOutcome QuickSightClient::DeleteAccountCustomization(const DeleteAccountCustomizationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountCustomization", "Required field: AwsAccountId, is not set");
    return DeleteAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  };

  return DeleteAccountCustomizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAccountSubscriptionOutcome QuickSightClient::DeleteAccountSubscription(const DeleteAccountSubscriptionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccountSubscription", "Required field: AwsAccountId, is not set");
    return DeleteAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  };

  return DeleteAccountSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteActionConnectorOutcome QuickSightClient::DeleteActionConnector(const DeleteActionConnectorRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteActionConnector", "Required field: AwsAccountId, is not set");
    return DeleteActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.ActionConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteActionConnector", "Required field: ActionConnectorId, is not set");
    return DeleteActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ActionConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/action-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionConnectorId());
  };

  return DeleteActionConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAnalysisOutcome QuickSightClient::DeleteAnalysis(const DeleteAnalysisRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AwsAccountId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAnalysis", "Required field: AnalysisId, is not set");
    return DeleteAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  return DeleteAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBrandOutcome QuickSightClient::DeleteBrand(const DeleteBrandRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrand", "Required field: AwsAccountId, is not set");
    return DeleteBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrand", "Required field: BrandId, is not set");
    return DeleteBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BrandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
  };

  return DeleteBrandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBrandAssignmentOutcome QuickSightClient::DeleteBrandAssignment(const DeleteBrandAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBrandAssignment", "Required field: AwsAccountId, is not set");
    return DeleteBrandAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brandassignments");
  };

  return DeleteBrandAssignmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteCustomPermissionsOutcome QuickSightClient::DeleteCustomPermissions(const DeleteCustomPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomPermissions", "Required field: AwsAccountId, is not set");
    return DeleteCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.CustomPermissionsNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCustomPermissions", "Required field: CustomPermissionsName, is not set");
    return DeleteCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [CustomPermissionsName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPermissionsName());
  };

  return DeleteCustomPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDashboardOutcome QuickSightClient::DeleteDashboard(const DeleteDashboardRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: AwsAccountId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: DashboardId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return DeleteDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSetOutcome QuickSightClient::DeleteDataSet(const DeleteDataSetRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: AwsAccountId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: DataSetId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  return DeleteDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSetRefreshPropertiesOutcome QuickSightClient::DeleteDataSetRefreshProperties(
    const DeleteDataSetRefreshPropertiesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return DeleteDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return DeleteDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
  };

  return DeleteDataSetRefreshPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataSourceOutcome QuickSightClient::DeleteDataSource(const DeleteDataSourceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: AwsAccountId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSource", "Required field: DataSourceId, is not set");
    return DeleteDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  return DeleteDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDefaultQBusinessApplicationOutcome QuickSightClient::DeleteDefaultQBusinessApplication(
    const DeleteDefaultQBusinessApplicationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDefaultQBusinessApplication", "Required field: AwsAccountId, is not set");
    return DeleteDefaultQBusinessApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-qbusiness-application");
  };

  return DeleteDefaultQBusinessApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFolderOutcome QuickSightClient::DeleteFolder(const DeleteFolderRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: AwsAccountId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolder", "Required field: FolderId, is not set");
    return DeleteFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return DeleteFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFolderMembershipOutcome QuickSightClient::DeleteFolderMembership(const DeleteFolderMembershipRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: AwsAccountId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: FolderId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FolderId]", false));
  }
  if (!request.MemberIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberId, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MemberId]", false));
  }
  if (!request.MemberTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteFolderMembership", "Required field: MemberType, is not set");
    return DeleteFolderMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [MemberType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(MemberTypeMapper::GetNameForMemberType(request.GetMemberType()));
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberId());
  };

  return DeleteFolderMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGroupOutcome QuickSightClient::DeleteGroup(const DeleteGroupRequest& request) const {
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: GroupName, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: AwsAccountId, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroup", "Required field: Namespace, is not set");
    return DeleteGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  };

  return DeleteGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGroupMembershipOutcome QuickSightClient::DeleteGroupMembership(const DeleteGroupMembershipRequest& request) const {
  if (!request.MemberNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: MemberName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: GroupName, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: AwsAccountId, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGroupMembership", "Required field: Namespace, is not set");
    return DeleteGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  };

  return DeleteGroupMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIAMPolicyAssignmentOutcome QuickSightClient::DeleteIAMPolicyAssignment(const DeleteIAMPolicyAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DeleteIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespace/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  };

  return DeleteIAMPolicyAssignmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteIdentityPropagationConfigOutcome QuickSightClient::DeleteIdentityPropagationConfig(
    const DeleteIdentityPropagationConfigRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdentityPropagationConfig", "Required field: AwsAccountId, is not set");
    return DeleteIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ServiceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteIdentityPropagationConfig", "Required field: Service, is not set");
    return DeleteIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Service]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-propagation-config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ServiceTypeMapper::GetNameForServiceType(request.GetService()));
  };

  return DeleteIdentityPropagationConfigOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteNamespaceOutcome QuickSightClient::DeleteNamespace(const DeleteNamespaceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: AwsAccountId, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteNamespace", "Required field: Namespace, is not set");
    return DeleteNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  };

  return DeleteNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRefreshScheduleOutcome QuickSightClient::DeleteRefreshSchedule(const DeleteRefreshScheduleRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: DataSetId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.ScheduleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRefreshSchedule", "Required field: ScheduleId, is not set");
    return DeleteRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ScheduleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
  };

  return DeleteRefreshScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoleCustomPermissionOutcome QuickSightClient::DeleteRoleCustomPermission(const DeleteRoleCustomPermissionRequest& request) const {
  if (!request.RoleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleCustomPermission", "Required field: Role, is not set");
    return DeleteRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleCustomPermission", "Required field: AwsAccountId, is not set");
    return DeleteRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleCustomPermission", "Required field: Namespace, is not set");
    return DeleteRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(RoleMapper::GetNameForRole(request.GetRole()));
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
  };

  return DeleteRoleCustomPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRoleMembershipOutcome QuickSightClient::DeleteRoleMembership(const DeleteRoleMembershipRequest& request) const {
  if (!request.MemberNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleMembership", "Required field: MemberName, is not set");
    return DeleteRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [MemberName]", false));
  }
  if (!request.RoleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleMembership", "Required field: Role, is not set");
    return DeleteRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleMembership", "Required field: AwsAccountId, is not set");
    return DeleteRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRoleMembership", "Required field: Namespace, is not set");
    return DeleteRoleMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(RoleMapper::GetNameForRole(request.GetRole()));
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  };

  return DeleteRoleMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTemplateOutcome QuickSightClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: AwsAccountId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  return DeleteTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTemplateAliasOutcome QuickSightClient::DeleteTemplateAlias(const DeleteTemplateAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AwsAccountId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: TemplateId, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateAlias", "Required field: AliasName, is not set");
    return DeleteTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AliasName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  };

  return DeleteTemplateAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteThemeOutcome QuickSightClient::DeleteTheme(const DeleteThemeRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: AwsAccountId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: ThemeId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  };

  return DeleteThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteThemeAliasOutcome QuickSightClient::DeleteThemeAlias(const DeleteThemeAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AwsAccountId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: ThemeId, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteThemeAlias", "Required field: AliasName, is not set");
    return DeleteThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AliasName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
  };

  return DeleteThemeAliasOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTopicOutcome QuickSightClient::DeleteTopic(const DeleteTopicRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: AwsAccountId, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopic", "Required field: TopicId, is not set");
    return DeleteTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  };

  return DeleteTopicOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTopicRefreshScheduleOutcome QuickSightClient::DeleteTopicRefreshSchedule(const DeleteTopicRefreshScheduleRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: TopicId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return DeleteTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  };

  return DeleteTopicRefreshScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserOutcome QuickSightClient::DeleteUser(const DeleteUserRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: UserName, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: AwsAccountId, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUser", "Required field: Namespace, is not set");
    return DeleteUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
  };

  return DeleteUserOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserByPrincipalIdOutcome QuickSightClient::DeleteUserByPrincipalId(const DeleteUserByPrincipalIdRequest& request) const {
  if (!request.PrincipalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: PrincipalId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [PrincipalId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: AwsAccountId, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserByPrincipalId", "Required field: Namespace, is not set");
    return DeleteUserByPrincipalIdOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/user-principals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPrincipalId());
  };

  return DeleteUserByPrincipalIdOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteUserCustomPermissionOutcome QuickSightClient::DeleteUserCustomPermission(const DeleteUserCustomPermissionRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserCustomPermission", "Required field: UserName, is not set");
    return DeleteUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserCustomPermission", "Required field: AwsAccountId, is not set");
    return DeleteUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteUserCustomPermission", "Required field: Namespace, is not set");
    return DeleteUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
  };

  return DeleteUserCustomPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteVPCConnectionOutcome QuickSightClient::DeleteVPCConnection(const DeleteVPCConnectionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVPCConnection", "Required field: AwsAccountId, is not set");
    return DeleteVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteVPCConnection", "Required field: VPCConnectionId, is not set");
    return DeleteVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VPCConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  };

  return DeleteVPCConnectionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeAccountCustomPermissionOutcome QuickSightClient::DescribeAccountCustomPermission(
    const DescribeAccountCustomPermissionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccountCustomPermission", "Required field: AwsAccountId, is not set");
    return DescribeAccountCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
  };

  return DescribeAccountCustomPermissionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAccountCustomizationOutcome QuickSightClient::DescribeAccountCustomization(
    const DescribeAccountCustomizationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccountCustomization", "Required field: AwsAccountId, is not set");
    return DescribeAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  };

  return DescribeAccountCustomizationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAccountSettingsOutcome QuickSightClient::DescribeAccountSettings(const DescribeAccountSettingsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccountSettings", "Required field: AwsAccountId, is not set");
    return DescribeAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  return DescribeAccountSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAccountSubscriptionOutcome QuickSightClient::DescribeAccountSubscription(const DescribeAccountSubscriptionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccountSubscription", "Required field: AwsAccountId, is not set");
    return DescribeAccountSubscriptionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/account/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
  };

  return DescribeAccountSubscriptionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeActionConnectorOutcome QuickSightClient::DescribeActionConnector(const DescribeActionConnectorRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeActionConnector", "Required field: AwsAccountId, is not set");
    return DescribeActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.ActionConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeActionConnector", "Required field: ActionConnectorId, is not set");
    return DescribeActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ActionConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/action-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionConnectorId());
  };

  return DescribeActionConnectorOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeActionConnectorPermissionsOutcome QuickSightClient::DescribeActionConnectorPermissions(
    const DescribeActionConnectorPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeActionConnectorPermissions", "Required field: AwsAccountId, is not set");
    return DescribeActionConnectorPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ActionConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeActionConnectorPermissions", "Required field: ActionConnectorId, is not set");
    return DescribeActionConnectorPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ActionConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/action-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeActionConnectorPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAnalysisOutcome QuickSightClient::DescribeAnalysis(const DescribeAnalysisRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysis", "Required field: AnalysisId, is not set");
    return DescribeAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  return DescribeAnalysisOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAnalysisDefinitionOutcome QuickSightClient::DescribeAnalysisDefinition(const DescribeAnalysisDefinitionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisDefinition", "Required field: AnalysisId, is not set");
    return DescribeAnalysisDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  };

  return DescribeAnalysisDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAnalysisPermissionsOutcome QuickSightClient::DescribeAnalysisPermissions(const DescribeAnalysisPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAnalysisPermissions", "Required field: AnalysisId, is not set");
    return DescribeAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeAnalysisPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetBundleExportJobOutcome QuickSightClient::DescribeAssetBundleExportJob(
    const DescribeAssetBundleExportJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetBundleExportJob", "Required field: AwsAccountId, is not set");
    return DescribeAssetBundleExportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssetBundleExportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetBundleExportJob", "Required field: AssetBundleExportJobId, is not set");
    return DescribeAssetBundleExportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetBundleExportJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-export-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetBundleExportJobId());
  };

  return DescribeAssetBundleExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetBundleImportJobOutcome QuickSightClient::DescribeAssetBundleImportJob(
    const DescribeAssetBundleImportJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetBundleImportJob", "Required field: AwsAccountId, is not set");
    return DescribeAssetBundleImportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssetBundleImportJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetBundleImportJob", "Required field: AssetBundleImportJobId, is not set");
    return DescribeAssetBundleImportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetBundleImportJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-import-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetBundleImportJobId());
  };

  return DescribeAssetBundleImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBrandOutcome QuickSightClient::DescribeBrand(const DescribeBrandRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBrand", "Required field: AwsAccountId, is not set");
    return DescribeBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBrand", "Required field: BrandId, is not set");
    return DescribeBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BrandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
  };

  return DescribeBrandOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBrandAssignmentOutcome QuickSightClient::DescribeBrandAssignment(const DescribeBrandAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBrandAssignment", "Required field: AwsAccountId, is not set");
    return DescribeBrandAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brandassignments");
  };

  return DescribeBrandAssignmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBrandPublishedVersionOutcome QuickSightClient::DescribeBrandPublishedVersion(
    const DescribeBrandPublishedVersionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBrandPublishedVersion", "Required field: AwsAccountId, is not set");
    return DescribeBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBrandPublishedVersion", "Required field: BrandId, is not set");
    return DescribeBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishedversion");
  };

  return DescribeBrandPublishedVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeCustomPermissionsOutcome QuickSightClient::DescribeCustomPermissions(const DescribeCustomPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomPermissions", "Required field: AwsAccountId, is not set");
    return DescribeCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.CustomPermissionsNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeCustomPermissions", "Required field: CustomPermissionsName, is not set");
    return DescribeCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPermissionsName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPermissionsName());
  };

  return DescribeCustomPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardOutcome QuickSightClient::DescribeDashboard(const DescribeDashboardRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: AwsAccountId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: DashboardId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return DescribeDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardDefinitionOutcome QuickSightClient::DescribeDashboardDefinition(const DescribeDashboardDefinitionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: AwsAccountId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardDefinition", "Required field: DashboardId, is not set");
    return DescribeDashboardDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
  };

  return DescribeDashboardDefinitionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardPermissionsOutcome QuickSightClient::DescribeDashboardPermissions(
    const DescribeDashboardPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardPermissions", "Required field: DashboardId, is not set");
    return DescribeDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeDashboardPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardSnapshotJobOutcome QuickSightClient::DescribeDashboardSnapshotJob(
    const DescribeDashboardSnapshotJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJob", "Required field: AwsAccountId, is not set");
    return DescribeDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJob", "Required field: DashboardId, is not set");
    return DescribeDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.SnapshotJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJob", "Required field: SnapshotJobId, is not set");
    return DescribeDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotJobId());
  };

  return DescribeDashboardSnapshotJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardSnapshotJobResultOutcome QuickSightClient::DescribeDashboardSnapshotJobResult(
    const DescribeDashboardSnapshotJobResultRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJobResult", "Required field: AwsAccountId, is not set");
    return DescribeDashboardSnapshotJobResultOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJobResult", "Required field: DashboardId, is not set");
    return DescribeDashboardSnapshotJobResultOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.SnapshotJobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardSnapshotJobResult", "Required field: SnapshotJobId, is not set");
    return DescribeDashboardSnapshotJobResultOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [SnapshotJobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSnapshotJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/result");
  };

  return DescribeDashboardSnapshotJobResultOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardsQAConfigurationOutcome QuickSightClient::DescribeDashboardsQAConfiguration(
    const DescribeDashboardsQAConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboardsQAConfiguration", "Required field: AwsAccountId, is not set");
    return DescribeDashboardsQAConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards-qa-configuration");
  };

  return DescribeDashboardsQAConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataSetOutcome QuickSightClient::DescribeDataSet(const DescribeDataSetRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: AwsAccountId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSet", "Required field: DataSetId, is not set");
    return DescribeDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  return DescribeDataSetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataSetPermissionsOutcome QuickSightClient::DescribeDataSetPermissions(const DescribeDataSetPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSetPermissions", "Required field: DataSetId, is not set");
    return DescribeDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeDataSetPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataSetRefreshPropertiesOutcome QuickSightClient::DescribeDataSetRefreshProperties(
    const DescribeDataSetRefreshPropertiesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return DescribeDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return DescribeDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
  };

  return DescribeDataSetRefreshPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataSourceOutcome QuickSightClient::DescribeDataSource(const DescribeDataSourceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: AwsAccountId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSource", "Required field: DataSourceId, is not set");
    return DescribeDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  return DescribeDataSourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDataSourcePermissionsOutcome QuickSightClient::DescribeDataSourcePermissions(
    const DescribeDataSourcePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataSourcePermissions", "Required field: DataSourceId, is not set");
    return DescribeDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeDataSourcePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDefaultQBusinessApplicationOutcome QuickSightClient::DescribeDefaultQBusinessApplication(
    const DescribeDefaultQBusinessApplicationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDefaultQBusinessApplication", "Required field: AwsAccountId, is not set");
    return DescribeDefaultQBusinessApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-qbusiness-application");
  };

  return DescribeDefaultQBusinessApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFolderOutcome QuickSightClient::DescribeFolder(const DescribeFolderRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: AwsAccountId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolder", "Required field: FolderId, is not set");
    return DescribeFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  return DescribeFolderOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFolderPermissionsOutcome QuickSightClient::DescribeFolderPermissions(const DescribeFolderPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolderPermissions", "Required field: FolderId, is not set");
    return DescribeFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  return DescribeFolderPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeFolderResolvedPermissionsOutcome QuickSightClient::DescribeFolderResolvedPermissions(
    const DescribeFolderResolvedPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: AwsAccountId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeFolderResolvedPermissions", "Required field: FolderId, is not set");
    return DescribeFolderResolvedPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolved-permissions");
  };

  return DescribeFolderResolvedPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGroupOutcome QuickSightClient::DescribeGroup(const DescribeGroupRequest& request) const {
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: GroupName, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: AwsAccountId, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroup", "Required field: Namespace, is not set");
    return DescribeGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
  };

  return DescribeGroupOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGroupMembershipOutcome QuickSightClient::DescribeGroupMembership(const DescribeGroupMembershipRequest& request) const {
  if (!request.MemberNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: MemberName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [MemberName]", false));
  }
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: GroupName, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: AwsAccountId, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGroupMembership", "Required field: Namespace, is not set");
    return DescribeGroupMembershipOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/members/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMemberName());
  };

  return DescribeGroupMembershipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIAMPolicyAssignmentOutcome QuickSightClient::DescribeIAMPolicyAssignment(const DescribeIAMPolicyAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIAMPolicyAssignment", "Required field: Namespace, is not set");
    return DescribeIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
  };

  return DescribeIAMPolicyAssignmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIngestionOutcome QuickSightClient::DescribeIngestion(const DescribeIngestionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: AwsAccountId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: DataSetId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataSetId]", false));
  }
  if (!request.IngestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIngestion", "Required field: IngestionId, is not set");
    return DescribeIngestionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IngestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIngestionId());
  };

  return DescribeIngestionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIpRestrictionOutcome QuickSightClient::DescribeIpRestriction(const DescribeIpRestrictionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIpRestriction", "Required field: AwsAccountId, is not set");
    return DescribeIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  };

  return DescribeIpRestrictionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeKeyRegistrationOutcome QuickSightClient::DescribeKeyRegistration(const DescribeKeyRegistrationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeKeyRegistration", "Required field: AwsAccountId, is not set");
    return DescribeKeyRegistrationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/key-registration");
  };

  return DescribeKeyRegistrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeNamespaceOutcome QuickSightClient::DescribeNamespace(const DescribeNamespaceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: AwsAccountId, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeNamespace", "Required field: Namespace, is not set");
    return DescribeNamespaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
  };

  return DescribeNamespaceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeQPersonalizationConfigurationOutcome QuickSightClient::DescribeQPersonalizationConfiguration(
    const DescribeQPersonalizationConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQPersonalizationConfiguration", "Required field: AwsAccountId, is not set");
    return DescribeQPersonalizationConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/q-personalization-configuration");
  };

  return DescribeQPersonalizationConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeQuickSightQSearchConfigurationOutcome QuickSightClient::DescribeQuickSightQSearchConfiguration(
    const DescribeQuickSightQSearchConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeQuickSightQSearchConfiguration", "Required field: AwsAccountId, is not set");
    return DescribeQuickSightQSearchConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quicksight-q-search-configuration");
  };

  return DescribeQuickSightQSearchConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}
