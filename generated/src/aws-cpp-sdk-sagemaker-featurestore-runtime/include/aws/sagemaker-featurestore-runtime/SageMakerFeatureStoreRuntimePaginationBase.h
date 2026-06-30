/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {

template <typename DerivedClient>
class SageMakerFeatureStoreRuntimePaginationBase {
 public:
  /**
   * Create a paginator for ListRecords operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecordsRequest, Pagination::ListRecordsPaginationTraits<DerivedClient>>
  ListRecordsPaginator(const Model::ListRecordsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecordsRequest,
                                             Pagination::ListRecordsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
