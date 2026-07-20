/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/supportauthz/SupportAuthZClient.h>
#include <aws/supportauthz/model/ListActionsPaginationTraits.h>
#include <aws/supportauthz/model/ListSupportPermitRequestsPaginationTraits.h>
#include <aws/supportauthz/model/ListSupportPermitsPaginationTraits.h>

namespace Aws {
namespace SupportAuthZ {

using ListActionsPaginator = Aws::Utils::Pagination::Paginator<SupportAuthZClient, Model::ListActionsRequest,
                                                               Pagination::ListActionsPaginationTraits<SupportAuthZClient>>;
using ListSupportPermitRequestsPaginator =
    Aws::Utils::Pagination::Paginator<SupportAuthZClient, Model::ListSupportPermitRequestsRequest,
                                      Pagination::ListSupportPermitRequestsPaginationTraits<SupportAuthZClient>>;
using ListSupportPermitsPaginator = Aws::Utils::Pagination::Paginator<SupportAuthZClient, Model::ListSupportPermitsRequest,
                                                                      Pagination::ListSupportPermitsPaginationTraits<SupportAuthZClient>>;

}  // namespace SupportAuthZ
}  // namespace Aws
