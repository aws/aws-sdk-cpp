/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/ssm-contacts/SSMContactsClient.h>
#include <aws/ssm-contacts/model/ListContactChannelsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListContactsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListEngagementsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPageReceiptsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPageResolutionsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPagesByContactPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPagesByEngagementPaginationTraits.h>
#include <aws/ssm-contacts/model/ListPreviewRotationShiftsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationOverridesPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationShiftsPaginationTraits.h>
#include <aws/ssm-contacts/model/ListRotationsPaginationTraits.h>

namespace Aws {
namespace SSMContacts {

using ListContactChannelsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListContactChannelsRequest,
                                                                       Pagination::ListContactChannelsPaginationTraits<SSMContactsClient>>;
using ListContactsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListContactsRequest,
                                                                Pagination::ListContactsPaginationTraits<SSMContactsClient>>;
using ListEngagementsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListEngagementsRequest,
                                                                   Pagination::ListEngagementsPaginationTraits<SSMContactsClient>>;
using ListPageReceiptsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListPageReceiptsRequest,
                                                                    Pagination::ListPageReceiptsPaginationTraits<SSMContactsClient>>;
using ListPageResolutionsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListPageResolutionsRequest,
                                                                       Pagination::ListPageResolutionsPaginationTraits<SSMContactsClient>>;
using ListPagesByContactPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListPagesByContactRequest,
                                                                      Pagination::ListPagesByContactPaginationTraits<SSMContactsClient>>;
using ListPagesByEngagementPaginator =
    Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListPagesByEngagementRequest,
                                      Pagination::ListPagesByEngagementPaginationTraits<SSMContactsClient>>;
using ListPreviewRotationShiftsPaginator =
    Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListPreviewRotationShiftsRequest,
                                      Pagination::ListPreviewRotationShiftsPaginationTraits<SSMContactsClient>>;
using ListRotationOverridesPaginator =
    Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListRotationOverridesRequest,
                                      Pagination::ListRotationOverridesPaginationTraits<SSMContactsClient>>;
using ListRotationsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListRotationsRequest,
                                                                 Pagination::ListRotationsPaginationTraits<SSMContactsClient>>;
using ListRotationShiftsPaginator = Aws::Utils::Pagination::Paginator<SSMContactsClient, Model::ListRotationShiftsRequest,
                                                                      Pagination::ListRotationShiftsPaginationTraits<SSMContactsClient>>;

}  // namespace SSMContacts
}  // namespace Aws
