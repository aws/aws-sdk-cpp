/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pca-connector-ad/PcaConnectorAdClient.h>
#include <aws/pca-connector-ad/model/ListConnectorsPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesPaginationTraits.h>
#include <aws/pca-connector-ad/model/ListTemplatesPaginationTraits.h>

namespace Aws {
namespace PcaConnectorAd {

using ListConnectorsPaginator = Aws::Utils::Pagination::Paginator<PcaConnectorAdClient, Model::ListConnectorsRequest,
                                                                  Pagination::ListConnectorsPaginationTraits<PcaConnectorAdClient>>;
using ListDirectoryRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<PcaConnectorAdClient, Model::ListDirectoryRegistrationsRequest,
                                      Pagination::ListDirectoryRegistrationsPaginationTraits<PcaConnectorAdClient>>;
using ListServicePrincipalNamesPaginator =
    Aws::Utils::Pagination::Paginator<PcaConnectorAdClient, Model::ListServicePrincipalNamesRequest,
                                      Pagination::ListServicePrincipalNamesPaginationTraits<PcaConnectorAdClient>>;
using ListTemplateGroupAccessControlEntriesPaginator =
    Aws::Utils::Pagination::Paginator<PcaConnectorAdClient, Model::ListTemplateGroupAccessControlEntriesRequest,
                                      Pagination::ListTemplateGroupAccessControlEntriesPaginationTraits<PcaConnectorAdClient>>;
using ListTemplatesPaginator = Aws::Utils::Pagination::Paginator<PcaConnectorAdClient, Model::ListTemplatesRequest,
                                                                 Pagination::ListTemplatesPaginationTraits<PcaConnectorAdClient>>;

}  // namespace PcaConnectorAd
}  // namespace Aws
