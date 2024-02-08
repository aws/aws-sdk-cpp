/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/opensearch/OpenSearchServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/opensearch/OpenSearchServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in OpenSearchServiceClient header */
#include <aws/opensearch/model/AcceptInboundConnectionResult.h>
#include <aws/opensearch/model/AddDataSourceResult.h>
#include <aws/opensearch/model/AssociatePackageResult.h>
#include <aws/opensearch/model/AuthorizeVpcEndpointAccessResult.h>
#include <aws/opensearch/model/CancelDomainConfigChangeResult.h>
#include <aws/opensearch/model/CancelServiceSoftwareUpdateResult.h>
#include <aws/opensearch/model/CreateDomainResult.h>
#include <aws/opensearch/model/CreateOutboundConnectionResult.h>
#include <aws/opensearch/model/CreatePackageResult.h>
#include <aws/opensearch/model/CreateVpcEndpointResult.h>
#include <aws/opensearch/model/DeleteDataSourceResult.h>
#include <aws/opensearch/model/DeleteDomainResult.h>
#include <aws/opensearch/model/DeleteInboundConnectionResult.h>
#include <aws/opensearch/model/DeleteOutboundConnectionResult.h>
#include <aws/opensearch/model/DeletePackageResult.h>
#include <aws/opensearch/model/DeleteVpcEndpointResult.h>
#include <aws/opensearch/model/DescribeDomainResult.h>
#include <aws/opensearch/model/DescribeDomainAutoTunesResult.h>
#include <aws/opensearch/model/DescribeDomainChangeProgressResult.h>
#include <aws/opensearch/model/DescribeDomainConfigResult.h>
#include <aws/opensearch/model/DescribeDomainHealthResult.h>
#include <aws/opensearch/model/DescribeDomainNodesResult.h>
#include <aws/opensearch/model/DescribeDomainsResult.h>
#include <aws/opensearch/model/DescribeDryRunProgressResult.h>
#include <aws/opensearch/model/DescribeInboundConnectionsResult.h>
#include <aws/opensearch/model/DescribeInstanceTypeLimitsResult.h>
#include <aws/opensearch/model/DescribeOutboundConnectionsResult.h>
#include <aws/opensearch/model/DescribePackagesResult.h>
#include <aws/opensearch/model/DescribeReservedInstanceOfferingsResult.h>
#include <aws/opensearch/model/DescribeReservedInstancesResult.h>
#include <aws/opensearch/model/DescribeVpcEndpointsResult.h>
#include <aws/opensearch/model/DissociatePackageResult.h>
#include <aws/opensearch/model/GetCompatibleVersionsResult.h>
#include <aws/opensearch/model/GetDataSourceResult.h>
#include <aws/opensearch/model/GetDomainMaintenanceStatusResult.h>
#include <aws/opensearch/model/GetPackageVersionHistoryResult.h>
#include <aws/opensearch/model/GetUpgradeHistoryResult.h>
#include <aws/opensearch/model/GetUpgradeStatusResult.h>
#include <aws/opensearch/model/ListDataSourcesResult.h>
#include <aws/opensearch/model/ListDomainMaintenancesResult.h>
#include <aws/opensearch/model/ListDomainNamesResult.h>
#include <aws/opensearch/model/ListDomainsForPackageResult.h>
#include <aws/opensearch/model/ListInstanceTypeDetailsResult.h>
#include <aws/opensearch/model/ListPackagesForDomainResult.h>
#include <aws/opensearch/model/ListScheduledActionsResult.h>
#include <aws/opensearch/model/ListTagsResult.h>
#include <aws/opensearch/model/ListVersionsResult.h>
#include <aws/opensearch/model/ListVpcEndpointAccessResult.h>
#include <aws/opensearch/model/ListVpcEndpointsResult.h>
#include <aws/opensearch/model/ListVpcEndpointsForDomainResult.h>
#include <aws/opensearch/model/PurchaseReservedInstanceOfferingResult.h>
#include <aws/opensearch/model/RejectInboundConnectionResult.h>
#include <aws/opensearch/model/RevokeVpcEndpointAccessResult.h>
#include <aws/opensearch/model/StartDomainMaintenanceResult.h>
#include <aws/opensearch/model/StartServiceSoftwareUpdateResult.h>
#include <aws/opensearch/model/UpdateDataSourceResult.h>
#include <aws/opensearch/model/UpdateDomainConfigResult.h>
#include <aws/opensearch/model/UpdatePackageResult.h>
#include <aws/opensearch/model/UpdateScheduledActionResult.h>
#include <aws/opensearch/model/UpdateVpcEndpointResult.h>
#include <aws/opensearch/model/UpgradeDomainResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in OpenSearchServiceClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace OpenSearchService
  {
    using OpenSearchServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using OpenSearchServiceEndpointProviderBase = Aws::OpenSearchService::Endpoint::OpenSearchServiceEndpointProviderBase;
    using OpenSearchServiceEndpointProvider = Aws::OpenSearchService::Endpoint::OpenSearchServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in OpenSearchServiceClient header */
      class AcceptInboundConnectionRequest;
      class AddDataSourceRequest;
      class AddTagsRequest;
      class AssociatePackageRequest;
      class AuthorizeVpcEndpointAccessRequest;
      class CancelDomainConfigChangeRequest;
      class CancelServiceSoftwareUpdateRequest;
      class CreateDomainRequest;
      class CreateOutboundConnectionRequest;
      class CreatePackageRequest;
      class CreateVpcEndpointRequest;
      class DeleteDataSourceRequest;
      class DeleteDomainRequest;
      class DeleteInboundConnectionRequest;
      class DeleteOutboundConnectionRequest;
      class DeletePackageRequest;
      class DeleteVpcEndpointRequest;
      class DescribeDomainRequest;
      class DescribeDomainAutoTunesRequest;
      class DescribeDomainChangeProgressRequest;
      class DescribeDomainConfigRequest;
      class DescribeDomainHealthRequest;
      class DescribeDomainNodesRequest;
      class DescribeDomainsRequest;
      class DescribeDryRunProgressRequest;
      class DescribeInboundConnectionsRequest;
      class DescribeInstanceTypeLimitsRequest;
      class DescribeOutboundConnectionsRequest;
      class DescribePackagesRequest;
      class DescribeReservedInstanceOfferingsRequest;
      class DescribeReservedInstancesRequest;
      class DescribeVpcEndpointsRequest;
      class DissociatePackageRequest;
      class GetCompatibleVersionsRequest;
      class GetDataSourceRequest;
      class GetDomainMaintenanceStatusRequest;
      class GetPackageVersionHistoryRequest;
      class GetUpgradeHistoryRequest;
      class GetUpgradeStatusRequest;
      class ListDataSourcesRequest;
      class ListDomainMaintenancesRequest;
      class ListDomainNamesRequest;
      class ListDomainsForPackageRequest;
      class ListInstanceTypeDetailsRequest;
      class ListPackagesForDomainRequest;
      class ListScheduledActionsRequest;
      class ListTagsRequest;
      class ListVersionsRequest;
      class ListVpcEndpointAccessRequest;
      class ListVpcEndpointsRequest;
      class ListVpcEndpointsForDomainRequest;
      class PurchaseReservedInstanceOfferingRequest;
      class RejectInboundConnectionRequest;
      class RemoveTagsRequest;
      class RevokeVpcEndpointAccessRequest;
      class StartDomainMaintenanceRequest;
      class StartServiceSoftwareUpdateRequest;
      class UpdateDataSourceRequest;
      class UpdateDomainConfigRequest;
      class UpdatePackageRequest;
      class UpdateScheduledActionRequest;
      class UpdateVpcEndpointRequest;
      class UpgradeDomainRequest;
      /* End of service model forward declarations required in OpenSearchServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptInboundConnectionResult, OpenSearchServiceError> AcceptInboundConnectionOutcome;
      typedef Aws::Utils::Outcome<AddDataSourceResult, OpenSearchServiceError> AddDataSourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpenSearchServiceError> AddTagsOutcome;
      typedef Aws::Utils::Outcome<AssociatePackageResult, OpenSearchServiceError> AssociatePackageOutcome;
      typedef Aws::Utils::Outcome<AuthorizeVpcEndpointAccessResult, OpenSearchServiceError> AuthorizeVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<CancelDomainConfigChangeResult, OpenSearchServiceError> CancelDomainConfigChangeOutcome;
      typedef Aws::Utils::Outcome<CancelServiceSoftwareUpdateResult, OpenSearchServiceError> CancelServiceSoftwareUpdateOutcome;
      typedef Aws::Utils::Outcome<CreateDomainResult, OpenSearchServiceError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<CreateOutboundConnectionResult, OpenSearchServiceError> CreateOutboundConnectionOutcome;
      typedef Aws::Utils::Outcome<CreatePackageResult, OpenSearchServiceError> CreatePackageOutcome;
      typedef Aws::Utils::Outcome<CreateVpcEndpointResult, OpenSearchServiceError> CreateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteDataSourceResult, OpenSearchServiceError> DeleteDataSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteDomainResult, OpenSearchServiceError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DeleteInboundConnectionResult, OpenSearchServiceError> DeleteInboundConnectionOutcome;
      typedef Aws::Utils::Outcome<DeleteOutboundConnectionResult, OpenSearchServiceError> DeleteOutboundConnectionOutcome;
      typedef Aws::Utils::Outcome<DeletePackageResult, OpenSearchServiceError> DeletePackageOutcome;
      typedef Aws::Utils::Outcome<DeleteVpcEndpointResult, OpenSearchServiceError> DeleteVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainResult, OpenSearchServiceError> DescribeDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainAutoTunesResult, OpenSearchServiceError> DescribeDomainAutoTunesOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainChangeProgressResult, OpenSearchServiceError> DescribeDomainChangeProgressOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainConfigResult, OpenSearchServiceError> DescribeDomainConfigOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainHealthResult, OpenSearchServiceError> DescribeDomainHealthOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainNodesResult, OpenSearchServiceError> DescribeDomainNodesOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainsResult, OpenSearchServiceError> DescribeDomainsOutcome;
      typedef Aws::Utils::Outcome<DescribeDryRunProgressResult, OpenSearchServiceError> DescribeDryRunProgressOutcome;
      typedef Aws::Utils::Outcome<DescribeInboundConnectionsResult, OpenSearchServiceError> DescribeInboundConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribeInstanceTypeLimitsResult, OpenSearchServiceError> DescribeInstanceTypeLimitsOutcome;
      typedef Aws::Utils::Outcome<DescribeOutboundConnectionsResult, OpenSearchServiceError> DescribeOutboundConnectionsOutcome;
      typedef Aws::Utils::Outcome<DescribePackagesResult, OpenSearchServiceError> DescribePackagesOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstanceOfferingsResult, OpenSearchServiceError> DescribeReservedInstanceOfferingsOutcome;
      typedef Aws::Utils::Outcome<DescribeReservedInstancesResult, OpenSearchServiceError> DescribeReservedInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeVpcEndpointsResult, OpenSearchServiceError> DescribeVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<DissociatePackageResult, OpenSearchServiceError> DissociatePackageOutcome;
      typedef Aws::Utils::Outcome<GetCompatibleVersionsResult, OpenSearchServiceError> GetCompatibleVersionsOutcome;
      typedef Aws::Utils::Outcome<GetDataSourceResult, OpenSearchServiceError> GetDataSourceOutcome;
      typedef Aws::Utils::Outcome<GetDomainMaintenanceStatusResult, OpenSearchServiceError> GetDomainMaintenanceStatusOutcome;
      typedef Aws::Utils::Outcome<GetPackageVersionHistoryResult, OpenSearchServiceError> GetPackageVersionHistoryOutcome;
      typedef Aws::Utils::Outcome<GetUpgradeHistoryResult, OpenSearchServiceError> GetUpgradeHistoryOutcome;
      typedef Aws::Utils::Outcome<GetUpgradeStatusResult, OpenSearchServiceError> GetUpgradeStatusOutcome;
      typedef Aws::Utils::Outcome<ListDataSourcesResult, OpenSearchServiceError> ListDataSourcesOutcome;
      typedef Aws::Utils::Outcome<ListDomainMaintenancesResult, OpenSearchServiceError> ListDomainMaintenancesOutcome;
      typedef Aws::Utils::Outcome<ListDomainNamesResult, OpenSearchServiceError> ListDomainNamesOutcome;
      typedef Aws::Utils::Outcome<ListDomainsForPackageResult, OpenSearchServiceError> ListDomainsForPackageOutcome;
      typedef Aws::Utils::Outcome<ListInstanceTypeDetailsResult, OpenSearchServiceError> ListInstanceTypeDetailsOutcome;
      typedef Aws::Utils::Outcome<ListPackagesForDomainResult, OpenSearchServiceError> ListPackagesForDomainOutcome;
      typedef Aws::Utils::Outcome<ListScheduledActionsResult, OpenSearchServiceError> ListScheduledActionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsResult, OpenSearchServiceError> ListTagsOutcome;
      typedef Aws::Utils::Outcome<ListVersionsResult, OpenSearchServiceError> ListVersionsOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointAccessResult, OpenSearchServiceError> ListVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointsResult, OpenSearchServiceError> ListVpcEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListVpcEndpointsForDomainResult, OpenSearchServiceError> ListVpcEndpointsForDomainOutcome;
      typedef Aws::Utils::Outcome<PurchaseReservedInstanceOfferingResult, OpenSearchServiceError> PurchaseReservedInstanceOfferingOutcome;
      typedef Aws::Utils::Outcome<RejectInboundConnectionResult, OpenSearchServiceError> RejectInboundConnectionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, OpenSearchServiceError> RemoveTagsOutcome;
      typedef Aws::Utils::Outcome<RevokeVpcEndpointAccessResult, OpenSearchServiceError> RevokeVpcEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<StartDomainMaintenanceResult, OpenSearchServiceError> StartDomainMaintenanceOutcome;
      typedef Aws::Utils::Outcome<StartServiceSoftwareUpdateResult, OpenSearchServiceError> StartServiceSoftwareUpdateOutcome;
      typedef Aws::Utils::Outcome<UpdateDataSourceResult, OpenSearchServiceError> UpdateDataSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainConfigResult, OpenSearchServiceError> UpdateDomainConfigOutcome;
      typedef Aws::Utils::Outcome<UpdatePackageResult, OpenSearchServiceError> UpdatePackageOutcome;
      typedef Aws::Utils::Outcome<UpdateScheduledActionResult, OpenSearchServiceError> UpdateScheduledActionOutcome;
      typedef Aws::Utils::Outcome<UpdateVpcEndpointResult, OpenSearchServiceError> UpdateVpcEndpointOutcome;
      typedef Aws::Utils::Outcome<UpgradeDomainResult, OpenSearchServiceError> UpgradeDomainOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptInboundConnectionOutcome> AcceptInboundConnectionOutcomeCallable;
      typedef std::future<AddDataSourceOutcome> AddDataSourceOutcomeCallable;
      typedef std::future<AddTagsOutcome> AddTagsOutcomeCallable;
      typedef std::future<AssociatePackageOutcome> AssociatePackageOutcomeCallable;
      typedef std::future<AuthorizeVpcEndpointAccessOutcome> AuthorizeVpcEndpointAccessOutcomeCallable;
      typedef std::future<CancelDomainConfigChangeOutcome> CancelDomainConfigChangeOutcomeCallable;
      typedef std::future<CancelServiceSoftwareUpdateOutcome> CancelServiceSoftwareUpdateOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<CreateOutboundConnectionOutcome> CreateOutboundConnectionOutcomeCallable;
      typedef std::future<CreatePackageOutcome> CreatePackageOutcomeCallable;
      typedef std::future<CreateVpcEndpointOutcome> CreateVpcEndpointOutcomeCallable;
      typedef std::future<DeleteDataSourceOutcome> DeleteDataSourceOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteInboundConnectionOutcome> DeleteInboundConnectionOutcomeCallable;
      typedef std::future<DeleteOutboundConnectionOutcome> DeleteOutboundConnectionOutcomeCallable;
      typedef std::future<DeletePackageOutcome> DeletePackageOutcomeCallable;
      typedef std::future<DeleteVpcEndpointOutcome> DeleteVpcEndpointOutcomeCallable;
      typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
      typedef std::future<DescribeDomainAutoTunesOutcome> DescribeDomainAutoTunesOutcomeCallable;
      typedef std::future<DescribeDomainChangeProgressOutcome> DescribeDomainChangeProgressOutcomeCallable;
      typedef std::future<DescribeDomainConfigOutcome> DescribeDomainConfigOutcomeCallable;
      typedef std::future<DescribeDomainHealthOutcome> DescribeDomainHealthOutcomeCallable;
      typedef std::future<DescribeDomainNodesOutcome> DescribeDomainNodesOutcomeCallable;
      typedef std::future<DescribeDomainsOutcome> DescribeDomainsOutcomeCallable;
      typedef std::future<DescribeDryRunProgressOutcome> DescribeDryRunProgressOutcomeCallable;
      typedef std::future<DescribeInboundConnectionsOutcome> DescribeInboundConnectionsOutcomeCallable;
      typedef std::future<DescribeInstanceTypeLimitsOutcome> DescribeInstanceTypeLimitsOutcomeCallable;
      typedef std::future<DescribeOutboundConnectionsOutcome> DescribeOutboundConnectionsOutcomeCallable;
      typedef std::future<DescribePackagesOutcome> DescribePackagesOutcomeCallable;
      typedef std::future<DescribeReservedInstanceOfferingsOutcome> DescribeReservedInstanceOfferingsOutcomeCallable;
      typedef std::future<DescribeReservedInstancesOutcome> DescribeReservedInstancesOutcomeCallable;
      typedef std::future<DescribeVpcEndpointsOutcome> DescribeVpcEndpointsOutcomeCallable;
      typedef std::future<DissociatePackageOutcome> DissociatePackageOutcomeCallable;
      typedef std::future<GetCompatibleVersionsOutcome> GetCompatibleVersionsOutcomeCallable;
      typedef std::future<GetDataSourceOutcome> GetDataSourceOutcomeCallable;
      typedef std::future<GetDomainMaintenanceStatusOutcome> GetDomainMaintenanceStatusOutcomeCallable;
      typedef std::future<GetPackageVersionHistoryOutcome> GetPackageVersionHistoryOutcomeCallable;
      typedef std::future<GetUpgradeHistoryOutcome> GetUpgradeHistoryOutcomeCallable;
      typedef std::future<GetUpgradeStatusOutcome> GetUpgradeStatusOutcomeCallable;
      typedef std::future<ListDataSourcesOutcome> ListDataSourcesOutcomeCallable;
      typedef std::future<ListDomainMaintenancesOutcome> ListDomainMaintenancesOutcomeCallable;
      typedef std::future<ListDomainNamesOutcome> ListDomainNamesOutcomeCallable;
      typedef std::future<ListDomainsForPackageOutcome> ListDomainsForPackageOutcomeCallable;
      typedef std::future<ListInstanceTypeDetailsOutcome> ListInstanceTypeDetailsOutcomeCallable;
      typedef std::future<ListPackagesForDomainOutcome> ListPackagesForDomainOutcomeCallable;
      typedef std::future<ListScheduledActionsOutcome> ListScheduledActionsOutcomeCallable;
      typedef std::future<ListTagsOutcome> ListTagsOutcomeCallable;
      typedef std::future<ListVersionsOutcome> ListVersionsOutcomeCallable;
      typedef std::future<ListVpcEndpointAccessOutcome> ListVpcEndpointAccessOutcomeCallable;
      typedef std::future<ListVpcEndpointsOutcome> ListVpcEndpointsOutcomeCallable;
      typedef std::future<ListVpcEndpointsForDomainOutcome> ListVpcEndpointsForDomainOutcomeCallable;
      typedef std::future<PurchaseReservedInstanceOfferingOutcome> PurchaseReservedInstanceOfferingOutcomeCallable;
      typedef std::future<RejectInboundConnectionOutcome> RejectInboundConnectionOutcomeCallable;
      typedef std::future<RemoveTagsOutcome> RemoveTagsOutcomeCallable;
      typedef std::future<RevokeVpcEndpointAccessOutcome> RevokeVpcEndpointAccessOutcomeCallable;
      typedef std::future<StartDomainMaintenanceOutcome> StartDomainMaintenanceOutcomeCallable;
      typedef std::future<StartServiceSoftwareUpdateOutcome> StartServiceSoftwareUpdateOutcomeCallable;
      typedef std::future<UpdateDataSourceOutcome> UpdateDataSourceOutcomeCallable;
      typedef std::future<UpdateDomainConfigOutcome> UpdateDomainConfigOutcomeCallable;
      typedef std::future<UpdatePackageOutcome> UpdatePackageOutcomeCallable;
      typedef std::future<UpdateScheduledActionOutcome> UpdateScheduledActionOutcomeCallable;
      typedef std::future<UpdateVpcEndpointOutcome> UpdateVpcEndpointOutcomeCallable;
      typedef std::future<UpgradeDomainOutcome> UpgradeDomainOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class OpenSearchServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AcceptInboundConnectionRequest&, const Model::AcceptInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AddDataSourceRequest&, const Model::AddDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddDataSourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AddTagsRequest&, const Model::AddTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AssociatePackageRequest&, const Model::AssociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::AuthorizeVpcEndpointAccessRequest&, const Model::AuthorizeVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AuthorizeVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CancelDomainConfigChangeRequest&, const Model::CancelDomainConfigChangeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelDomainConfigChangeResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CancelServiceSoftwareUpdateRequest&, const Model::CancelServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreateOutboundConnectionRequest&, const Model::CreateOutboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOutboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreatePackageRequest&, const Model::CreatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::CreateVpcEndpointRequest&, const Model::CreateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteDataSourceRequest&, const Model::DeleteDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDataSourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteInboundConnectionRequest&, const Model::DeleteInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteOutboundConnectionRequest&, const Model::DeleteOutboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOutboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeletePackageRequest&, const Model::DeletePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DeleteVpcEndpointRequest&, const Model::DeleteVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainAutoTunesRequest&, const Model::DescribeDomainAutoTunesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainAutoTunesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainChangeProgressRequest&, const Model::DescribeDomainChangeProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainChangeProgressResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainConfigRequest&, const Model::DescribeDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainHealthRequest&, const Model::DescribeDomainHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainHealthResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainNodesRequest&, const Model::DescribeDomainNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainNodesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDomainsRequest&, const Model::DescribeDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeDryRunProgressRequest&, const Model::DescribeDryRunProgressOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDryRunProgressResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeInboundConnectionsRequest&, const Model::DescribeInboundConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInboundConnectionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeInstanceTypeLimitsRequest&, const Model::DescribeInstanceTypeLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInstanceTypeLimitsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeOutboundConnectionsRequest&, const Model::DescribeOutboundConnectionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOutboundConnectionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribePackagesRequest&, const Model::DescribePackagesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePackagesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeReservedInstanceOfferingsRequest&, const Model::DescribeReservedInstanceOfferingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstanceOfferingsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeReservedInstancesRequest&, const Model::DescribeReservedInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReservedInstancesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DescribeVpcEndpointsRequest&, const Model::DescribeVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::DissociatePackageRequest&, const Model::DissociatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DissociatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetCompatibleVersionsRequest&, const Model::GetCompatibleVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCompatibleVersionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetDataSourceRequest&, const Model::GetDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDataSourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetDomainMaintenanceStatusRequest&, const Model::GetDomainMaintenanceStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDomainMaintenanceStatusResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetPackageVersionHistoryRequest&, const Model::GetPackageVersionHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPackageVersionHistoryResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetUpgradeHistoryRequest&, const Model::GetUpgradeHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeHistoryResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::GetUpgradeStatusRequest&, const Model::GetUpgradeStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUpgradeStatusResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDataSourcesRequest&, const Model::ListDataSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDataSourcesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDomainMaintenancesRequest&, const Model::ListDomainMaintenancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainMaintenancesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDomainNamesRequest&, const Model::ListDomainNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainNamesResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListDomainsForPackageRequest&, const Model::ListDomainsForPackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsForPackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListInstanceTypeDetailsRequest&, const Model::ListInstanceTypeDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInstanceTypeDetailsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListPackagesForDomainRequest&, const Model::ListPackagesForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPackagesForDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListScheduledActionsRequest&, const Model::ListScheduledActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListScheduledActionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListTagsRequest&, const Model::ListTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListVersionsRequest&, const Model::ListVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVersionsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListVpcEndpointAccessRequest&, const Model::ListVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListVpcEndpointsRequest&, const Model::ListVpcEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::ListVpcEndpointsForDomainRequest&, const Model::ListVpcEndpointsForDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVpcEndpointsForDomainResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::PurchaseReservedInstanceOfferingRequest&, const Model::PurchaseReservedInstanceOfferingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PurchaseReservedInstanceOfferingResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::RejectInboundConnectionRequest&, const Model::RejectInboundConnectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectInboundConnectionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::RemoveTagsRequest&, const Model::RemoveTagsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::RevokeVpcEndpointAccessRequest&, const Model::RevokeVpcEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RevokeVpcEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::StartDomainMaintenanceRequest&, const Model::StartDomainMaintenanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDomainMaintenanceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::StartServiceSoftwareUpdateRequest&, const Model::StartServiceSoftwareUpdateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartServiceSoftwareUpdateResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdateDataSourceRequest&, const Model::UpdateDataSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDataSourceResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdateDomainConfigRequest&, const Model::UpdateDomainConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainConfigResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdatePackageRequest&, const Model::UpdatePackageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePackageResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdateScheduledActionRequest&, const Model::UpdateScheduledActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateScheduledActionResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpdateVpcEndpointRequest&, const Model::UpdateVpcEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVpcEndpointResponseReceivedHandler;
    typedef std::function<void(const OpenSearchServiceClient*, const Model::UpgradeDomainRequest&, const Model::UpgradeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpgradeDomainResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace OpenSearchService
} // namespace Aws
