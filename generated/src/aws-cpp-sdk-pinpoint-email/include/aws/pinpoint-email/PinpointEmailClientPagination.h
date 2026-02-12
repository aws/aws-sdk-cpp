/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/pinpoint-email/PinpointEmailClient.h>
#include <aws/pinpoint-email/model/GetDedicatedIpsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListConfigurationSetsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDedicatedIpPoolsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDeliverabilityTestReportsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListDomainDeliverabilityCampaignsPaginationTraits.h>
#include <aws/pinpoint-email/model/ListEmailIdentitiesPaginationTraits.h>

namespace Aws {
namespace PinpointEmail {

using GetDedicatedIpsPaginator = Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::GetDedicatedIpsRequest,
                                                                   Pagination::GetDedicatedIpsPaginationTraits<PinpointEmailClient>>;
using ListConfigurationSetsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::ListConfigurationSetsRequest,
                                      Pagination::ListConfigurationSetsPaginationTraits<PinpointEmailClient>>;
using ListDedicatedIpPoolsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::ListDedicatedIpPoolsRequest,
                                      Pagination::ListDedicatedIpPoolsPaginationTraits<PinpointEmailClient>>;
using ListDeliverabilityTestReportsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::ListDeliverabilityTestReportsRequest,
                                      Pagination::ListDeliverabilityTestReportsPaginationTraits<PinpointEmailClient>>;
using ListDomainDeliverabilityCampaignsPaginator =
    Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::ListDomainDeliverabilityCampaignsRequest,
                                      Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<PinpointEmailClient>>;
using ListEmailIdentitiesPaginator =
    Aws::Utils::Pagination::Paginator<PinpointEmailClient, Model::ListEmailIdentitiesRequest,
                                      Pagination::ListEmailIdentitiesPaginationTraits<PinpointEmailClient>>;

}  // namespace PinpointEmail
}  // namespace Aws
