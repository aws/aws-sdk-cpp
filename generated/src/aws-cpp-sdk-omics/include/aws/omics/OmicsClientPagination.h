/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/omics/OmicsClient.h>
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

namespace Aws {
namespace Omics {

using ListAnnotationImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListAnnotationImportJobsRequest,
                                      Pagination::ListAnnotationImportJobsPaginationTraits<OmicsClient>>;
using ListAnnotationStoresPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListAnnotationStoresRequest,
                                                                        Pagination::ListAnnotationStoresPaginationTraits<OmicsClient>>;
using ListAnnotationStoreVersionsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListAnnotationStoreVersionsRequest,
                                      Pagination::ListAnnotationStoreVersionsPaginationTraits<OmicsClient>>;
using ListMultipartReadSetUploadsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListMultipartReadSetUploadsRequest,
                                      Pagination::ListMultipartReadSetUploadsPaginationTraits<OmicsClient>>;
using ListReadSetActivationJobsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReadSetActivationJobsRequest,
                                      Pagination::ListReadSetActivationJobsPaginationTraits<OmicsClient>>;
using ListReadSetExportJobsPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReadSetExportJobsRequest,
                                                                         Pagination::ListReadSetExportJobsPaginationTraits<OmicsClient>>;
using ListReadSetImportJobsPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReadSetImportJobsRequest,
                                                                         Pagination::ListReadSetImportJobsPaginationTraits<OmicsClient>>;
using ListReadSetsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReadSetsRequest, Pagination::ListReadSetsPaginationTraits<OmicsClient>>;
using ListReadSetUploadPartsPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReadSetUploadPartsRequest,
                                                                          Pagination::ListReadSetUploadPartsPaginationTraits<OmicsClient>>;
using ListReferenceImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReferenceImportJobsRequest,
                                      Pagination::ListReferenceImportJobsPaginationTraits<OmicsClient>>;
using ListReferencesPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReferencesRequest, Pagination::ListReferencesPaginationTraits<OmicsClient>>;
using ListReferenceStoresPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListReferenceStoresRequest,
                                                                       Pagination::ListReferenceStoresPaginationTraits<OmicsClient>>;
using ListRunCachesPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListRunCachesRequest, Pagination::ListRunCachesPaginationTraits<OmicsClient>>;
using ListRunGroupsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListRunGroupsRequest, Pagination::ListRunGroupsPaginationTraits<OmicsClient>>;
using ListRunsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListRunsRequest, Pagination::ListRunsPaginationTraits<OmicsClient>>;
using ListRunTasksPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListRunTasksRequest, Pagination::ListRunTasksPaginationTraits<OmicsClient>>;
using ListSequenceStoresPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListSequenceStoresRequest,
                                                                      Pagination::ListSequenceStoresPaginationTraits<OmicsClient>>;
using ListSharesPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListSharesRequest, Pagination::ListSharesPaginationTraits<OmicsClient>>;
using ListVariantImportJobsPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListVariantImportJobsRequest,
                                                                         Pagination::ListVariantImportJobsPaginationTraits<OmicsClient>>;
using ListVariantStoresPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListVariantStoresRequest,
                                                                     Pagination::ListVariantStoresPaginationTraits<OmicsClient>>;
using ListWorkflowsPaginator =
    Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListWorkflowsRequest, Pagination::ListWorkflowsPaginationTraits<OmicsClient>>;
using ListWorkflowVersionsPaginator = Aws::Utils::Pagination::Paginator<OmicsClient, Model::ListWorkflowVersionsRequest,
                                                                        Pagination::ListWorkflowVersionsPaginationTraits<OmicsClient>>;

}  // namespace Omics
}  // namespace Aws
