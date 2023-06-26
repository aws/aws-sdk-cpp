/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/neptune/NeptuneErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/neptune/NeptuneEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in NeptuneClient header */
#include <aws/neptune/model/AddSourceIdentifierToSubscriptionResult.h>
#include <aws/neptune/model/ApplyPendingMaintenanceActionResult.h>
#include <aws/neptune/model/CopyDBClusterParameterGroupResult.h>
#include <aws/neptune/model/CopyDBClusterSnapshotResult.h>
#include <aws/neptune/model/CopyDBParameterGroupResult.h>
#include <aws/neptune/model/CreateDBClusterResult.h>
#include <aws/neptune/model/CreateDBClusterEndpointResult.h>
#include <aws/neptune/model/CreateDBClusterParameterGroupResult.h>
#include <aws/neptune/model/CreateDBClusterSnapshotResult.h>
#include <aws/neptune/model/CreateDBInstanceResult.h>
#include <aws/neptune/model/CreateDBParameterGroupResult.h>
#include <aws/neptune/model/CreateDBSubnetGroupResult.h>
#include <aws/neptune/model/CreateEventSubscriptionResult.h>
#include <aws/neptune/model/CreateGlobalClusterResult.h>
#include <aws/neptune/model/DeleteDBClusterResult.h>
#include <aws/neptune/model/DeleteDBClusterEndpointResult.h>
#include <aws/neptune/model/DeleteDBClusterSnapshotResult.h>
#include <aws/neptune/model/DeleteDBInstanceResult.h>
#include <aws/neptune/model/DeleteEventSubscriptionResult.h>
#include <aws/neptune/model/DeleteGlobalClusterResult.h>
#include <aws/neptune/model/DescribeDBClusterEndpointsResult.h>
#include <aws/neptune/model/DescribeDBClusterParameterGroupsResult.h>
#include <aws/neptune/model/DescribeDBClusterParametersResult.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotAttributesResult.h>
#include <aws/neptune/model/DescribeDBClusterSnapshotsResult.h>
#include <aws/neptune/model/DescribeDBClustersResult.h>
#include <aws/neptune/model/DescribeDBEngineVersionsResult.h>
#include <aws/neptune/model/DescribeDBInstancesResult.h>
#include <aws/neptune/model/DescribeDBParameterGroupsResult.h>
#include <aws/neptune/model/DescribeDBParametersResult.h>
#include <aws/neptune/model/DescribeDBSubnetGroupsResult.h>
#include <aws/neptune/model/DescribeEngineDefaultClusterParametersResult.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersResult.h>
#include <aws/neptune/model/DescribeEventCategoriesResult.h>
#include <aws/neptune/model/DescribeEventSubscriptionsResult.h>
#include <aws/neptune/model/DescribeEventsResult.h>
#include <aws/neptune/model/DescribeGlobalClustersResult.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsResult.h>
#include <aws/neptune/model/DescribePendingMaintenanceActionsResult.h>
#include <aws/neptune/model/DescribeValidDBInstanceModificationsResult.h>
#include <aws/neptune/model/FailoverDBClusterResult.h>
#include <aws/neptune/model/FailoverGlobalClusterResult.h>
#include <aws/neptune/model/ListTagsForResourceResult.h>
#include <aws/neptune/model/ModifyDBClusterResult.h>
#include <aws/neptune/model/ModifyDBClusterEndpointResult.h>
#include <aws/neptune/model/ModifyDBClusterParameterGroupResult.h>
#include <aws/neptune/model/ModifyDBClusterSnapshotAttributeResult.h>
#include <aws/neptune/model/ModifyDBInstanceResult.h>
#include <aws/neptune/model/ModifyDBParameterGroupResult.h>
#include <aws/neptune/model/ModifyDBSubnetGroupResult.h>
#include <aws/neptune/model/ModifyEventSubscriptionResult.h>
#include <aws/neptune/model/ModifyGlobalClusterResult.h>
#include <aws/neptune/model/PromoteReadReplicaDBClusterResult.h>
#include <aws/neptune/model/RebootDBInstanceResult.h>
#include <aws/neptune/model/RemoveFromGlobalClusterResult.h>
#include <aws/neptune/model/RemoveSourceIdentifierFromSubscriptionResult.h>
#include <aws/neptune/model/ResetDBClusterParameterGroupResult.h>
#include <aws/neptune/model/ResetDBParameterGroupResult.h>
#include <aws/neptune/model/RestoreDBClusterFromSnapshotResult.h>
#include <aws/neptune/model/RestoreDBClusterToPointInTimeResult.h>
#include <aws/neptune/model/StartDBClusterResult.h>
#include <aws/neptune/model/StopDBClusterResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in NeptuneClient header */

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

  namespace Neptune
  {
    using NeptuneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using NeptuneEndpointProviderBase = Aws::Neptune::Endpoint::NeptuneEndpointProviderBase;
    using NeptuneEndpointProvider = Aws::Neptune::Endpoint::NeptuneEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in NeptuneClient header */
      class AddRoleToDBClusterRequest;
      class AddSourceIdentifierToSubscriptionRequest;
      class AddTagsToResourceRequest;
      class ApplyPendingMaintenanceActionRequest;
      class CopyDBClusterParameterGroupRequest;
      class CopyDBClusterSnapshotRequest;
      class CopyDBParameterGroupRequest;
      class CreateDBClusterRequest;
      class CreateDBClusterEndpointRequest;
      class CreateDBClusterParameterGroupRequest;
      class CreateDBClusterSnapshotRequest;
      class CreateDBInstanceRequest;
      class CreateDBParameterGroupRequest;
      class CreateDBSubnetGroupRequest;
      class CreateEventSubscriptionRequest;
      class CreateGlobalClusterRequest;
      class DeleteDBClusterRequest;
      class DeleteDBClusterEndpointRequest;
      class DeleteDBClusterParameterGroupRequest;
      class DeleteDBClusterSnapshotRequest;
      class DeleteDBInstanceRequest;
      class DeleteDBParameterGroupRequest;
      class DeleteDBSubnetGroupRequest;
      class DeleteEventSubscriptionRequest;
      class DeleteGlobalClusterRequest;
      class DescribeDBClusterEndpointsRequest;
      class DescribeDBClusterParameterGroupsRequest;
      class DescribeDBClusterParametersRequest;
      class DescribeDBClusterSnapshotAttributesRequest;
      class DescribeDBClusterSnapshotsRequest;
      class DescribeDBClustersRequest;
      class DescribeDBEngineVersionsRequest;
      class DescribeDBInstancesRequest;
      class DescribeDBParameterGroupsRequest;
      class DescribeDBParametersRequest;
      class DescribeDBSubnetGroupsRequest;
      class DescribeEngineDefaultClusterParametersRequest;
      class DescribeEngineDefaultParametersRequest;
      class DescribeEventCategoriesRequest;
      class DescribeEventSubscriptionsRequest;
      class DescribeEventsRequest;
      class DescribeGlobalClustersRequest;
      class DescribeOrderableDBInstanceOptionsRequest;
      class DescribePendingMaintenanceActionsRequest;
      class DescribeValidDBInstanceModificationsRequest;
      class FailoverDBClusterRequest;
      class FailoverGlobalClusterRequest;
      class ListTagsForResourceRequest;
      class ModifyDBClusterRequest;
      class ModifyDBClusterEndpointRequest;
      class ModifyDBClusterParameterGroupRequest;
      class ModifyDBClusterSnapshotAttributeRequest;
      class ModifyDBInstanceRequest;
      class ModifyDBParameterGroupRequest;
      class ModifyDBSubnetGroupRequest;
      class ModifyEventSubscriptionRequest;
      class ModifyGlobalClusterRequest;
      class PromoteReadReplicaDBClusterRequest;
      class RebootDBInstanceRequest;
      class RemoveFromGlobalClusterRequest;
      class RemoveRoleFromDBClusterRequest;
      class RemoveSourceIdentifierFromSubscriptionRequest;
      class RemoveTagsFromResourceRequest;
      class ResetDBClusterParameterGroupRequest;
      class ResetDBParameterGroupRequest;
      class RestoreDBClusterFromSnapshotRequest;
      class RestoreDBClusterToPointInTimeRequest;
      class StartDBClusterRequest;
      class StopDBClusterRequest;
      /* End of service model forward declarations required in NeptuneClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> AddRoleToDBClusterOutcome;
      typedef Aws::Utils::Outcome<AddSourceIdentifierToSubscriptionResult, NeptuneError> AddSourceIdentifierToSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> AddTagsToResourceOutcome;
      typedef Aws::Utils::Outcome<ApplyPendingMaintenanceActionResult, NeptuneError> ApplyPendingMaintenanceActionOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterParameterGroupResult, NeptuneError> CopyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CopyDBClusterSnapshotResult, NeptuneError> CopyDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CopyDBParameterGroupResult, NeptuneError> CopyDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterResult, NeptuneError> CreateDBClusterOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterEndpointResult, NeptuneError> CreateDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterParameterGroupResult, NeptuneError> CreateDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBClusterSnapshotResult, NeptuneError> CreateDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateDBInstanceResult, NeptuneError> CreateDBInstanceOutcome;
      typedef Aws::Utils::Outcome<CreateDBParameterGroupResult, NeptuneError> CreateDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<CreateDBSubnetGroupResult, NeptuneError> CreateDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<CreateEventSubscriptionResult, NeptuneError> CreateEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<CreateGlobalClusterResult, NeptuneError> CreateGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterResult, NeptuneError> DeleteDBClusterOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterEndpointResult, NeptuneError> DeleteDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteDBClusterSnapshotResult, NeptuneError> DeleteDBClusterSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteDBInstanceResult, NeptuneError> DeleteDBInstanceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> DeleteDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEventSubscriptionResult, NeptuneError> DeleteEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<DeleteGlobalClusterResult, NeptuneError> DeleteGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterEndpointsResult, NeptuneError> DescribeDBClusterEndpointsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParameterGroupsResult, NeptuneError> DescribeDBClusterParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterParametersResult, NeptuneError> DescribeDBClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotAttributesResult, NeptuneError> DescribeDBClusterSnapshotAttributesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClusterSnapshotsResult, NeptuneError> DescribeDBClusterSnapshotsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBClustersResult, NeptuneError> DescribeDBClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBEngineVersionsResult, NeptuneError> DescribeDBEngineVersionsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBInstancesResult, NeptuneError> DescribeDBInstancesOutcome;
      typedef Aws::Utils::Outcome<DescribeDBParameterGroupsResult, NeptuneError> DescribeDBParameterGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeDBParametersResult, NeptuneError> DescribeDBParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeDBSubnetGroupsResult, NeptuneError> DescribeDBSubnetGroupsOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultClusterParametersResult, NeptuneError> DescribeEngineDefaultClusterParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEngineDefaultParametersResult, NeptuneError> DescribeEngineDefaultParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeEventCategoriesResult, NeptuneError> DescribeEventCategoriesOutcome;
      typedef Aws::Utils::Outcome<DescribeEventSubscriptionsResult, NeptuneError> DescribeEventSubscriptionsOutcome;
      typedef Aws::Utils::Outcome<DescribeEventsResult, NeptuneError> DescribeEventsOutcome;
      typedef Aws::Utils::Outcome<DescribeGlobalClustersResult, NeptuneError> DescribeGlobalClustersOutcome;
      typedef Aws::Utils::Outcome<DescribeOrderableDBInstanceOptionsResult, NeptuneError> DescribeOrderableDBInstanceOptionsOutcome;
      typedef Aws::Utils::Outcome<DescribePendingMaintenanceActionsResult, NeptuneError> DescribePendingMaintenanceActionsOutcome;
      typedef Aws::Utils::Outcome<DescribeValidDBInstanceModificationsResult, NeptuneError> DescribeValidDBInstanceModificationsOutcome;
      typedef Aws::Utils::Outcome<FailoverDBClusterResult, NeptuneError> FailoverDBClusterOutcome;
      typedef Aws::Utils::Outcome<FailoverGlobalClusterResult, NeptuneError> FailoverGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, NeptuneError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterResult, NeptuneError> ModifyDBClusterOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterEndpointResult, NeptuneError> ModifyDBClusterEndpointOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterParameterGroupResult, NeptuneError> ModifyDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBClusterSnapshotAttributeResult, NeptuneError> ModifyDBClusterSnapshotAttributeOutcome;
      typedef Aws::Utils::Outcome<ModifyDBInstanceResult, NeptuneError> ModifyDBInstanceOutcome;
      typedef Aws::Utils::Outcome<ModifyDBParameterGroupResult, NeptuneError> ModifyDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyDBSubnetGroupResult, NeptuneError> ModifyDBSubnetGroupOutcome;
      typedef Aws::Utils::Outcome<ModifyEventSubscriptionResult, NeptuneError> ModifyEventSubscriptionOutcome;
      typedef Aws::Utils::Outcome<ModifyGlobalClusterResult, NeptuneError> ModifyGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<PromoteReadReplicaDBClusterResult, NeptuneError> PromoteReadReplicaDBClusterOutcome;
      typedef Aws::Utils::Outcome<RebootDBInstanceResult, NeptuneError> RebootDBInstanceOutcome;
      typedef Aws::Utils::Outcome<RemoveFromGlobalClusterResult, NeptuneError> RemoveFromGlobalClusterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> RemoveRoleFromDBClusterOutcome;
      typedef Aws::Utils::Outcome<RemoveSourceIdentifierFromSubscriptionResult, NeptuneError> RemoveSourceIdentifierFromSubscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneError> RemoveTagsFromResourceOutcome;
      typedef Aws::Utils::Outcome<ResetDBClusterParameterGroupResult, NeptuneError> ResetDBClusterParameterGroupOutcome;
      typedef Aws::Utils::Outcome<ResetDBParameterGroupResult, NeptuneError> ResetDBParameterGroupOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterFromSnapshotResult, NeptuneError> RestoreDBClusterFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreDBClusterToPointInTimeResult, NeptuneError> RestoreDBClusterToPointInTimeOutcome;
      typedef Aws::Utils::Outcome<StartDBClusterResult, NeptuneError> StartDBClusterOutcome;
      typedef Aws::Utils::Outcome<StopDBClusterResult, NeptuneError> StopDBClusterOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AddRoleToDBClusterOutcome> AddRoleToDBClusterOutcomeCallable;
      typedef std::future<AddSourceIdentifierToSubscriptionOutcome> AddSourceIdentifierToSubscriptionOutcomeCallable;
      typedef std::future<AddTagsToResourceOutcome> AddTagsToResourceOutcomeCallable;
      typedef std::future<ApplyPendingMaintenanceActionOutcome> ApplyPendingMaintenanceActionOutcomeCallable;
      typedef std::future<CopyDBClusterParameterGroupOutcome> CopyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CopyDBClusterSnapshotOutcome> CopyDBClusterSnapshotOutcomeCallable;
      typedef std::future<CopyDBParameterGroupOutcome> CopyDBParameterGroupOutcomeCallable;
      typedef std::future<CreateDBClusterOutcome> CreateDBClusterOutcomeCallable;
      typedef std::future<CreateDBClusterEndpointOutcome> CreateDBClusterEndpointOutcomeCallable;
      typedef std::future<CreateDBClusterParameterGroupOutcome> CreateDBClusterParameterGroupOutcomeCallable;
      typedef std::future<CreateDBClusterSnapshotOutcome> CreateDBClusterSnapshotOutcomeCallable;
      typedef std::future<CreateDBInstanceOutcome> CreateDBInstanceOutcomeCallable;
      typedef std::future<CreateDBParameterGroupOutcome> CreateDBParameterGroupOutcomeCallable;
      typedef std::future<CreateDBSubnetGroupOutcome> CreateDBSubnetGroupOutcomeCallable;
      typedef std::future<CreateEventSubscriptionOutcome> CreateEventSubscriptionOutcomeCallable;
      typedef std::future<CreateGlobalClusterOutcome> CreateGlobalClusterOutcomeCallable;
      typedef std::future<DeleteDBClusterOutcome> DeleteDBClusterOutcomeCallable;
      typedef std::future<DeleteDBClusterEndpointOutcome> DeleteDBClusterEndpointOutcomeCallable;
      typedef std::future<DeleteDBClusterParameterGroupOutcome> DeleteDBClusterParameterGroupOutcomeCallable;
      typedef std::future<DeleteDBClusterSnapshotOutcome> DeleteDBClusterSnapshotOutcomeCallable;
      typedef std::future<DeleteDBInstanceOutcome> DeleteDBInstanceOutcomeCallable;
      typedef std::future<DeleteDBParameterGroupOutcome> DeleteDBParameterGroupOutcomeCallable;
      typedef std::future<DeleteDBSubnetGroupOutcome> DeleteDBSubnetGroupOutcomeCallable;
      typedef std::future<DeleteEventSubscriptionOutcome> DeleteEventSubscriptionOutcomeCallable;
      typedef std::future<DeleteGlobalClusterOutcome> DeleteGlobalClusterOutcomeCallable;
      typedef std::future<DescribeDBClusterEndpointsOutcome> DescribeDBClusterEndpointsOutcomeCallable;
      typedef std::future<DescribeDBClusterParameterGroupsOutcome> DescribeDBClusterParameterGroupsOutcomeCallable;
      typedef std::future<DescribeDBClusterParametersOutcome> DescribeDBClusterParametersOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotAttributesOutcome> DescribeDBClusterSnapshotAttributesOutcomeCallable;
      typedef std::future<DescribeDBClusterSnapshotsOutcome> DescribeDBClusterSnapshotsOutcomeCallable;
      typedef std::future<DescribeDBClustersOutcome> DescribeDBClustersOutcomeCallable;
      typedef std::future<DescribeDBEngineVersionsOutcome> DescribeDBEngineVersionsOutcomeCallable;
      typedef std::future<DescribeDBInstancesOutcome> DescribeDBInstancesOutcomeCallable;
      typedef std::future<DescribeDBParameterGroupsOutcome> DescribeDBParameterGroupsOutcomeCallable;
      typedef std::future<DescribeDBParametersOutcome> DescribeDBParametersOutcomeCallable;
      typedef std::future<DescribeDBSubnetGroupsOutcome> DescribeDBSubnetGroupsOutcomeCallable;
      typedef std::future<DescribeEngineDefaultClusterParametersOutcome> DescribeEngineDefaultClusterParametersOutcomeCallable;
      typedef std::future<DescribeEngineDefaultParametersOutcome> DescribeEngineDefaultParametersOutcomeCallable;
      typedef std::future<DescribeEventCategoriesOutcome> DescribeEventCategoriesOutcomeCallable;
      typedef std::future<DescribeEventSubscriptionsOutcome> DescribeEventSubscriptionsOutcomeCallable;
      typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
      typedef std::future<DescribeGlobalClustersOutcome> DescribeGlobalClustersOutcomeCallable;
      typedef std::future<DescribeOrderableDBInstanceOptionsOutcome> DescribeOrderableDBInstanceOptionsOutcomeCallable;
      typedef std::future<DescribePendingMaintenanceActionsOutcome> DescribePendingMaintenanceActionsOutcomeCallable;
      typedef std::future<DescribeValidDBInstanceModificationsOutcome> DescribeValidDBInstanceModificationsOutcomeCallable;
      typedef std::future<FailoverDBClusterOutcome> FailoverDBClusterOutcomeCallable;
      typedef std::future<FailoverGlobalClusterOutcome> FailoverGlobalClusterOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ModifyDBClusterOutcome> ModifyDBClusterOutcomeCallable;
      typedef std::future<ModifyDBClusterEndpointOutcome> ModifyDBClusterEndpointOutcomeCallable;
      typedef std::future<ModifyDBClusterParameterGroupOutcome> ModifyDBClusterParameterGroupOutcomeCallable;
      typedef std::future<ModifyDBClusterSnapshotAttributeOutcome> ModifyDBClusterSnapshotAttributeOutcomeCallable;
      typedef std::future<ModifyDBInstanceOutcome> ModifyDBInstanceOutcomeCallable;
      typedef std::future<ModifyDBParameterGroupOutcome> ModifyDBParameterGroupOutcomeCallable;
      typedef std::future<ModifyDBSubnetGroupOutcome> ModifyDBSubnetGroupOutcomeCallable;
      typedef std::future<ModifyEventSubscriptionOutcome> ModifyEventSubscriptionOutcomeCallable;
      typedef std::future<ModifyGlobalClusterOutcome> ModifyGlobalClusterOutcomeCallable;
      typedef std::future<PromoteReadReplicaDBClusterOutcome> PromoteReadReplicaDBClusterOutcomeCallable;
      typedef std::future<RebootDBInstanceOutcome> RebootDBInstanceOutcomeCallable;
      typedef std::future<RemoveFromGlobalClusterOutcome> RemoveFromGlobalClusterOutcomeCallable;
      typedef std::future<RemoveRoleFromDBClusterOutcome> RemoveRoleFromDBClusterOutcomeCallable;
      typedef std::future<RemoveSourceIdentifierFromSubscriptionOutcome> RemoveSourceIdentifierFromSubscriptionOutcomeCallable;
      typedef std::future<RemoveTagsFromResourceOutcome> RemoveTagsFromResourceOutcomeCallable;
      typedef std::future<ResetDBClusterParameterGroupOutcome> ResetDBClusterParameterGroupOutcomeCallable;
      typedef std::future<ResetDBParameterGroupOutcome> ResetDBParameterGroupOutcomeCallable;
      typedef std::future<RestoreDBClusterFromSnapshotOutcome> RestoreDBClusterFromSnapshotOutcomeCallable;
      typedef std::future<RestoreDBClusterToPointInTimeOutcome> RestoreDBClusterToPointInTimeOutcomeCallable;
      typedef std::future<StartDBClusterOutcome> StartDBClusterOutcomeCallable;
      typedef std::future<StopDBClusterOutcome> StopDBClusterOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class NeptuneClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const NeptuneClient*, const Model::AddRoleToDBClusterRequest&, const Model::AddRoleToDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddRoleToDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::AddSourceIdentifierToSubscriptionRequest&, const Model::AddSourceIdentifierToSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddSourceIdentifierToSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::AddTagsToResourceRequest&, const Model::AddTagsToResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddTagsToResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ApplyPendingMaintenanceActionRequest&, const Model::ApplyPendingMaintenanceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ApplyPendingMaintenanceActionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBClusterParameterGroupRequest&, const Model::CopyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBClusterSnapshotRequest&, const Model::CopyDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CopyDBParameterGroupRequest&, const Model::CopyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterRequest&, const Model::CreateDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterEndpointRequest&, const Model::CreateDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterParameterGroupRequest&, const Model::CreateDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBClusterSnapshotRequest&, const Model::CreateDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBInstanceRequest&, const Model::CreateDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBParameterGroupRequest&, const Model::CreateDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateDBSubnetGroupRequest&, const Model::CreateDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateEventSubscriptionRequest&, const Model::CreateEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::CreateGlobalClusterRequest&, const Model::CreateGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterRequest&, const Model::DeleteDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterEndpointRequest&, const Model::DeleteDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterParameterGroupRequest&, const Model::DeleteDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBClusterSnapshotRequest&, const Model::DeleteDBClusterSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBClusterSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBInstanceRequest&, const Model::DeleteDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBParameterGroupRequest&, const Model::DeleteDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteDBSubnetGroupRequest&, const Model::DeleteDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteEventSubscriptionRequest&, const Model::DeleteEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DeleteGlobalClusterRequest&, const Model::DeleteGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterEndpointsRequest&, const Model::DescribeDBClusterEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterEndpointsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterParameterGroupsRequest&, const Model::DescribeDBClusterParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterParametersRequest&, const Model::DescribeDBClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterSnapshotAttributesRequest&, const Model::DescribeDBClusterSnapshotAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotAttributesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClusterSnapshotsRequest&, const Model::DescribeDBClusterSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClusterSnapshotsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBClustersRequest&, const Model::DescribeDBClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBClustersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBEngineVersionsRequest&, const Model::DescribeDBEngineVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBEngineVersionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBInstancesRequest&, const Model::DescribeDBInstancesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBInstancesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBParameterGroupsRequest&, const Model::DescribeDBParameterGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParameterGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBParametersRequest&, const Model::DescribeDBParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeDBSubnetGroupsRequest&, const Model::DescribeDBSubnetGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDBSubnetGroupsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEngineDefaultClusterParametersRequest&, const Model::DescribeEngineDefaultClusterParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultClusterParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEngineDefaultParametersRequest&, const Model::DescribeEngineDefaultParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEngineDefaultParametersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventCategoriesRequest&, const Model::DescribeEventCategoriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventCategoriesResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventSubscriptionsRequest&, const Model::DescribeEventSubscriptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventSubscriptionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeGlobalClustersRequest&, const Model::DescribeGlobalClustersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeGlobalClustersResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeOrderableDBInstanceOptionsRequest&, const Model::DescribeOrderableDBInstanceOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOrderableDBInstanceOptionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribePendingMaintenanceActionsRequest&, const Model::DescribePendingMaintenanceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePendingMaintenanceActionsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::DescribeValidDBInstanceModificationsRequest&, const Model::DescribeValidDBInstanceModificationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeValidDBInstanceModificationsResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::FailoverDBClusterRequest&, const Model::FailoverDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::FailoverGlobalClusterRequest&, const Model::FailoverGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > FailoverGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterRequest&, const Model::ModifyDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterEndpointRequest&, const Model::ModifyDBClusterEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterEndpointResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterParameterGroupRequest&, const Model::ModifyDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBClusterSnapshotAttributeRequest&, const Model::ModifyDBClusterSnapshotAttributeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBClusterSnapshotAttributeResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBInstanceRequest&, const Model::ModifyDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBParameterGroupRequest&, const Model::ModifyDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyDBSubnetGroupRequest&, const Model::ModifyDBSubnetGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyDBSubnetGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyEventSubscriptionRequest&, const Model::ModifyEventSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyEventSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ModifyGlobalClusterRequest&, const Model::ModifyGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::PromoteReadReplicaDBClusterRequest&, const Model::PromoteReadReplicaDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PromoteReadReplicaDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RebootDBInstanceRequest&, const Model::RebootDBInstanceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RebootDBInstanceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveFromGlobalClusterRequest&, const Model::RemoveFromGlobalClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveFromGlobalClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveRoleFromDBClusterRequest&, const Model::RemoveRoleFromDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveRoleFromDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveSourceIdentifierFromSubscriptionRequest&, const Model::RemoveSourceIdentifierFromSubscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveSourceIdentifierFromSubscriptionResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RemoveTagsFromResourceRequest&, const Model::RemoveTagsFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveTagsFromResourceResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ResetDBClusterParameterGroupRequest&, const Model::ResetDBClusterParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBClusterParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::ResetDBParameterGroupRequest&, const Model::ResetDBParameterGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ResetDBParameterGroupResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RestoreDBClusterFromSnapshotRequest&, const Model::RestoreDBClusterFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::RestoreDBClusterToPointInTimeRequest&, const Model::RestoreDBClusterToPointInTimeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreDBClusterToPointInTimeResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::StartDBClusterRequest&, const Model::StartDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDBClusterResponseReceivedHandler;
    typedef std::function<void(const NeptuneClient*, const Model::StopDBClusterRequest&, const Model::StopDBClusterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDBClusterResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Neptune
} // namespace Aws
