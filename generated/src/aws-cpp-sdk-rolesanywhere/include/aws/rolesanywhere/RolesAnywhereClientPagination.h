/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/rolesanywhere/RolesAnywhereClient.h>
#include <aws/rolesanywhere/model/ListCrlsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListProfilesPaginationTraits.h>
#include <aws/rolesanywhere/model/ListSubjectsPaginationTraits.h>
#include <aws/rolesanywhere/model/ListTrustAnchorsPaginationTraits.h>

namespace Aws {
namespace RolesAnywhere {

using ListCrlsPaginator = Aws::Utils::Pagination::Paginator<RolesAnywhereClient, Model::ListCrlsRequest,
                                                            Pagination::ListCrlsPaginationTraits<RolesAnywhereClient>>;
using ListProfilesPaginator = Aws::Utils::Pagination::Paginator<RolesAnywhereClient, Model::ListProfilesRequest,
                                                                Pagination::ListProfilesPaginationTraits<RolesAnywhereClient>>;
using ListSubjectsPaginator = Aws::Utils::Pagination::Paginator<RolesAnywhereClient, Model::ListSubjectsRequest,
                                                                Pagination::ListSubjectsPaginationTraits<RolesAnywhereClient>>;
using ListTrustAnchorsPaginator = Aws::Utils::Pagination::Paginator<RolesAnywhereClient, Model::ListTrustAnchorsRequest,
                                                                    Pagination::ListTrustAnchorsPaginationTraits<RolesAnywhereClient>>;

}  // namespace RolesAnywhere
}  // namespace Aws
