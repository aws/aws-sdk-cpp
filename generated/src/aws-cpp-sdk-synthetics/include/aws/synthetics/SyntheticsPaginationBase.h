/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/synthetics/model/DescribeCanariesLastRunPaginationTraits.h>
#include <aws/synthetics/model/DescribeCanariesPaginationTraits.h>
#include <aws/synthetics/model/DescribeRuntimeVersionsPaginationTraits.h>
#include <aws/synthetics/model/GetCanaryRunsPaginationTraits.h>
#include <aws/synthetics/model/ListAssociatedGroupsPaginationTraits.h>
#include <aws/synthetics/model/ListGroupResourcesPaginationTraits.h>
#include <aws/synthetics/model/ListGroupsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Synthetics {

class SyntheticsClient;

template <typename DerivedClient>
class SyntheticsPaginationBase {
 public:
  /**
   * Create a paginator for DescribeCanaries operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCanariesRequest,
                                    Pagination::DescribeCanariesPaginationTraits<DerivedClient>>
  DescribeCanariesPaginator(const Model::DescribeCanariesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCanariesRequest,
                                             Pagination::DescribeCanariesPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for DescribeCanariesLastRun operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCanariesLastRunRequest,
                                    Pagination::DescribeCanariesLastRunPaginationTraits<DerivedClient>>
  DescribeCanariesLastRunPaginator(const Model::DescribeCanariesLastRunRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeCanariesLastRunRequest,
                                             Pagination::DescribeCanariesLastRunPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for DescribeRuntimeVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRuntimeVersionsRequest,
                                    Pagination::DescribeRuntimeVersionsPaginationTraits<DerivedClient>>
  DescribeRuntimeVersionsPaginator(const Model::DescribeRuntimeVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::DescribeRuntimeVersionsRequest,
                                             Pagination::DescribeRuntimeVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for GetCanaryRuns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCanaryRunsRequest, Pagination::GetCanaryRunsPaginationTraits<DerivedClient>>
  GetCanaryRunsPaginator(const Model::GetCanaryRunsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetCanaryRunsRequest,
                                             Pagination::GetCanaryRunsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListAssociatedGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedGroupsRequest,
                                    Pagination::ListAssociatedGroupsPaginationTraits<DerivedClient>>
  ListAssociatedGroupsPaginator(const Model::ListAssociatedGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAssociatedGroupsRequest,
                                             Pagination::ListAssociatedGroupsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroupResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupResourcesRequest,
                                    Pagination::ListGroupResourcesPaginationTraits<DerivedClient>>
  ListGroupResourcesPaginator(const Model::ListGroupResourcesRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupResourcesRequest,
                                             Pagination::ListGroupResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListGroups operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest, Pagination::ListGroupsPaginationTraits<DerivedClient>>
  ListGroupsPaginator(const Model::ListGroupsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListGroupsRequest,
                                             Pagination::ListGroupsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                    request};
  }
};
}  // namespace Synthetics
}  // namespace Aws
