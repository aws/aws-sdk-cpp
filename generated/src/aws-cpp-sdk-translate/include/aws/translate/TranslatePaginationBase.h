/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/translate/model/ListLanguagesPaginationTraits.h>
#include <aws/translate/model/ListParallelDataPaginationTraits.h>
#include <aws/translate/model/ListTerminologiesPaginationTraits.h>
#include <aws/translate/model/ListTextTranslationJobsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Translate {

class TranslateClient;

template <typename DerivedClient>
class TranslatePaginationBase {
 public:
  /**
   * Create a paginator for ListLanguages operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLanguagesRequest, Pagination::ListLanguagesPaginationTraits<DerivedClient>>
  ListLanguagesPaginator(const Model::ListLanguagesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLanguagesRequest,
                                             Pagination::ListLanguagesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListParallelData operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParallelDataRequest,
                                    Pagination::ListParallelDataPaginationTraits<DerivedClient>>
  ListParallelDataPaginator(const Model::ListParallelDataRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListParallelDataRequest,
                                             Pagination::ListParallelDataPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListTerminologies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTerminologiesRequest,
                                    Pagination::ListTerminologiesPaginationTraits<DerivedClient>>
  ListTerminologiesPaginator(const Model::ListTerminologiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTerminologiesRequest,
                                             Pagination::ListTerminologiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTextTranslationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTextTranslationJobsRequest,
                                    Pagination::ListTextTranslationJobsPaginationTraits<DerivedClient>>
  ListTextTranslationJobsPaginator(const Model::ListTextTranslationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTextTranslationJobsRequest,
                                             Pagination::ListTextTranslationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Translate
}  // namespace Aws
