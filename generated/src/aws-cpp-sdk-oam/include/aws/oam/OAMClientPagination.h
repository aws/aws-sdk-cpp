/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/oam/OAMClient.h>
#include <aws/oam/model/ListAttachedLinksPaginationTraits.h>
#include <aws/oam/model/ListLinksPaginationTraits.h>
#include <aws/oam/model/ListSinksPaginationTraits.h>

namespace Aws {
namespace OAM {

using ListAttachedLinksPaginator =
    Aws::Utils::Pagination::Paginator<OAMClient, Model::ListAttachedLinksRequest, Pagination::ListAttachedLinksPaginationTraits<OAMClient>>;
using ListLinksPaginator =
    Aws::Utils::Pagination::Paginator<OAMClient, Model::ListLinksRequest, Pagination::ListLinksPaginationTraits<OAMClient>>;
using ListSinksPaginator =
    Aws::Utils::Pagination::Paginator<OAMClient, Model::ListSinksRequest, Pagination::ListSinksPaginationTraits<OAMClient>>;

}  // namespace OAM
}  // namespace Aws
