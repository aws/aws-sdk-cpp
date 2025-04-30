/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/route53domains/Route53DomainsClient.h>
#include <aws/route53domains/Route53DomainsEndpointProvider.h>
#include <aws/route53domains/Route53DomainsEndpointRules.h>
#include <aws/route53domains/Route53DomainsErrorMarshaller.h>
#include <aws/route53domains/Route53DomainsErrors.h>
#include <aws/route53domains/Route53DomainsRequest.h>
#include <aws/route53domains/Route53DomainsServiceClientModel.h>
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/AcceptDomainTransferFromAnotherAwsAccountResult.h>
#include <aws/route53domains/model/AssociateDelegationSignerToDomainRequest.h>
#include <aws/route53domains/model/AssociateDelegationSignerToDomainResult.h>
#include <aws/route53domains/model/BillingRecord.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/CancelDomainTransferToAnotherAwsAccountResult.h>
#include <aws/route53domains/model/CheckDomainAvailabilityRequest.h>
#include <aws/route53domains/model/CheckDomainAvailabilityResult.h>
#include <aws/route53domains/model/CheckDomainTransferabilityRequest.h>
#include <aws/route53domains/model/CheckDomainTransferabilityResult.h>
#include <aws/route53domains/model/Consent.h>
#include <aws/route53domains/model/ContactDetail.h>
#include <aws/route53domains/model/ContactType.h>
#include <aws/route53domains/model/CountryCode.h>
#include <aws/route53domains/model/DeleteDomainRequest.h>
#include <aws/route53domains/model/DeleteDomainResult.h>
#include <aws/route53domains/model/DeleteTagsForDomainRequest.h>
#include <aws/route53domains/model/DeleteTagsForDomainResult.h>
#include <aws/route53domains/model/DisableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/DisableDomainAutoRenewResult.h>
#include <aws/route53domains/model/DisableDomainTransferLockRequest.h>
#include <aws/route53domains/model/DisableDomainTransferLockResult.h>
#include <aws/route53domains/model/DisassociateDelegationSignerFromDomainRequest.h>
#include <aws/route53domains/model/DisassociateDelegationSignerFromDomainResult.h>
#include <aws/route53domains/model/DnssecKey.h>
#include <aws/route53domains/model/DnssecSigningAttributes.h>
#include <aws/route53domains/model/DomainAvailability.h>
#include <aws/route53domains/model/DomainPrice.h>
#include <aws/route53domains/model/DomainSuggestion.h>
#include <aws/route53domains/model/DomainSummary.h>
#include <aws/route53domains/model/DomainTransferability.h>
#include <aws/route53domains/model/DuplicateRequest.h>
#include <aws/route53domains/model/EnableDomainAutoRenewRequest.h>
#include <aws/route53domains/model/EnableDomainAutoRenewResult.h>
#include <aws/route53domains/model/EnableDomainTransferLockRequest.h>
#include <aws/route53domains/model/EnableDomainTransferLockResult.h>
#include <aws/route53domains/model/ExtraParam.h>
#include <aws/route53domains/model/ExtraParamName.h>
#include <aws/route53domains/model/FilterCondition.h>
#include <aws/route53domains/model/GetContactReachabilityStatusRequest.h>
#include <aws/route53domains/model/GetContactReachabilityStatusResult.h>
#include <aws/route53domains/model/GetDomainDetailRequest.h>
#include <aws/route53domains/model/GetDomainDetailResult.h>
#include <aws/route53domains/model/GetDomainSuggestionsRequest.h>
#include <aws/route53domains/model/GetDomainSuggestionsResult.h>
#include <aws/route53domains/model/GetOperationDetailRequest.h>
#include <aws/route53domains/model/GetOperationDetailResult.h>
#include <aws/route53domains/model/ListDomainsAttributeName.h>
#include <aws/route53domains/model/ListDomainsRequest.h>
#include <aws/route53domains/model/ListDomainsResult.h>
#include <aws/route53domains/model/ListOperationsRequest.h>
#include <aws/route53domains/model/ListOperationsResult.h>
#include <aws/route53domains/model/ListOperationsSortAttributeName.h>
#include <aws/route53domains/model/ListPricesRequest.h>
#include <aws/route53domains/model/ListPricesResult.h>
#include <aws/route53domains/model/ListTagsForDomainRequest.h>
#include <aws/route53domains/model/ListTagsForDomainResult.h>
#include <aws/route53domains/model/Nameserver.h>
#include <aws/route53domains/model/OperationStatus.h>
#include <aws/route53domains/model/OperationSummary.h>
#include <aws/route53domains/model/OperationType.h>
#include <aws/route53domains/model/Operator.h>
#include <aws/route53domains/model/PriceWithCurrency.h>
#include <aws/route53domains/model/PushDomainRequest.h>
#include <aws/route53domains/model/ReachabilityStatus.h>
#include <aws/route53domains/model/RegisterDomainRequest.h>
#include <aws/route53domains/model/RegisterDomainResult.h>
#include <aws/route53domains/model/RejectDomainTransferFromAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/RejectDomainTransferFromAnotherAwsAccountResult.h>
#include <aws/route53domains/model/RenewDomainRequest.h>
#include <aws/route53domains/model/RenewDomainResult.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailRequest.h>
#include <aws/route53domains/model/ResendContactReachabilityEmailResult.h>
#include <aws/route53domains/model/ResendOperationAuthorizationRequest.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeRequest.h>
#include <aws/route53domains/model/RetrieveDomainAuthCodeResult.h>
#include <aws/route53domains/model/SortCondition.h>
#include <aws/route53domains/model/SortOrder.h>
#include <aws/route53domains/model/StatusFlag.h>
#include <aws/route53domains/model/Tag.h>
#include <aws/route53domains/model/TransferDomainRequest.h>
#include <aws/route53domains/model/TransferDomainResult.h>
#include <aws/route53domains/model/TransferDomainToAnotherAwsAccountRequest.h>
#include <aws/route53domains/model/TransferDomainToAnotherAwsAccountResult.h>
#include <aws/route53domains/model/Transferable.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyRequest.h>
#include <aws/route53domains/model/UpdateDomainContactPrivacyResult.h>
#include <aws/route53domains/model/UpdateDomainContactRequest.h>
#include <aws/route53domains/model/UpdateDomainContactResult.h>
#include <aws/route53domains/model/UpdateDomainNameserversRequest.h>
#include <aws/route53domains/model/UpdateDomainNameserversResult.h>
#include <aws/route53domains/model/UpdateTagsForDomainRequest.h>
#include <aws/route53domains/model/UpdateTagsForDomainResult.h>
#include <aws/route53domains/model/ViewBillingRequest.h>
#include <aws/route53domains/model/ViewBillingResult.h>

using Route53DomainsIncludeTest = ::testing::Test;

TEST_F(Route53DomainsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::Route53Domains::Route53DomainsClient>("Route53DomainsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
