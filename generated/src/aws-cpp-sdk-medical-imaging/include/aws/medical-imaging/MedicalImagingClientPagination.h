/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/medical-imaging/MedicalImagingClient.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsPaginationTraits.h>
#include <aws/medical-imaging/model/ListDatastoresPaginationTraits.h>
#include <aws/medical-imaging/model/ListImageSetVersionsPaginationTraits.h>
#include <aws/medical-imaging/model/SearchImageSetsPaginationTraits.h>

namespace Aws {
namespace MedicalImaging {

using ListDatastoresPaginator = Aws::Utils::Pagination::Paginator<MedicalImagingClient, Model::ListDatastoresRequest,
                                                                  Pagination::ListDatastoresPaginationTraits<MedicalImagingClient>>;
using ListDICOMImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<MedicalImagingClient, Model::ListDICOMImportJobsRequest,
                                      Pagination::ListDICOMImportJobsPaginationTraits<MedicalImagingClient>>;
using ListImageSetVersionsPaginator =
    Aws::Utils::Pagination::Paginator<MedicalImagingClient, Model::ListImageSetVersionsRequest,
                                      Pagination::ListImageSetVersionsPaginationTraits<MedicalImagingClient>>;
using SearchImageSetsPaginator = Aws::Utils::Pagination::Paginator<MedicalImagingClient, Model::SearchImageSetsRequest,
                                                                   Pagination::SearchImageSetsPaginationTraits<MedicalImagingClient>>;

}  // namespace MedicalImaging
}  // namespace Aws
