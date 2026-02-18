/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
#include <aws/secretsmanager/model/BatchGetSecretValuePaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsPaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace SecretsManager {

class SecretsManagerClient;

template <typename DerivedClient>
class SecretsManagerPaginationBase {
 public:
  /**
   * Create a paginator for BatchGetSecretValue operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetSecretValueRequest,
                                    Pagination::BatchGetSecretValuePaginationTraits<DerivedClient>>
  BatchGetSecretValuePaginator(const Model::BatchGetSecretValueRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::BatchGetSecretValueRequest,
                                             Pagination::BatchGetSecretValuePaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSecrets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecretsRequest, Pagination::ListSecretsPaginationTraits<DerivedClient>>
  ListSecretsPaginator(const Model::ListSecretsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecretsRequest,
                                             Pagination::ListSecretsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }

  /**
   * Create a paginator for ListSecretVersionIds operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecretVersionIdsRequest,
                                    Pagination::ListSecretVersionIdsPaginationTraits<DerivedClient>>
  ListSecretVersionIdsPaginator(const Model::ListSecretVersionIdsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSecretVersionIdsRequest,
                                             Pagination::ListSecretVersionIdsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SecretsManager
}  // namespace Aws
