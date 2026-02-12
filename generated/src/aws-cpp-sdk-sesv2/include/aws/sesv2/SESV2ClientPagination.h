/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/sesv2/SESV2Client.h>
#include <aws/sesv2/model/GetDedicatedIpsPaginationTraits.h>
#include <aws/sesv2/model/ListConfigurationSetsPaginationTraits.h>
#include <aws/sesv2/model/ListContactListsPaginationTraits.h>
#include <aws/sesv2/model/ListContactsPaginationTraits.h>
#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesPaginationTraits.h>
#include <aws/sesv2/model/ListDedicatedIpPoolsPaginationTraits.h>
#include <aws/sesv2/model/ListDeliverabilityTestReportsPaginationTraits.h>
#include <aws/sesv2/model/ListDomainDeliverabilityCampaignsPaginationTraits.h>
#include <aws/sesv2/model/ListEmailIdentitiesPaginationTraits.h>
#include <aws/sesv2/model/ListEmailTemplatesPaginationTraits.h>
#include <aws/sesv2/model/ListExportJobsPaginationTraits.h>
#include <aws/sesv2/model/ListImportJobsPaginationTraits.h>
#include <aws/sesv2/model/ListMultiRegionEndpointsPaginationTraits.h>
#include <aws/sesv2/model/ListRecommendationsPaginationTraits.h>
#include <aws/sesv2/model/ListReputationEntitiesPaginationTraits.h>
#include <aws/sesv2/model/ListResourceTenantsPaginationTraits.h>
#include <aws/sesv2/model/ListSuppressedDestinationsPaginationTraits.h>
#include <aws/sesv2/model/ListTenantResourcesPaginationTraits.h>
#include <aws/sesv2/model/ListTenantsPaginationTraits.h>

namespace Aws {
namespace SESV2 {

using GetDedicatedIpsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::GetDedicatedIpsRequest, Pagination::GetDedicatedIpsPaginationTraits<SESV2Client>>;
using ListConfigurationSetsPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListConfigurationSetsRequest,
                                                                         Pagination::ListConfigurationSetsPaginationTraits<SESV2Client>>;
using ListContactListsPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListContactListsRequest,
                                                                    Pagination::ListContactListsPaginationTraits<SESV2Client>>;
using ListContactsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListContactsRequest, Pagination::ListContactsPaginationTraits<SESV2Client>>;
using ListCustomVerificationEmailTemplatesPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListCustomVerificationEmailTemplatesRequest,
                                      Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<SESV2Client>>;
using ListDedicatedIpPoolsPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListDedicatedIpPoolsRequest,
                                                                        Pagination::ListDedicatedIpPoolsPaginationTraits<SESV2Client>>;
using ListDeliverabilityTestReportsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListDeliverabilityTestReportsRequest,
                                      Pagination::ListDeliverabilityTestReportsPaginationTraits<SESV2Client>>;
using ListDomainDeliverabilityCampaignsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListDomainDeliverabilityCampaignsRequest,
                                      Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<SESV2Client>>;
using ListEmailIdentitiesPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListEmailIdentitiesRequest,
                                                                       Pagination::ListEmailIdentitiesPaginationTraits<SESV2Client>>;
using ListEmailTemplatesPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListEmailTemplatesRequest,
                                                                      Pagination::ListEmailTemplatesPaginationTraits<SESV2Client>>;
using ListExportJobsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListExportJobsRequest, Pagination::ListExportJobsPaginationTraits<SESV2Client>>;
using ListImportJobsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListImportJobsRequest, Pagination::ListImportJobsPaginationTraits<SESV2Client>>;
using ListMultiRegionEndpointsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListMultiRegionEndpointsRequest,
                                      Pagination::ListMultiRegionEndpointsPaginationTraits<SESV2Client>>;
using ListRecommendationsPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListRecommendationsRequest,
                                                                       Pagination::ListRecommendationsPaginationTraits<SESV2Client>>;
using ListReputationEntitiesPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListReputationEntitiesRequest,
                                                                          Pagination::ListReputationEntitiesPaginationTraits<SESV2Client>>;
using ListResourceTenantsPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListResourceTenantsRequest,
                                                                       Pagination::ListResourceTenantsPaginationTraits<SESV2Client>>;
using ListSuppressedDestinationsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListSuppressedDestinationsRequest,
                                      Pagination::ListSuppressedDestinationsPaginationTraits<SESV2Client>>;
using ListTenantResourcesPaginator = Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListTenantResourcesRequest,
                                                                       Pagination::ListTenantResourcesPaginationTraits<SESV2Client>>;
using ListTenantsPaginator =
    Aws::Utils::Pagination::Paginator<SESV2Client, Model::ListTenantsRequest, Pagination::ListTenantsPaginationTraits<SESV2Client>>;

}  // namespace SESV2
}  // namespace Aws
