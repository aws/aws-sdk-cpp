/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/route53profiles/Route53ProfilesClient.h>
#include <aws/route53profiles/model/ListProfileAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfileResourceAssociationsPaginationTraits.h>
#include <aws/route53profiles/model/ListProfilesPaginationTraits.h>

namespace Aws {
namespace Route53Profiles {

using ListProfileAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ProfilesClient, Model::ListProfileAssociationsRequest,
                                      Pagination::ListProfileAssociationsPaginationTraits<Route53ProfilesClient>>;
using ListProfileResourceAssociationsPaginator =
    Aws::Utils::Pagination::Paginator<Route53ProfilesClient, Model::ListProfileResourceAssociationsRequest,
                                      Pagination::ListProfileResourceAssociationsPaginationTraits<Route53ProfilesClient>>;
using ListProfilesPaginator = Aws::Utils::Pagination::Paginator<Route53ProfilesClient, Model::ListProfilesRequest,
                                                                Pagination::ListProfilesPaginationTraits<Route53ProfilesClient>>;

}  // namespace Route53Profiles
}  // namespace Aws
