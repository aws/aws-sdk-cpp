/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/signer/model/ListSigningJobsPaginationTraits.h>
#include <aws/signer/model/ListSigningPlatformsPaginationTraits.h>
#include <aws/signer/model/ListSigningProfilesPaginationTraits.h>

#include <memory>

namespace Aws {
namespace signer {

class SignerClient;

template <typename DerivedClient>
class SignerPaginationBase {
 public:
  /**
   * Create a paginator for ListSigningJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningJobsRequest,
                                    Pagination::ListSigningJobsPaginationTraits<DerivedClient>>
  ListSigningJobsPaginator(const Model::ListSigningJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningJobsRequest,
                                             Pagination::ListSigningJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListSigningPlatforms operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningPlatformsRequest,
                                    Pagination::ListSigningPlatformsPaginationTraits<DerivedClient>>
  ListSigningPlatformsPaginator(const Model::ListSigningPlatformsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningPlatformsRequest,
                                             Pagination::ListSigningPlatformsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSigningProfiles operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningProfilesRequest,
                                    Pagination::ListSigningProfilesPaginationTraits<DerivedClient>>
  ListSigningProfilesPaginator(const Model::ListSigningProfilesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSigningProfilesRequest,
                                             Pagination::ListSigningProfilesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace signer
}  // namespace Aws
