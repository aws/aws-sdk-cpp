/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace SSMContacts {

class SSMContactsClient;

template <typename DerivedClient>
class SSMContactsPaginationBase {
 public:
  /**
   * Create a paginator for ListContactChannels operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactChannelsRequest,
                                    Pagination::ListContactChannelsPaginationTraits<DerivedClient>>
  ListContactChannelsPaginator(const Model::ListContactChannelsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactChannelsRequest,
                                             Pagination::ListContactChannelsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContacts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest, Pagination::ListContactsPaginationTraits<DerivedClient>>
  ListContactsPaginator(const Model::ListContactsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactsRequest,
                                             Pagination::ListContactsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                      request};
  }

  /**
   * Create a paginator for ListEngagements operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementsRequest,
                                    Pagination::ListEngagementsPaginationTraits<DerivedClient>>
  ListEngagementsPaginator(const Model::ListEngagementsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEngagementsRequest,
                                             Pagination::ListEngagementsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListPageReceipts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPageReceiptsRequest,
                                    Pagination::ListPageReceiptsPaginationTraits<DerivedClient>>
  ListPageReceiptsPaginator(const Model::ListPageReceiptsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPageReceiptsRequest,
                                             Pagination::ListPageReceiptsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
  }

  /**
   * Create a paginator for ListPageResolutions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPageResolutionsRequest,
                                    Pagination::ListPageResolutionsPaginationTraits<DerivedClient>>
  ListPageResolutionsPaginator(const Model::ListPageResolutionsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPageResolutionsRequest,
                                             Pagination::ListPageResolutionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPagesByContact operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPagesByContactRequest,
                                    Pagination::ListPagesByContactPaginationTraits<DerivedClient>>
  ListPagesByContactPaginator(const Model::ListPagesByContactRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPagesByContactRequest,
                                             Pagination::ListPagesByContactPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPagesByEngagement operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPagesByEngagementRequest,
                                    Pagination::ListPagesByEngagementPaginationTraits<DerivedClient>>
  ListPagesByEngagementPaginator(const Model::ListPagesByEngagementRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPagesByEngagementRequest,
                                             Pagination::ListPagesByEngagementPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListPreviewRotationShifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPreviewRotationShiftsRequest,
                                    Pagination::ListPreviewRotationShiftsPaginationTraits<DerivedClient>>
  ListPreviewRotationShiftsPaginator(const Model::ListPreviewRotationShiftsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListPreviewRotationShiftsRequest,
                                             Pagination::ListPreviewRotationShiftsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRotationOverrides operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationOverridesRequest,
                                    Pagination::ListRotationOverridesPaginationTraits<DerivedClient>>
  ListRotationOverridesPaginator(const Model::ListRotationOverridesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationOverridesRequest,
                                             Pagination::ListRotationOverridesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRotations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationsRequest, Pagination::ListRotationsPaginationTraits<DerivedClient>>
  ListRotationsPaginator(const Model::ListRotationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationsRequest,
                                             Pagination::ListRotationsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                       request};
  }

  /**
   * Create a paginator for ListRotationShifts operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationShiftsRequest,
                                    Pagination::ListRotationShiftsPaginationTraits<DerivedClient>>
  ListRotationShiftsPaginator(const Model::ListRotationShiftsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRotationShiftsRequest,
                                             Pagination::ListRotationShiftsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace SSMContacts
}  // namespace Aws
