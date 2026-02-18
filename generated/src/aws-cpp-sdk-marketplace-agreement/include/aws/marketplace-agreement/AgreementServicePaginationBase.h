/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsPaginationTraits.h>
#include <aws/marketplace-agreement/model/SearchAgreementsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace AgreementService {

class AgreementServiceClient;

template <typename DerivedClient>
class AgreementServicePaginationBase {
 public:
  /**
   * Create a paginator for GetAgreementTerms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementTermsRequest,
                                    Pagination::GetAgreementTermsPaginationTraits<DerivedClient>>
  GetAgreementTermsPaginator(const Model::GetAgreementTermsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetAgreementTermsRequest,
                                             Pagination::GetAgreementTermsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchAgreements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgreementsRequest,
                                    Pagination::SearchAgreementsPaginationTraits<DerivedClient>>
  SearchAgreementsPaginator(const Model::SearchAgreementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchAgreementsRequest,
                                             Pagination::SearchAgreementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }
};
}  // namespace AgreementService
}  // namespace Aws
