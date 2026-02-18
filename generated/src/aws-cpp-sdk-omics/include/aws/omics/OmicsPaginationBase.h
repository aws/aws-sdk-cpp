/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/omics/model/ListAnnotationImportJobsPaginationTraits.h>
#include <aws/omics/model/ListAnnotationStoreVersionsPaginationTraits.h>
#include <aws/omics/model/ListAnnotationStoresPaginationTraits.h>
#include <aws/omics/model/ListMultipartReadSetUploadsPaginationTraits.h>
#include <aws/omics/model/ListReadSetActivationJobsPaginationTraits.h>
#include <aws/omics/model/ListReadSetExportJobsPaginationTraits.h>
#include <aws/omics/model/ListReadSetImportJobsPaginationTraits.h>
#include <aws/omics/model/ListReadSetUploadPartsPaginationTraits.h>
#include <aws/omics/model/ListReadSetsPaginationTraits.h>
#include <aws/omics/model/ListReferenceImportJobsPaginationTraits.h>
#include <aws/omics/model/ListReferenceStoresPaginationTraits.h>
#include <aws/omics/model/ListReferencesPaginationTraits.h>
#include <aws/omics/model/ListRunCachesPaginationTraits.h>
#include <aws/omics/model/ListRunGroupsPaginationTraits.h>
#include <aws/omics/model/ListRunTasksPaginationTraits.h>
#include <aws/omics/model/ListRunsPaginationTraits.h>
#include <aws/omics/model/ListSequenceStoresPaginationTraits.h>
#include <aws/omics/model/ListSharesPaginationTraits.h>
#include <aws/omics/model/ListVariantImportJobsPaginationTraits.h>
#include <aws/omics/model/ListVariantStoresPaginationTraits.h>
#include <aws/omics/model/ListWorkflowVersionsPaginationTraits.h>
#include <aws/omics/model/ListWorkflowsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Omics {

class OmicsClient;

template <typename DerivedClient>
class OmicsPaginationBase {
 public:
  /**
   * Create a paginator for ListAnnotationImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationImportJobsRequest,
                                    Pagination::ListAnnotationImportJobsPaginationTraits<DerivedClient>>
  ListAnnotationImportJobsPaginator(const Model::ListAnnotationImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationImportJobsRequest,
                                             Pagination::ListAnnotationImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnnotationStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationStoresRequest,
                                    Pagination::ListAnnotationStoresPaginationTraits<DerivedClient>>
  ListAnnotationStoresPaginator(const Model::ListAnnotationStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationStoresRequest,
                                             Pagination::ListAnnotationStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListAnnotationStoreVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationStoreVersionsRequest,
                                    Pagination::ListAnnotationStoreVersionsPaginationTraits<DerivedClient>>
  ListAnnotationStoreVersionsPaginator(const Model::ListAnnotationStoreVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAnnotationStoreVersionsRequest,
                                             Pagination::ListAnnotationStoreVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListMultipartReadSetUploads operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultipartReadSetUploadsRequest,
                                    Pagination::ListMultipartReadSetUploadsPaginationTraits<DerivedClient>>
  ListMultipartReadSetUploadsPaginator(const Model::ListMultipartReadSetUploadsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultipartReadSetUploadsRequest,
                                             Pagination::ListMultipartReadSetUploadsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReadSetActivationJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetActivationJobsRequest,
                                    Pagination::ListReadSetActivationJobsPaginationTraits<DerivedClient>>
  ListReadSetActivationJobsPaginator(const Model::ListReadSetActivationJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetActivationJobsRequest,
                                             Pagination::ListReadSetActivationJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReadSetExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetExportJobsRequest,
                                    Pagination::ListReadSetExportJobsPaginationTraits<DerivedClient>>
  ListReadSetExportJobsPaginator(const Model::ListReadSetExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetExportJobsRequest,
                                             Pagination::ListReadSetExportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReadSetImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetImportJobsRequest,
                                    Pagination::ListReadSetImportJobsPaginationTraits<DerivedClient>>
  ListReadSetImportJobsPaginator(const Model::ListReadSetImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetImportJobsRequest,
                                             Pagination::ListReadSetImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReadSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetsRequest, Pagination::ListReadSetsPaginationTraits<DerivedClient>>
  ListReadSetsPaginator(const Model::ListReadSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetsRequest,
                                             Pagination::ListReadSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListReadSetUploadParts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetUploadPartsRequest,
                                    Pagination::ListReadSetUploadPartsPaginationTraits<DerivedClient>>
  ListReadSetUploadPartsPaginator(const Model::ListReadSetUploadPartsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReadSetUploadPartsRequest,
                                             Pagination::ListReadSetUploadPartsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReferenceImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferenceImportJobsRequest,
                                    Pagination::ListReferenceImportJobsPaginationTraits<DerivedClient>>
  ListReferenceImportJobsPaginator(const Model::ListReferenceImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferenceImportJobsRequest,
                                             Pagination::ListReferenceImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReferences operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferencesRequest, Pagination::ListReferencesPaginationTraits<DerivedClient>>
  ListReferencesPaginator(const Model::ListReferencesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferencesRequest,
                                             Pagination::ListReferencesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListReferenceStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferenceStoresRequest,
                                    Pagination::ListReferenceStoresPaginationTraits<DerivedClient>>
  ListReferenceStoresPaginator(const Model::ListReferenceStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReferenceStoresRequest,
                                             Pagination::ListReferenceStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRunCaches operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunCachesRequest, Pagination::ListRunCachesPaginationTraits<DerivedClient>>
  ListRunCachesPaginator(const Model::ListRunCachesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunCachesRequest,
                                             Pagination::ListRunCachesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListRunGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunGroupsRequest, Pagination::ListRunGroupsPaginationTraits<DerivedClient>>
  ListRunGroupsPaginator(const Model::ListRunGroupsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunGroupsRequest,
                                             Pagination::ListRunGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<DerivedClient>>
  ListRunsPaginator(const Model::ListRunsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRunTasks operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunTasksRequest, Pagination::ListRunTasksPaginationTraits<DerivedClient>>
  ListRunTasksPaginator(const Model::ListRunTasksRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRunTasksRequest,
                                             Pagination::ListRunTasksPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListSequenceStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSequenceStoresRequest,
                                    Pagination::ListSequenceStoresPaginationTraits<DerivedClient>>
  ListSequenceStoresPaginator(const Model::ListSequenceStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSequenceStoresRequest,
                                             Pagination::ListSequenceStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListShares operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharesRequest, Pagination::ListSharesPaginationTraits<DerivedClient>>
  ListSharesPaginator(const Model::ListSharesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSharesRequest,
                                             Pagination::ListSharesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }

  /**
   * Create a paginator for ListVariantImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVariantImportJobsRequest,
                                    Pagination::ListVariantImportJobsPaginationTraits<DerivedClient>>
  ListVariantImportJobsPaginator(const Model::ListVariantImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVariantImportJobsRequest,
                                             Pagination::ListVariantImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListVariantStores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVariantStoresRequest,
                                    Pagination::ListVariantStoresPaginationTraits<DerivedClient>>
  ListVariantStoresPaginator(const Model::ListVariantStoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListVariantStoresRequest,
                                             Pagination::ListVariantStoresPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListWorkflows operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<DerivedClient>>
  ListWorkflowsPaginator(const Model::ListWorkflowsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowsRequest,
                                             Pagination::ListWorkflowsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListWorkflowVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowVersionsRequest,
                                    Pagination::ListWorkflowVersionsPaginationTraits<DerivedClient>>
  ListWorkflowVersionsPaginator(const Model::ListWorkflowVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListWorkflowVersionsRequest,
                                             Pagination::ListWorkflowVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace Omics
}  // namespace Aws
