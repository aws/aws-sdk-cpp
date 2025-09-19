/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/quicksight/QuickSightClient.h>
#include <aws/quicksight/QuickSightErrorMarshaller.h>
#include <aws/quicksight/QuickSightEndpointProvider.h>
#include <aws/quicksight/model/DescribeTemplateDefinitionRequest.h>
#include <aws/quicksight/model/DescribeTemplatePermissionsRequest.h>
#include <aws/quicksight/model/DescribeThemeRequest.h>
#include <aws/quicksight/model/DescribeThemeAliasRequest.h>
#include <aws/quicksight/model/DescribeThemePermissionsRequest.h>
#include <aws/quicksight/model/DescribeTopicRequest.h>
#include <aws/quicksight/model/DescribeTopicPermissionsRequest.h>
#include <aws/quicksight/model/DescribeTopicRefreshRequest.h>
#include <aws/quicksight/model/DescribeTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/DescribeUserRequest.h>
#include <aws/quicksight/model/DescribeVPCConnectionRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForAnonymousUserRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserRequest.h>
#include <aws/quicksight/model/GenerateEmbedUrlForRegisteredUserWithIdentityRequest.h>
#include <aws/quicksight/model/GetDashboardEmbedUrlRequest.h>
#include <aws/quicksight/model/GetSessionEmbedUrlRequest.h>
#include <aws/quicksight/model/ListAnalysesRequest.h>
#include <aws/quicksight/model/ListAssetBundleExportJobsRequest.h>
#include <aws/quicksight/model/ListAssetBundleImportJobsRequest.h>
#include <aws/quicksight/model/ListBrandsRequest.h>
#include <aws/quicksight/model/ListCustomPermissionsRequest.h>
#include <aws/quicksight/model/ListDashboardVersionsRequest.h>
#include <aws/quicksight/model/ListDashboardsRequest.h>
#include <aws/quicksight/model/ListDataSetsRequest.h>
#include <aws/quicksight/model/ListDataSourcesRequest.h>
#include <aws/quicksight/model/ListFolderMembersRequest.h>
#include <aws/quicksight/model/ListFoldersRequest.h>
#include <aws/quicksight/model/ListFoldersForResourceRequest.h>
#include <aws/quicksight/model/ListGroupMembershipsRequest.h>
#include <aws/quicksight/model/ListGroupsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsRequest.h>
#include <aws/quicksight/model/ListIAMPolicyAssignmentsForUserRequest.h>
#include <aws/quicksight/model/ListIdentityPropagationConfigsRequest.h>
#include <aws/quicksight/model/ListIngestionsRequest.h>
#include <aws/quicksight/model/ListNamespacesRequest.h>
#include <aws/quicksight/model/ListRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListRoleMembershipsRequest.h>
#include <aws/quicksight/model/ListTagsForResourceRequest.h>
#include <aws/quicksight/model/ListTemplateAliasesRequest.h>
#include <aws/quicksight/model/ListTemplateVersionsRequest.h>
#include <aws/quicksight/model/ListTemplatesRequest.h>
#include <aws/quicksight/model/ListThemeAliasesRequest.h>
#include <aws/quicksight/model/ListThemeVersionsRequest.h>
#include <aws/quicksight/model/ListThemesRequest.h>
#include <aws/quicksight/model/ListTopicRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListTopicReviewedAnswersRequest.h>
#include <aws/quicksight/model/ListTopicsRequest.h>
#include <aws/quicksight/model/ListUserGroupsRequest.h>
#include <aws/quicksight/model/ListUsersRequest.h>
#include <aws/quicksight/model/ListVPCConnectionsRequest.h>
#include <aws/quicksight/model/PredictQAResultsRequest.h>
#include <aws/quicksight/model/PutDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/quicksight/model/RestoreAnalysisRequest.h>
#include <aws/quicksight/model/SearchAnalysesRequest.h>
#include <aws/quicksight/model/SearchDashboardsRequest.h>
#include <aws/quicksight/model/SearchDataSetsRequest.h>
#include <aws/quicksight/model/SearchDataSourcesRequest.h>
#include <aws/quicksight/model/SearchFoldersRequest.h>
#include <aws/quicksight/model/SearchGroupsRequest.h>
#include <aws/quicksight/model/SearchTopicsRequest.h>
#include <aws/quicksight/model/StartAssetBundleExportJobRequest.h>
#include <aws/quicksight/model/StartAssetBundleImportJobRequest.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobRequest.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobScheduleRequest.h>
#include <aws/quicksight/model/TagResourceRequest.h>
#include <aws/quicksight/model/UntagResourceRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomPermissionRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomizationRequest.h>
#include <aws/quicksight/model/UpdateAccountSettingsRequest.h>
#include <aws/quicksight/model/UpdateAnalysisRequest.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/UpdateApplicationWithTokenExchangeGrantRequest.h>
#include <aws/quicksight/model/UpdateBrandRequest.h>
#include <aws/quicksight/model/UpdateBrandAssignmentRequest.h>
#include <aws/quicksight/model/UpdateBrandPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateCustomPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardRequest.h>
#include <aws/quicksight/model/UpdateDashboardLinksRequest.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateDashboardsQAConfigurationRequest.h>
#include <aws/quicksight/model/UpdateDataSetRequest.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDataSourceRequest.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/UpdateDefaultQBusinessApplicationRequest.h>
#include <aws/quicksight/model/UpdateFolderRequest.h>
#include <aws/quicksight/model/UpdateFolderPermissionsRequest.h>
#include <aws/quicksight/model/UpdateGroupRequest.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/UpdateIdentityPropagationConfigRequest.h>
#include <aws/quicksight/model/UpdateIpRestrictionRequest.h>
#include <aws/quicksight/model/UpdateKeyRegistrationRequest.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsRequest.h>
#include <aws/quicksight/model/UpdateQPersonalizationConfigurationRequest.h>
#include <aws/quicksight/model/UpdateQuickSightQSearchConfigurationRequest.h>
#include <aws/quicksight/model/UpdateRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateRoleCustomPermissionRequest.h>
#include <aws/quicksight/model/UpdateSPICECapacityConfigurationRequest.h>

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


DescribeTemplateDefinitionOutcome QuickSightClient::DescribeTemplateDefinition(const DescribeTemplateDefinitionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTemplateDefinition);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: AwsAccountId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplateDefinition", "Required field: TemplateId, is not set");
    return DescribeTemplateDefinitionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTemplateDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTemplateDefinition, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTemplateDefinition",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTemplateDefinitionOutcome>(
    [&]()-> DescribeTemplateDefinitionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplateDefinition, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/definition");
      return DescribeTemplateDefinitionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTemplatePermissionsOutcome QuickSightClient::DescribeTemplatePermissions(const DescribeTemplatePermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTemplatePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: AwsAccountId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTemplatePermissions", "Required field: TemplateId, is not set");
    return DescribeTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTemplatePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTemplatePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTemplatePermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTemplatePermissionsOutcome>(
    [&]()-> DescribeTemplatePermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTemplatePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return DescribeTemplatePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThemeOutcome QuickSightClient::DescribeTheme(const DescribeThemeRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTheme);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: AwsAccountId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTheme", "Required field: ThemeId, is not set");
    return DescribeThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTheme, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTheme, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTheme",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThemeOutcome>(
    [&]()-> DescribeThemeOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTheme, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
      return DescribeThemeOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThemeAliasOutcome QuickSightClient::DescribeThemeAlias(const DescribeThemeAliasRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThemeAlias);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AwsAccountId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: ThemeId, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemeAlias", "Required field: AliasName, is not set");
    return DescribeThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AliasName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeThemeAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThemeAlias, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThemeAlias",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThemeAliasOutcome>(
    [&]()-> DescribeThemeAliasOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemeAlias, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAliasName());
      return DescribeThemeAliasOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeThemePermissionsOutcome QuickSightClient::DescribeThemePermissions(const DescribeThemePermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeThemePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: AwsAccountId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeThemePermissions", "Required field: ThemeId, is not set");
    return DescribeThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeThemePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeThemePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeThemePermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeThemePermissionsOutcome>(
    [&]()-> DescribeThemePermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeThemePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return DescribeThemePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTopicOutcome QuickSightClient::DescribeTopic(const DescribeTopicRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTopic);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: AwsAccountId, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopic", "Required field: TopicId, is not set");
    return DescribeTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTopic, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTopic, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTopic",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTopicOutcome>(
    [&]()-> DescribeTopicOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopic, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      return DescribeTopicOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTopicPermissionsOutcome QuickSightClient::DescribeTopicPermissions(const DescribeTopicPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTopicPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicPermissions", "Required field: AwsAccountId, is not set");
    return DescribeTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicPermissions", "Required field: TopicId, is not set");
    return DescribeTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTopicPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTopicPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTopicPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTopicPermissionsOutcome>(
    [&]()-> DescribeTopicPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return DescribeTopicPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTopicRefreshOutcome QuickSightClient::DescribeTopicRefresh(const DescribeTopicRefreshRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTopicRefresh);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicRefresh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: AwsAccountId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: TopicId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.RefreshIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefresh", "Required field: RefreshId, is not set");
    return DescribeTopicRefreshOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RefreshId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTopicRefresh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTopicRefresh, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTopicRefresh",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTopicRefreshOutcome>(
    [&]()-> DescribeTopicRefreshOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicRefresh, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/refresh/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRefreshId());
      return DescribeTopicRefreshOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeTopicRefreshScheduleOutcome QuickSightClient::DescribeTopicRefreshSchedule(const DescribeTopicRefreshScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeTopicRefreshSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: TopicId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return DescribeTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DatasetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeTopicRefreshSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeTopicRefreshScheduleOutcome>(
    [&]()-> DescribeTopicRefreshScheduleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTopicRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
      return DescribeTopicRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeUserOutcome QuickSightClient::DescribeUser(const DescribeUserRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: UserName, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: AwsAccountId, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeUser", "Required field: Namespace, is not set");
    return DescribeUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeUserOutcome>(
    [&]()-> DescribeUserOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
      return DescribeUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

DescribeVPCConnectionOutcome QuickSightClient::DescribeVPCConnection(const DescribeVPCConnectionRequest& request) const
{
  AWS_OPERATION_GUARD(DescribeVPCConnection);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVPCConnection", "Required field: AwsAccountId, is not set");
    return DescribeVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeVPCConnection", "Required field: VPCConnectionId, is not set");
    return DescribeVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VPCConnectionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, DescribeVPCConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, DescribeVPCConnection, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".DescribeVPCConnection",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<DescribeVPCConnectionOutcome>(
    [&]()-> DescribeVPCConnectionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVPCConnection, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
      return DescribeVPCConnectionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateEmbedUrlForAnonymousUserOutcome QuickSightClient::GenerateEmbedUrlForAnonymousUser(const GenerateEmbedUrlForAnonymousUserRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateEmbedUrlForAnonymousUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForAnonymousUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForAnonymousUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateEmbedUrlForAnonymousUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateEmbedUrlForAnonymousUserOutcome>(
    [&]()-> GenerateEmbedUrlForAnonymousUserOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForAnonymousUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/anonymous-user");
      return GenerateEmbedUrlForAnonymousUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateEmbedUrlForRegisteredUserOutcome QuickSightClient::GenerateEmbedUrlForRegisteredUser(const GenerateEmbedUrlForRegisteredUserRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateEmbedUrlForRegisteredUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForRegisteredUser", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForRegisteredUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateEmbedUrlForRegisteredUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateEmbedUrlForRegisteredUserOutcome>(
    [&]()-> GenerateEmbedUrlForRegisteredUserOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForRegisteredUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/registered-user");
      return GenerateEmbedUrlForRegisteredUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GenerateEmbedUrlForRegisteredUserWithIdentityOutcome QuickSightClient::GenerateEmbedUrlForRegisteredUserWithIdentity(const GenerateEmbedUrlForRegisteredUserWithIdentityRequest& request) const
{
  AWS_OPERATION_GUARD(GenerateEmbedUrlForRegisteredUserWithIdentity);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GenerateEmbedUrlForRegisteredUserWithIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GenerateEmbedUrlForRegisteredUserWithIdentity", "Required field: AwsAccountId, is not set");
    return GenerateEmbedUrlForRegisteredUserWithIdentityOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GenerateEmbedUrlForRegisteredUserWithIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GenerateEmbedUrlForRegisteredUserWithIdentity, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GenerateEmbedUrlForRegisteredUserWithIdentity",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GenerateEmbedUrlForRegisteredUserWithIdentityOutcome>(
    [&]()-> GenerateEmbedUrlForRegisteredUserWithIdentityOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GenerateEmbedUrlForRegisteredUserWithIdentity, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url/registered-user-with-identity");
      return GenerateEmbedUrlForRegisteredUserWithIdentityOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetDashboardEmbedUrlOutcome QuickSightClient::GetDashboardEmbedUrl(const GetDashboardEmbedUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetDashboardEmbedUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: DashboardId, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.IdentityTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetDashboardEmbedUrl", "Required field: IdentityType, is not set");
    return GetDashboardEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityType]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetDashboardEmbedUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetDashboardEmbedUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetDashboardEmbedUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetDashboardEmbedUrlOutcome>(
    [&]()-> GetDashboardEmbedUrlOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDashboardEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/embed-url");
      return GetDashboardEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetSessionEmbedUrlOutcome QuickSightClient::GetSessionEmbedUrl(const GetSessionEmbedUrlRequest& request) const
{
  AWS_OPERATION_GUARD(GetSessionEmbedUrl);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSessionEmbedUrl", "Required field: AwsAccountId, is not set");
    return GetSessionEmbedUrlOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetSessionEmbedUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetSessionEmbedUrl, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetSessionEmbedUrl",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetSessionEmbedUrlOutcome>(
    [&]()-> GetSessionEmbedUrlOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSessionEmbedUrl, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/session-embed-url");
      return GetSessionEmbedUrlOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAnalysesOutcome QuickSightClient::ListAnalyses(const ListAnalysesRequest& request) const
{
  AWS_OPERATION_GUARD(ListAnalyses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAnalyses", "Required field: AwsAccountId, is not set");
    return ListAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAnalyses",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAnalysesOutcome>(
    [&]()-> ListAnalysesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analyses");
      return ListAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssetBundleExportJobsOutcome QuickSightClient::ListAssetBundleExportJobs(const ListAssetBundleExportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssetBundleExportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssetBundleExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetBundleExportJobs", "Required field: AwsAccountId, is not set");
    return ListAssetBundleExportJobsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAssetBundleExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssetBundleExportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssetBundleExportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssetBundleExportJobsOutcome>(
    [&]()-> ListAssetBundleExportJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssetBundleExportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-export-jobs");
      return ListAssetBundleExportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAssetBundleImportJobsOutcome QuickSightClient::ListAssetBundleImportJobs(const ListAssetBundleImportJobsRequest& request) const
{
  AWS_OPERATION_GUARD(ListAssetBundleImportJobs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListAssetBundleImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListAssetBundleImportJobs", "Required field: AwsAccountId, is not set");
    return ListAssetBundleImportJobsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListAssetBundleImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListAssetBundleImportJobs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListAssetBundleImportJobs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListAssetBundleImportJobsOutcome>(
    [&]()-> ListAssetBundleImportJobsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListAssetBundleImportJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-import-jobs");
      return ListAssetBundleImportJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListBrandsOutcome QuickSightClient::ListBrands(const ListBrandsRequest& request) const
{
  AWS_OPERATION_GUARD(ListBrands);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListBrands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListBrands", "Required field: AwsAccountId, is not set");
    return ListBrandsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListBrands, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListBrands, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListBrands",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListBrandsOutcome>(
    [&]()-> ListBrandsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListBrands, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/brands");
      return ListBrandsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListCustomPermissionsOutcome QuickSightClient::ListCustomPermissions(const ListCustomPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListCustomPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCustomPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCustomPermissions", "Required field: AwsAccountId, is not set");
    return ListCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListCustomPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListCustomPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListCustomPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListCustomPermissionsOutcome>(
    [&]()-> ListCustomPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCustomPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions");
      return ListCustomPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDashboardVersionsOutcome QuickSightClient::ListDashboardVersions(const ListDashboardVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDashboardVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: AwsAccountId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboardVersions", "Required field: DashboardId, is not set");
    return ListDashboardVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDashboardVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDashboardVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDashboardVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDashboardVersionsOutcome>(
    [&]()-> ListDashboardVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboardVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListDashboardVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDashboardsOutcome QuickSightClient::ListDashboards(const ListDashboardsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDashboards);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: AwsAccountId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDashboards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDashboards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDashboards",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDashboardsOutcome>(
    [&]()-> ListDashboardsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards");
      return ListDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSetsOutcome QuickSightClient::ListDataSets(const ListDataSetsRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSets", "Required field: AwsAccountId, is not set");
    return ListDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDataSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSetsOutcome>(
    [&]()-> ListDataSetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets");
      return ListDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListDataSourcesOutcome QuickSightClient::ListDataSources(const ListDataSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(ListDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListDataSources", "Required field: AwsAccountId, is not set");
    return ListDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListDataSourcesOutcome>(
    [&]()-> ListDataSourcesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources");
      return ListDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFolderMembersOutcome QuickSightClient::ListFolderMembers(const ListFolderMembersRequest& request) const
{
  AWS_OPERATION_GUARD(ListFolderMembers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: AwsAccountId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolderMembers", "Required field: FolderId, is not set");
    return ListFolderMembersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFolderMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFolderMembers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFolderMembers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFolderMembersOutcome>(
    [&]()-> ListFolderMembersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolderMembers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/members");
      return ListFolderMembersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFoldersOutcome QuickSightClient::ListFolders(const ListFoldersRequest& request) const
{
  AWS_OPERATION_GUARD(ListFolders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFolders", "Required field: AwsAccountId, is not set");
    return ListFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFolders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFolders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFolders",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFoldersOutcome>(
    [&]()-> ListFoldersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/folders");
      return ListFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListFoldersForResourceOutcome QuickSightClient::ListFoldersForResource(const ListFoldersForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListFoldersForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFoldersForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFoldersForResource", "Required field: AwsAccountId, is not set");
    return ListFoldersForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFoldersForResource", "Required field: ResourceArn, is not set");
    return ListFoldersForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListFoldersForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListFoldersForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListFoldersForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListFoldersForResourceOutcome>(
    [&]()-> ListFoldersForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFoldersForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resource/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/folders");
      return ListFoldersForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGroupMembershipsOutcome QuickSightClient::ListGroupMemberships(const ListGroupMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListGroupMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: GroupName, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: AwsAccountId, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroupMemberships", "Required field: Namespace, is not set");
    return ListGroupMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListGroupMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGroupMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGroupMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGroupMembershipsOutcome>(
    [&]()-> ListGroupMembershipsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroupMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/members");
      return ListGroupMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListGroupsOutcome QuickSightClient::ListGroups(const ListGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: AwsAccountId, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListGroups", "Required field: Namespace, is not set");
    return ListGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListGroupsOutcome>(
    [&]()-> ListGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
      return ListGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIAMPolicyAssignmentsOutcome QuickSightClient::ListIAMPolicyAssignments(const ListIAMPolicyAssignmentsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIAMPolicyAssignments);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignments", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIAMPolicyAssignments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIAMPolicyAssignments, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIAMPolicyAssignments",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIAMPolicyAssignmentsOutcome>(
    [&]()-> ListIAMPolicyAssignmentsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/v2/iam-policy-assignments");
      return ListIAMPolicyAssignmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIAMPolicyAssignmentsForUserOutcome QuickSightClient::ListIAMPolicyAssignmentsForUser(const ListIAMPolicyAssignmentsForUserRequest& request) const
{
  AWS_OPERATION_GUARD(ListIAMPolicyAssignmentsForUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: AwsAccountId, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: UserName, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIAMPolicyAssignmentsForUser", "Required field: Namespace, is not set");
    return ListIAMPolicyAssignmentsForUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIAMPolicyAssignmentsForUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIAMPolicyAssignmentsForUserOutcome>(
    [&]()-> ListIAMPolicyAssignmentsForUserOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIAMPolicyAssignmentsForUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments");
      return ListIAMPolicyAssignmentsForUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIdentityPropagationConfigsOutcome QuickSightClient::ListIdentityPropagationConfigs(const ListIdentityPropagationConfigsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIdentityPropagationConfigs);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIdentityPropagationConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIdentityPropagationConfigs", "Required field: AwsAccountId, is not set");
    return ListIdentityPropagationConfigsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIdentityPropagationConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIdentityPropagationConfigs, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIdentityPropagationConfigs",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIdentityPropagationConfigsOutcome>(
    [&]()-> ListIdentityPropagationConfigsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIdentityPropagationConfigs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/identity-propagation-config");
      return ListIdentityPropagationConfigsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListIngestionsOutcome QuickSightClient::ListIngestions(const ListIngestionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListIngestions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: DataSetId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AwsAccountId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListIngestions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListIngestions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListIngestionsOutcome>(
    [&]()-> ListIngestionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListIngestions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
      return ListIngestionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListNamespacesOutcome QuickSightClient::ListNamespaces(const ListNamespacesRequest& request) const
{
  AWS_OPERATION_GUARD(ListNamespaces);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: AwsAccountId, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListNamespaces, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListNamespaces",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListNamespacesOutcome>(
    [&]()-> ListNamespacesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListNamespaces, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces");
      return ListNamespacesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRefreshSchedulesOutcome QuickSightClient::ListRefreshSchedules(const ListRefreshSchedulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListRefreshSchedules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: DataSetId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRefreshSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRefreshSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRefreshSchedules",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRefreshSchedulesOutcome>(
    [&]()-> ListRefreshSchedulesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
      return ListRefreshSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListRoleMembershipsOutcome QuickSightClient::ListRoleMemberships(const ListRoleMembershipsRequest& request) const
{
  AWS_OPERATION_GUARD(ListRoleMemberships);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRoleMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RoleHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: Role, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: AwsAccountId, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: Namespace, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListRoleMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListRoleMemberships, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListRoleMemberships",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListRoleMembershipsOutcome>(
    [&]()-> ListRoleMembershipsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRoleMemberships, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(RoleMapper::GetNameForRole(request.GetRole()));
      endpointResolutionOutcome.GetResult().AddPathSegments("/members");
      return ListRoleMembershipsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTagsForResourceOutcome QuickSightClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_GUARD(ListTagsForResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTagsForResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTagsForResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTagsForResourceOutcome>(
    [&]()-> ListTagsForResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTemplateAliasesOutcome QuickSightClient::ListTemplateAliases(const ListTemplateAliasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTemplateAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: AwsAccountId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: TemplateId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTemplateAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTemplateAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTemplateAliases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTemplateAliasesOutcome>(
    [&]()-> ListTemplateAliasesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
      return ListTemplateAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTemplateVersionsOutcome QuickSightClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTemplateVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: AwsAccountId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTemplateVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTemplateVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTemplateVersionsOutcome>(
    [&]()-> ListTemplateVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplateVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListTemplateVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTemplatesOutcome QuickSightClient::ListTemplates(const ListTemplatesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTemplates);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: AwsAccountId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTemplates, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTemplates",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTemplatesOutcome>(
    [&]()-> ListTemplatesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTemplates, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
      return ListTemplatesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThemeAliasesOutcome QuickSightClient::ListThemeAliases(const ListThemeAliasesRequest& request) const
{
  AWS_OPERATION_GUARD(ListThemeAliases);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: AwsAccountId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: ThemeId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListThemeAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThemeAliases, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThemeAliases",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThemeAliasesOutcome>(
    [&]()-> ListThemeAliasesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeAliases, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
      return ListThemeAliasesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThemeVersionsOutcome QuickSightClient::ListThemeVersions(const ListThemeVersionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListThemeVersions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: AwsAccountId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: ThemeId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ThemeId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListThemeVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThemeVersions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThemeVersions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThemeVersionsOutcome>(
    [&]()-> ListThemeVersionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemeVersions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
      return ListThemeVersionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListThemesOutcome QuickSightClient::ListThemes(const ListThemesRequest& request) const
{
  AWS_OPERATION_GUARD(ListThemes);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AwsAccountId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListThemes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListThemes, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListThemes",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListThemesOutcome>(
    [&]()-> ListThemesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListThemes, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
      return ListThemesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTopicRefreshSchedulesOutcome QuickSightClient::ListTopicRefreshSchedules(const ListTopicRefreshSchedulesRequest& request) const
{
  AWS_OPERATION_GUARD(ListTopicRefreshSchedules);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTopicRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: TopicId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTopicRefreshSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTopicRefreshSchedules, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTopicRefreshSchedules",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTopicRefreshSchedulesOutcome>(
    [&]()-> ListTopicRefreshSchedulesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTopicRefreshSchedules, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
      return ListTopicRefreshSchedulesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTopicReviewedAnswersOutcome QuickSightClient::ListTopicReviewedAnswers(const ListTopicReviewedAnswersRequest& request) const
{
  AWS_OPERATION_GUARD(ListTopicReviewedAnswers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTopicReviewedAnswers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicReviewedAnswers", "Required field: AwsAccountId, is not set");
    return ListTopicReviewedAnswersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopicReviewedAnswers", "Required field: TopicId, is not set");
    return ListTopicReviewedAnswersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTopicReviewedAnswers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTopicReviewedAnswers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTopicReviewedAnswers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTopicReviewedAnswersOutcome>(
    [&]()-> ListTopicReviewedAnswersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTopicReviewedAnswers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/reviewed-answers");
      return ListTopicReviewedAnswersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListTopicsOutcome QuickSightClient::ListTopics(const ListTopicsRequest& request) const
{
  AWS_OPERATION_GUARD(ListTopics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTopics", "Required field: AwsAccountId, is not set");
    return ListTopicsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListTopics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListTopics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListTopics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListTopicsOutcome>(
    [&]()-> ListTopicsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
      return ListTopicsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUserGroupsOutcome QuickSightClient::ListUserGroups(const ListUserGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(ListUserGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.UserNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: UserName, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: AwsAccountId, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: Namespace, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUserGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUserGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUserGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUserGroupsOutcome>(
    [&]()-> ListUserGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUserGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/users/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetUserName());
      endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
      return ListUserGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListUsersOutcome QuickSightClient::ListUsers(const ListUsersRequest& request) const
{
  AWS_OPERATION_GUARD(ListUsers);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AwsAccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: Namespace, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListUsers, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListUsers",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListUsersOutcome>(
    [&]()-> ListUsersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListUsers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/users");
      return ListUsersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListVPCConnectionsOutcome QuickSightClient::ListVPCConnections(const ListVPCConnectionsRequest& request) const
{
  AWS_OPERATION_GUARD(ListVPCConnections);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListVPCConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListVPCConnections", "Required field: AwsAccountId, is not set");
    return ListVPCConnectionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, ListVPCConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, ListVPCConnections, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".ListVPCConnections",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<ListVPCConnectionsOutcome>(
    [&]()-> ListVPCConnectionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListVPCConnections, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections");
      return ListVPCConnectionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PredictQAResultsOutcome QuickSightClient::PredictQAResults(const PredictQAResultsRequest& request) const
{
  AWS_OPERATION_GUARD(PredictQAResults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PredictQAResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PredictQAResults", "Required field: AwsAccountId, is not set");
    return PredictQAResultsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PredictQAResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PredictQAResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PredictQAResults",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PredictQAResultsOutcome>(
    [&]()-> PredictQAResultsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PredictQAResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/qa/predict");
      return PredictQAResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

PutDataSetRefreshPropertiesOutcome QuickSightClient::PutDataSetRefreshProperties(const PutDataSetRefreshPropertiesRequest& request) const
{
  AWS_OPERATION_GUARD(PutDataSetRefreshProperties);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, PutDataSetRefreshProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, PutDataSetRefreshProperties, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".PutDataSetRefreshProperties",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<PutDataSetRefreshPropertiesOutcome>(
    [&]()-> PutDataSetRefreshPropertiesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDataSetRefreshProperties, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-properties");
      return PutDataSetRefreshPropertiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RegisterUserOutcome QuickSightClient::RegisterUser(const RegisterUserRequest& request) const
{
  AWS_OPERATION_GUARD(RegisterUser);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: AwsAccountId, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: Namespace, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RegisterUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RegisterUser, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RegisterUser",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RegisterUserOutcome>(
    [&]()-> RegisterUserOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterUser, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/users");
      return RegisterUserOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

RestoreAnalysisOutcome QuickSightClient::RestoreAnalysis(const RestoreAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(RestoreAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AwsAccountId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AnalysisId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, RestoreAnalysis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, RestoreAnalysis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".RestoreAnalysis",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<RestoreAnalysisOutcome>(
    [&]()-> RestoreAnalysisOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RestoreAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/restore/analyses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
      return RestoreAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchAnalysesOutcome QuickSightClient::SearchAnalyses(const SearchAnalysesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchAnalyses);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchAnalyses", "Required field: AwsAccountId, is not set");
    return SearchAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchAnalyses, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchAnalyses",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchAnalysesOutcome>(
    [&]()-> SearchAnalysesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchAnalyses, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/analyses");
      return SearchAnalysesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchDashboardsOutcome QuickSightClient::SearchDashboards(const SearchDashboardsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchDashboards);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDashboards", "Required field: AwsAccountId, is not set");
    return SearchDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchDashboards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchDashboards, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchDashboards",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchDashboardsOutcome>(
    [&]()-> SearchDashboardsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDashboards, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/dashboards");
      return SearchDashboardsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchDataSetsOutcome QuickSightClient::SearchDataSets(const SearchDataSetsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchDataSets);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSets", "Required field: AwsAccountId, is not set");
    return SearchDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchDataSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchDataSets, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchDataSets",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchDataSetsOutcome>(
    [&]()-> SearchDataSetsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSets, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sets");
      return SearchDataSetsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchDataSourcesOutcome QuickSightClient::SearchDataSources(const SearchDataSourcesRequest& request) const
{
  AWS_OPERATION_GUARD(SearchDataSources);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchDataSources", "Required field: AwsAccountId, is not set");
    return SearchDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchDataSources, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchDataSources",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchDataSourcesOutcome>(
    [&]()-> SearchDataSourcesOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDataSources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sources");
      return SearchDataSourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchFoldersOutcome QuickSightClient::SearchFolders(const SearchFoldersRequest& request) const
{
  AWS_OPERATION_GUARD(SearchFolders);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchFolders", "Required field: AwsAccountId, is not set");
    return SearchFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchFolders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchFolders, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchFolders",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchFoldersOutcome>(
    [&]()-> SearchFoldersOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchFolders, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/folders");
      return SearchFoldersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchGroupsOutcome QuickSightClient::SearchGroups(const SearchGroupsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchGroups);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: AwsAccountId, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: Namespace, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchGroups, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchGroups",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchGroupsOutcome>(
    [&]()-> SearchGroupsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchGroups, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/groups-search");
      return SearchGroupsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SearchTopicsOutcome QuickSightClient::SearchTopics(const SearchTopicsRequest& request) const
{
  AWS_OPERATION_GUARD(SearchTopics);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("SearchTopics", "Required field: AwsAccountId, is not set");
    return SearchTopicsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SearchTopics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SearchTopics, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SearchTopics",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SearchTopicsOutcome>(
    [&]()-> SearchTopicsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTopics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/search/topics");
      return SearchTopicsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAssetBundleExportJobOutcome QuickSightClient::StartAssetBundleExportJob(const StartAssetBundleExportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartAssetBundleExportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAssetBundleExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAssetBundleExportJob", "Required field: AwsAccountId, is not set");
    return StartAssetBundleExportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartAssetBundleExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAssetBundleExportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAssetBundleExportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAssetBundleExportJobOutcome>(
    [&]()-> StartAssetBundleExportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAssetBundleExportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-export-jobs/export");
      return StartAssetBundleExportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartAssetBundleImportJobOutcome QuickSightClient::StartAssetBundleImportJob(const StartAssetBundleImportJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartAssetBundleImportJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartAssetBundleImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartAssetBundleImportJob", "Required field: AwsAccountId, is not set");
    return StartAssetBundleImportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartAssetBundleImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartAssetBundleImportJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartAssetBundleImportJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartAssetBundleImportJobOutcome>(
    [&]()-> StartAssetBundleImportJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartAssetBundleImportJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-import-jobs/import");
      return StartAssetBundleImportJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDashboardSnapshotJobOutcome QuickSightClient::StartDashboardSnapshotJob(const StartDashboardSnapshotJobRequest& request) const
{
  AWS_OPERATION_GUARD(StartDashboardSnapshotJob);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDashboardSnapshotJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJob", "Required field: AwsAccountId, is not set");
    return StartDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJob", "Required field: DashboardId, is not set");
    return StartDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDashboardSnapshotJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDashboardSnapshotJob, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDashboardSnapshotJob",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDashboardSnapshotJobOutcome>(
    [&]()-> StartDashboardSnapshotJobOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDashboardSnapshotJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot-jobs");
      return StartDashboardSnapshotJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

StartDashboardSnapshotJobScheduleOutcome QuickSightClient::StartDashboardSnapshotJobSchedule(const StartDashboardSnapshotJobScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(StartDashboardSnapshotJobSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartDashboardSnapshotJobSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: AwsAccountId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: DashboardId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.ScheduleIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: ScheduleId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduleId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, StartDashboardSnapshotJobSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, StartDashboardSnapshotJobSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".StartDashboardSnapshotJobSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<StartDashboardSnapshotJobScheduleOutcome>(
    [&]()-> StartDashboardSnapshotJobScheduleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartDashboardSnapshotJobSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
      return StartDashboardSnapshotJobScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

TagResourceOutcome QuickSightClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(TagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, TagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".TagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<TagResourceOutcome>(
    [&]()-> TagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UntagResourceOutcome QuickSightClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_GUARD(UntagResource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UntagResource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UntagResource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UntagResourceOutcome>(
    [&]()-> UntagResourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
      endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
      return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountCustomPermissionOutcome QuickSightClient::UpdateAccountCustomPermission(const UpdateAccountCustomPermissionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountCustomPermission);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountCustomPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomPermission", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAccountCustomPermission, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccountCustomPermission, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccountCustomPermission",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountCustomPermissionOutcome>(
    [&]()-> UpdateAccountCustomPermissionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountCustomPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
      return UpdateAccountCustomPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountCustomizationOutcome QuickSightClient::UpdateAccountCustomization(const UpdateAccountCustomizationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountCustomization);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomization", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAccountCustomization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccountCustomization, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccountCustomization",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountCustomizationOutcome>(
    [&]()-> UpdateAccountCustomizationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountCustomization, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
      return UpdateAccountCustomizationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAccountSettingsOutcome QuickSightClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAccountSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AwsAccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAccountSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAccountSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAccountSettingsOutcome>(
    [&]()-> UpdateAccountSettingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAccountSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
      return UpdateAccountSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAnalysisOutcome QuickSightClient::UpdateAnalysis(const UpdateAnalysisRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAnalysis);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AnalysisId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAnalysis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAnalysis, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAnalysis",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAnalysisOutcome>(
    [&]()-> UpdateAnalysisOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysis, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
      return UpdateAnalysisOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateAnalysisPermissionsOutcome QuickSightClient::UpdateAnalysisPermissions(const UpdateAnalysisPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateAnalysisPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AnalysisId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AnalysisId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateAnalysisPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateAnalysisPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateAnalysisPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateAnalysisPermissionsOutcome>(
    [&]()-> UpdateAnalysisPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateAnalysisPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return UpdateAnalysisPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateApplicationWithTokenExchangeGrantOutcome QuickSightClient::UpdateApplicationWithTokenExchangeGrant(const UpdateApplicationWithTokenExchangeGrantRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateApplicationWithTokenExchangeGrant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateApplicationWithTokenExchangeGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplicationWithTokenExchangeGrant", "Required field: AwsAccountId, is not set");
    return UpdateApplicationWithTokenExchangeGrantOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateApplicationWithTokenExchangeGrant", "Required field: Namespace, is not set");
    return UpdateApplicationWithTokenExchangeGrantOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateApplicationWithTokenExchangeGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateApplicationWithTokenExchangeGrant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateApplicationWithTokenExchangeGrant",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateApplicationWithTokenExchangeGrantOutcome>(
    [&]()-> UpdateApplicationWithTokenExchangeGrantOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateApplicationWithTokenExchangeGrant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/application-with-token-exchange-grant");
      return UpdateApplicationWithTokenExchangeGrantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBrandOutcome QuickSightClient::UpdateBrand(const UpdateBrandRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBrand);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBrand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrand", "Required field: AwsAccountId, is not set");
    return UpdateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrand", "Required field: BrandId, is not set");
    return UpdateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBrand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBrand, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBrand",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBrandOutcome>(
    [&]()-> UpdateBrandOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBrand, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
      return UpdateBrandOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBrandAssignmentOutcome QuickSightClient::UpdateBrandAssignment(const UpdateBrandAssignmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBrandAssignment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBrandAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrandAssignment", "Required field: AwsAccountId, is not set");
    return UpdateBrandAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBrandAssignment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBrandAssignment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBrandAssignment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBrandAssignmentOutcome>(
    [&]()-> UpdateBrandAssignmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBrandAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/brandassignments");
      return UpdateBrandAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateBrandPublishedVersionOutcome QuickSightClient::UpdateBrandPublishedVersion(const UpdateBrandPublishedVersionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateBrandPublishedVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateBrandPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrandPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateBrandPublishedVersion", "Required field: BrandId, is not set");
    return UpdateBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [BrandId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateBrandPublishedVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateBrandPublishedVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateBrandPublishedVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateBrandPublishedVersionOutcome>(
    [&]()-> UpdateBrandPublishedVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateBrandPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/publishedversion");
      return UpdateBrandPublishedVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateCustomPermissionsOutcome QuickSightClient::UpdateCustomPermissions(const UpdateCustomPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateCustomPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateCustomPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCustomPermissions", "Required field: AwsAccountId, is not set");
    return UpdateCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.CustomPermissionsNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateCustomPermissions", "Required field: CustomPermissionsName, is not set");
    return UpdateCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CustomPermissionsName]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateCustomPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateCustomPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateCustomPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateCustomPermissionsOutcome>(
    [&]()-> UpdateCustomPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateCustomPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPermissionsName());
      return UpdateCustomPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDashboardOutcome QuickSightClient::UpdateDashboard(const UpdateDashboardRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDashboard);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: AwsAccountId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDashboard, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDashboard, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDashboard",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDashboardOutcome>(
    [&]()-> UpdateDashboardOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboard, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      return UpdateDashboardOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDashboardLinksOutcome QuickSightClient::UpdateDashboardLinks(const UpdateDashboardLinksRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDashboardLinks);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardLinks", "Required field: AwsAccountId, is not set");
    return UpdateDashboardLinksOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardLinks", "Required field: DashboardId, is not set");
    return UpdateDashboardLinksOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDashboardLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDashboardLinks, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDashboardLinks",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDashboardLinksOutcome>(
    [&]()-> UpdateDashboardLinksOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardLinks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/linked-entities");
      return UpdateDashboardLinksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDashboardPermissionsOutcome QuickSightClient::UpdateDashboardPermissions(const UpdateDashboardPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDashboardPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: DashboardId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDashboardPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDashboardPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDashboardPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDashboardPermissionsOutcome>(
    [&]()-> UpdateDashboardPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return UpdateDashboardPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDashboardPublishedVersionOutcome QuickSightClient::UpdateDashboardPublishedVersion(const UpdateDashboardPublishedVersionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDashboardPublishedVersion);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: DashboardId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.VersionNumberHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: VersionNumber, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDashboardPublishedVersion",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDashboardPublishedVersionOutcome>(
    [&]()-> UpdateDashboardPublishedVersionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardPublishedVersion, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
      return UpdateDashboardPublishedVersionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDashboardsQAConfigurationOutcome QuickSightClient::UpdateDashboardsQAConfiguration(const UpdateDashboardsQAConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDashboardsQAConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDashboardsQAConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDashboardsQAConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateDashboardsQAConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDashboardsQAConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDashboardsQAConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDashboardsQAConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDashboardsQAConfigurationOutcome>(
    [&]()-> UpdateDashboardsQAConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDashboardsQAConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards-qa-configuration");
      return UpdateDashboardsQAConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSetOutcome QuickSightClient::UpdateDataSet(const UpdateDataSetRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSet);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: AwsAccountId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSet, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSet",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSetOutcome>(
    [&]()-> UpdateDataSetOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSet, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      return UpdateDataSetOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSetPermissionsOutcome QuickSightClient::UpdateDataSetPermissions(const UpdateDataSetPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSetPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: DataSetId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDataSetPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSetPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSetPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSetPermissionsOutcome>(
    [&]()-> UpdateDataSetPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSetPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return UpdateDataSetPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourceOutcome QuickSightClient::UpdateDataSource(const UpdateDataSourceRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSource);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: AwsAccountId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSource, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSource",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourceOutcome>(
    [&]()-> UpdateDataSourceOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
      return UpdateDataSourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDataSourcePermissionsOutcome QuickSightClient::UpdateDataSourcePermissions(const UpdateDataSourcePermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDataSourcePermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: DataSourceId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSourceId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDataSourcePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDataSourcePermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDataSourcePermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDataSourcePermissionsOutcome>(
    [&]()-> UpdateDataSourcePermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataSourcePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return UpdateDataSourcePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateDefaultQBusinessApplicationOutcome QuickSightClient::UpdateDefaultQBusinessApplication(const UpdateDefaultQBusinessApplicationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateDefaultQBusinessApplication);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDefaultQBusinessApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateDefaultQBusinessApplication", "Required field: AwsAccountId, is not set");
    return UpdateDefaultQBusinessApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateDefaultQBusinessApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateDefaultQBusinessApplication, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateDefaultQBusinessApplication",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateDefaultQBusinessApplicationOutcome>(
    [&]()-> UpdateDefaultQBusinessApplicationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDefaultQBusinessApplication, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/default-qbusiness-application");
      return UpdateDefaultQBusinessApplicationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFolderOutcome QuickSightClient::UpdateFolder(const UpdateFolderRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFolder);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: AwsAccountId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFolder, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFolder",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFolderOutcome>(
    [&]()-> UpdateFolderOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolder, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
      return UpdateFolderOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateFolderPermissionsOutcome QuickSightClient::UpdateFolderPermissions(const UpdateFolderPermissionsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateFolderPermissions);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: AwsAccountId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: FolderId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FolderId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateFolderPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateFolderPermissions, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateFolderPermissions",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateFolderPermissionsOutcome>(
    [&]()-> UpdateFolderPermissionsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFolderPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
      return UpdateFolderPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateGroupOutcome QuickSightClient::UpdateGroup(const UpdateGroupRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateGroup);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.GroupNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupName, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: AwsAccountId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: Namespace, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateGroup, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateGroup",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateGroupOutcome>(
    [&]()-> UpdateGroupOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateGroup, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/groups/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGroupName());
      return UpdateGroupOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIAMPolicyAssignmentOutcome QuickSightClient::UpdateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIAMPolicyAssignment);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIAMPolicyAssignment",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIAMPolicyAssignmentOutcome>(
    [&]()-> UpdateIAMPolicyAssignmentOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIAMPolicyAssignment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/iam-policy-assignments/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssignmentName());
      return UpdateIAMPolicyAssignmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIdentityPropagationConfigOutcome QuickSightClient::UpdateIdentityPropagationConfig(const UpdateIdentityPropagationConfigRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIdentityPropagationConfig);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIdentityPropagationConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdentityPropagationConfig", "Required field: AwsAccountId, is not set");
    return UpdateIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ServiceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIdentityPropagationConfig", "Required field: Service, is not set");
    return UpdateIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Service]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIdentityPropagationConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIdentityPropagationConfig, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIdentityPropagationConfig",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIdentityPropagationConfigOutcome>(
    [&]()-> UpdateIdentityPropagationConfigOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIdentityPropagationConfig, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/identity-propagation-config/");
      endpointResolutionOutcome.GetResult().AddPathSegment(ServiceTypeMapper::GetNameForServiceType(request.GetService()));
      return UpdateIdentityPropagationConfigOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateIpRestrictionOutcome QuickSightClient::UpdateIpRestriction(const UpdateIpRestrictionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateIpRestriction);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateIpRestriction", "Required field: AwsAccountId, is not set");
    return UpdateIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateIpRestriction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateIpRestriction, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateIpRestriction",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateIpRestrictionOutcome>(
    [&]()-> UpdateIpRestrictionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateIpRestriction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
      return UpdateIpRestrictionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateKeyRegistrationOutcome QuickSightClient::UpdateKeyRegistration(const UpdateKeyRegistrationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateKeyRegistration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateKeyRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateKeyRegistration", "Required field: AwsAccountId, is not set");
    return UpdateKeyRegistrationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateKeyRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateKeyRegistration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateKeyRegistration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateKeyRegistrationOutcome>(
    [&]()-> UpdateKeyRegistrationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateKeyRegistration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/key-registration");
      return UpdateKeyRegistrationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdatePublicSharingSettingsOutcome QuickSightClient::UpdatePublicSharingSettings(const UpdatePublicSharingSettingsRequest& request) const
{
  AWS_OPERATION_GUARD(UpdatePublicSharingSettings);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdatePublicSharingSettings", "Required field: AwsAccountId, is not set");
    return UpdatePublicSharingSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdatePublicSharingSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdatePublicSharingSettings, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdatePublicSharingSettings",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdatePublicSharingSettingsOutcome>(
    [&]()-> UpdatePublicSharingSettingsOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdatePublicSharingSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/public-sharing-settings");
      return UpdatePublicSharingSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQPersonalizationConfigurationOutcome QuickSightClient::UpdateQPersonalizationConfiguration(const UpdateQPersonalizationConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQPersonalizationConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQPersonalizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQPersonalizationConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateQPersonalizationConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQPersonalizationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQPersonalizationConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQPersonalizationConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQPersonalizationConfigurationOutcome>(
    [&]()-> UpdateQPersonalizationConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQPersonalizationConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/q-personalization-configuration");
      return UpdateQPersonalizationConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateQuickSightQSearchConfigurationOutcome QuickSightClient::UpdateQuickSightQSearchConfiguration(const UpdateQuickSightQSearchConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateQuickSightQSearchConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateQuickSightQSearchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateQuickSightQSearchConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateQuickSightQSearchConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateQuickSightQSearchConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateQuickSightQSearchConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateQuickSightQSearchConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateQuickSightQSearchConfigurationOutcome>(
    [&]()-> UpdateQuickSightQSearchConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateQuickSightQSearchConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/quicksight-q-search-configuration");
      return UpdateQuickSightQSearchConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRefreshScheduleOutcome QuickSightClient::UpdateRefreshSchedule(const UpdateRefreshScheduleRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRefreshSchedule);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.DataSetIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: DataSetId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRefreshSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRefreshSchedule, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRefreshSchedule",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRefreshScheduleOutcome>(
    [&]()-> UpdateRefreshScheduleOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRefreshSchedule, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
      return UpdateRefreshScheduleOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateRoleCustomPermissionOutcome QuickSightClient::UpdateRoleCustomPermission(const UpdateRoleCustomPermissionRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateRoleCustomPermission);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateRoleCustomPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.RoleHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: Role, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: AwsAccountId, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: Namespace, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateRoleCustomPermission, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateRoleCustomPermission, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateRoleCustomPermission",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateRoleCustomPermissionOutcome>(
    [&]()-> UpdateRoleCustomPermissionOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateRoleCustomPermission, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
      endpointResolutionOutcome.GetResult().AddPathSegments("/roles/");
      endpointResolutionOutcome.GetResult().AddPathSegment(RoleMapper::GetNameForRole(request.GetRole()));
      endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
      return UpdateRoleCustomPermissionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

UpdateSPICECapacityConfigurationOutcome QuickSightClient::UpdateSPICECapacityConfiguration(const UpdateSPICECapacityConfigurationRequest& request) const
{
  AWS_OPERATION_GUARD(UpdateSPICECapacityConfiguration);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateSPICECapacityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AwsAccountIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateSPICECapacityConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateSPICECapacityConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, UpdateSPICECapacityConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, UpdateSPICECapacityConfiguration, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".UpdateSPICECapacityConfiguration",
    {{ TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName() }, { TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName() }, { TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE }},
    smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<UpdateSPICECapacityConfigurationOutcome>(
    [&]()-> UpdateSPICECapacityConfigurationOutcome {
      auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
          [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
          TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC,
          *meter,
          {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
      AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateSPICECapacityConfiguration, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
      endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
      endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
      endpointResolutionOutcome.GetResult().AddPathSegments("/spice-capacity-configuration");
      return UpdateSPICECapacityConfigurationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
    },
    TracingUtils::SMITHY_CLIENT_DURATION_METRIC,
    *meter,
    {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()}, {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

