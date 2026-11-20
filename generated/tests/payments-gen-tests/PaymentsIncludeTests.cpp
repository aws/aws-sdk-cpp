/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/payments/PaymentsClient.h>
#include <aws/payments/PaymentsClientPagination.h>
#include <aws/payments/PaymentsEndpointProvider.h>
#include <aws/payments/PaymentsErrorMarshaller.h>
#include <aws/payments/PaymentsErrors.h>
#include <aws/payments/PaymentsPaginationBase.h>
#include <aws/payments/PaymentsRequest.h>
#include <aws/payments/PaymentsServiceClientModel.h>
#include <aws/payments/PaymentsWaiter.h>
#include <aws/payments/Payments_EXPORTS.h>
#include <aws/payments/internal/PaymentsEndpointRules.h>
#include <aws/payments/model/AccessDeniedException.h>
#include <aws/payments/model/AccessDeniedExceptionReason.h>
#include <aws/payments/model/AccountBalance.h>
#include <aws/payments/model/BalanceType.h>
#include <aws/payments/model/Balances.h>
#include <aws/payments/model/BankAccountType.h>
#include <aws/payments/model/BatchErrorCode.h>
#include <aws/payments/model/BatchGetFinancialRecordRequest.h>
#include <aws/payments/model/BatchGetFinancialRecordResult.h>
#include <aws/payments/model/BillingPeriod.h>
#include <aws/payments/model/BusinessUnit.h>
#include <aws/payments/model/Card.h>
#include <aws/payments/model/CardBrand.h>
#include <aws/payments/model/CardType.h>
#include <aws/payments/model/CnBankRedirect.h>
#include <aws/payments/model/CreditMemoDetails.h>
#include <aws/payments/model/CurrencyAmount.h>
#include <aws/payments/model/DueStatus.h>
#include <aws/payments/model/FinancialRecord.h>
#include <aws/payments/model/FinancialRecordDetails.h>
#include <aws/payments/model/FinancialRecordError.h>
#include <aws/payments/model/FinancialRecordKey.h>
#include <aws/payments/model/FinancialRecordSortField.h>
#include <aws/payments/model/FinancialRecordStatus.h>
#include <aws/payments/model/FinancialRecordSummary.h>
#include <aws/payments/model/FinancialRecordType.h>
#include <aws/payments/model/GetAccountBalancePaginationTraits.h>
#include <aws/payments/model/GetAccountBalanceRequest.h>
#include <aws/payments/model/GetAccountBalanceResult.h>
#include <aws/payments/model/GetFinancialRecordRequest.h>
#include <aws/payments/model/GetFinancialRecordResult.h>
#include <aws/payments/model/GetPaymentInstrumentRequest.h>
#include <aws/payments/model/GetPaymentInstrumentResult.h>
#include <aws/payments/model/InNetBanking.h>
#include <aws/payments/model/InternalServerException.h>
#include <aws/payments/model/InvoiceDetails.h>
#include <aws/payments/model/InvoiceFrequency.h>
#include <aws/payments/model/LineOfBusiness.h>
#include <aws/payments/model/ListFinancialRecordsPaginationTraits.h>
#include <aws/payments/model/ListFinancialRecordsRequest.h>
#include <aws/payments/model/ListFinancialRecordsResult.h>
#include <aws/payments/model/ListPaymentInstrumentsPaginationTraits.h>
#include <aws/payments/model/ListPaymentInstrumentsRequest.h>
#include <aws/payments/model/ListPaymentInstrumentsResult.h>
#include <aws/payments/model/PaymentInstrument.h>
#include <aws/payments/model/PaymentInstrumentDetails.h>
#include <aws/payments/model/PaymentInstrumentStatus.h>
#include <aws/payments/model/PaymentInstrumentSummary.h>
#include <aws/payments/model/PaymentMethod.h>
#include <aws/payments/model/ResourceNotFoundException.h>
#include <aws/payments/model/SepaBankAccount.h>
#include <aws/payments/model/SettlementStatus.h>
#include <aws/payments/model/SortOrder.h>
#include <aws/payments/model/ThrottlingException.h>
#include <aws/payments/model/UkBacsBankAccount.h>
#include <aws/payments/model/Upi.h>
#include <aws/payments/model/UsAchBankAccount.h>
#include <aws/payments/model/ValidationException.h>
#include <aws/payments/model/ValidationExceptionField.h>
#include <aws/payments/model/ValidationExceptionReason.h>

using PaymentsIncludeTest = ::testing::Test;

TEST_F(PaymentsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Payments::PaymentsClient>("PaymentsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
