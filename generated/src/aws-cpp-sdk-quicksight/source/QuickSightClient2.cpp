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
#include <aws/quicksight/model/ListIdentityPropagationConfigsRequest.h>
#include <aws/quicksight/model/ListInboundConnectorApplicationAssociationsRequest.h>
#include <aws/quicksight/model/ListInboundConnectorsRequest.h>
#include <aws/quicksight/model/ListIngestionsRequest.h>
#include <aws/quicksight/model/ListKnowledgeBaseRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListKnowledgeBasesRequest.h>
#include <aws/quicksight/model/ListLimitsProfilesRequest.h>
#include <aws/quicksight/model/ListNamespacesRequest.h>
#include <aws/quicksight/model/ListOAuthClientApplicationsRequest.h>
#include <aws/quicksight/model/ListPrincipalsForPolicyRequest.h>
#include <aws/quicksight/model/ListRefreshSchedulesRequest.h>
#include <aws/quicksight/model/ListRoleMembershipsRequest.h>
#include <aws/quicksight/model/ListSelfUpgradesRequest.h>
#include <aws/quicksight/model/ListSpaceResourcesRequest.h>
#include <aws/quicksight/model/ListSpacesRequest.h>
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
#include <aws/quicksight/model/ListTopicsV2Request.h>
#include <aws/quicksight/model/ListUserGroupsRequest.h>
#include <aws/quicksight/model/ListUsersIndexCapacityRequest.h>
#include <aws/quicksight/model/ListUsersRequest.h>
#include <aws/quicksight/model/ListVPCConnectionsRequest.h>
#include <aws/quicksight/model/PredictQAResultsRequest.h>
#include <aws/quicksight/model/PutDataSetRefreshPropertiesRequest.h>
#include <aws/quicksight/model/PutPolicyAssignmentRequest.h>
#include <aws/quicksight/model/RegisterUserRequest.h>
#include <aws/quicksight/model/RestoreAnalysisRequest.h>
#include <aws/quicksight/model/SearchActionConnectorsRequest.h>
#include <aws/quicksight/model/SearchAgentsRequest.h>
#include <aws/quicksight/model/SearchAnalysesRequest.h>
#include <aws/quicksight/model/SearchAppsRequest.h>
#include <aws/quicksight/model/SearchDashboardsRequest.h>
#include <aws/quicksight/model/SearchDataSetsRequest.h>
#include <aws/quicksight/model/SearchDataSourcesRequest.h>
#include <aws/quicksight/model/SearchFlowsRequest.h>
#include <aws/quicksight/model/SearchFoldersRequest.h>
#include <aws/quicksight/model/SearchGroupsRequest.h>
#include <aws/quicksight/model/SearchKnowledgeBasesRequest.h>
#include <aws/quicksight/model/SearchSpacesRequest.h>
#include <aws/quicksight/model/SearchTopicsRequest.h>
#include <aws/quicksight/model/SearchTopicsV2Request.h>
#include <aws/quicksight/model/StartAssetBundleExportJobRequest.h>
#include <aws/quicksight/model/StartAssetBundleImportJobRequest.h>
#include <aws/quicksight/model/StartAutomationJobRequest.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobRequest.h>
#include <aws/quicksight/model/StartDashboardSnapshotJobScheduleRequest.h>
#include <aws/quicksight/model/TagResourceRequest.h>
#include <aws/quicksight/model/UntagResourceRequest.h>
#include <aws/quicksight/model/UpdateAccessControlApplicationRequest.h>
#include <aws/quicksight/model/UpdateAccessControlApplicationSecretRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomPermissionRequest.h>
#include <aws/quicksight/model/UpdateAccountCustomizationRequest.h>
#include <aws/quicksight/model/UpdateAccountSettingsRequest.h>
#include <aws/quicksight/model/UpdateActionConnectorPermissionsRequest.h>
#include <aws/quicksight/model/UpdateActionConnectorRequest.h>
#include <aws/quicksight/model/UpdateAgentPermissionsRequest.h>
#include <aws/quicksight/model/UpdateAgentRequest.h>
#include <aws/quicksight/model/UpdateAnalysisPermissionsRequest.h>
#include <aws/quicksight/model/UpdateAnalysisRequest.h>
#include <aws/quicksight/model/UpdateAppPermissionsRequest.h>
#include <aws/quicksight/model/UpdateApplicationWithTokenExchangeGrantRequest.h>
#include <aws/quicksight/model/UpdateApprovalPolicyRequest.h>
#include <aws/quicksight/model/UpdateBrandAssignmentRequest.h>
#include <aws/quicksight/model/UpdateBrandPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateBrandRequest.h>
#include <aws/quicksight/model/UpdateCustomPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardLinksRequest.h>
#include <aws/quicksight/model/UpdateDashboardPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDashboardPublishedVersionRequest.h>
#include <aws/quicksight/model/UpdateDashboardRequest.h>
#include <aws/quicksight/model/UpdateDashboardsQAConfigurationRequest.h>
#include <aws/quicksight/model/UpdateDataSetPermissionsRequest.h>
#include <aws/quicksight/model/UpdateDataSetRequest.h>
#include <aws/quicksight/model/UpdateDataSourcePermissionsRequest.h>
#include <aws/quicksight/model/UpdateDataSourceRequest.h>
#include <aws/quicksight/model/UpdateDefaultQBusinessApplicationRequest.h>
#include <aws/quicksight/model/UpdateDlpSettingRequest.h>
#include <aws/quicksight/model/UpdateFlowPermissionsRequest.h>
#include <aws/quicksight/model/UpdateFlowRequest.h>
#include <aws/quicksight/model/UpdateFolderPermissionsRequest.h>
#include <aws/quicksight/model/UpdateFolderRequest.h>
#include <aws/quicksight/model/UpdateGroupRequest.h>
#include <aws/quicksight/model/UpdateIAMPolicyAssignmentRequest.h>
#include <aws/quicksight/model/UpdateIdentityPropagationConfigRequest.h>
#include <aws/quicksight/model/UpdateInboundConnectorApplicationAssociationsRequest.h>
#include <aws/quicksight/model/UpdateInboundConnectorRequest.h>
#include <aws/quicksight/model/UpdateIpRestrictionRequest.h>
#include <aws/quicksight/model/UpdateKeyRegistrationRequest.h>
#include <aws/quicksight/model/UpdateKnowledgeBasePermissionsRequest.h>
#include <aws/quicksight/model/UpdateKnowledgeBaseRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateKnowledgeBaseRequest.h>
#include <aws/quicksight/model/UpdateLimitsProfileRequest.h>
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

ListIdentityPropagationConfigsOutcome QuickSightClient::ListIdentityPropagationConfigs(
    const ListIdentityPropagationConfigsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIdentityPropagationConfigs", "Required field: AwsAccountId, is not set");
    return ListIdentityPropagationConfigsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-propagation-config");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIdentityPropagationConfigsOutcome(result.GetResultWithOwnership())
                            : ListIdentityPropagationConfigsOutcome(std::move(result.GetError()));
}

ListInboundConnectorApplicationAssociationsOutcome QuickSightClient::ListInboundConnectorApplicationAssociations(
    const ListInboundConnectorApplicationAssociationsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInboundConnectorApplicationAssociations", "Required field: AwsAccountId, is not set");
    return ListInboundConnectorApplicationAssociationsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.InboundConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInboundConnectorApplicationAssociations", "Required field: InboundConnectorId, is not set");
    return ListInboundConnectorApplicationAssociationsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InboundConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInboundConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInboundConnectorApplicationAssociationsOutcome(result.GetResultWithOwnership())
                            : ListInboundConnectorApplicationAssociationsOutcome(std::move(result.GetError()));
}

ListInboundConnectorsOutcome QuickSightClient::ListInboundConnectors(const ListInboundConnectorsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInboundConnectors", "Required field: AwsAccountId, is not set");
    return ListInboundConnectorsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListInboundConnectorsOutcome(result.GetResultWithOwnership())
                            : ListInboundConnectorsOutcome(std::move(result.GetError()));
}

ListIngestionsOutcome QuickSightClient::ListIngestions(const ListIngestionsRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: DataSetId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListIngestions", "Required field: AwsAccountId, is not set");
    return ListIngestionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ingestions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListIngestionsOutcome(result.GetResultWithOwnership()) : ListIngestionsOutcome(std::move(result.GetError()));
}

ListKnowledgeBaseRefreshSchedulesOutcome QuickSightClient::ListKnowledgeBaseRefreshSchedules(
    const ListKnowledgeBaseRefreshSchedulesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKnowledgeBaseRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListKnowledgeBaseRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKnowledgeBaseRefreshSchedules", "Required field: KnowledgeBaseId, is not set");
    return ListKnowledgeBaseRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledge-bases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kb-refresh-schedules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListKnowledgeBaseRefreshSchedulesOutcome(result.GetResultWithOwnership())
                            : ListKnowledgeBaseRefreshSchedulesOutcome(std::move(result.GetError()));
}

ListKnowledgeBasesOutcome QuickSightClient::ListKnowledgeBases(const ListKnowledgeBasesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListKnowledgeBases", "Required field: AwsAccountId, is not set");
    return ListKnowledgeBasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledge-bases/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListKnowledgeBasesOutcome(result.GetResultWithOwnership())
                            : ListKnowledgeBasesOutcome(std::move(result.GetError()));
}

ListLimitsProfilesOutcome QuickSightClient::ListLimitsProfiles(const ListLimitsProfilesRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLimitsProfiles", "Required field: AccountId, is not set");
    return ListLimitsProfilesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/governance/limits/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListLimitsProfilesOutcome(result.GetResultWithOwnership())
                            : ListLimitsProfilesOutcome(std::move(result.GetError()));
}

ListNamespacesOutcome QuickSightClient::ListNamespaces(const ListNamespacesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListNamespaces", "Required field: AwsAccountId, is not set");
    return ListNamespacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListNamespacesOutcome(result.GetResultWithOwnership()) : ListNamespacesOutcome(std::move(result.GetError()));
}

ListOAuthClientApplicationsOutcome QuickSightClient::ListOAuthClientApplications(const ListOAuthClientApplicationsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListOAuthClientApplications", "Required field: AwsAccountId, is not set");
    return ListOAuthClientApplicationsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/oauth-client-applications");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListOAuthClientApplicationsOutcome(result.GetResultWithOwnership())
                            : ListOAuthClientApplicationsOutcome(std::move(result.GetError()));
}

ListPrincipalsForPolicyOutcome QuickSightClient::ListPrincipalsForPolicy(const ListPrincipalsForPolicyRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrincipalsForPolicy", "Required field: AccountId, is not set");
    return ListPrincipalsForPolicyOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AccountId]", false));
  }
  if (!request.PolicyArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListPrincipalsForPolicy", "Required field: PolicyArn, is not set");
    return ListPrincipalsForPolicyOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [PolicyArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/governance-policy-mgmt/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-assignments/by-policy");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListPrincipalsForPolicyOutcome(result.GetResultWithOwnership())
                            : ListPrincipalsForPolicyOutcome(std::move(result.GetError()));
}

ListRefreshSchedulesOutcome QuickSightClient::ListRefreshSchedules(const ListRefreshSchedulesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRefreshSchedules", "Required field: DataSetId, is not set");
    return ListRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh-schedules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRefreshSchedulesOutcome(result.GetResultWithOwnership())
                            : ListRefreshSchedulesOutcome(std::move(result.GetError()));
}

ListRoleMembershipsOutcome QuickSightClient::ListRoleMemberships(const ListRoleMembershipsRequest& request) const {
  if (!request.RoleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: Role, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: AwsAccountId, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRoleMemberships", "Required field: Namespace, is not set");
    return ListRoleMembershipsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
    endpointResolutionOutcome.GetResult().AddPathSegments("/members");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRoleMembershipsOutcome(result.GetResultWithOwnership())
                            : ListRoleMembershipsOutcome(std::move(result.GetError()));
}

ListSelfUpgradesOutcome QuickSightClient::ListSelfUpgrades(const ListSelfUpgradesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSelfUpgrades", "Required field: AwsAccountId, is not set");
    return ListSelfUpgradesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSelfUpgrades", "Required field: Namespace, is not set");
    return ListSelfUpgradesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/self-upgrade-requests");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSelfUpgradesOutcome(result.GetResultWithOwnership())
                            : ListSelfUpgradesOutcome(std::move(result.GetError()));
}

ListSpaceResourcesOutcome QuickSightClient::ListSpaceResources(const ListSpaceResourcesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSpaceResources", "Required field: AwsAccountId, is not set");
    return ListSpaceResourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AwsAccountId]", false));
  }
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSpaceResources", "Required field: SpaceId, is not set");
    return ListSpaceResourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSpaceResourcesOutcome(result.GetResultWithOwnership())
                            : ListSpaceResourcesOutcome(std::move(result.GetError()));
}

ListSpacesOutcome QuickSightClient::ListSpaces(const ListSpacesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSpaces", "Required field: AwsAccountId, is not set");
    return ListSpacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListSpacesOutcome(result.GetResultWithOwnership()) : ListSpacesOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome QuickSightClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTemplateAliasesOutcome QuickSightClient::ListTemplateAliases(const ListTemplateAliasesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: AwsAccountId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateAliases", "Required field: TemplateId, is not set");
    return ListTemplateAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplateAliasesOutcome(result.GetResultWithOwnership())
                            : ListTemplateAliasesOutcome(std::move(result.GetError()));
}

ListTemplateVersionsOutcome QuickSightClient::ListTemplateVersions(const ListTemplateVersionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: AwsAccountId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplateVersions", "Required field: TemplateId, is not set");
    return ListTemplateVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplateVersionsOutcome(result.GetResultWithOwnership())
                            : ListTemplateVersionsOutcome(std::move(result.GetError()));
}

ListTemplatesOutcome QuickSightClient::ListTemplates(const ListTemplatesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: AwsAccountId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTemplatesOutcome(result.GetResultWithOwnership()) : ListTemplatesOutcome(std::move(result.GetError()));
}

ListThemeAliasesOutcome QuickSightClient::ListThemeAliases(const ListThemeAliasesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: AwsAccountId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemeAliases", "Required field: ThemeId, is not set");
    return ListThemeAliasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/aliases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListThemeAliasesOutcome(result.GetResultWithOwnership())
                            : ListThemeAliasesOutcome(std::move(result.GetError()));
}

ListThemeVersionsOutcome QuickSightClient::ListThemeVersions(const ListThemeVersionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: AwsAccountId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemeVersions", "Required field: ThemeId, is not set");
    return ListThemeVersionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListThemeVersionsOutcome(result.GetResultWithOwnership())
                            : ListThemeVersionsOutcome(std::move(result.GetError()));
}

ListThemesOutcome QuickSightClient::ListThemes(const ListThemesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AwsAccountId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListThemesOutcome(result.GetResultWithOwnership()) : ListThemesOutcome(std::move(result.GetError()));
}

ListTopicRefreshSchedulesOutcome QuickSightClient::ListTopicRefreshSchedules(const ListTopicRefreshSchedulesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: AwsAccountId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopicRefreshSchedules", "Required field: TopicId, is not set");
    return ListTopicRefreshSchedulesOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTopicRefreshSchedulesOutcome(result.GetResultWithOwnership())
                            : ListTopicRefreshSchedulesOutcome(std::move(result.GetError()));
}

ListTopicReviewedAnswersOutcome QuickSightClient::ListTopicReviewedAnswers(const ListTopicReviewedAnswersRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopicReviewedAnswers", "Required field: AwsAccountId, is not set");
    return ListTopicReviewedAnswersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopicReviewedAnswers", "Required field: TopicId, is not set");
    return ListTopicReviewedAnswersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/reviewed-answers");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTopicReviewedAnswersOutcome(result.GetResultWithOwnership())
                            : ListTopicReviewedAnswersOutcome(std::move(result.GetError()));
}

ListTopicsOutcome QuickSightClient::ListTopics(const ListTopicsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopics", "Required field: AwsAccountId, is not set");
    return ListTopicsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTopicsOutcome(result.GetResultWithOwnership()) : ListTopicsOutcome(std::move(result.GetError()));
}

ListTopicsV2Outcome QuickSightClient::ListTopicsV2(const ListTopicsV2Request& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTopicsV2", "Required field: AwsAccountId, is not set");
    return ListTopicsV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topicsV2");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTopicsV2Outcome(result.GetResultWithOwnership()) : ListTopicsV2Outcome(std::move(result.GetError()));
}

ListUserGroupsOutcome QuickSightClient::ListUserGroups(const ListUserGroupsRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: UserName, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: AwsAccountId, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUserGroups", "Required field: Namespace, is not set");
    return ListUserGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListUserGroupsOutcome(result.GetResultWithOwnership()) : ListUserGroupsOutcome(std::move(result.GetError()));
}

ListUsersOutcome QuickSightClient::ListUsers(const ListUsersRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: AwsAccountId, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsers", "Required field: Namespace, is not set");
    return ListUsersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListUsersOutcome(result.GetResultWithOwnership()) : ListUsersOutcome(std::move(result.GetError()));
}

ListUsersIndexCapacityOutcome QuickSightClient::ListUsersIndexCapacity(const ListUsersIndexCapacityRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListUsersIndexCapacity", "Required field: AwsAccountId, is not set");
    return ListUsersIndexCapacityOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quick-index/user-capacity");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListUsersIndexCapacityOutcome(result.GetResultWithOwnership())
                            : ListUsersIndexCapacityOutcome(std::move(result.GetError()));
}

ListVPCConnectionsOutcome QuickSightClient::ListVPCConnections(const ListVPCConnectionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListVPCConnections", "Required field: AwsAccountId, is not set");
    return ListVPCConnectionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListVPCConnectionsOutcome(result.GetResultWithOwnership())
                            : ListVPCConnectionsOutcome(std::move(result.GetError()));
}

PredictQAResultsOutcome QuickSightClient::PredictQAResults(const PredictQAResultsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PredictQAResults", "Required field: AwsAccountId, is not set");
    return PredictQAResultsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/qa/predict");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? PredictQAResultsOutcome(result.GetResultWithOwnership())
                            : PredictQAResultsOutcome(std::move(result.GetError()));
}

PutDataSetRefreshPropertiesOutcome QuickSightClient::PutDataSetRefreshProperties(const PutDataSetRefreshPropertiesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: AwsAccountId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutDataSetRefreshProperties", "Required field: DataSetId, is not set");
    return PutDataSetRefreshPropertiesOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutDataSetRefreshPropertiesOutcome(result.GetResultWithOwnership())
                            : PutDataSetRefreshPropertiesOutcome(std::move(result.GetError()));
}

PutPolicyAssignmentOutcome QuickSightClient::PutPolicyAssignment(const PutPolicyAssignmentRequest& request) const {
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutPolicyAssignment", "Required field: AccountId, is not set");
    return PutPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/governance-policy-mgmt/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/policy-assignments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutPolicyAssignmentOutcome(result.GetResultWithOwnership())
                            : PutPolicyAssignmentOutcome(std::move(result.GetError()));
}

RegisterUserOutcome QuickSightClient::RegisterUser(const RegisterUserRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: AwsAccountId, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterUser", "Required field: Namespace, is not set");
    return RegisterUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/users");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RegisterUserOutcome(result.GetResultWithOwnership()) : RegisterUserOutcome(std::move(result.GetError()));
}

RestoreAnalysisOutcome QuickSightClient::RestoreAnalysis(const RestoreAnalysisRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AwsAccountId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RestoreAnalysis", "Required field: AnalysisId, is not set");
    return RestoreAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/restore/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RestoreAnalysisOutcome(result.GetResultWithOwnership())
                            : RestoreAnalysisOutcome(std::move(result.GetError()));
}

SearchActionConnectorsOutcome QuickSightClient::SearchActionConnectors(const SearchActionConnectorsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchActionConnectors", "Required field: AwsAccountId, is not set");
    return SearchActionConnectorsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/action-connectors");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchActionConnectorsOutcome(result.GetResultWithOwnership())
                            : SearchActionConnectorsOutcome(std::move(result.GetError()));
}

SearchAgentsOutcome QuickSightClient::SearchAgents(const SearchAgentsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAgents", "Required field: AwsAccountId, is not set");
    return SearchAgentsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/agents");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAgentsOutcome(result.GetResultWithOwnership()) : SearchAgentsOutcome(std::move(result.GetError()));
}

SearchAnalysesOutcome QuickSightClient::SearchAnalyses(const SearchAnalysesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAnalyses", "Required field: AwsAccountId, is not set");
    return SearchAnalysesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/analyses");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAnalysesOutcome(result.GetResultWithOwnership()) : SearchAnalysesOutcome(std::move(result.GetError()));
}

SearchAppsOutcome QuickSightClient::SearchApps(const SearchAppsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchApps", "Required field: AwsAccountId, is not set");
    return SearchAppsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/apps");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAppsOutcome(result.GetResultWithOwnership()) : SearchAppsOutcome(std::move(result.GetError()));
}

SearchDashboardsOutcome QuickSightClient::SearchDashboards(const SearchDashboardsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchDashboards", "Required field: AwsAccountId, is not set");
    return SearchDashboardsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/dashboards");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchDashboardsOutcome(result.GetResultWithOwnership())
                            : SearchDashboardsOutcome(std::move(result.GetError()));
}

SearchDataSetsOutcome QuickSightClient::SearchDataSets(const SearchDataSetsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchDataSets", "Required field: AwsAccountId, is not set");
    return SearchDataSetsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchDataSetsOutcome(result.GetResultWithOwnership()) : SearchDataSetsOutcome(std::move(result.GetError()));
}

SearchDataSourcesOutcome QuickSightClient::SearchDataSources(const SearchDataSourcesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchDataSources", "Required field: AwsAccountId, is not set");
    return SearchDataSourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/data-sources");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchDataSourcesOutcome(result.GetResultWithOwnership())
                            : SearchDataSourcesOutcome(std::move(result.GetError()));
}

SearchFlowsOutcome QuickSightClient::SearchFlows(const SearchFlowsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchFlows", "Required field: AwsAccountId, is not set");
    return SearchFlowsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/flows/searchFlows");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchFlowsOutcome(result.GetResultWithOwnership()) : SearchFlowsOutcome(std::move(result.GetError()));
}

SearchFoldersOutcome QuickSightClient::SearchFolders(const SearchFoldersRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchFolders", "Required field: AwsAccountId, is not set");
    return SearchFoldersOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/folders");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchFoldersOutcome(result.GetResultWithOwnership()) : SearchFoldersOutcome(std::move(result.GetError()));
}

SearchGroupsOutcome QuickSightClient::SearchGroups(const SearchGroupsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: AwsAccountId, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchGroups", "Required field: Namespace, is not set");
    return SearchGroupsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/groups-search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchGroupsOutcome(result.GetResultWithOwnership()) : SearchGroupsOutcome(std::move(result.GetError()));
}

SearchKnowledgeBasesOutcome QuickSightClient::SearchKnowledgeBases(const SearchKnowledgeBasesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchKnowledgeBases", "Required field: AwsAccountId, is not set");
    return SearchKnowledgeBasesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/knowledge-bases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchKnowledgeBasesOutcome(result.GetResultWithOwnership())
                            : SearchKnowledgeBasesOutcome(std::move(result.GetError()));
}

SearchSpacesOutcome QuickSightClient::SearchSpaces(const SearchSpacesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchSpaces", "Required field: AwsAccountId, is not set");
    return SearchSpacesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/spaces");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchSpacesOutcome(result.GetResultWithOwnership()) : SearchSpacesOutcome(std::move(result.GetError()));
}

SearchTopicsOutcome QuickSightClient::SearchTopics(const SearchTopicsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchTopics", "Required field: AwsAccountId, is not set");
    return SearchTopicsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/topics");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTopicsOutcome(result.GetResultWithOwnership()) : SearchTopicsOutcome(std::move(result.GetError()));
}

SearchTopicsV2Outcome QuickSightClient::SearchTopicsV2(const SearchTopicsV2Request& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchTopicsV2", "Required field: AwsAccountId, is not set");
    return SearchTopicsV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search/topicsV2");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchTopicsV2Outcome(result.GetResultWithOwnership()) : SearchTopicsV2Outcome(std::move(result.GetError()));
}

StartAssetBundleExportJobOutcome QuickSightClient::StartAssetBundleExportJob(const StartAssetBundleExportJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAssetBundleExportJob", "Required field: AwsAccountId, is not set");
    return StartAssetBundleExportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-export-jobs/export");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAssetBundleExportJobOutcome(result.GetResultWithOwnership())
                            : StartAssetBundleExportJobOutcome(std::move(result.GetError()));
}

StartAssetBundleImportJobOutcome QuickSightClient::StartAssetBundleImportJob(const StartAssetBundleImportJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAssetBundleImportJob", "Required field: AwsAccountId, is not set");
    return StartAssetBundleImportJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-bundle-import-jobs/import");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAssetBundleImportJobOutcome(result.GetResultWithOwnership())
                            : StartAssetBundleImportJobOutcome(std::move(result.GetError()));
}

StartAutomationJobOutcome QuickSightClient::StartAutomationJob(const StartAutomationJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomationJob", "Required field: AwsAccountId, is not set");
    return StartAutomationJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AwsAccountId]", false));
  }
  if (!request.AutomationGroupIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomationJob", "Required field: AutomationGroupId, is not set");
    return StartAutomationJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AutomationGroupId]", false));
  }
  if (!request.AutomationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartAutomationJob", "Required field: AutomationId, is not set");
    return StartAutomationJobOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AutomationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/automation-groups/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAutomationGroupId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/automations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAutomationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartAutomationJobOutcome(result.GetResultWithOwnership())
                            : StartAutomationJobOutcome(std::move(result.GetError()));
}

StartDashboardSnapshotJobOutcome QuickSightClient::StartDashboardSnapshotJob(const StartDashboardSnapshotJobRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJob", "Required field: AwsAccountId, is not set");
    return StartDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJob", "Required field: DashboardId, is not set");
    return StartDashboardSnapshotJobOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/snapshot-jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDashboardSnapshotJobOutcome(result.GetResultWithOwnership())
                            : StartDashboardSnapshotJobOutcome(std::move(result.GetError()));
}

StartDashboardSnapshotJobScheduleOutcome QuickSightClient::StartDashboardSnapshotJobSchedule(
    const StartDashboardSnapshotJobScheduleRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: AwsAccountId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: DashboardId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.ScheduleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDashboardSnapshotJobSchedule", "Required field: ScheduleId, is not set");
    return StartDashboardSnapshotJobScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? StartDashboardSnapshotJobScheduleOutcome(result.GetResultWithOwnership())
                            : StartDashboardSnapshotJobScheduleOutcome(std::move(result.GetError()));
}

TagResourceOutcome QuickSightClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome QuickSightClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/resources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAccessControlApplicationOutcome QuickSightClient::UpdateAccessControlApplication(
    const UpdateAccessControlApplicationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessControlApplication", "Required field: AwsAccountId, is not set");
    return UpdateAccessControlApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessControlApplication", "Required field: ApplicationId, is not set");
    return UpdateAccessControlApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-control-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAccessControlApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateAccessControlApplicationOutcome(std::move(result.GetError()));
}

UpdateAccessControlApplicationSecretOutcome QuickSightClient::UpdateAccessControlApplicationSecret(
    const UpdateAccessControlApplicationSecretRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessControlApplicationSecret", "Required field: AwsAccountId, is not set");
    return UpdateAccessControlApplicationSecretOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessControlApplicationSecret", "Required field: ApplicationId, is not set");
    return UpdateAccessControlApplicationSecretOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }
  if (!request.ClientSecretIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessControlApplicationSecret", "Required field: ClientSecretId, is not set");
    return UpdateAccessControlApplicationSecretOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ClientSecretId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-control-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/client-secrets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetClientSecretId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccessControlApplicationSecretOutcome(result.GetResultWithOwnership())
                            : UpdateAccessControlApplicationSecretOutcome(std::move(result.GetError()));
}

UpdateAccountCustomPermissionOutcome QuickSightClient::UpdateAccountCustomPermission(
    const UpdateAccountCustomPermissionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomPermission", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permission");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccountCustomPermissionOutcome(result.GetResultWithOwnership())
                            : UpdateAccountCustomPermissionOutcome(std::move(result.GetError()));
}

UpdateAccountCustomizationOutcome QuickSightClient::UpdateAccountCustomization(const UpdateAccountCustomizationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountCustomization", "Required field: AwsAccountId, is not set");
    return UpdateAccountCustomizationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/customizations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccountCustomizationOutcome(result.GetResultWithOwnership())
                            : UpdateAccountCustomizationOutcome(std::move(result.GetError()));
}

UpdateAccountSettingsOutcome QuickSightClient::UpdateAccountSettings(const UpdateAccountSettingsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccountSettings", "Required field: AwsAccountId, is not set");
    return UpdateAccountSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAccountSettingsOutcome(result.GetResultWithOwnership())
                            : UpdateAccountSettingsOutcome(std::move(result.GetError()));
}

UpdateActionConnectorOutcome QuickSightClient::UpdateActionConnector(const UpdateActionConnectorRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateActionConnector", "Required field: AwsAccountId, is not set");
    return UpdateActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.ActionConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateActionConnector", "Required field: ActionConnectorId, is not set");
    return UpdateActionConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ActionConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/action-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionConnectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateActionConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateActionConnectorOutcome(std::move(result.GetError()));
}

UpdateActionConnectorPermissionsOutcome QuickSightClient::UpdateActionConnectorPermissions(
    const UpdateActionConnectorPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateActionConnectorPermissions", "Required field: AwsAccountId, is not set");
    return UpdateActionConnectorPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ActionConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateActionConnectorPermissions", "Required field: ActionConnectorId, is not set");
    return UpdateActionConnectorPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateActionConnectorPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateActionConnectorPermissionsOutcome(std::move(result.GetError()));
}

UpdateAgentOutcome QuickSightClient::UpdateAgent(const UpdateAgentRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgent", "Required field: AgentId, is not set");
    return UpdateAgentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AgentId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgent", "Required field: AwsAccountId, is not set");
    return UpdateAgentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentOutcome(result.GetResultWithOwnership()) : UpdateAgentOutcome(std::move(result.GetError()));
}

UpdateAgentPermissionsOutcome QuickSightClient::UpdateAgentPermissions(const UpdateAgentPermissionsRequest& request) const {
  if (!request.AgentIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentPermissions", "Required field: AgentId, is not set");
    return UpdateAgentPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AgentId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAgentPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAgentPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/agents/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAgentId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAgentPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateAgentPermissionsOutcome(std::move(result.GetError()));
}

UpdateAnalysisOutcome QuickSightClient::UpdateAnalysis(const UpdateAnalysisRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysis", "Required field: AnalysisId, is not set");
    return UpdateAnalysisOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AnalysisId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/analyses/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAnalysisId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAnalysisOutcome(result.GetResultWithOwnership()) : UpdateAnalysisOutcome(std::move(result.GetError()));
}

UpdateAnalysisPermissionsOutcome QuickSightClient::UpdateAnalysisPermissions(const UpdateAnalysisPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AnalysisIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAnalysisPermissions", "Required field: AnalysisId, is not set");
    return UpdateAnalysisPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAnalysisPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateAnalysisPermissionsOutcome(std::move(result.GetError()));
}

UpdateAppPermissionsOutcome QuickSightClient::UpdateAppPermissions(const UpdateAppPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAppPermissions", "Required field: AwsAccountId, is not set");
    return UpdateAppPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAppPermissions", "Required field: AppId, is not set");
    return UpdateAppPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateAppPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateAppPermissionsOutcome(std::move(result.GetError()));
}

UpdateApplicationWithTokenExchangeGrantOutcome QuickSightClient::UpdateApplicationWithTokenExchangeGrant(
    const UpdateApplicationWithTokenExchangeGrantRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplicationWithTokenExchangeGrant", "Required field: AwsAccountId, is not set");
    return UpdateApplicationWithTokenExchangeGrantOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplicationWithTokenExchangeGrant", "Required field: Namespace, is not set");
    return UpdateApplicationWithTokenExchangeGrantOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/application-with-token-exchange-grant");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateApplicationWithTokenExchangeGrantOutcome(result.GetResultWithOwnership())
                            : UpdateApplicationWithTokenExchangeGrantOutcome(std::move(result.GetError()));
}

UpdateApprovalPolicyOutcome QuickSightClient::UpdateApprovalPolicy(const UpdateApprovalPolicyRequest& request) const {
  if (!request.PolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApprovalPolicy", "Required field: PolicyId, is not set");
    return UpdateApprovalPolicyOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/governance/approvalworkflows/policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPolicyId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateApprovalPolicyOutcome(result.GetResultWithOwnership())
                            : UpdateApprovalPolicyOutcome(std::move(result.GetError()));
}

UpdateBrandOutcome QuickSightClient::UpdateBrand(const UpdateBrandRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrand", "Required field: AwsAccountId, is not set");
    return UpdateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrand", "Required field: BrandId, is not set");
    return UpdateBrandOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [BrandId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brands/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBrandId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrandOutcome(result.GetResultWithOwnership()) : UpdateBrandOutcome(std::move(result.GetError()));
}

UpdateBrandAssignmentOutcome QuickSightClient::UpdateBrandAssignment(const UpdateBrandAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandAssignment", "Required field: AwsAccountId, is not set");
    return UpdateBrandAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/brandassignments");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrandAssignmentOutcome(result.GetResultWithOwnership())
                            : UpdateBrandAssignmentOutcome(std::move(result.GetError()));
}

UpdateBrandPublishedVersionOutcome QuickSightClient::UpdateBrandPublishedVersion(const UpdateBrandPublishedVersionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.BrandIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBrandPublishedVersion", "Required field: BrandId, is not set");
    return UpdateBrandPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateBrandPublishedVersionOutcome(result.GetResultWithOwnership())
                            : UpdateBrandPublishedVersionOutcome(std::move(result.GetError()));
}

UpdateCustomPermissionsOutcome QuickSightClient::UpdateCustomPermissions(const UpdateCustomPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomPermissions", "Required field: AwsAccountId, is not set");
    return UpdateCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.CustomPermissionsNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCustomPermissions", "Required field: CustomPermissionsName, is not set");
    return UpdateCustomPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [CustomPermissionsName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/custom-permissions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCustomPermissionsName());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCustomPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateCustomPermissionsOutcome(std::move(result.GetError()));
}

UpdateDashboardOutcome QuickSightClient::UpdateDashboard(const UpdateDashboardRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: AwsAccountId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDashboardOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardOutcome(std::move(result.GetError()));
}

UpdateDashboardLinksOutcome QuickSightClient::UpdateDashboardLinks(const UpdateDashboardLinksRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardLinks", "Required field: AwsAccountId, is not set");
    return UpdateDashboardLinksOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardLinks", "Required field: DashboardId, is not set");
    return UpdateDashboardLinksOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/linked-entities");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDashboardLinksOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardLinksOutcome(std::move(result.GetError()));
}

UpdateDashboardPermissionsOutcome QuickSightClient::UpdateDashboardPermissions(const UpdateDashboardPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPermissions", "Required field: DashboardId, is not set");
    return UpdateDashboardPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDashboardPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardPermissionsOutcome(std::move(result.GetError()));
}

UpdateDashboardPublishedVersionOutcome QuickSightClient::UpdateDashboardPublishedVersion(
    const UpdateDashboardPublishedVersionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: AwsAccountId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: DashboardId, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DashboardId]", false));
  }
  if (!request.VersionNumberHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardPublishedVersion", "Required field: VersionNumber, is not set");
    return UpdateDashboardPublishedVersionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [VersionNumber]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/versions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVersionNumber());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDashboardPublishedVersionOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardPublishedVersionOutcome(std::move(result.GetError()));
}

UpdateDashboardsQAConfigurationOutcome QuickSightClient::UpdateDashboardsQAConfiguration(
    const UpdateDashboardsQAConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboardsQAConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateDashboardsQAConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards-qa-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDashboardsQAConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateDashboardsQAConfigurationOutcome(std::move(result.GetError()));
}

UpdateDataSetOutcome QuickSightClient::UpdateDataSet(const UpdateDataSetRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: AwsAccountId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataSetOutcome(result.GetResultWithOwnership()) : UpdateDataSetOutcome(std::move(result.GetError()));
}

UpdateDataSetPermissionsOutcome QuickSightClient::UpdateDataSetPermissions(const UpdateDataSetPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSetPermissions", "Required field: DataSetId, is not set");
    return UpdateDataSetPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDataSetPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateDataSetPermissionsOutcome(std::move(result.GetError()));
}

UpdateDataSourceOutcome QuickSightClient::UpdateDataSource(const UpdateDataSourceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: AwsAccountId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSource", "Required field: DataSourceId, is not set");
    return UpdateDataSourceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-sources/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSourceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDataSourceOutcome(result.GetResultWithOwnership())
                            : UpdateDataSourceOutcome(std::move(result.GetError()));
}

UpdateDataSourcePermissionsOutcome QuickSightClient::UpdateDataSourcePermissions(const UpdateDataSourcePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: AwsAccountId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.DataSourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSourcePermissions", "Required field: DataSourceId, is not set");
    return UpdateDataSourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateDataSourcePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateDataSourcePermissionsOutcome(std::move(result.GetError()));
}

UpdateDefaultQBusinessApplicationOutcome QuickSightClient::UpdateDefaultQBusinessApplication(
    const UpdateDefaultQBusinessApplicationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDefaultQBusinessApplication", "Required field: AwsAccountId, is not set");
    return UpdateDefaultQBusinessApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/default-qbusiness-application");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDefaultQBusinessApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateDefaultQBusinessApplicationOutcome(std::move(result.GetError()));
}

UpdateDlpSettingOutcome QuickSightClient::UpdateDlpSetting(const UpdateDlpSettingRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDlpSetting", "Required field: AwsAccountId, is not set");
    return UpdateDlpSettingOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.DlpSettingIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDlpSetting", "Required field: DlpSettingId, is not set");
    return UpdateDlpSettingOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DlpSettingId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/data-loss-prevention/settings/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDlpSettingId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateDlpSettingOutcome(result.GetResultWithOwnership())
                            : UpdateDlpSettingOutcome(std::move(result.GetError()));
}

UpdateFlowOutcome QuickSightClient::UpdateFlow(const UpdateFlowRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: AwsAccountId, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }
  if (!request.FlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlow", "Required field: FlowId, is not set");
    return UpdateFlowOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [FlowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowOutcome(result.GetResultWithOwnership()) : UpdateFlowOutcome(std::move(result.GetError()));
}

UpdateFlowPermissionsOutcome QuickSightClient::UpdateFlowPermissions(const UpdateFlowPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowPermissions", "Required field: AwsAccountId, is not set");
    return UpdateFlowPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }
  if (!request.FlowIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFlowPermissions", "Required field: FlowId, is not set");
    return UpdateFlowPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [FlowId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/flows/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFlowId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFlowPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateFlowPermissionsOutcome(std::move(result.GetError()));
}

UpdateFolderOutcome QuickSightClient::UpdateFolder(const UpdateFolderRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: AwsAccountId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFolder", "Required field: FolderId, is not set");
    return UpdateFolderOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFolderOutcome(result.GetResultWithOwnership()) : UpdateFolderOutcome(std::move(result.GetError()));
}

UpdateFolderPermissionsOutcome QuickSightClient::UpdateFolderPermissions(const UpdateFolderPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: AwsAccountId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AwsAccountId]", false));
  }
  if (!request.FolderIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateFolderPermissions", "Required field: FolderId, is not set");
    return UpdateFolderPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [FolderId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/folders/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFolderId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFolderPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateFolderPermissionsOutcome(std::move(result.GetError()));
}

UpdateGroupOutcome QuickSightClient::UpdateGroup(const UpdateGroupRequest& request) const {
  if (!request.GroupNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: GroupName, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [GroupName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: AwsAccountId, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGroup", "Required field: Namespace, is not set");
    return UpdateGroupOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateGroupOutcome(result.GetResultWithOwnership()) : UpdateGroupOutcome(std::move(result.GetError()));
}

UpdateIAMPolicyAssignmentOutcome QuickSightClient::UpdateIAMPolicyAssignment(const UpdateIAMPolicyAssignmentRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AwsAccountId, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.AssignmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: AssignmentName, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssignmentName]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIAMPolicyAssignment", "Required field: Namespace, is not set");
    return UpdateIAMPolicyAssignmentOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateIAMPolicyAssignmentOutcome(result.GetResultWithOwnership())
                            : UpdateIAMPolicyAssignmentOutcome(std::move(result.GetError()));
}

UpdateIdentityPropagationConfigOutcome QuickSightClient::UpdateIdentityPropagationConfig(
    const UpdateIdentityPropagationConfigRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdentityPropagationConfig", "Required field: AwsAccountId, is not set");
    return UpdateIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.ServiceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIdentityPropagationConfig", "Required field: Service, is not set");
    return UpdateIdentityPropagationConfigOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Service]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity-propagation-config/");
    endpointResolutionOutcome.GetResult().AddPathSegment(ServiceTypeMapper::GetNameForServiceType(request.GetService()));
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIdentityPropagationConfigOutcome(result.GetResultWithOwnership())
                            : UpdateIdentityPropagationConfigOutcome(std::move(result.GetError()));
}

UpdateInboundConnectorOutcome QuickSightClient::UpdateInboundConnector(const UpdateInboundConnectorRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInboundConnector", "Required field: AwsAccountId, is not set");
    return UpdateInboundConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.InboundConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInboundConnector", "Required field: InboundConnectorId, is not set");
    return UpdateInboundConnectorOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InboundConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInboundConnectorId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateInboundConnectorOutcome(result.GetResultWithOwnership())
                            : UpdateInboundConnectorOutcome(std::move(result.GetError()));
}

UpdateInboundConnectorApplicationAssociationsOutcome QuickSightClient::UpdateInboundConnectorApplicationAssociations(
    const UpdateInboundConnectorApplicationAssociationsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInboundConnectorApplicationAssociations", "Required field: AwsAccountId, is not set");
    return UpdateInboundConnectorApplicationAssociationsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.InboundConnectorIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateInboundConnectorApplicationAssociations", "Required field: InboundConnectorId, is not set");
    return UpdateInboundConnectorApplicationAssociationsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InboundConnectorId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/inbound-connectors/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInboundConnectorId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateInboundConnectorApplicationAssociationsOutcome(result.GetResultWithOwnership())
                            : UpdateInboundConnectorApplicationAssociationsOutcome(std::move(result.GetError()));
}

UpdateIpRestrictionOutcome QuickSightClient::UpdateIpRestriction(const UpdateIpRestrictionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateIpRestriction", "Required field: AwsAccountId, is not set");
    return UpdateIpRestrictionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/ip-restriction");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateIpRestrictionOutcome(result.GetResultWithOwnership())
                            : UpdateIpRestrictionOutcome(std::move(result.GetError()));
}

UpdateKeyRegistrationOutcome QuickSightClient::UpdateKeyRegistration(const UpdateKeyRegistrationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKeyRegistration", "Required field: AwsAccountId, is not set");
    return UpdateKeyRegistrationOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/key-registration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateKeyRegistrationOutcome(result.GetResultWithOwnership())
                            : UpdateKeyRegistrationOutcome(std::move(result.GetError()));
}

UpdateKnowledgeBaseOutcome QuickSightClient::UpdateKnowledgeBase(const UpdateKnowledgeBaseRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBase", "Required field: AwsAccountId, is not set");
    return UpdateKnowledgeBaseOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBase", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledge-bases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateKnowledgeBaseOutcome(result.GetResultWithOwnership())
                            : UpdateKnowledgeBaseOutcome(std::move(result.GetError()));
}

UpdateKnowledgeBasePermissionsOutcome QuickSightClient::UpdateKnowledgeBasePermissions(
    const UpdateKnowledgeBasePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBasePermissions", "Required field: AwsAccountId, is not set");
    return UpdateKnowledgeBasePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBasePermissions", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBasePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledge-bases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateKnowledgeBasePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateKnowledgeBasePermissionsOutcome(std::move(result.GetError()));
}

UpdateKnowledgeBaseRefreshScheduleOutcome QuickSightClient::UpdateKnowledgeBaseRefreshSchedule(
    const UpdateKnowledgeBaseRefreshScheduleRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateKnowledgeBaseRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.KnowledgeBaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseRefreshSchedule", "Required field: KnowledgeBaseId, is not set");
    return UpdateKnowledgeBaseRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [KnowledgeBaseId]", false));
  }
  if (!request.ScheduleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateKnowledgeBaseRefreshSchedule", "Required field: ScheduleId, is not set");
    return UpdateKnowledgeBaseRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ScheduleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/knowledge-bases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetKnowledgeBaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/kb-refresh-schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetScheduleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateKnowledgeBaseRefreshScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateKnowledgeBaseRefreshScheduleOutcome(std::move(result.GetError()));
}

UpdateLimitsProfileOutcome QuickSightClient::UpdateLimitsProfile(const UpdateLimitsProfileRequest& request) const {
  if (!request.ProfileIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLimitsProfile", "Required field: ProfileId, is not set");
    return UpdateLimitsProfileOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [ProfileId]", false));
  }
  if (!request.AccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLimitsProfile", "Required field: AccountId, is not set");
    return UpdateLimitsProfileOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/governance/limits/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/profiles/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProfileId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateLimitsProfileOutcome(result.GetResultWithOwnership())
                            : UpdateLimitsProfileOutcome(std::move(result.GetError()));
}
