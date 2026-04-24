/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/acm-pca/ACMPCAClient.h>
#include <aws/acm-pca/ACMPCAEndpointProvider.h>
#include <aws/acm-pca/ACMPCAEndpointRules.h>
#include <aws/acm-pca/ACMPCAErrorMarshaller.h>
#include <aws/acm-pca/ACMPCAErrors.h>
#include <aws/acm-pca/ACMPCARequest.h>
#include <aws/acm-pca/ACMPCAServiceClientModel.h>
#include <aws/acm-pca/ACMPCA_EXPORTS.h>
#include <aws/acm-pca/model/ASN1Subject.h>
#include <aws/acm-pca/model/AccessDescription.h>
#include <aws/acm-pca/model/AccessMethod.h>
#include <aws/acm-pca/model/AccessMethodType.h>
#include <aws/acm-pca/model/ActionType.h>
#include <aws/acm-pca/model/ApiPassthrough.h>
#include <aws/acm-pca/model/AuditReportResponseFormat.h>
#include <aws/acm-pca/model/AuditReportStatus.h>
#include <aws/acm-pca/model/CertificateAuthority.h>
#include <aws/acm-pca/model/CertificateAuthorityConfiguration.h>
#include <aws/acm-pca/model/CertificateAuthorityStatus.h>
#include <aws/acm-pca/model/CertificateAuthorityType.h>
#include <aws/acm-pca/model/CertificateAuthorityUsageMode.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/CreateCertificateAuthorityResult.h>
#include <aws/acm-pca/model/CreatePermissionRequest.h>
#include <aws/acm-pca/model/CrlConfiguration.h>
#include <aws/acm-pca/model/CrlDistributionPointExtensionConfiguration.h>
#include <aws/acm-pca/model/CrlType.h>
#include <aws/acm-pca/model/CsrExtensions.h>
#include <aws/acm-pca/model/CustomAttribute.h>
#include <aws/acm-pca/model/CustomExtension.h>
#include <aws/acm-pca/model/DeleteCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DeletePermissionRequest.h>
#include <aws/acm-pca/model/DeletePolicyRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityAuditReportResult.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/DescribeCertificateAuthorityResult.h>
#include <aws/acm-pca/model/EdiPartyName.h>
#include <aws/acm-pca/model/ExtendedKeyUsage.h>
#include <aws/acm-pca/model/ExtendedKeyUsageType.h>
#include <aws/acm-pca/model/Extensions.h>
#include <aws/acm-pca/model/FailureReason.h>
#include <aws/acm-pca/model/GeneralName.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCertificateResult.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrRequest.h>
#include <aws/acm-pca/model/GetCertificateAuthorityCsrResult.h>
#include <aws/acm-pca/model/GetCertificateRequest.h>
#include <aws/acm-pca/model/GetCertificateResult.h>
#include <aws/acm-pca/model/GetPolicyRequest.h>
#include <aws/acm-pca/model/GetPolicyResult.h>
#include <aws/acm-pca/model/ImportCertificateAuthorityCertificateRequest.h>
#include <aws/acm-pca/model/IssueCertificateRequest.h>
#include <aws/acm-pca/model/IssueCertificateResult.h>
#include <aws/acm-pca/model/KeyAlgorithm.h>
#include <aws/acm-pca/model/KeyStorageSecurityStandard.h>
#include <aws/acm-pca/model/KeyUsage.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesRequest.h>
#include <aws/acm-pca/model/ListCertificateAuthoritiesResult.h>
#include <aws/acm-pca/model/ListPermissionsRequest.h>
#include <aws/acm-pca/model/ListPermissionsResult.h>
#include <aws/acm-pca/model/ListTagsRequest.h>
#include <aws/acm-pca/model/ListTagsResult.h>
#include <aws/acm-pca/model/OcspConfiguration.h>
#include <aws/acm-pca/model/OtherName.h>
#include <aws/acm-pca/model/Permission.h>
#include <aws/acm-pca/model/PolicyInformation.h>
#include <aws/acm-pca/model/PolicyQualifierId.h>
#include <aws/acm-pca/model/PolicyQualifierInfo.h>
#include <aws/acm-pca/model/PutPolicyRequest.h>
#include <aws/acm-pca/model/Qualifier.h>
#include <aws/acm-pca/model/ResourceOwner.h>
#include <aws/acm-pca/model/RestoreCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/RevocationConfiguration.h>
#include <aws/acm-pca/model/RevocationReason.h>
#include <aws/acm-pca/model/RevokeCertificateRequest.h>
#include <aws/acm-pca/model/S3ObjectAcl.h>
#include <aws/acm-pca/model/SigningAlgorithm.h>
#include <aws/acm-pca/model/Tag.h>
#include <aws/acm-pca/model/TagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UntagCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/UpdateCertificateAuthorityRequest.h>
#include <aws/acm-pca/model/Validity.h>
#include <aws/acm-pca/model/ValidityPeriodType.h>

using ACMPCAIncludeTest = ::testing::Test;

TEST_F(ACMPCAIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ACMPCA::ACMPCAClient>("ACMPCAIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
