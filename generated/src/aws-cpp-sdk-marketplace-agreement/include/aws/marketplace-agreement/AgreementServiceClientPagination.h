/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-agreement/AgreementServiceClient.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/ListAgreementPaymentRequestsPaginationTraits.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>

namespace Aws {
namespace AgreementService {

using GetAgreementTermsPaginator = Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::GetAgreementTermsRequest,
                                                                     Pagination::GetAgreementTermsPaginationTraits<AgreementServiceClient>>;
using ListAgreementPaymentRequestsPaginator =
    Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::ListAgreementPaymentRequestsRequest,
                                      Pagination::ListAgreementPaymentRequestsPaginationTraits<AgreementServiceClient>>;
using SearchAgreementsPaginator = Aws::Utils::Pagination::Paginator<AgreementServiceClient, Model::SearchAgreementsRequest,
                                                                    Pagination::SearchAgreementsPaginationTraits<AgreementServiceClient>>;

}  // namespace AgreementService
}  // namespace Aws
