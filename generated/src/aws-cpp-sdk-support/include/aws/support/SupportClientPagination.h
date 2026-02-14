/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/support/SupportClient.h>
#include <aws/support/model/DescribeCasesPaginationTraits.h>
#include <aws/support/model/DescribeCommunicationsPaginationTraits.h>

namespace Aws {
namespace Support {

using DescribeCasesPaginator =
    Aws::Utils::Pagination::Paginator<SupportClient, Model::DescribeCasesRequest, Pagination::DescribeCasesPaginationTraits<SupportClient>>;
using DescribeCommunicationsPaginator =
    Aws::Utils::Pagination::Paginator<SupportClient, Model::DescribeCommunicationsRequest,
                                      Pagination::DescribeCommunicationsPaginationTraits<SupportClient>>;

}  // namespace Support
}  // namespace Aws
