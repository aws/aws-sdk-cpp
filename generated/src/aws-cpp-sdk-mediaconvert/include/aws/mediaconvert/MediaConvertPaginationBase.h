/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mediaconvert/model/ListJobTemplatesPaginationTraits.h>
#include <aws/mediaconvert/model/ListJobsPaginationTraits.h>
#include <aws/mediaconvert/model/ListPresetsPaginationTraits.h>
#include <aws/mediaconvert/model/ListQueuesPaginationTraits.h>
#include <aws/mediaconvert/model/ListVersionsPaginationTraits.h>
#include <aws/mediaconvert/model/SearchJobsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MediaConvert {

class MediaConvertClient;

template <typename DerivedClient>
class MediaConvertPaginationBase {
 public:
  /**
   * Create a paginator for ListJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>
  ListJobsPaginator(const Model::ListJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobsRequest, Pagination::ListJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListJobTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                    Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>
  ListJobTemplatesPaginator(const Model::ListJobTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListJobTemplatesRequest,
                                             Pagination::ListJobTemplatesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPresets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPresetsRequest, Pagination::ListPresetsPaginationTraits<DerivedClient>>
  ListPresetsPaginator(const Model::ListPresetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPresetsRequest,
                                             Pagination::ListPresetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListQueues operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest, Pagination::ListQueuesPaginationTraits<DerivedClient>>
  ListQueuesPaginator(const Model::ListQueuesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListQueuesRequest,
                                             Pagination::ListQueuesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest, Pagination::ListVersionsPaginationTraits<DerivedClient>>
  ListVersionsPaginator(const Model::ListVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVersionsRequest,
                                             Pagination::ListVersionsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for SearchJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchJobsRequest, Pagination::SearchJobsPaginationTraits<DerivedClient>>
  SearchJobsPaginator(const Model::SearchJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchJobsRequest,
                                             Pagination::SearchJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace MediaConvert
}  // namespace Aws
