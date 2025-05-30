/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/codeartifact/CodeArtifactClient.h>
#include <aws/codeartifact/CodeArtifactEndpointProvider.h>
#include <aws/codeartifact/CodeArtifactEndpointRules.h>
#include <aws/codeartifact/CodeArtifactErrorMarshaller.h>
#include <aws/codeartifact/CodeArtifactErrors.h>
#include <aws/codeartifact/CodeArtifactRequest.h>
#include <aws/codeartifact/CodeArtifactServiceClientModel.h>
#include <aws/codeartifact/CodeArtifact_EXPORTS.h>
#include <aws/codeartifact/model/AllowPublish.h>
#include <aws/codeartifact/model/AllowUpstream.h>
#include <aws/codeartifact/model/AssetSummary.h>
#include <aws/codeartifact/model/AssociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/AssociateExternalConnectionResult.h>
#include <aws/codeartifact/model/AssociatedPackage.h>
#include <aws/codeartifact/model/ConflictException.h>
#include <aws/codeartifact/model/CopyPackageVersionsRequest.h>
#include <aws/codeartifact/model/CopyPackageVersionsResult.h>
#include <aws/codeartifact/model/CreateDomainRequest.h>
#include <aws/codeartifact/model/CreateDomainResult.h>
#include <aws/codeartifact/model/CreatePackageGroupRequest.h>
#include <aws/codeartifact/model/CreatePackageGroupResult.h>
#include <aws/codeartifact/model/CreateRepositoryRequest.h>
#include <aws/codeartifact/model/CreateRepositoryResult.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DeleteDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DeleteDomainRequest.h>
#include <aws/codeartifact/model/DeleteDomainResult.h>
#include <aws/codeartifact/model/DeletePackageGroupRequest.h>
#include <aws/codeartifact/model/DeletePackageGroupResult.h>
#include <aws/codeartifact/model/DeletePackageRequest.h>
#include <aws/codeartifact/model/DeletePackageResult.h>
#include <aws/codeartifact/model/DeletePackageVersionsRequest.h>
#include <aws/codeartifact/model/DeletePackageVersionsResult.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/DeleteRepositoryRequest.h>
#include <aws/codeartifact/model/DeleteRepositoryResult.h>
#include <aws/codeartifact/model/DescribeDomainRequest.h>
#include <aws/codeartifact/model/DescribeDomainResult.h>
#include <aws/codeartifact/model/DescribePackageGroupRequest.h>
#include <aws/codeartifact/model/DescribePackageGroupResult.h>
#include <aws/codeartifact/model/DescribePackageRequest.h>
#include <aws/codeartifact/model/DescribePackageResult.h>
#include <aws/codeartifact/model/DescribePackageVersionRequest.h>
#include <aws/codeartifact/model/DescribePackageVersionResult.h>
#include <aws/codeartifact/model/DescribeRepositoryRequest.h>
#include <aws/codeartifact/model/DescribeRepositoryResult.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionRequest.h>
#include <aws/codeartifact/model/DisassociateExternalConnectionResult.h>
#include <aws/codeartifact/model/DisposePackageVersionsRequest.h>
#include <aws/codeartifact/model/DisposePackageVersionsResult.h>
#include <aws/codeartifact/model/DomainDescription.h>
#include <aws/codeartifact/model/DomainEntryPoint.h>
#include <aws/codeartifact/model/DomainStatus.h>
#include <aws/codeartifact/model/DomainSummary.h>
#include <aws/codeartifact/model/EndpointType.h>
#include <aws/codeartifact/model/ExternalConnectionStatus.h>
#include <aws/codeartifact/model/GetAssociatedPackageGroupRequest.h>
#include <aws/codeartifact/model/GetAssociatedPackageGroupResult.h>
#include <aws/codeartifact/model/GetAuthorizationTokenRequest.h>
#include <aws/codeartifact/model/GetAuthorizationTokenResult.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/GetDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/GetPackageVersionAssetRequest.h>
#include <aws/codeartifact/model/GetPackageVersionAssetResult.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeRequest.h>
#include <aws/codeartifact/model/GetPackageVersionReadmeResult.h>
#include <aws/codeartifact/model/GetRepositoryEndpointRequest.h>
#include <aws/codeartifact/model/GetRepositoryEndpointResult.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/GetRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/HashAlgorithm.h>
#include <aws/codeartifact/model/LicenseInfo.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupRequest.h>
#include <aws/codeartifact/model/ListAllowedRepositoriesForGroupResult.h>
#include <aws/codeartifact/model/ListAssociatedPackagesRequest.h>
#include <aws/codeartifact/model/ListAssociatedPackagesResult.h>
#include <aws/codeartifact/model/ListDomainsRequest.h>
#include <aws/codeartifact/model/ListDomainsResult.h>
#include <aws/codeartifact/model/ListPackageGroupsRequest.h>
#include <aws/codeartifact/model/ListPackageGroupsResult.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionAssetsResult.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesRequest.h>
#include <aws/codeartifact/model/ListPackageVersionDependenciesResult.h>
#include <aws/codeartifact/model/ListPackageVersionsRequest.h>
#include <aws/codeartifact/model/ListPackageVersionsResult.h>
#include <aws/codeartifact/model/ListPackagesRequest.h>
#include <aws/codeartifact/model/ListPackagesResult.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainRequest.h>
#include <aws/codeartifact/model/ListRepositoriesInDomainResult.h>
#include <aws/codeartifact/model/ListRepositoriesRequest.h>
#include <aws/codeartifact/model/ListRepositoriesResult.h>
#include <aws/codeartifact/model/ListSubPackageGroupsRequest.h>
#include <aws/codeartifact/model/ListSubPackageGroupsResult.h>
#include <aws/codeartifact/model/ListTagsForResourceRequest.h>
#include <aws/codeartifact/model/ListTagsForResourceResult.h>
#include <aws/codeartifact/model/PackageDependency.h>
#include <aws/codeartifact/model/PackageDescription.h>
#include <aws/codeartifact/model/PackageFormat.h>
#include <aws/codeartifact/model/PackageGroupAllowedRepository.h>
#include <aws/codeartifact/model/PackageGroupAllowedRepositoryUpdateType.h>
#include <aws/codeartifact/model/PackageGroupAssociationType.h>
#include <aws/codeartifact/model/PackageGroupDescription.h>
#include <aws/codeartifact/model/PackageGroupOriginConfiguration.h>
#include <aws/codeartifact/model/PackageGroupOriginRestriction.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionMode.h>
#include <aws/codeartifact/model/PackageGroupOriginRestrictionType.h>
#include <aws/codeartifact/model/PackageGroupReference.h>
#include <aws/codeartifact/model/PackageGroupSummary.h>
#include <aws/codeartifact/model/PackageOriginConfiguration.h>
#include <aws/codeartifact/model/PackageOriginRestrictions.h>
#include <aws/codeartifact/model/PackageSummary.h>
#include <aws/codeartifact/model/PackageVersionDescription.h>
#include <aws/codeartifact/model/PackageVersionError.h>
#include <aws/codeartifact/model/PackageVersionErrorCode.h>
#include <aws/codeartifact/model/PackageVersionOrigin.h>
#include <aws/codeartifact/model/PackageVersionOriginType.h>
#include <aws/codeartifact/model/PackageVersionSortType.h>
#include <aws/codeartifact/model/PackageVersionStatus.h>
#include <aws/codeartifact/model/PackageVersionSummary.h>
#include <aws/codeartifact/model/PublishPackageVersionRequest.h>
#include <aws/codeartifact/model/PublishPackageVersionResult.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/PutDomainPermissionsPolicyResult.h>
#include <aws/codeartifact/model/PutPackageOriginConfigurationRequest.h>
#include <aws/codeartifact/model/PutPackageOriginConfigurationResult.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyRequest.h>
#include <aws/codeartifact/model/PutRepositoryPermissionsPolicyResult.h>
#include <aws/codeartifact/model/RepositoryDescription.h>
#include <aws/codeartifact/model/RepositoryExternalConnectionInfo.h>
#include <aws/codeartifact/model/RepositorySummary.h>
#include <aws/codeartifact/model/ResourceNotFoundException.h>
#include <aws/codeartifact/model/ResourcePolicy.h>
#include <aws/codeartifact/model/ResourceType.h>
#include <aws/codeartifact/model/ServiceQuotaExceededException.h>
#include <aws/codeartifact/model/SuccessfulPackageVersionInfo.h>
#include <aws/codeartifact/model/Tag.h>
#include <aws/codeartifact/model/TagResourceRequest.h>
#include <aws/codeartifact/model/TagResourceResult.h>
#include <aws/codeartifact/model/ThrottlingException.h>
#include <aws/codeartifact/model/UntagResourceRequest.h>
#include <aws/codeartifact/model/UntagResourceResult.h>
#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationRequest.h>
#include <aws/codeartifact/model/UpdatePackageGroupOriginConfigurationResult.h>
#include <aws/codeartifact/model/UpdatePackageGroupRequest.h>
#include <aws/codeartifact/model/UpdatePackageGroupResult.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusRequest.h>
#include <aws/codeartifact/model/UpdatePackageVersionsStatusResult.h>
#include <aws/codeartifact/model/UpdateRepositoryRequest.h>
#include <aws/codeartifact/model/UpdateRepositoryResult.h>
#include <aws/codeartifact/model/UpstreamRepository.h>
#include <aws/codeartifact/model/UpstreamRepositoryInfo.h>
#include <aws/codeartifact/model/ValidationException.h>
#include <aws/codeartifact/model/ValidationExceptionReason.h>

using CodeArtifactIncludeTest = ::testing::Test;

TEST_F(CodeArtifactIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CodeArtifact::CodeArtifactClient>("CodeArtifactIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
