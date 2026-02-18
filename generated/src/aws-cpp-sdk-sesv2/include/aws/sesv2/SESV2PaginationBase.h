/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/utils/pagination/Paginator.h>
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

#include <memory>

namespace Aws {
namespace SESV2 {

class SESV2Client;

template <typename DerivedClient>
class SESV2PaginationBase {
 public:
  /**
   * Create a paginator for GetDedicatedIps operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDedicatedIpsRequest,
                                    Pagination::GetDedicatedIpsPaginationTraits<DerivedClient>>
  GetDedicatedIpsPaginator(const Model::GetDedicatedIpsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::GetDedicatedIpsRequest,
                                             Pagination::GetDedicatedIpsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                         request};
  }

  /**
   * Create a paginator for ListConfigurationSets operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationSetsRequest,
                                    Pagination::ListConfigurationSetsPaginationTraits<DerivedClient>>
  ListConfigurationSetsPaginator(const Model::ListConfigurationSetsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListConfigurationSetsRequest,
                                             Pagination::ListConfigurationSetsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListContactLists operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactListsRequest,
                                    Pagination::ListContactListsPaginationTraits<DerivedClient>>
  ListContactListsPaginator(const Model::ListContactListsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListContactListsRequest,
                                             Pagination::ListContactListsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                          request};
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
   * Create a paginator for ListCustomVerificationEmailTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVerificationEmailTemplatesRequest,
                                    Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<DerivedClient>>
  ListCustomVerificationEmailTemplatesPaginator(const Model::ListCustomVerificationEmailTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListCustomVerificationEmailTemplatesRequest,
                                             Pagination::ListCustomVerificationEmailTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDedicatedIpPools operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDedicatedIpPoolsRequest,
                                    Pagination::ListDedicatedIpPoolsPaginationTraits<DerivedClient>>
  ListDedicatedIpPoolsPaginator(const Model::ListDedicatedIpPoolsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDedicatedIpPoolsRequest,
                                             Pagination::ListDedicatedIpPoolsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDeliverabilityTestReports operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeliverabilityTestReportsRequest,
                                    Pagination::ListDeliverabilityTestReportsPaginationTraits<DerivedClient>>
  ListDeliverabilityTestReportsPaginator(const Model::ListDeliverabilityTestReportsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDeliverabilityTestReportsRequest,
                                             Pagination::ListDeliverabilityTestReportsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListDomainDeliverabilityCampaigns operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainDeliverabilityCampaignsRequest,
                                    Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<DerivedClient>>
  ListDomainDeliverabilityCampaignsPaginator(const Model::ListDomainDeliverabilityCampaignsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListDomainDeliverabilityCampaignsRequest,
                                             Pagination::ListDomainDeliverabilityCampaignsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEmailIdentities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailIdentitiesRequest,
                                    Pagination::ListEmailIdentitiesPaginationTraits<DerivedClient>>
  ListEmailIdentitiesPaginator(const Model::ListEmailIdentitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailIdentitiesRequest,
                                             Pagination::ListEmailIdentitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListEmailTemplates operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailTemplatesRequest,
                                    Pagination::ListEmailTemplatesPaginationTraits<DerivedClient>>
  ListEmailTemplatesPaginator(const Model::ListEmailTemplatesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListEmailTemplatesRequest,
                                             Pagination::ListEmailTemplatesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListExportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportJobsRequest, Pagination::ListExportJobsPaginationTraits<DerivedClient>>
  ListExportJobsPaginator(const Model::ListExportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListExportJobsRequest,
                                             Pagination::ListExportJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListImportJobs operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest, Pagination::ListImportJobsPaginationTraits<DerivedClient>>
  ListImportJobsPaginator(const Model::ListImportJobsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListImportJobsRequest,
                                             Pagination::ListImportJobsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                        request};
  }

  /**
   * Create a paginator for ListMultiRegionEndpoints operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiRegionEndpointsRequest,
                                    Pagination::ListMultiRegionEndpointsPaginationTraits<DerivedClient>>
  ListMultiRegionEndpointsPaginator(const Model::ListMultiRegionEndpointsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListMultiRegionEndpointsRequest,
                                             Pagination::ListMultiRegionEndpointsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListRecommendations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                    Pagination::ListRecommendationsPaginationTraits<DerivedClient>>
  ListRecommendationsPaginator(const Model::ListRecommendationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListRecommendationsRequest,
                                             Pagination::ListRecommendationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListReputationEntities operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReputationEntitiesRequest,
                                    Pagination::ListReputationEntitiesPaginationTraits<DerivedClient>>
  ListReputationEntitiesPaginator(const Model::ListReputationEntitiesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListReputationEntitiesRequest,
                                             Pagination::ListReputationEntitiesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListResourceTenants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTenantsRequest,
                                    Pagination::ListResourceTenantsPaginationTraits<DerivedClient>>
  ListResourceTenantsPaginator(const Model::ListResourceTenantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListResourceTenantsRequest,
                                             Pagination::ListResourceTenantsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListSuppressedDestinations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuppressedDestinationsRequest,
                                    Pagination::ListSuppressedDestinationsPaginationTraits<DerivedClient>>
  ListSuppressedDestinationsPaginator(const Model::ListSuppressedDestinationsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSuppressedDestinationsRequest,
                                             Pagination::ListSuppressedDestinationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTenantResources operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTenantResourcesRequest,
                                    Pagination::ListTenantResourcesPaginationTraits<DerivedClient>>
  ListTenantResourcesPaginator(const Model::ListTenantResourcesRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTenantResourcesRequest,
                                             Pagination::ListTenantResourcesPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTenants operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTenantsRequest, Pagination::ListTenantsPaginationTraits<DerivedClient>>
  ListTenantsPaginator(const Model::ListTenantsRequest& request) {
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTenantsRequest,
                                             Pagination::ListTenantsPaginationTraits<DerivedClient>>{static_cast<DerivedClient*>(this),
                                                                                                     request};
  }
};
}  // namespace SESV2
}  // namespace Aws
