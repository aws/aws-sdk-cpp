/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/marketplace-agreement/AgreementServiceClient.h>
#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <aws/marketplace-agreement/AgreementServiceEndpointRules.h>
#include <aws/marketplace-agreement/AgreementServiceErrorMarshaller.h>
#include <aws/marketplace-agreement/AgreementServiceErrors.h>
#include <aws/marketplace-agreement/AgreementServiceRequest.h>
#include <aws/marketplace-agreement/AgreementServiceServiceClientModel.h>
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/marketplace-agreement/model/AcceptedTerm.h>
#include <aws/marketplace-agreement/model/Acceptor.h>
#include <aws/marketplace-agreement/model/AccessDeniedException.h>
#include <aws/marketplace-agreement/model/AgreementStatus.h>
#include <aws/marketplace-agreement/model/AgreementViewSummary.h>
#include <aws/marketplace-agreement/model/ByolPricingTerm.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTerm.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontPricingTermConfiguration.h>
#include <aws/marketplace-agreement/model/ConfigurableUpfrontRateCardItem.h>
#include <aws/marketplace-agreement/model/Constraints.h>
#include <aws/marketplace-agreement/model/DescribeAgreementRequest.h>
#include <aws/marketplace-agreement/model/DescribeAgreementResult.h>
#include <aws/marketplace-agreement/model/Dimension.h>
#include <aws/marketplace-agreement/model/DocumentItem.h>
#include <aws/marketplace-agreement/model/EstimatedCharges.h>
#include <aws/marketplace-agreement/model/Filter.h>
#include <aws/marketplace-agreement/model/FixedUpfrontPricingTerm.h>
#include <aws/marketplace-agreement/model/FreeTrialPricingTerm.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsRequest.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsResult.h>
#include <aws/marketplace-agreement/model/GrantItem.h>
#include <aws/marketplace-agreement/model/InternalServerException.h>
#include <aws/marketplace-agreement/model/LegalTerm.h>
#include <aws/marketplace-agreement/model/PaymentScheduleTerm.h>
#include <aws/marketplace-agreement/model/ProposalSummary.h>
#include <aws/marketplace-agreement/model/Proposer.h>
#include <aws/marketplace-agreement/model/RateCardItem.h>
#include <aws/marketplace-agreement/model/RecurringPaymentTerm.h>
#include <aws/marketplace-agreement/model/RenewalTerm.h>
#include <aws/marketplace-agreement/model/RenewalTermConfiguration.h>
#include <aws/marketplace-agreement/model/Resource.h>
#include <aws/marketplace-agreement/model/ResourceNotFoundException.h>
#include <aws/marketplace-agreement/model/ResourceType.h>
#include <aws/marketplace-agreement/model/ScheduleItem.h>
#include <aws/marketplace-agreement/model/SearchAgreementsRequest.h>
#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>
#include <aws/marketplace-agreement/model/Selector.h>
#include <aws/marketplace-agreement/model/Sort.h>
#include <aws/marketplace-agreement/model/SortOrder.h>
#include <aws/marketplace-agreement/model/SupportTerm.h>
#include <aws/marketplace-agreement/model/ThrottlingException.h>
#include <aws/marketplace-agreement/model/UsageBasedPricingTerm.h>
#include <aws/marketplace-agreement/model/UsageBasedRateCardItem.h>
#include <aws/marketplace-agreement/model/ValidationException.h>
#include <aws/marketplace-agreement/model/ValidationExceptionField.h>
#include <aws/marketplace-agreement/model/ValidationExceptionReason.h>
#include <aws/marketplace-agreement/model/ValidityTerm.h>

using AgreementServiceIncludeTest = ::testing::Test;

TEST_F(AgreementServiceIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::AgreementService::AgreementServiceClient>("AgreementServiceIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
