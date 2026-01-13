/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/secretsmanager/SecretsManagerClient.h>
#include <aws/secretsmanager/model/BatchGetSecretValuePaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretVersionIdsPaginationTraits.h>
#include <aws/secretsmanager/model/ListSecretsPaginationTraits.h>

namespace Aws {
namespace SecretsManager {

using BatchGetSecretValuePaginator =
    Aws::Utils::Pagination::Paginator<SecretsManagerClient, Model::BatchGetSecretValueRequest,
                                      Pagination::BatchGetSecretValuePaginationTraits<SecretsManagerClient>>;
using ListSecretsPaginator = Aws::Utils::Pagination::Paginator<SecretsManagerClient, Model::ListSecretsRequest,
                                                               Pagination::ListSecretsPaginationTraits<SecretsManagerClient>>;
using ListSecretVersionIdsPaginator =
    Aws::Utils::Pagination::Paginator<SecretsManagerClient, Model::ListSecretVersionIdsRequest,
                                      Pagination::ListSecretVersionIdsPaginationTraits<SecretsManagerClient>>;

}  // namespace SecretsManager
}  // namespace Aws
