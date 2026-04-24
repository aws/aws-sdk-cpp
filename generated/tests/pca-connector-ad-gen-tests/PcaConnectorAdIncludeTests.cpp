/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/pca-connector-ad/PcaConnectorAdClient.h>
#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <aws/pca-connector-ad/PcaConnectorAdEndpointRules.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrorMarshaller.h>
#include <aws/pca-connector-ad/PcaConnectorAdErrors.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/pca-connector-ad/PcaConnectorAdServiceClientModel.h>
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/AccessControlEntry.h>
#include <aws/pca-connector-ad/model/AccessControlEntrySummary.h>
#include <aws/pca-connector-ad/model/AccessRight.h>
#include <aws/pca-connector-ad/model/AccessRights.h>
#include <aws/pca-connector-ad/model/ApplicationPolicies.h>
#include <aws/pca-connector-ad/model/ApplicationPolicy.h>
#include <aws/pca-connector-ad/model/ApplicationPolicyType.h>
#include <aws/pca-connector-ad/model/CertificateValidity.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV2.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV3.h>
#include <aws/pca-connector-ad/model/ClientCompatibilityV4.h>
#include <aws/pca-connector-ad/model/ConflictException.h>
#include <aws/pca-connector-ad/model/Connector.h>
#include <aws/pca-connector-ad/model/ConnectorStatus.h>
#include <aws/pca-connector-ad/model/ConnectorStatusReason.h>
#include <aws/pca-connector-ad/model/ConnectorSummary.h>
#include <aws/pca-connector-ad/model/CreateConnectorRequest.h>
#include <aws/pca-connector-ad/model/CreateConnectorResult.h>
#include <aws/pca-connector-ad/model/CreateDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/CreateDirectoryRegistrationResult.h>
#include <aws/pca-connector-ad/model/CreateServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateRequest.h>
#include <aws/pca-connector-ad/model/CreateTemplateResult.h>
#include <aws/pca-connector-ad/model/DeleteConnectorRequest.h>
#include <aws/pca-connector-ad/model/DeleteDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/DeleteServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/DeleteTemplateRequest.h>
#include <aws/pca-connector-ad/model/DirectoryRegistration.h>
#include <aws/pca-connector-ad/model/DirectoryRegistrationStatus.h>
#include <aws/pca-connector-ad/model/DirectoryRegistrationStatusReason.h>
#include <aws/pca-connector-ad/model/DirectoryRegistrationSummary.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV2.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV3.h>
#include <aws/pca-connector-ad/model/EnrollmentFlagsV4.h>
#include <aws/pca-connector-ad/model/ExtensionsV2.h>
#include <aws/pca-connector-ad/model/ExtensionsV3.h>
#include <aws/pca-connector-ad/model/ExtensionsV4.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV2.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV3.h>
#include <aws/pca-connector-ad/model/GeneralFlagsV4.h>
#include <aws/pca-connector-ad/model/GetConnectorRequest.h>
#include <aws/pca-connector-ad/model/GetConnectorResult.h>
#include <aws/pca-connector-ad/model/GetDirectoryRegistrationRequest.h>
#include <aws/pca-connector-ad/model/GetDirectoryRegistrationResult.h>
#include <aws/pca-connector-ad/model/GetServicePrincipalNameRequest.h>
#include <aws/pca-connector-ad/model/GetServicePrincipalNameResult.h>
#include <aws/pca-connector-ad/model/GetTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateGroupAccessControlEntryResult.h>
#include <aws/pca-connector-ad/model/GetTemplateRequest.h>
#include <aws/pca-connector-ad/model/GetTemplateResult.h>
#include <aws/pca-connector-ad/model/HashAlgorithm.h>
#include <aws/pca-connector-ad/model/IpAddressType.h>
#include <aws/pca-connector-ad/model/KeySpec.h>
#include <aws/pca-connector-ad/model/KeyUsage.h>
#include <aws/pca-connector-ad/model/KeyUsageFlags.h>
#include <aws/pca-connector-ad/model/KeyUsageProperty.h>
#include <aws/pca-connector-ad/model/KeyUsagePropertyFlags.h>
#include <aws/pca-connector-ad/model/KeyUsagePropertyType.h>
#include <aws/pca-connector-ad/model/ListConnectorsRequest.h>
#include <aws/pca-connector-ad/model/ListConnectorsResult.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsRequest.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsResult.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesRequest.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesResult.h>
#include <aws/pca-connector-ad/model/ListTagsForResourceRequest.h>
#include <aws/pca-connector-ad/model/ListTagsForResourceResult.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesRequest.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesResult.h>
#include <aws/pca-connector-ad/model/ListTemplatesRequest.h>
#include <aws/pca-connector-ad/model/ListTemplatesResult.h>
#include <aws/pca-connector-ad/model/PrivateKeyAlgorithm.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV2.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV3.h>
#include <aws/pca-connector-ad/model/PrivateKeyAttributesV4.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV2.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV3.h>
#include <aws/pca-connector-ad/model/PrivateKeyFlagsV4.h>
#include <aws/pca-connector-ad/model/ResourceNotFoundException.h>
#include <aws/pca-connector-ad/model/ServicePrincipalName.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameStatus.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameStatusReason.h>
#include <aws/pca-connector-ad/model/ServicePrincipalNameSummary.h>
#include <aws/pca-connector-ad/model/ServiceQuotaExceededException.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV2.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV3.h>
#include <aws/pca-connector-ad/model/SubjectNameFlagsV4.h>
#include <aws/pca-connector-ad/model/TagResourceRequest.h>
#include <aws/pca-connector-ad/model/Template.h>
#include <aws/pca-connector-ad/model/TemplateDefinition.h>
#include <aws/pca-connector-ad/model/TemplateRevision.h>
#include <aws/pca-connector-ad/model/TemplateStatus.h>
#include <aws/pca-connector-ad/model/TemplateSummary.h>
#include <aws/pca-connector-ad/model/TemplateV2.h>
#include <aws/pca-connector-ad/model/TemplateV3.h>
#include <aws/pca-connector-ad/model/TemplateV4.h>
#include <aws/pca-connector-ad/model/ThrottlingException.h>
#include <aws/pca-connector-ad/model/UntagResourceRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateGroupAccessControlEntryRequest.h>
#include <aws/pca-connector-ad/model/UpdateTemplateRequest.h>
#include <aws/pca-connector-ad/model/ValidationException.h>
#include <aws/pca-connector-ad/model/ValidationExceptionReason.h>
#include <aws/pca-connector-ad/model/ValidityPeriod.h>
#include <aws/pca-connector-ad/model/ValidityPeriodType.h>
#include <aws/pca-connector-ad/model/VpcInformation.h>

using PcaConnectorAdIncludeTest = ::testing::Test;

TEST_F(PcaConnectorAdIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PcaConnectorAd::PcaConnectorAdClient>("PcaConnectorAdIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
