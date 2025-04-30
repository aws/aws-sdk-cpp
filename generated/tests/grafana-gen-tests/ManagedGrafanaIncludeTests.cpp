/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/grafana/ManagedGrafanaClient.h>
#include <aws/grafana/ManagedGrafanaEndpointProvider.h>
#include <aws/grafana/ManagedGrafanaEndpointRules.h>
#include <aws/grafana/ManagedGrafanaErrorMarshaller.h>
#include <aws/grafana/ManagedGrafanaErrors.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafanaServiceClientModel.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/AccountAccessType.h>
#include <aws/grafana/model/AssertionAttributes.h>
#include <aws/grafana/model/AssociateLicenseRequest.h>
#include <aws/grafana/model/AssociateLicenseResult.h>
#include <aws/grafana/model/AuthenticationDescription.h>
#include <aws/grafana/model/AuthenticationProviderTypes.h>
#include <aws/grafana/model/AuthenticationSummary.h>
#include <aws/grafana/model/AwsSsoAuthentication.h>
#include <aws/grafana/model/ConflictException.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/CreateWorkspaceApiKeyResult.h>
#include <aws/grafana/model/CreateWorkspaceRequest.h>
#include <aws/grafana/model/CreateWorkspaceResult.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountRequest.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountResult.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountTokenRequest.h>
#include <aws/grafana/model/CreateWorkspaceServiceAccountTokenResult.h>
#include <aws/grafana/model/DataSourceType.h>
#include <aws/grafana/model/DeleteWorkspaceApiKeyRequest.h>
#include <aws/grafana/model/DeleteWorkspaceApiKeyResult.h>
#include <aws/grafana/model/DeleteWorkspaceRequest.h>
#include <aws/grafana/model/DeleteWorkspaceResult.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountRequest.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountResult.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountTokenRequest.h>
#include <aws/grafana/model/DeleteWorkspaceServiceAccountTokenResult.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/DescribeWorkspaceAuthenticationResult.h>
#include <aws/grafana/model/DescribeWorkspaceConfigurationRequest.h>
#include <aws/grafana/model/DescribeWorkspaceConfigurationResult.h>
#include <aws/grafana/model/DescribeWorkspaceRequest.h>
#include <aws/grafana/model/DescribeWorkspaceResult.h>
#include <aws/grafana/model/DisassociateLicenseRequest.h>
#include <aws/grafana/model/DisassociateLicenseResult.h>
#include <aws/grafana/model/IdpMetadata.h>
#include <aws/grafana/model/InternalServerException.h>
#include <aws/grafana/model/LicenseType.h>
#include <aws/grafana/model/ListPermissionsRequest.h>
#include <aws/grafana/model/ListPermissionsResult.h>
#include <aws/grafana/model/ListTagsForResourceRequest.h>
#include <aws/grafana/model/ListTagsForResourceResult.h>
#include <aws/grafana/model/ListVersionsRequest.h>
#include <aws/grafana/model/ListVersionsResult.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountTokensResult.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsRequest.h>
#include <aws/grafana/model/ListWorkspaceServiceAccountsResult.h>
#include <aws/grafana/model/ListWorkspacesRequest.h>
#include <aws/grafana/model/ListWorkspacesResult.h>
#include <aws/grafana/model/NetworkAccessConfiguration.h>
#include <aws/grafana/model/NotificationDestinationType.h>
#include <aws/grafana/model/PermissionEntry.h>
#include <aws/grafana/model/PermissionType.h>
#include <aws/grafana/model/ResourceNotFoundException.h>
#include <aws/grafana/model/Role.h>
#include <aws/grafana/model/RoleValues.h>
#include <aws/grafana/model/SamlAuthentication.h>
#include <aws/grafana/model/SamlConfiguration.h>
#include <aws/grafana/model/SamlConfigurationStatus.h>
#include <aws/grafana/model/ServiceAccountSummary.h>
#include <aws/grafana/model/ServiceAccountTokenSummary.h>
#include <aws/grafana/model/ServiceAccountTokenSummaryWithKey.h>
#include <aws/grafana/model/ServiceQuotaExceededException.h>
#include <aws/grafana/model/TagResourceRequest.h>
#include <aws/grafana/model/TagResourceResult.h>
#include <aws/grafana/model/ThrottlingException.h>
#include <aws/grafana/model/UntagResourceRequest.h>
#include <aws/grafana/model/UntagResourceResult.h>
#include <aws/grafana/model/UpdateAction.h>
#include <aws/grafana/model/UpdateError.h>
#include <aws/grafana/model/UpdateInstruction.h>
#include <aws/grafana/model/UpdatePermissionsRequest.h>
#include <aws/grafana/model/UpdatePermissionsResult.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationRequest.h>
#include <aws/grafana/model/UpdateWorkspaceAuthenticationResult.h>
#include <aws/grafana/model/UpdateWorkspaceConfigurationRequest.h>
#include <aws/grafana/model/UpdateWorkspaceConfigurationResult.h>
#include <aws/grafana/model/UpdateWorkspaceRequest.h>
#include <aws/grafana/model/UpdateWorkspaceResult.h>
#include <aws/grafana/model/User.h>
#include <aws/grafana/model/UserType.h>
#include <aws/grafana/model/ValidationException.h>
#include <aws/grafana/model/ValidationExceptionField.h>
#include <aws/grafana/model/ValidationExceptionReason.h>
#include <aws/grafana/model/VpcConfiguration.h>
#include <aws/grafana/model/WorkspaceDescription.h>
#include <aws/grafana/model/WorkspaceStatus.h>
#include <aws/grafana/model/WorkspaceSummary.h>

using ManagedGrafanaIncludeTest = ::testing::Test;

TEST_F(ManagedGrafanaIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ManagedGrafana::ManagedGrafanaClient>("ManagedGrafanaIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
