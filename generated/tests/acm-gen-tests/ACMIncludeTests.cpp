/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/acm/ACMClient.h>
#include <aws/acm/ACMEndpointProvider.h>
#include <aws/acm/ACMEndpointRules.h>
#include <aws/acm/ACMErrorMarshaller.h>
#include <aws/acm/ACMErrors.h>
#include <aws/acm/ACMRequest.h>
#include <aws/acm/ACMServiceClientModel.h>
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/AddTagsToCertificateRequest.h>
#include <aws/acm/model/CertificateDetail.h>
#include <aws/acm/model/CertificateExport.h>
#include <aws/acm/model/CertificateManagedBy.h>
#include <aws/acm/model/CertificateOptions.h>
#include <aws/acm/model/CertificateStatus.h>
#include <aws/acm/model/CertificateSummary.h>
#include <aws/acm/model/CertificateTransparencyLoggingPreference.h>
#include <aws/acm/model/CertificateType.h>
#include <aws/acm/model/DeleteCertificateRequest.h>
#include <aws/acm/model/DescribeCertificateRequest.h>
#include <aws/acm/model/DescribeCertificateResult.h>
#include <aws/acm/model/DomainStatus.h>
#include <aws/acm/model/DomainValidation.h>
#include <aws/acm/model/DomainValidationOption.h>
#include <aws/acm/model/ExpiryEventsConfiguration.h>
#include <aws/acm/model/ExportCertificateRequest.h>
#include <aws/acm/model/ExportCertificateResult.h>
#include <aws/acm/model/ExtendedKeyUsage.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/acm/model/FailureReason.h>
#include <aws/acm/model/Filters.h>
#include <aws/acm/model/GetAccountConfigurationRequest.h>
#include <aws/acm/model/GetAccountConfigurationResult.h>
#include <aws/acm/model/GetCertificateRequest.h>
#include <aws/acm/model/GetCertificateResult.h>
#include <aws/acm/model/HttpRedirect.h>
#include <aws/acm/model/ImportCertificateRequest.h>
#include <aws/acm/model/ImportCertificateResult.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/KeyUsage.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/ListCertificatesRequest.h>
#include <aws/acm/model/ListCertificatesResult.h>
#include <aws/acm/model/ListTagsForCertificateRequest.h>
#include <aws/acm/model/ListTagsForCertificateResult.h>
#include <aws/acm/model/PutAccountConfigurationRequest.h>
#include <aws/acm/model/RecordType.h>
#include <aws/acm/model/RemoveTagsFromCertificateRequest.h>
#include <aws/acm/model/RenewCertificateRequest.h>
#include <aws/acm/model/RenewalEligibility.h>
#include <aws/acm/model/RenewalStatus.h>
#include <aws/acm/model/RenewalSummary.h>
#include <aws/acm/model/RequestCertificateRequest.h>
#include <aws/acm/model/RequestCertificateResult.h>
#include <aws/acm/model/ResendValidationEmailRequest.h>
#include <aws/acm/model/ResourceRecord.h>
#include <aws/acm/model/RevocationReason.h>
#include <aws/acm/model/RevokeCertificateRequest.h>
#include <aws/acm/model/RevokeCertificateResult.h>
#include <aws/acm/model/SortBy.h>
#include <aws/acm/model/SortOrder.h>
#include <aws/acm/model/Tag.h>
#include <aws/acm/model/UpdateCertificateOptionsRequest.h>
#include <aws/acm/model/ValidationMethod.h>

using ACMIncludeTest = ::testing::Test;

TEST_F(ACMIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::ACM::ACMClient>("ACMIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
