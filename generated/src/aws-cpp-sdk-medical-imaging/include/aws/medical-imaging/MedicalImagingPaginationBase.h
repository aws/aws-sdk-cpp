/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsPaginationTraits.h>
#include <aws/medical-imaging/model/ListDatastoresPaginationTraits.h>
#include <aws/medical-imaging/model/ListImageSetVersionsPaginationTraits.h>
#include <aws/medical-imaging/model/SearchImageSetsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace MedicalImaging {

class MedicalImagingClient;

template <typename DerivedClient>
class MedicalImagingPaginationBase {
 public:
  /**
   * Create a paginator for ListDatastores operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatastoresRequest, Pagination::ListDatastoresPaginationTraits<DerivedClient>>
  ListDatastoresPaginator(const Model::ListDatastoresRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDatastoresRequest,
                                             Pagination::ListDatastoresPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListDICOMImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDICOMImportJobsRequest,
                                    Pagination::ListDICOMImportJobsPaginationTraits<DerivedClient>>
  ListDICOMImportJobsPaginator(const Model::ListDICOMImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDICOMImportJobsRequest,
                                             Pagination::ListDICOMImportJobsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListImageSetVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageSetVersionsRequest,
                                    Pagination::ListImageSetVersionsPaginationTraits<DerivedClient>>
  ListImageSetVersionsPaginator(const Model::ListImageSetVersionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImageSetVersionsRequest,
                                             Pagination::ListImageSetVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for SearchImageSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchImageSetsRequest,
                                    Pagination::SearchImageSetsPaginationTraits<DerivedClient>>
  SearchImageSetsPaginator(const Model::SearchImageSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::SearchImageSetsRequest,
                                             Pagination::SearchImageSetsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }
};
}  // namespace MedicalImaging
}  // namespace Aws
