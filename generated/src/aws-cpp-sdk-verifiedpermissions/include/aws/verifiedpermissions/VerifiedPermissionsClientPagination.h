/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/verifiedpermissions/VerifiedPermissionsClient.h>
#include <aws/verifiedpermissions/model/ListIdentitySourcesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPoliciesPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPolicyStoresPaginationTraits.h>
#include <aws/verifiedpermissions/model/ListPolicyTemplatesPaginationTraits.h>

namespace Aws {
namespace VerifiedPermissions {

using ListIdentitySourcesPaginator =
    Aws::Utils::Pagination::Paginator<VerifiedPermissionsClient, Model::ListIdentitySourcesRequest,
                                      Pagination::ListIdentitySourcesPaginationTraits<VerifiedPermissionsClient>>;
using ListPoliciesPaginator = Aws::Utils::Pagination::Paginator<VerifiedPermissionsClient, Model::ListPoliciesRequest,
                                                                Pagination::ListPoliciesPaginationTraits<VerifiedPermissionsClient>>;
using ListPolicyStoresPaginator =
    Aws::Utils::Pagination::Paginator<VerifiedPermissionsClient, Model::ListPolicyStoresRequest,
                                      Pagination::ListPolicyStoresPaginationTraits<VerifiedPermissionsClient>>;
using ListPolicyTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<VerifiedPermissionsClient, Model::ListPolicyTemplatesRequest,
                                      Pagination::ListPolicyTemplatesPaginationTraits<VerifiedPermissionsClient>>;

}  // namespace VerifiedPermissions
}  // namespace Aws
