/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sns/SNSClient.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationPaginationTraits.h>
#include <aws/sns/model/ListOriginationNumbersPaginationTraits.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutPaginationTraits.h>
#include <aws/sns/model/ListPlatformApplicationsPaginationTraits.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsByTopicPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsPaginationTraits.h>
#include <aws/sns/model/ListTopicsPaginationTraits.h>

namespace Aws {
namespace SNS {

using ListEndpointsByPlatformApplicationPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListEndpointsByPlatformApplicationRequest,
                                      Pagination::ListEndpointsByPlatformApplicationPaginationTraits<SNSClient>>;
using ListOriginationNumbersPaginator = Aws::Utils::Pagination::Paginator<SNSClient, Model::ListOriginationNumbersRequest,
                                                                          Pagination::ListOriginationNumbersPaginationTraits<SNSClient>>;
using ListPhoneNumbersOptedOutPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListPhoneNumbersOptedOutRequest,
                                      Pagination::ListPhoneNumbersOptedOutPaginationTraits<SNSClient>>;
using ListPlatformApplicationsPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListPlatformApplicationsRequest,
                                      Pagination::ListPlatformApplicationsPaginationTraits<SNSClient>>;
using ListSMSSandboxPhoneNumbersPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListSMSSandboxPhoneNumbersRequest,
                                      Pagination::ListSMSSandboxPhoneNumbersPaginationTraits<SNSClient>>;
using ListSubscriptionsPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListSubscriptionsRequest, Pagination::ListSubscriptionsPaginationTraits<SNSClient>>;
using ListSubscriptionsByTopicPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListSubscriptionsByTopicRequest,
                                      Pagination::ListSubscriptionsByTopicPaginationTraits<SNSClient>>;
using ListTopicsPaginator =
    Aws::Utils::Pagination::Paginator<SNSClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<SNSClient>>;

}  // namespace SNS
}  // namespace Aws
