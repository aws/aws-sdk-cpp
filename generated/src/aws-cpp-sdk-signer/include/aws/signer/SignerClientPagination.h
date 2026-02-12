/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/signer/SignerClient.h>
#include <aws/signer/model/ListSigningJobsPaginationTraits.h>
#include <aws/signer/model/ListSigningPlatformsPaginationTraits.h>
#include <aws/signer/model/ListSigningProfilesPaginationTraits.h>

namespace Aws {
namespace signer {

using ListSigningJobsPaginator = Aws::Utils::Pagination::Paginator<SignerClient, Model::ListSigningJobsRequest,
                                                                   Pagination::ListSigningJobsPaginationTraits<SignerClient>>;
using ListSigningPlatformsPaginator = Aws::Utils::Pagination::Paginator<SignerClient, Model::ListSigningPlatformsRequest,
                                                                        Pagination::ListSigningPlatformsPaginationTraits<SignerClient>>;
using ListSigningProfilesPaginator = Aws::Utils::Pagination::Paginator<SignerClient, Model::ListSigningProfilesRequest,
                                                                       Pagination::ListSigningProfilesPaginationTraits<SignerClient>>;

}  // namespace signer
}  // namespace Aws
