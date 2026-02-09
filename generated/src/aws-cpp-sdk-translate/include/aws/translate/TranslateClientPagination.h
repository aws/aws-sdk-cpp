/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/translate/TranslateClient.h>
#include <aws/translate/model/ListLanguagesPaginationTraits.h>
#include <aws/translate/model/ListParallelDataPaginationTraits.h>
#include <aws/translate/model/ListTerminologiesPaginationTraits.h>
#include <aws/translate/model/ListTextTranslationJobsPaginationTraits.h>

namespace Aws {
namespace Translate {

using ListLanguagesPaginator = Aws::Utils::Pagination::Paginator<TranslateClient, Model::ListLanguagesRequest,
                                                                 Pagination::ListLanguagesPaginationTraits<TranslateClient>>;
using ListParallelDataPaginator = Aws::Utils::Pagination::Paginator<TranslateClient, Model::ListParallelDataRequest,
                                                                    Pagination::ListParallelDataPaginationTraits<TranslateClient>>;
using ListTerminologiesPaginator = Aws::Utils::Pagination::Paginator<TranslateClient, Model::ListTerminologiesRequest,
                                                                     Pagination::ListTerminologiesPaginationTraits<TranslateClient>>;
using ListTextTranslationJobsPaginator =
    Aws::Utils::Pagination::Paginator<TranslateClient, Model::ListTextTranslationJobsRequest,
                                      Pagination::ListTextTranslationJobsPaginationTraits<TranslateClient>>;

}  // namespace Translate
}  // namespace Aws
