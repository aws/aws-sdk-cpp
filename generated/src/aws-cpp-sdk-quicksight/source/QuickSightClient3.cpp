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
#include <aws/quicksight/model/UpdateOAuthClientApplicationRequest.h>
#include <aws/quicksight/model/UpdatePublicSharingSettingsRequest.h>
#include <aws/quicksight/model/UpdateQPersonalizationConfigurationRequest.h>
#include <aws/quicksight/model/UpdateQuickSightQSearchConfigurationRequest.h>
#include <aws/quicksight/model/UpdateRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateResourcePermissionsRequest.h>
#include <aws/quicksight/model/UpdateRoleCustomPermissionRequest.h>
#include <aws/quicksight/model/UpdateSPICECapacityConfigurationRequest.h>
#include <aws/quicksight/model/UpdateSelfUpgradeConfigurationRequest.h>
#include <aws/quicksight/model/UpdateSelfUpgradeRequest.h>
#include <aws/quicksight/model/UpdateSpacePermissionsRequest.h>
#include <aws/quicksight/model/UpdateSpaceRequest.h>
#include <aws/quicksight/model/UpdateSpaceResourcesRequest.h>
#include <aws/quicksight/model/UpdateTemplateAliasRequest.h>
#include <aws/quicksight/model/UpdateTemplatePermissionsRequest.h>
#include <aws/quicksight/model/UpdateTemplateRequest.h>
#include <aws/quicksight/model/UpdateThemeAliasRequest.h>
#include <aws/quicksight/model/UpdateThemePermissionsRequest.h>
#include <aws/quicksight/model/UpdateThemeRequest.h>
#include <aws/quicksight/model/UpdateTopicPermissionsRequest.h>
#include <aws/quicksight/model/UpdateTopicPermissionsV2Request.h>
#include <aws/quicksight/model/UpdateTopicRefreshScheduleRequest.h>
#include <aws/quicksight/model/UpdateTopicRequest.h>
#include <aws/quicksight/model/UpdateTopicV2Request.h>
#include <aws/quicksight/model/UpdateUserCustomPermissionRequest.h>
#include <aws/quicksight/model/UpdateUserRequest.h>
#include <aws/quicksight/model/UpdateVPCConnectionRequest.h>
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

UpdateOAuthClientApplicationOutcome QuickSightClient::UpdateOAuthClientApplication(
    const UpdateOAuthClientApplicationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOAuthClientApplication", "Required field: AwsAccountId, is not set");
    return UpdateOAuthClientApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.OAuthClientApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateOAuthClientApplication", "Required field: OAuthClientApplicationId, is not set");
    return UpdateOAuthClientApplicationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [OAuthClientApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/oauth-client-applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetOAuthClientApplicationId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateOAuthClientApplicationOutcome(result.GetResultWithOwnership())
                            : UpdateOAuthClientApplicationOutcome(std::move(result.GetError()));
}

UpdatePublicSharingSettingsOutcome QuickSightClient::UpdatePublicSharingSettings(const UpdatePublicSharingSettingsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePublicSharingSettings", "Required field: AwsAccountId, is not set");
    return UpdatePublicSharingSettingsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/public-sharing-settings");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdatePublicSharingSettingsOutcome(result.GetResultWithOwnership())
                            : UpdatePublicSharingSettingsOutcome(std::move(result.GetError()));
}

UpdateQPersonalizationConfigurationOutcome QuickSightClient::UpdateQPersonalizationConfiguration(
    const UpdateQPersonalizationConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQPersonalizationConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateQPersonalizationConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/q-personalization-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateQPersonalizationConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateQPersonalizationConfigurationOutcome(std::move(result.GetError()));
}

UpdateQuickSightQSearchConfigurationOutcome QuickSightClient::UpdateQuickSightQSearchConfiguration(
    const UpdateQuickSightQSearchConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateQuickSightQSearchConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateQuickSightQSearchConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/quicksight-q-search-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateQuickSightQSearchConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateQuickSightQSearchConfigurationOutcome(std::move(result.GetError()));
}

UpdateRefreshScheduleOutcome QuickSightClient::UpdateRefreshSchedule(const UpdateRefreshScheduleRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: DataSetId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DataSetId]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRefreshScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateRefreshScheduleOutcome(std::move(result.GetError()));
}

UpdateResourcePermissionsOutcome QuickSightClient::UpdateResourcePermissions(const UpdateResourcePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateResourcePermissions", "Required field: AwsAccountId, is not set");
    return UpdateResourcePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/account-resource-permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateResourcePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateResourcePermissionsOutcome(std::move(result.GetError()));
}

UpdateRoleCustomPermissionOutcome QuickSightClient::UpdateRoleCustomPermission(const UpdateRoleCustomPermissionRequest& request) const {
  if (!request.RoleHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: Role, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Role]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: AwsAccountId, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRoleCustomPermission", "Required field: Namespace, is not set");
    return UpdateRoleCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRoleCustomPermissionOutcome(result.GetResultWithOwnership())
                            : UpdateRoleCustomPermissionOutcome(std::move(result.GetError()));
}

UpdateSPICECapacityConfigurationOutcome QuickSightClient::UpdateSPICECapacityConfiguration(
    const UpdateSPICECapacityConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSPICECapacityConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateSPICECapacityConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spice-capacity-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSPICECapacityConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSPICECapacityConfigurationOutcome(std::move(result.GetError()));
}

UpdateSelfUpgradeOutcome QuickSightClient::UpdateSelfUpgrade(const UpdateSelfUpgradeRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSelfUpgrade", "Required field: AwsAccountId, is not set");
    return UpdateSelfUpgradeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSelfUpgrade", "Required field: Namespace, is not set");
    return UpdateSelfUpgradeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/update-self-upgrade-request");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateSelfUpgradeOutcome(result.GetResultWithOwnership())
                            : UpdateSelfUpgradeOutcome(std::move(result.GetError()));
}

UpdateSelfUpgradeConfigurationOutcome QuickSightClient::UpdateSelfUpgradeConfiguration(
    const UpdateSelfUpgradeConfigurationRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSelfUpgradeConfiguration", "Required field: AwsAccountId, is not set");
    return UpdateSelfUpgradeConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSelfUpgradeConfiguration", "Required field: Namespace, is not set");
    return UpdateSelfUpgradeConfigurationOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Namespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/namespaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetNamespace());
    endpointResolutionOutcome.GetResult().AddPathSegments("/self-upgrade-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSelfUpgradeConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateSelfUpgradeConfigurationOutcome(std::move(result.GetError()));
}

UpdateSpaceOutcome QuickSightClient::UpdateSpace(const UpdateSpaceRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: AwsAccountId, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpace", "Required field: SpaceId, is not set");
    return UpdateSpaceOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSpaceOutcome(result.GetResultWithOwnership()) : UpdateSpaceOutcome(std::move(result.GetError()));
}

UpdateSpacePermissionsOutcome QuickSightClient::UpdateSpacePermissions(const UpdateSpacePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpacePermissions", "Required field: AwsAccountId, is not set");
    return UpdateSpacePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpacePermissions", "Required field: SpaceId, is not set");
    return UpdateSpacePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SpaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/spaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSpaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSpacePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateSpacePermissionsOutcome(std::move(result.GetError()));
}

UpdateSpaceResourcesOutcome QuickSightClient::UpdateSpaceResources(const UpdateSpaceResourcesRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpaceResources", "Required field: AwsAccountId, is not set");
    return UpdateSpaceResourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AwsAccountId]", false));
  }
  if (!request.SpaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSpaceResources", "Required field: SpaceId, is not set");
    return UpdateSpaceResourcesOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateSpaceResourcesOutcome(result.GetResultWithOwnership())
                            : UpdateSpaceResourcesOutcome(std::move(result.GetError()));
}

UpdateTemplateOutcome QuickSightClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: AwsAccountId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTemplateOutcome(result.GetResultWithOwnership()) : UpdateTemplateOutcome(std::move(result.GetError()));
}

UpdateTemplateAliasOutcome QuickSightClient::UpdateTemplateAlias(const UpdateTemplateAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AwsAccountId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: TemplateId, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [TemplateId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplateAlias", "Required field: AliasName, is not set");
    return UpdateTemplateAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTemplateAliasOutcome(result.GetResultWithOwnership())
                            : UpdateTemplateAliasOutcome(std::move(result.GetError()));
}

UpdateTemplatePermissionsOutcome QuickSightClient::UpdateTemplatePermissions(const UpdateTemplatePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: AwsAccountId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplatePermissions", "Required field: TemplateId, is not set");
    return UpdateTemplatePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTemplatePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateTemplatePermissionsOutcome(std::move(result.GetError()));
}

UpdateThemeOutcome QuickSightClient::UpdateTheme(const UpdateThemeRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: AwsAccountId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: ThemeId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateThemeOutcome(result.GetResultWithOwnership()) : UpdateThemeOutcome(std::move(result.GetError()));
}

UpdateThemeAliasOutcome QuickSightClient::UpdateThemeAlias(const UpdateThemeAliasRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AwsAccountId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: ThemeId, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ThemeId]", false));
  }
  if (!request.AliasNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThemeAlias", "Required field: AliasName, is not set");
    return UpdateThemeAliasOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateThemeAliasOutcome(result.GetResultWithOwnership())
                            : UpdateThemeAliasOutcome(std::move(result.GetError()));
}

UpdateThemePermissionsOutcome QuickSightClient::UpdateThemePermissions(const UpdateThemePermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: AwsAccountId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.ThemeIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateThemePermissions", "Required field: ThemeId, is not set");
    return UpdateThemePermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [ThemeId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetThemeId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateThemePermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateThemePermissionsOutcome(std::move(result.GetError()));
}

UpdateTopicOutcome QuickSightClient::UpdateTopic(const UpdateTopicRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: AwsAccountId, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopic", "Required field: TopicId, is not set");
    return UpdateTopicOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTopicOutcome(result.GetResultWithOwnership()) : UpdateTopicOutcome(std::move(result.GetError()));
}

UpdateTopicPermissionsOutcome QuickSightClient::UpdateTopicPermissions(const UpdateTopicPermissionsRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissions", "Required field: AwsAccountId, is not set");
    return UpdateTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissions", "Required field: TopicId, is not set");
    return UpdateTopicPermissionsOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topics/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTopicPermissionsOutcome(result.GetResultWithOwnership())
                            : UpdateTopicPermissionsOutcome(std::move(result.GetError()));
}

UpdateTopicPermissionsV2Outcome QuickSightClient::UpdateTopicPermissionsV2(const UpdateTopicPermissionsV2Request& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissionsV2", "Required field: AwsAccountId, is not set");
    return UpdateTopicPermissionsV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicPermissionsV2", "Required field: TopicId, is not set");
    return UpdateTopicPermissionsV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                   "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topicsV2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/permissions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTopicPermissionsV2Outcome(result.GetResultWithOwnership())
                            : UpdateTopicPermissionsV2Outcome(std::move(result.GetError()));
}

UpdateTopicRefreshScheduleOutcome QuickSightClient::UpdateTopicRefreshSchedule(const UpdateTopicRefreshScheduleRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: AwsAccountId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: TopicId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TopicId]", false));
  }
  if (!request.DatasetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicRefreshSchedule", "Required field: DatasetId, is not set");
    return UpdateTopicRefreshScheduleOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTopicRefreshScheduleOutcome(result.GetResultWithOwnership())
                            : UpdateTopicRefreshScheduleOutcome(std::move(result.GetError()));
}

UpdateTopicV2Outcome QuickSightClient::UpdateTopicV2(const UpdateTopicV2Request& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicV2", "Required field: AwsAccountId, is not set");
    return UpdateTopicV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AwsAccountId]", false));
  }
  if (!request.TopicIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTopicV2", "Required field: TopicId, is not set");
    return UpdateTopicV2Outcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TopicId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/topicsV2/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTopicId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTopicV2Outcome(result.GetResultWithOwnership()) : UpdateTopicV2Outcome(std::move(result.GetError()));
}

UpdateUserOutcome QuickSightClient::UpdateUser(const UpdateUserRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: UserName, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: AwsAccountId, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUser", "Required field: Namespace, is not set");
    return UpdateUserOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateUserOutcome(result.GetResultWithOwnership()) : UpdateUserOutcome(std::move(result.GetError()));
}

UpdateUserCustomPermissionOutcome QuickSightClient::UpdateUserCustomPermission(const UpdateUserCustomPermissionRequest& request) const {
  if (!request.UserNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserCustomPermission", "Required field: UserName, is not set");
    return UpdateUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [UserName]", false));
  }
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserCustomPermission", "Required field: AwsAccountId, is not set");
    return UpdateUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
        QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AwsAccountId]", false));
  }
  if (!request.NamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateUserCustomPermission", "Required field: Namespace, is not set");
    return UpdateUserCustomPermissionOutcome(Aws::Client::AWSError<QuickSightErrors>(
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

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateUserCustomPermissionOutcome(result.GetResultWithOwnership())
                            : UpdateUserCustomPermissionOutcome(std::move(result.GetError()));
}

UpdateVPCConnectionOutcome QuickSightClient::UpdateVPCConnection(const UpdateVPCConnectionRequest& request) const {
  if (!request.AwsAccountIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: AwsAccountId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AwsAccountId]", false));
  }
  if (!request.VPCConnectionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateVPCConnection", "Required field: VPCConnectionId, is not set");
    return UpdateVPCConnectionOutcome(Aws::Client::AWSError<QuickSightErrors>(QuickSightErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [VPCConnectionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/accounts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAwsAccountId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/vpc-connections/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetVPCConnectionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateVPCConnectionOutcome(result.GetResultWithOwnership())
                            : UpdateVPCConnectionOutcome(std::move(result.GetError()));
}
