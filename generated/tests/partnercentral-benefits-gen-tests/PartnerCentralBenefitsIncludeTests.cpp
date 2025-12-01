/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/partnercentral-benefits/PartnerCentralBenefitsClient.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointProvider.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsEndpointRules.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrorMarshaller.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsErrors.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsRequest.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefitsServiceClientModel.h>
#include <aws/partnercentral-benefits/PartnerCentralBenefits_EXPORTS.h>
#include <aws/partnercentral-benefits/model/AccessDetails.h>
#include <aws/partnercentral-benefits/model/AmendBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/AmendBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/Amendment.h>
#include <aws/partnercentral-benefits/model/AssociateBenefitApplicationResourceRequest.h>
#include <aws/partnercentral-benefits/model/AssociateBenefitApplicationResourceResult.h>
#include <aws/partnercentral-benefits/model/AssociatedResource.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationStatus.h>
#include <aws/partnercentral-benefits/model/BenefitAllocationSummary.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationStatus.h>
#include <aws/partnercentral-benefits/model/BenefitApplicationSummary.h>
#include <aws/partnercentral-benefits/model/BenefitStatus.h>
#include <aws/partnercentral-benefits/model/BenefitSummary.h>
#include <aws/partnercentral-benefits/model/CancelBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/CancelBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/ConsumableDetails.h>
#include <aws/partnercentral-benefits/model/Contact.h>
#include <aws/partnercentral-benefits/model/CreateBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/CreateBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/CreditCode.h>
#include <aws/partnercentral-benefits/model/CreditDetails.h>
#include <aws/partnercentral-benefits/model/CurrencyCode.h>
#include <aws/partnercentral-benefits/model/DisassociateBenefitApplicationResourceRequest.h>
#include <aws/partnercentral-benefits/model/DisassociateBenefitApplicationResourceResult.h>
#include <aws/partnercentral-benefits/model/DisbursementDetails.h>
#include <aws/partnercentral-benefits/model/FileDetail.h>
#include <aws/partnercentral-benefits/model/FileInput.h>
#include <aws/partnercentral-benefits/model/FileType.h>
#include <aws/partnercentral-benefits/model/FulfillmentDetails.h>
#include <aws/partnercentral-benefits/model/FulfillmentType.h>
#include <aws/partnercentral-benefits/model/GetBenefitAllocationRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitAllocationResult.h>
#include <aws/partnercentral-benefits/model/GetBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/GetBenefitRequest.h>
#include <aws/partnercentral-benefits/model/GetBenefitResult.h>
#include <aws/partnercentral-benefits/model/IssuanceDetail.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitAllocationsResult.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitApplicationsResult.h>
#include <aws/partnercentral-benefits/model/ListBenefitsRequest.h>
#include <aws/partnercentral-benefits/model/ListBenefitsResult.h>
#include <aws/partnercentral-benefits/model/ListTagsForResourceRequest.h>
#include <aws/partnercentral-benefits/model/ListTagsForResourceResult.h>
#include <aws/partnercentral-benefits/model/MonetaryValue.h>
#include <aws/partnercentral-benefits/model/RecallBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/RecallBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/ResourceType.h>
#include <aws/partnercentral-benefits/model/ServiceQuotaExceededException.h>
#include <aws/partnercentral-benefits/model/SubmitBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/SubmitBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/Tag.h>
#include <aws/partnercentral-benefits/model/TagResourceRequest.h>
#include <aws/partnercentral-benefits/model/TagResourceResult.h>
#include <aws/partnercentral-benefits/model/UntagResourceRequest.h>
#include <aws/partnercentral-benefits/model/UntagResourceResult.h>
#include <aws/partnercentral-benefits/model/UpdateBenefitApplicationRequest.h>
#include <aws/partnercentral-benefits/model/UpdateBenefitApplicationResult.h>
#include <aws/partnercentral-benefits/model/ValidationException.h>
#include <aws/partnercentral-benefits/model/ValidationExceptionErrorCode.h>
#include <aws/partnercentral-benefits/model/ValidationExceptionField.h>
#include <aws/partnercentral-benefits/model/ValidationExceptionReason.h>

using PartnerCentralBenefitsIncludeTest = ::testing::Test;

TEST_F(PartnerCentralBenefitsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::PartnerCentralBenefits::PartnerCentralBenefitsClient>("PartnerCentralBenefitsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
