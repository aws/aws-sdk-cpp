/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-agreement/AgreementServiceClient.h>
#include <aws/marketplace-agreement/model/GetAgreementEntitlementsPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestApprovalPlansPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementRequestTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementApprovalsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementCancellationRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementChargesPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementInvoiceLineItemsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListBillingAdjustmentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>

namespace Aws {
namespace AgreementService {

using GetAgreementEntitlementsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::GetAgreementEntitlementsRequest,
                                      Pagination::GetAgreementEntitlementsPaginationTraits<AgreementServiceClient>>;
using GetAgreementRequestApprovalPlansPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::GetAgreementRequestApprovalPlansRequest,
                                      Pagination::GetAgreementRequestApprovalPlansPaginationTraits<AgreementServiceClient>>;
using GetAgreementRequestTermsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::GetAgreementRequestTermsRequest,
                                      Pagination::GetAgreementRequestTermsPaginationTraits<AgreementServiceClient>>;
using GetAgreementTermsPaginator = Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::GetAgreementTermsRequest,
                                                                     Pagination::GetAgreementTermsPaginationTraits<AgreementServiceClient>>;
using ListAgreementApprovalsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementApprovalsRequest,
                                      Pagination::ListAgreementApprovalsPaginationTraits<AgreementServiceClient>>;
using ListAgreementCancellationRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementCancellationRequestsRequest,
                                      Pagination::ListAgreementCancellationRequestsPaginationTraits<AgreementServiceClient>>;
using ListAgreementChargesPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementChargesRequest,
                                      Pagination::ListAgreementChargesPaginationTraits<AgreementServiceClient>>;
using ListAgreementInvoiceLineItemsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementInvoiceLineItemsRequest,
                                      Pagination::ListAgreementInvoiceLineItemsPaginationTraits<AgreementServiceClient>>;
using ListAgreementPaymentRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementPaymentRequestsRequest,
                                      Pagination::ListAgreementPaymentRequestsPaginationTraits<AgreementServiceClient>>;
using ListAgreementRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementRequestsRequest,
                                      Pagination::ListAgreementRequestsPaginationTraits<AgreementServiceClient>>;
using ListBillingAdjustmentRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListBillingAdjustmentRequestsRequest,
                                      Pagination::ListBillingAdjustmentRequestsPaginationTraits<AgreementServiceClient>>;
using SearchAgreementsPaginator = Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::SearchAgreementsRequest,
                                                                    Pagination::SearchAgreementsPaginationTraits<AgreementServiceClient>>;

}  // namespace AgreementService
}  // namespace Aws
