/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/transcribe/model/ListCallAnalyticsCategoriesPaginationTraits.h>
#include <aws/transcribe/model/ListCallAnalyticsJobsPaginationTraits.h>
#include <aws/transcribe/model/ListLanguageModelsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalScribeJobsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListMedicalVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListTranscriptionJobsPaginationTraits.h>
#include <aws/transcribe/model/ListVocabulariesPaginationTraits.h>
#include <aws/transcribe/model/ListVocabularyFiltersPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TranscribeService {

class TranscribeServiceClient;

template <typename DerivedClient>
class TranscribeServicePaginationBase {
 public:
  /**
   * Create a paginator for ListCallAnalyticsCategories operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallAnalyticsCategoriesRequest,
                                    Pagination::ListCallAnalyticsCategoriesPaginationTraits<DerivedClient>>
  ListCallAnalyticsCategoriesPaginator(const Model::ListCallAnalyticsCategoriesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallAnalyticsCategoriesRequest,
                                             Pagination::ListCallAnalyticsCategoriesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListCallAnalyticsJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallAnalyticsJobsRequest,
                                    Pagination::ListCallAnalyticsJobsPaginationTraits<DerivedClient>>
  ListCallAnalyticsJobsPaginator(const Model::ListCallAnalyticsJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCallAnalyticsJobsRequest,
                                             Pagination::ListCallAnalyticsJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListLanguageModels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLanguageModelsRequest,
                                    Pagination::ListLanguageModelsPaginationTraits<DerivedClient>>
  ListLanguageModelsPaginator(const Model::ListLanguageModelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListLanguageModelsRequest,
                                             Pagination::ListLanguageModelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMedicalScribeJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalScribeJobsRequest,
                                    Pagination::ListMedicalScribeJobsPaginationTraits<DerivedClient>>
  ListMedicalScribeJobsPaginator(const Model::ListMedicalScribeJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalScribeJobsRequest,
                                             Pagination::ListMedicalScribeJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMedicalTranscriptionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalTranscriptionJobsRequest,
                                    Pagination::ListMedicalTranscriptionJobsPaginationTraits<DerivedClient>>
  ListMedicalTranscriptionJobsPaginator(const Model::ListMedicalTranscriptionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalTranscriptionJobsRequest,
                                             Pagination::ListMedicalTranscriptionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMedicalVocabularies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalVocabulariesRequest,
                                    Pagination::ListMedicalVocabulariesPaginationTraits<DerivedClient>>
  ListMedicalVocabulariesPaginator(const Model::ListMedicalVocabulariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMedicalVocabulariesRequest,
                                             Pagination::ListMedicalVocabulariesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTranscriptionJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTranscriptionJobsRequest,
                                    Pagination::ListTranscriptionJobsPaginationTraits<DerivedClient>>
  ListTranscriptionJobsPaginator(const Model::ListTranscriptionJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTranscriptionJobsRequest,
                                             Pagination::ListTranscriptionJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVocabularies operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVocabulariesRequest,
                                    Pagination::ListVocabulariesPaginationTraits<DerivedClient>>
  ListVocabulariesPaginator(const Model::ListVocabulariesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVocabulariesRequest,
                                             Pagination::ListVocabulariesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListVocabularyFilters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVocabularyFiltersRequest,
                                    Pagination::ListVocabularyFiltersPaginationTraits<DerivedClient>>
  ListVocabularyFiltersPaginator(const Model::ListVocabularyFiltersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVocabularyFiltersRequest,
                                             Pagination::ListVocabularyFiltersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace TranscribeService
}  // namespace Aws
