/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/taxsettings/TaxSettingsClient.h>
#include <aws/taxsettings/TaxSettingsEndpointProvider.h>
#include <aws/taxsettings/TaxSettingsEndpointRules.h>
#include <aws/taxsettings/TaxSettingsErrorMarshaller.h>
#include <aws/taxsettings/TaxSettingsErrors.h>
#include <aws/taxsettings/TaxSettingsRequest.h>
#include <aws/taxsettings/TaxSettingsServiceClientModel.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/AccountDetails.h>
#include <aws/taxsettings/model/AccountMetaData.h>
#include <aws/taxsettings/model/AdditionalInfoRequest.h>
#include <aws/taxsettings/model/AdditionalInfoResponse.h>
#include <aws/taxsettings/model/Address.h>
#include <aws/taxsettings/model/AddressRoleType.h>
#include <aws/taxsettings/model/Authority.h>
#include <aws/taxsettings/model/BatchDeleteTaxRegistrationError.h>
#include <aws/taxsettings/model/BatchDeleteTaxRegistrationRequest.h>
#include <aws/taxsettings/model/BatchDeleteTaxRegistrationResult.h>
#include <aws/taxsettings/model/BatchGetTaxExemptionsRequest.h>
#include <aws/taxsettings/model/BatchGetTaxExemptionsResult.h>
#include <aws/taxsettings/model/BatchPutTaxRegistrationError.h>
#include <aws/taxsettings/model/BatchPutTaxRegistrationRequest.h>
#include <aws/taxsettings/model/BatchPutTaxRegistrationResult.h>
#include <aws/taxsettings/model/BrazilAdditionalInfo.h>
#include <aws/taxsettings/model/CanadaAdditionalInfo.h>
#include <aws/taxsettings/model/ConflictException.h>
#include <aws/taxsettings/model/DeleteSupplementalTaxRegistrationRequest.h>
#include <aws/taxsettings/model/DeleteSupplementalTaxRegistrationResult.h>
#include <aws/taxsettings/model/DeleteTaxRegistrationRequest.h>
#include <aws/taxsettings/model/DeleteTaxRegistrationResult.h>
#include <aws/taxsettings/model/DestinationS3Location.h>
#include <aws/taxsettings/model/EgyptAdditionalInfo.h>
#include <aws/taxsettings/model/EntityExemptionAccountStatus.h>
#include <aws/taxsettings/model/EstoniaAdditionalInfo.h>
#include <aws/taxsettings/model/ExemptionCertificate.h>
#include <aws/taxsettings/model/GeorgiaAdditionalInfo.h>
#include <aws/taxsettings/model/GetTaxExemptionTypesRequest.h>
#include <aws/taxsettings/model/GetTaxExemptionTypesResult.h>
#include <aws/taxsettings/model/GetTaxInheritanceRequest.h>
#include <aws/taxsettings/model/GetTaxInheritanceResult.h>
#include <aws/taxsettings/model/GetTaxRegistrationDocumentRequest.h>
#include <aws/taxsettings/model/GetTaxRegistrationDocumentResult.h>
#include <aws/taxsettings/model/GetTaxRegistrationRequest.h>
#include <aws/taxsettings/model/GetTaxRegistrationResult.h>
#include <aws/taxsettings/model/GreeceAdditionalInfo.h>
#include <aws/taxsettings/model/HeritageStatus.h>
#include <aws/taxsettings/model/IndiaAdditionalInfo.h>
#include <aws/taxsettings/model/IndonesiaAdditionalInfo.h>
#include <aws/taxsettings/model/IndonesiaTaxRegistrationNumberType.h>
#include <aws/taxsettings/model/Industries.h>
#include <aws/taxsettings/model/InternalServerException.h>
#include <aws/taxsettings/model/IsraelAdditionalInfo.h>
#include <aws/taxsettings/model/IsraelCustomerType.h>
#include <aws/taxsettings/model/IsraelDealerType.h>
#include <aws/taxsettings/model/ItalyAdditionalInfo.h>
#include <aws/taxsettings/model/Jurisdiction.h>
#include <aws/taxsettings/model/KenyaAdditionalInfo.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsResult.h>
#include <aws/taxsettings/model/ListTaxExemptionsRequest.h>
#include <aws/taxsettings/model/ListTaxExemptionsResult.h>
#include <aws/taxsettings/model/ListTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/ListTaxRegistrationsResult.h>
#include <aws/taxsettings/model/MalaysiaAdditionalInfo.h>
#include <aws/taxsettings/model/MalaysiaServiceTaxCode.h>
#include <aws/taxsettings/model/PersonType.h>
#include <aws/taxsettings/model/PolandAdditionalInfo.h>
#include <aws/taxsettings/model/PutSupplementalTaxRegistrationRequest.h>
#include <aws/taxsettings/model/PutSupplementalTaxRegistrationResult.h>
#include <aws/taxsettings/model/PutTaxExemptionRequest.h>
#include <aws/taxsettings/model/PutTaxExemptionResult.h>
#include <aws/taxsettings/model/PutTaxInheritanceRequest.h>
#include <aws/taxsettings/model/PutTaxInheritanceResult.h>
#include <aws/taxsettings/model/PutTaxRegistrationRequest.h>
#include <aws/taxsettings/model/PutTaxRegistrationResult.h>
#include <aws/taxsettings/model/RegistrationType.h>
#include <aws/taxsettings/model/ResourceNotFoundException.h>
#include <aws/taxsettings/model/RomaniaAdditionalInfo.h>
#include <aws/taxsettings/model/SaudiArabiaAdditionalInfo.h>
#include <aws/taxsettings/model/SaudiArabiaTaxRegistrationNumberType.h>
#include <aws/taxsettings/model/Sector.h>
#include <aws/taxsettings/model/SourceS3Location.h>
#include <aws/taxsettings/model/SouthKoreaAdditionalInfo.h>
#include <aws/taxsettings/model/SpainAdditionalInfo.h>
#include <aws/taxsettings/model/SupplementalTaxRegistration.h>
#include <aws/taxsettings/model/SupplementalTaxRegistrationEntry.h>
#include <aws/taxsettings/model/SupplementalTaxRegistrationType.h>
#include <aws/taxsettings/model/TaxDocumentMetadata.h>
#include <aws/taxsettings/model/TaxExemption.h>
#include <aws/taxsettings/model/TaxExemptionDetails.h>
#include <aws/taxsettings/model/TaxExemptionType.h>
#include <aws/taxsettings/model/TaxInheritanceDetails.h>
#include <aws/taxsettings/model/TaxRegistration.h>
#include <aws/taxsettings/model/TaxRegistrationDocFile.h>
#include <aws/taxsettings/model/TaxRegistrationDocument.h>
#include <aws/taxsettings/model/TaxRegistrationEntry.h>
#include <aws/taxsettings/model/TaxRegistrationNumberType.h>
#include <aws/taxsettings/model/TaxRegistrationStatus.h>
#include <aws/taxsettings/model/TaxRegistrationType.h>
#include <aws/taxsettings/model/TaxRegistrationWithJurisdiction.h>
#include <aws/taxsettings/model/TurkeyAdditionalInfo.h>
#include <aws/taxsettings/model/UkraineAdditionalInfo.h>
#include <aws/taxsettings/model/UkraineTrnType.h>
#include <aws/taxsettings/model/UzbekistanAdditionalInfo.h>
#include <aws/taxsettings/model/UzbekistanTaxRegistrationNumberType.h>
#include <aws/taxsettings/model/ValidationException.h>
#include <aws/taxsettings/model/ValidationExceptionErrorCode.h>
#include <aws/taxsettings/model/ValidationExceptionField.h>
#include <aws/taxsettings/model/VerificationDetails.h>
#include <aws/taxsettings/model/VietnamAdditionalInfo.h>

using TaxSettingsIncludeTest = ::testing::Test;

TEST_F(TaxSettingsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::TaxSettings::TaxSettingsClient>("TaxSettingsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
