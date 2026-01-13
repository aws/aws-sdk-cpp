/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sns/model/ListEndpointsByPlatformApplicationPaginationTraits.h>
#include <aws/sns/model/ListOriginationNumbersPaginationTraits.h>
#include <aws/sns/model/ListPhoneNumbersOptedOutPaginationTraits.h>
#include <aws/sns/model/ListPlatformApplicationsPaginationTraits.h>
#include <aws/sns/model/ListSMSSandboxPhoneNumbersPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsByTopicPaginationTraits.h>
#include <aws/sns/model/ListSubscriptionsPaginationTraits.h>
#include <aws/sns/model/ListTopicsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SNS {

class SNSClient;

template <typename DerivedClient>
class SNSPaginationBase {
 public:
  /**
   * Create a paginator for ListEndpointsByPlatformApplication operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsByPlatformApplicationRequest,
                                    Pagination::ListEndpointsByPlatformApplicationPaginationTraits<DerivedClient>>
  ListEndpointsByPlatformApplicationPaginator(const Model::ListEndpointsByPlatformApplicationRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEndpointsByPlatformApplicationRequest,
                                             Pagination::ListEndpointsByPlatformApplicationPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListOriginationNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginationNumbersRequest,
                                    Pagination::ListOriginationNumbersPaginationTraits<DerivedClient>>
  ListOriginationNumbersPaginator(const Model::ListOriginationNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListOriginationNumbersRequest,
                                             Pagination::ListOriginationNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPhoneNumbersOptedOut operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersOptedOutRequest,
                                    Pagination::ListPhoneNumbersOptedOutPaginationTraits<DerivedClient>>
  ListPhoneNumbersOptedOutPaginator(const Model::ListPhoneNumbersOptedOutRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPhoneNumbersOptedOutRequest,
                                             Pagination::ListPhoneNumbersOptedOutPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPlatformApplications operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformApplicationsRequest,
                                    Pagination::ListPlatformApplicationsPaginationTraits<DerivedClient>>
  ListPlatformApplicationsPaginator(const Model::ListPlatformApplicationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPlatformApplicationsRequest,
                                             Pagination::ListPlatformApplicationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSMSSandboxPhoneNumbers operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSMSSandboxPhoneNumbersRequest,
                                    Pagination::ListSMSSandboxPhoneNumbersPaginationTraits<DerivedClient>>
  ListSMSSandboxPhoneNumbersPaginator(const Model::ListSMSSandboxPhoneNumbersRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSMSSandboxPhoneNumbersRequest,
                                             Pagination::ListSMSSandboxPhoneNumbersPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                    Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>
  ListSubscriptionsPaginator(const Model::ListSubscriptionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsRequest,
                                             Pagination::ListSubscriptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSubscriptionsByTopic operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsByTopicRequest,
                                    Pagination::ListSubscriptionsByTopicPaginationTraits<DerivedClient>>
  ListSubscriptionsByTopicPaginator(const Model::ListSubscriptionsByTopicRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSubscriptionsByTopicRequest,
                                             Pagination::ListSubscriptionsByTopicPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTopics operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest, Pagination::ListTopicsPaginationTraits<DerivedClient>>
  ListTopicsPaginator(const Model::ListTopicsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTopicsRequest,
                                             Pagination::ListTopicsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace SNS
}  // namespace Aws
