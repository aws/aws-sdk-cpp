/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/mq/MQClient.h>
#include <aws/mq/model/DescribeSharedResourcesPaginationTraits.h>
#include <aws/mq/model/ListBrokersPaginationTraits.h>

namespace Aws {
namespace MQ {

using DescribeSharedResourcesPaginator = Aws::Utils::Pagination::Paginator<MQClient, Model::DescribeSharedResourcesRequest,
                                                                           Pagination::DescribeSharedResourcesPaginationTraits<MQClient>>;
using ListBrokersPaginator =
    Aws::Utils::Pagination::Paginator<MQClient, Model::ListBrokersRequest, Pagination::ListBrokersPaginationTraits<MQClient>>;

}  // namespace MQ
}  // namespace Aws
