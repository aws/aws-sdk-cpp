/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/payment-cryptography/PaymentCryptographyClient.h>
#include <aws/payment-cryptography/model/ListAliasesPaginationTraits.h>
#include <aws/payment-cryptography/model/ListKeysPaginationTraits.h>
#include <aws/payment-cryptography/model/ListTagsForResourcePaginationTraits.h>

namespace Aws {
namespace PaymentCryptography {

using ListAliasesPaginator = Aws::Utils::Pagination::Paginator<PaymentCryptographyClient, Model::ListAliasesRequest,
                                                               Pagination::ListAliasesPaginationTraits<PaymentCryptographyClient>>;
using ListKeysPaginator = Aws::Utils::Pagination::Paginator<PaymentCryptographyClient, Model::ListKeysRequest,
                                                            Pagination::ListKeysPaginationTraits<PaymentCryptographyClient>>;
using ListTagsForResourcePaginator =
    Aws::Utils::Pagination::Paginator<PaymentCryptographyClient, Model::ListTagsForResourceRequest,
                                      Pagination::ListTagsForResourcePaginationTraits<PaymentCryptographyClient>>;

}  // namespace PaymentCryptography
}  // namespace Aws
