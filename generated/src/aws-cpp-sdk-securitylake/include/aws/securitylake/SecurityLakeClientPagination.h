/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/securitylake/SecurityLakeClient.h>
#include <aws/securitylake/model/GetDataLakeSourcesPaginationTraits.h>
#include <aws/securitylake/model/ListDataLakeExceptionsPaginationTraits.h>
#include <aws/securitylake/model/ListLogSourcesPaginationTraits.h>
#include <aws/securitylake/model/ListSubscribersPaginationTraits.h>

namespace Aws {
namespace SecurityLake {

using GetDataLakeSourcesPaginator = Aws::Utils::Pagination::Paginator<SecurityLakeClient, Model::GetDataLakeSourcesRequest,
                                                                      Pagination::GetDataLakeSourcesPaginationTraits<SecurityLakeClient>>;
using ListDataLakeExceptionsPaginator =
    Aws::Utils::Pagination::Paginator<SecurityLakeClient, Model::ListDataLakeExceptionsRequest,
                                      Pagination::ListDataLakeExceptionsPaginationTraits<SecurityLakeClient>>;
using ListLogSourcesPaginator = Aws::Utils::Pagination::Paginator<SecurityLakeClient, Model::ListLogSourcesRequest,
                                                                  Pagination::ListLogSourcesPaginationTraits<SecurityLakeClient>>;
using ListSubscribersPaginator = Aws::Utils::Pagination::Paginator<SecurityLakeClient, Model::ListSubscribersRequest,
                                                                   Pagination::ListSubscribersPaginationTraits<SecurityLakeClient>>;

}  // namespace SecurityLake
}  // namespace Aws
