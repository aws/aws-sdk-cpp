/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/textract/model/ListAdapterVersionsPaginationTraits.h>
#include <aws/textract/model/ListAdaptersPaginationTraits.h>
#include <aws/textract/model/ListBlueprintsPaginationTraits.h>
#include <aws/textract/model/ListProjectsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace Textract {

template <typename DerivedClient>
class TextractPaginationBase {
 public:
  /**
   * Create a paginator for ListAdapters operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdaptersRequest, Pagination::ListAdaptersPaginationTraits<DerivedClient>>
  ListAdaptersPaginator(const Model::ListAdaptersRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdaptersRequest,
                                             Pagination::ListAdaptersPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListAdapterVersions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdapterVersionsRequest,
                                    Pagination::ListAdapterVersionsPaginationTraits<DerivedClient>>
  ListAdapterVersionsPaginator(const Model::ListAdapterVersionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListAdapterVersionsRequest,
                                             Pagination::ListAdapterVersionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListBlueprints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest, Pagination::ListBlueprintsPaginationTraits<DerivedClient>>
  ListBlueprintsPaginator(const Model::ListBlueprintsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListBlueprintsRequest,
                                             Pagination::ListBlueprintsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListProjects operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest, Pagination::ListProjectsPaginationTraits<DerivedClient>>
  ListProjectsPaginator(const Model::ListProjectsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListProjectsRequest,
                                             Pagination::ListProjectsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }
};
}  // namespace Textract
}  // namespace Aws
