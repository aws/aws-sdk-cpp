/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/invoicing/InvoicingClient.h>
#include <aws/invoicing/InvoicingEndpointProvider.h>
#include <aws/invoicing/InvoicingEndpointRules.h>
#include <aws/invoicing/InvoicingErrorMarshaller.h>
#include <aws/invoicing/InvoicingErrors.h>
#include <aws/invoicing/InvoicingRequest.h>
#include <aws/invoicing/InvoicingServiceClientModel.h>
#include <aws/invoicing/Invoicing_EXPORTS.h>
#include <aws/invoicing/model/AccessDeniedException.h>
#include <aws/invoicing/model/AmountBreakdown.h>
#include <aws/invoicing/model/BatchGetInvoiceProfileRequest.h>
#include <aws/invoicing/model/BatchGetInvoiceProfileResult.h>
#include <aws/invoicing/model/BillingPeriod.h>
#include <aws/invoicing/model/CreateInvoiceUnitRequest.h>
#include <aws/invoicing/model/CreateInvoiceUnitResult.h>
#include <aws/invoicing/model/CurrencyExchangeDetails.h>
#include <aws/invoicing/model/DateInterval.h>
#include <aws/invoicing/model/DeleteInvoiceUnitRequest.h>
#include <aws/invoicing/model/DeleteInvoiceUnitResult.h>
#include <aws/invoicing/model/DiscountsBreakdown.h>
#include <aws/invoicing/model/DiscountsBreakdownAmount.h>
#include <aws/invoicing/model/Entity.h>
#include <aws/invoicing/model/FeesBreakdown.h>
#include <aws/invoicing/model/FeesBreakdownAmount.h>
#include <aws/invoicing/model/Filters.h>
#include <aws/invoicing/model/GetInvoiceUnitRequest.h>
#include <aws/invoicing/model/GetInvoiceUnitResult.h>
#include <aws/invoicing/model/InternalServerException.h>
#include <aws/invoicing/model/InvoiceCurrencyAmount.h>
#include <aws/invoicing/model/InvoiceProfile.h>
#include <aws/invoicing/model/InvoiceSummariesFilter.h>
#include <aws/invoicing/model/InvoiceSummariesSelector.h>
#include <aws/invoicing/model/InvoiceSummary.h>
#include <aws/invoicing/model/InvoiceType.h>
#include <aws/invoicing/model/InvoiceUnit.h>
#include <aws/invoicing/model/InvoiceUnitRule.h>
#include <aws/invoicing/model/ListInvoiceSummariesRequest.h>
#include <aws/invoicing/model/ListInvoiceSummariesResourceType.h>
#include <aws/invoicing/model/ListInvoiceSummariesResult.h>
#include <aws/invoicing/model/ListInvoiceUnitsRequest.h>
#include <aws/invoicing/model/ListInvoiceUnitsResult.h>
#include <aws/invoicing/model/ListTagsForResourceRequest.h>
#include <aws/invoicing/model/ListTagsForResourceResult.h>
#include <aws/invoicing/model/ReceiverAddress.h>
#include <aws/invoicing/model/ResourceNotFoundException.h>
#include <aws/invoicing/model/ResourceTag.h>
#include <aws/invoicing/model/TagResourceRequest.h>
#include <aws/invoicing/model/TagResourceResult.h>
#include <aws/invoicing/model/TaxesBreakdown.h>
#include <aws/invoicing/model/TaxesBreakdownAmount.h>
#include <aws/invoicing/model/UntagResourceRequest.h>
#include <aws/invoicing/model/UntagResourceResult.h>
#include <aws/invoicing/model/UpdateInvoiceUnitRequest.h>
#include <aws/invoicing/model/UpdateInvoiceUnitResult.h>
#include <aws/invoicing/model/ValidationException.h>
#include <aws/invoicing/model/ValidationExceptionField.h>
#include <aws/invoicing/model/ValidationExceptionReason.h>

using InvoicingIncludeTest = ::testing::Test;

TEST_F(InvoicingIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Invoicing::InvoicingClient>("InvoicingIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
