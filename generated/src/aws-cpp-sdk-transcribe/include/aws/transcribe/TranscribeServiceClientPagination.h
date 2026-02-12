/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/transcribe/TranscribeServiceClient.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesPaginationTraits.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsPaginationTraits.h>
#include <aws/transcribe/model/ListLanguageModelsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalScribeJobsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListVocabularyFiltersPaginationTraits.h>

namespace Aws {
namespace TranscribeService {

using ListCallAnalyticsCategoriesPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListCallAnalyticsCategoriesRequest,
                                      Pagination::ListCallAnalyticsCategoriesPaginationTraits<TranscribeServiceClient>>;
using ListCallAnalyticsJobsPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListCallAnalyticsJobsRequest,
                                      Pagination::ListCallAnalyticsJobsPaginationTraits<TranscribeServiceClient>>;
using ListLanguageModelsPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListLanguageModelsRequest,
                                      Pagination::ListLanguageModelsPaginationTraits<TranscribeServiceClient>>;
using ListMedicalScribeJobsPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListMedicalScribeJobsRequest,
                                      Pagination::ListMedicalScribeJobsPaginationTraits<TranscribeServiceClient>>;
using ListMedicalTranscriptionJobsPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListMedicalTranscriptionJobsRequest,
                                      Pagination::ListMedicalTranscriptionJobsPaginationTraits<TranscribeServiceClient>>;
using ListMedicalVocabulariesPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListMedicalVocabulariesRequest,
                                      Pagination::ListMedicalVocabulariesPaginationTraits<TranscribeServiceClient>>;
using ListTranscriptionJobsPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListTranscriptionJobsRequest,
                                      Pagination::ListTranscriptionJobsPaginationTraits<TranscribeServiceClient>>;
using ListVocabulariesPaginator = Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListVocabulariesRequest,
                                                                    Pagination::ListVocabulariesPaginationTraits<TranscribeServiceClient>>;
using ListVocabularyFiltersPaginator =
    Aws::Utils::Pagination::Paginator<TranscribeServiceClient, Model::ListVocabularyFiltersRequest,
                                      Pagination::ListVocabularyFiltersPaginationTraits<TranscribeServiceClient>>;

}  // namespace TranscribeService
}  // namespace Aws
