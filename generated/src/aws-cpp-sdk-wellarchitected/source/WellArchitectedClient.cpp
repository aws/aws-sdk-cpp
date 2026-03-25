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
#include <aws/wellarchitected/WellArchitectedClient.h>
#include <aws/wellarchitected/WellArchitectedEndpointProvider.h>
#include <aws/wellarchitected/WellArchitectedErrorMarshaller.h>
#include <aws/wellarchitected/model/AssociateLensesRequest.h>
#include <aws/wellarchitected/model/AssociateProfilesRequest.h>
#include <aws/wellarchitected/model/CreateLensShareRequest.h>
#include <aws/wellarchitected/model/CreateLensVersionRequest.h>
#include <aws/wellarchitected/model/CreateMilestoneRequest.h>
#include <aws/wellarchitected/model/CreateProfileRequest.h>
#include <aws/wellarchitected/model/CreateProfileShareRequest.h>
#include <aws/wellarchitected/model/CreateReviewTemplateRequest.h>
#include <aws/wellarchitected/model/CreateTemplateShareRequest.h>
#include <aws/wellarchitected/model/CreateWorkloadRequest.h>
#include <aws/wellarchitected/model/CreateWorkloadShareRequest.h>
#include <aws/wellarchitected/model/DeleteLensRequest.h>
#include <aws/wellarchitected/model/DeleteLensShareRequest.h>
#include <aws/wellarchitected/model/DeleteProfileRequest.h>
#include <aws/wellarchitected/model/DeleteProfileShareRequest.h>
#include <aws/wellarchitected/model/DeleteReviewTemplateRequest.h>
#include <aws/wellarchitected/model/DeleteTemplateShareRequest.h>
#include <aws/wellarchitected/model/DeleteWorkloadRequest.h>
#include <aws/wellarchitected/model/DeleteWorkloadShareRequest.h>
#include <aws/wellarchitected/model/DisassociateLensesRequest.h>
#include <aws/wellarchitected/model/DisassociateProfilesRequest.h>
#include <aws/wellarchitected/model/ExportLensRequest.h>
#include <aws/wellarchitected/model/GetAnswerRequest.h>
#include <aws/wellarchitected/model/GetConsolidatedReportRequest.h>
#include <aws/wellarchitected/model/GetGlobalSettingsRequest.h>
#include <aws/wellarchitected/model/GetLensRequest.h>
#include <aws/wellarchitected/model/GetLensReviewReportRequest.h>
#include <aws/wellarchitected/model/GetLensReviewRequest.h>
#include <aws/wellarchitected/model/GetLensVersionDifferenceRequest.h>
#include <aws/wellarchitected/model/GetMilestoneRequest.h>
#include <aws/wellarchitected/model/GetProfileRequest.h>
#include <aws/wellarchitected/model/GetProfileTemplateRequest.h>
#include <aws/wellarchitected/model/GetReviewTemplateAnswerRequest.h>
#include <aws/wellarchitected/model/GetReviewTemplateLensReviewRequest.h>
#include <aws/wellarchitected/model/GetReviewTemplateRequest.h>
#include <aws/wellarchitected/model/GetWorkloadRequest.h>
#include <aws/wellarchitected/model/ImportLensRequest.h>
#include <aws/wellarchitected/model/ListAnswersRequest.h>
#include <aws/wellarchitected/model/ListCheckDetailsRequest.h>
#include <aws/wellarchitected/model/ListCheckSummariesRequest.h>
#include <aws/wellarchitected/model/ListLensReviewImprovementsRequest.h>
#include <aws/wellarchitected/model/ListLensReviewsRequest.h>
#include <aws/wellarchitected/model/ListLensSharesRequest.h>
#include <aws/wellarchitected/model/ListLensesRequest.h>
#include <aws/wellarchitected/model/ListMilestonesRequest.h>
#include <aws/wellarchitected/model/ListNotificationsRequest.h>
#include <aws/wellarchitected/model/ListProfileNotificationsRequest.h>
#include <aws/wellarchitected/model/ListProfileSharesRequest.h>
#include <aws/wellarchitected/model/ListProfilesRequest.h>
#include <aws/wellarchitected/model/ListReviewTemplateAnswersRequest.h>
#include <aws/wellarchitected/model/ListReviewTemplatesRequest.h>
#include <aws/wellarchitected/model/ListShareInvitationsRequest.h>
#include <aws/wellarchitected/model/ListTagsForResourceRequest.h>
#include <aws/wellarchitected/model/ListTemplateSharesRequest.h>
#include <aws/wellarchitected/model/ListWorkloadSharesRequest.h>
#include <aws/wellarchitected/model/ListWorkloadsRequest.h>
#include <aws/wellarchitected/model/TagResourceRequest.h>
#include <aws/wellarchitected/model/UntagResourceRequest.h>
#include <aws/wellarchitected/model/UpdateAnswerRequest.h>
#include <aws/wellarchitected/model/UpdateGlobalSettingsRequest.h>
#include <aws/wellarchitected/model/UpdateIntegrationRequest.h>
#include <aws/wellarchitected/model/UpdateLensReviewRequest.h>
#include <aws/wellarchitected/model/UpdateProfileRequest.h>
#include <aws/wellarchitected/model/UpdateReviewTemplateAnswerRequest.h>
#include <aws/wellarchitected/model/UpdateReviewTemplateLensReviewRequest.h>
#include <aws/wellarchitected/model/UpdateReviewTemplateRequest.h>
#include <aws/wellarchitected/model/UpdateShareInvitationRequest.h>
#include <aws/wellarchitected/model/UpdateWorkloadRequest.h>
#include <aws/wellarchitected/model/UpdateWorkloadShareRequest.h>
#include <aws/wellarchitected/model/UpgradeLensReviewRequest.h>
#include <aws/wellarchitected/model/UpgradeProfileVersionRequest.h>
#include <aws/wellarchitected/model/UpgradeReviewTemplateLensReviewRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::WellArchitected;
using namespace Aws::WellArchitected::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace WellArchitected {
const char SERVICE_NAME[] = "wellarchitected";
const char ALLOCATION_TAG[] = "WellArchitectedClient";
}  // namespace WellArchitected
}  // namespace Aws
const char* WellArchitectedClient::GetServiceName() { return SERVICE_NAME; }
const char* WellArchitectedClient::GetAllocationTag() { return ALLOCATION_TAG; }

WellArchitectedClient::WellArchitectedClient(const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const AWSCredentials& credentials,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider,
                                             const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             std::shared_ptr<WellArchitectedEndpointProviderBase> endpointProvider,
                                             const WellArchitected::WellArchitectedClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
WellArchitectedClient::WellArchitectedClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

WellArchitectedClient::WellArchitectedClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<WellArchitectedErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<WellArchitectedEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
WellArchitectedClient::~WellArchitectedClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<WellArchitectedEndpointProviderBase>& WellArchitectedClient::accessEndpointProvider() { return m_endpointProvider; }

void WellArchitectedClient::init(const WellArchitected::WellArchitectedClientConfiguration& config) {
  AWSClient::SetServiceClientName("WellArchitected");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "wellarchitected");
}

void WellArchitectedClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
WellArchitectedClient::InvokeOperationOutcome WellArchitectedClient::InvokeServiceOperation(
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

AssociateLensesOutcome WellArchitectedClient::AssociateLenses(const AssociateLensesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateLenses", "Required field: WorkloadId, is not set");
    return AssociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateLenses");
  };

  return AssociateLensesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

AssociateProfilesOutcome WellArchitectedClient::AssociateProfiles(const AssociateProfilesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateProfiles", "Required field: WorkloadId, is not set");
    return AssociateProfilesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associateProfiles");
  };

  return AssociateProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

CreateLensShareOutcome WellArchitectedClient::CreateLensShare(const CreateLensShareRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLensShare", "Required field: LensAlias, is not set");
    return CreateLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return CreateLensShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLensVersionOutcome WellArchitectedClient::CreateLensVersion(const CreateLensVersionRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLensVersion", "Required field: LensAlias, is not set");
    return CreateLensVersionOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  return CreateLensVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateMilestoneOutcome WellArchitectedClient::CreateMilestone(const CreateMilestoneRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateMilestone", "Required field: WorkloadId, is not set");
    return CreateMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/milestones");
  };

  return CreateMilestoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileOutcome WellArchitectedClient::CreateProfile(const CreateProfileRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  return CreateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileShareOutcome WellArchitectedClient::CreateProfileShare(const CreateProfileShareRequest& request) const {
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateProfileShare", "Required field: ProfileArn, is not set");
    return CreateProfileShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return CreateProfileShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateReviewTemplateOutcome WellArchitectedClient::CreateReviewTemplate(const CreateReviewTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates");
  };

  return CreateReviewTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateTemplateShareOutcome WellArchitectedClient::CreateTemplateShare(const CreateTemplateShareRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplateShare", "Required field: TemplateArn, is not set");
    return CreateTemplateShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  return CreateTemplateShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkloadOutcome WellArchitectedClient::CreateWorkload(const CreateWorkloadRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads");
  };

  return CreateWorkloadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWorkloadShareOutcome WellArchitectedClient::CreateWorkloadShare(const CreateWorkloadShareRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWorkloadShare", "Required field: WorkloadId, is not set");
    return CreateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return CreateWorkloadShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLensOutcome WellArchitectedClient::DeleteLens(const DeleteLensRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: LensAlias, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LensAlias]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: ClientRequestToken, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ClientRequestToken]", false));
  }
  if (!request.LensStatusHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLens", "Required field: LensStatus, is not set");
    return DeleteLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LensStatus]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return DeleteLensOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteLensShareOutcome WellArchitectedClient::DeleteLensShare(const DeleteLensShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: ShareId, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: LensAlias, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLensShare", "Required field: ClientRequestToken, is not set");
    return DeleteLensShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return DeleteLensShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProfileOutcome WellArchitectedClient::DeleteProfile(const DeleteProfileRequest& request) const {
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ProfileArn, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProfileArn]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfile", "Required field: ClientRequestToken, is not set");
    return DeleteProfileOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
  };

  return DeleteProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProfileShareOutcome WellArchitectedClient::DeleteProfileShare(const DeleteProfileShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileShare", "Required field: ShareId, is not set");
    return DeleteProfileShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileShare", "Required field: ProfileArn, is not set");
    return DeleteProfileShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileArn]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProfileShare", "Required field: ClientRequestToken, is not set");
    return DeleteProfileShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return DeleteProfileShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteReviewTemplateOutcome WellArchitectedClient::DeleteReviewTemplate(const DeleteReviewTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReviewTemplate", "Required field: TemplateArn, is not set");
    return DeleteReviewTemplateOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteReviewTemplate", "Required field: ClientRequestToken, is not set");
    return DeleteReviewTemplateOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  return DeleteReviewTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTemplateShareOutcome WellArchitectedClient::DeleteTemplateShare(const DeleteTemplateShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateShare", "Required field: ShareId, is not set");
    return DeleteTemplateShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateShare", "Required field: TemplateArn, is not set");
    return DeleteTemplateShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplateShare", "Required field: ClientRequestToken, is not set");
    return DeleteTemplateShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return DeleteTemplateShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkloadOutcome WellArchitectedClient::DeleteWorkload(const DeleteWorkloadRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkload", "Required field: WorkloadId, is not set");
    return DeleteWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkloadId]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkload", "Required field: ClientRequestToken, is not set");
    return DeleteWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  };

  return DeleteWorkloadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWorkloadShareOutcome WellArchitectedClient::DeleteWorkloadShare(const DeleteWorkloadShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: ShareId, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: WorkloadId, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.ClientRequestTokenHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWorkloadShare", "Required field: ClientRequestToken, is not set");
    return DeleteWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientRequestToken]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return DeleteWorkloadShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DisassociateLensesOutcome WellArchitectedClient::DisassociateLenses(const DisassociateLensesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateLenses", "Required field: WorkloadId, is not set");
    return DisassociateLensesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateLenses");
  };

  return DisassociateLensesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

DisassociateProfilesOutcome WellArchitectedClient::DisassociateProfiles(const DisassociateProfilesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateProfiles", "Required field: WorkloadId, is not set");
    return DisassociateProfilesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociateProfiles");
  };

  return DisassociateProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

ExportLensOutcome WellArchitectedClient::ExportLens(const ExportLensRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportLens", "Required field: LensAlias, is not set");
    return ExportLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/export");
  };

  return ExportLensOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAnswerOutcome WellArchitectedClient::GetAnswer(const GetAnswerRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: WorkloadId, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: LensAlias, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAnswer", "Required field: QuestionId, is not set");
    return GetAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [QuestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  };

  return GetAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetConsolidatedReportOutcome WellArchitectedClient::GetConsolidatedReport(const GetConsolidatedReportRequest& request) const {
  if (!request.FormatHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetConsolidatedReport", "Required field: Format, is not set");
    return GetConsolidatedReportOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Format]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/consolidatedReport");
  };

  return GetConsolidatedReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetGlobalSettingsOutcome WellArchitectedClient::GetGlobalSettings(const GetGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  return GetGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLensOutcome WellArchitectedClient::GetLens(const GetLensRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLens", "Required field: LensAlias, is not set");
    return GetLensOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return GetLensOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLensReviewOutcome WellArchitectedClient::GetLensReview(const GetLensReviewRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLensReview", "Required field: WorkloadId, is not set");
    return GetLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLensReview", "Required field: LensAlias, is not set");
    return GetLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return GetLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLensReviewReportOutcome WellArchitectedClient::GetLensReviewReport(const GetLensReviewReportRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLensReviewReport", "Required field: WorkloadId, is not set");
    return GetLensReviewReportOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLensReviewReport", "Required field: LensAlias, is not set");
    return GetLensReviewReportOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/report");
  };

  return GetLensReviewReportOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetLensVersionDifferenceOutcome WellArchitectedClient::GetLensVersionDifference(const GetLensVersionDifferenceRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLensVersionDifference", "Required field: LensAlias, is not set");
    return GetLensVersionDifferenceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versionDifference");
  };

  return GetLensVersionDifferenceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMilestoneOutcome WellArchitectedClient::GetMilestone(const GetMilestoneRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMilestone", "Required field: WorkloadId, is not set");
    return GetMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkloadId]", false));
  }
  if (!request.MilestoneNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMilestone", "Required field: MilestoneNumber, is not set");
    return GetMilestoneOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [MilestoneNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/milestones/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetMilestoneNumber());
  };

  return GetMilestoneOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileOutcome WellArchitectedClient::GetProfile(const GetProfileRequest& request) const {
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetProfile", "Required field: ProfileArn, is not set");
    return GetProfileOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProfileArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
  };

  return GetProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetProfileTemplateOutcome WellArchitectedClient::GetProfileTemplate(const GetProfileTemplateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileTemplate");
  };

  return GetProfileTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReviewTemplateOutcome WellArchitectedClient::GetReviewTemplate(const GetReviewTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplate", "Required field: TemplateArn, is not set");
    return GetReviewTemplateOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  return GetReviewTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReviewTemplateAnswerOutcome WellArchitectedClient::GetReviewTemplateAnswer(const GetReviewTemplateAnswerRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplateAnswer", "Required field: TemplateArn, is not set");
    return GetReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplateAnswer", "Required field: LensAlias, is not set");
    return GetReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplateAnswer", "Required field: QuestionId, is not set");
    return GetReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  };

  return GetReviewTemplateAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetReviewTemplateLensReviewOutcome WellArchitectedClient::GetReviewTemplateLensReview(
    const GetReviewTemplateLensReviewRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplateLensReview", "Required field: TemplateArn, is not set");
    return GetReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReviewTemplateLensReview", "Required field: LensAlias, is not set");
    return GetReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return GetReviewTemplateLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWorkloadOutcome WellArchitectedClient::GetWorkload(const GetWorkloadRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWorkload", "Required field: WorkloadId, is not set");
    return GetWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  };

  return GetWorkloadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ImportLensOutcome WellArchitectedClient::ImportLens(const ImportLensRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/importLens");
  };

  return ImportLensOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

ListAnswersOutcome WellArchitectedClient::ListAnswers(const ListAnswersRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnswers", "Required field: WorkloadId, is not set");
    return ListAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAnswers", "Required field: LensAlias, is not set");
    return ListAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers");
  };

  return ListAnswersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCheckDetailsOutcome WellArchitectedClient::ListCheckDetails(const ListCheckDetailsRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCheckDetails", "Required field: WorkloadId, is not set");
    return ListCheckDetailsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/checks");
  };

  return ListCheckDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListCheckSummariesOutcome WellArchitectedClient::ListCheckSummaries(const ListCheckSummariesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCheckSummaries", "Required field: WorkloadId, is not set");
    return ListCheckSummariesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/checkSummaries");
  };

  return ListCheckSummariesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLensReviewImprovementsOutcome WellArchitectedClient::ListLensReviewImprovements(
    const ListLensReviewImprovementsRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLensReviewImprovements", "Required field: WorkloadId, is not set");
    return ListLensReviewImprovementsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLensReviewImprovements", "Required field: LensAlias, is not set");
    return ListLensReviewImprovementsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/improvements");
  };

  return ListLensReviewImprovementsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLensReviewsOutcome WellArchitectedClient::ListLensReviews(const ListLensReviewsRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLensReviews", "Required field: WorkloadId, is not set");
    return ListLensReviewsOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews");
  };

  return ListLensReviewsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLensSharesOutcome WellArchitectedClient::ListLensShares(const ListLensSharesRequest& request) const {
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLensShares", "Required field: LensAlias, is not set");
    return ListLensSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return ListLensSharesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListLensesOutcome WellArchitectedClient::ListLenses(const ListLensesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/lenses");
  };

  return ListLensesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListMilestonesOutcome WellArchitectedClient::ListMilestones(const ListMilestonesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListMilestones", "Required field: WorkloadId, is not set");
    return ListMilestonesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/milestonesSummaries");
  };

  return ListMilestonesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListNotificationsOutcome WellArchitectedClient::ListNotifications(const ListNotificationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/notifications");
  };

  return ListNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListProfileNotificationsOutcome WellArchitectedClient::ListProfileNotifications(const ListProfileNotificationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileNotifications/");
  };

  return ListProfileNotificationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfileSharesOutcome WellArchitectedClient::ListProfileShares(const ListProfileSharesRequest& request) const {
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProfileShares", "Required field: ProfileArn, is not set");
    return ListProfileSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return ListProfileSharesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProfilesOutcome WellArchitectedClient::ListProfiles(const ListProfilesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileSummaries");
  };

  return ListProfilesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReviewTemplateAnswersOutcome WellArchitectedClient::ListReviewTemplateAnswers(const ListReviewTemplateAnswersRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReviewTemplateAnswers", "Required field: TemplateArn, is not set");
    return ListReviewTemplateAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListReviewTemplateAnswers", "Required field: LensAlias, is not set");
    return ListReviewTemplateAnswersOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers");
  };

  return ListReviewTemplateAnswersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListReviewTemplatesOutcome WellArchitectedClient::ListReviewTemplates(const ListReviewTemplatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates");
  };

  return ListReviewTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListShareInvitationsOutcome WellArchitectedClient::ListShareInvitations(const ListShareInvitationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/shareInvitations");
  };

  return ListShareInvitationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome WellArchitectedClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.WorkloadArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: WorkloadArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTemplateSharesOutcome WellArchitectedClient::ListTemplateShares(const ListTemplateSharesRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateShares", "Required field: TemplateArn, is not set");
    return ListTemplateSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  return ListTemplateSharesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkloadSharesOutcome WellArchitectedClient::ListWorkloadShares(const ListWorkloadSharesRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWorkloadShares", "Required field: WorkloadId, is not set");
    return ListWorkloadSharesOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares");
  };

  return ListWorkloadSharesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWorkloadsOutcome WellArchitectedClient::ListWorkloads(const ListWorkloadsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloadsSummaries");
  };

  return ListWorkloadsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome WellArchitectedClient::TagResource(const TagResourceRequest& request) const {
  if (!request.WorkloadArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: WorkloadArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkloadArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome WellArchitectedClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.WorkloadArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: WorkloadArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [WorkloadArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAnswerOutcome WellArchitectedClient::UpdateAnswer(const UpdateAnswerRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: WorkloadId, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: LensAlias, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnswer", "Required field: QuestionId, is not set");
    return UpdateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [QuestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  };

  return UpdateAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateGlobalSettingsOutcome WellArchitectedClient::UpdateGlobalSettings(const UpdateGlobalSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/global-settings");
  };

  return UpdateGlobalSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateIntegrationOutcome WellArchitectedClient::UpdateIntegration(const UpdateIntegrationRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIntegration", "Required field: WorkloadId, is not set");
    return UpdateIntegrationOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/updateIntegration");
  };

  return UpdateIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLensReviewOutcome WellArchitectedClient::UpdateLensReview(const UpdateLensReviewRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLensReview", "Required field: WorkloadId, is not set");
    return UpdateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLensReview", "Required field: LensAlias, is not set");
    return UpdateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return UpdateLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateProfileOutcome WellArchitectedClient::UpdateProfile(const UpdateProfileRequest& request) const {
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfile", "Required field: ProfileArn, is not set");
    return UpdateProfileOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProfileArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
  };

  return UpdateProfileOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateReviewTemplateOutcome WellArchitectedClient::UpdateReviewTemplate(const UpdateReviewTemplateRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplate", "Required field: TemplateArn, is not set");
    return UpdateReviewTemplateOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
  };

  return UpdateReviewTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateReviewTemplateAnswerOutcome WellArchitectedClient::UpdateReviewTemplateAnswer(
    const UpdateReviewTemplateAnswerRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplateAnswer", "Required field: TemplateArn, is not set");
    return UpdateReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplateAnswer", "Required field: LensAlias, is not set");
    return UpdateReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }
  if (!request.QuestionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplateAnswer", "Required field: QuestionId, is not set");
    return UpdateReviewTemplateAnswerOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [QuestionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/answers/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetQuestionId());
  };

  return UpdateReviewTemplateAnswerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateReviewTemplateLensReviewOutcome WellArchitectedClient::UpdateReviewTemplateLensReview(
    const UpdateReviewTemplateLensReviewRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplateLensReview", "Required field: TemplateArn, is not set");
    return UpdateReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateReviewTemplateLensReview", "Required field: LensAlias, is not set");
    return UpdateReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
  };

  return UpdateReviewTemplateLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateShareInvitationOutcome WellArchitectedClient::UpdateShareInvitation(const UpdateShareInvitationRequest& request) const {
  if (!request.ShareInvitationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateShareInvitation", "Required field: ShareInvitationId, is not set");
    return UpdateShareInvitationOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareInvitationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/shareInvitations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareInvitationId());
  };

  return UpdateShareInvitationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWorkloadOutcome WellArchitectedClient::UpdateWorkload(const UpdateWorkloadRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkload", "Required field: WorkloadId, is not set");
    return UpdateWorkloadOutcome(Aws::Client::AWSError<WellArchitectedErrors>(WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
  };

  return UpdateWorkloadOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateWorkloadShareOutcome WellArchitectedClient::UpdateWorkloadShare(const UpdateWorkloadShareRequest& request) const {
  if (!request.ShareIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkloadShare", "Required field: ShareId, is not set");
    return UpdateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ShareId]", false));
  }
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkloadShare", "Required field: WorkloadId, is not set");
    return UpdateWorkloadShareOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/shares/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetShareId());
  };

  return UpdateWorkloadShareOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpgradeLensReviewOutcome WellArchitectedClient::UpgradeLensReview(const UpgradeLensReviewRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeLensReview", "Required field: WorkloadId, is not set");
    return UpgradeLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeLensReview", "Required field: LensAlias, is not set");
    return UpgradeLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upgrade");
  };

  return UpgradeLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpgradeProfileVersionOutcome WellArchitectedClient::UpgradeProfileVersion(const UpgradeProfileVersionRequest& request) const {
  if (!request.WorkloadIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeProfileVersion", "Required field: WorkloadId, is not set");
    return UpgradeProfileVersionOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [WorkloadId]", false));
  }
  if (!request.ProfileArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeProfileVersion", "Required field: ProfileArn, is not set");
    return UpgradeProfileVersionOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProfileArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workloads/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkloadId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upgrade");
  };

  return UpgradeProfileVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpgradeReviewTemplateLensReviewOutcome WellArchitectedClient::UpgradeReviewTemplateLensReview(
    const UpgradeReviewTemplateLensReviewRequest& request) const {
  if (!request.TemplateArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeReviewTemplateLensReview", "Required field: TemplateArn, is not set");
    return UpgradeReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateArn]", false));
  }
  if (!request.LensAliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpgradeReviewTemplateLensReview", "Required field: LensAlias, is not set");
    return UpgradeReviewTemplateLensReviewOutcome(Aws::Client::AWSError<WellArchitectedErrors>(
        WellArchitectedErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [LensAlias]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewTemplates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/lensReviews/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLensAlias());
    endpointResolutionOutcome.GetResult().AddPathSegments("/upgrade");
  };

  return UpgradeReviewTemplateLensReviewOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
