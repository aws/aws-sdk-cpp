/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/redshift-serverless/RedshiftServerlessErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/redshift-serverless/RedshiftServerlessEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RedshiftServerlessClient header */
#include <aws/redshift-serverless/model/ConvertRecoveryPointToSnapshotResult.h>
#include <aws/redshift-serverless/model/CreateEndpointAccessResult.h>
#include <aws/redshift-serverless/model/CreateNamespaceResult.h>
#include <aws/redshift-serverless/model/CreateSnapshotResult.h>
#include <aws/redshift-serverless/model/CreateUsageLimitResult.h>
#include <aws/redshift-serverless/model/CreateWorkgroupResult.h>
#include <aws/redshift-serverless/model/DeleteEndpointAccessResult.h>
#include <aws/redshift-serverless/model/DeleteNamespaceResult.h>
#include <aws/redshift-serverless/model/DeleteResourcePolicyResult.h>
#include <aws/redshift-serverless/model/DeleteSnapshotResult.h>
#include <aws/redshift-serverless/model/DeleteUsageLimitResult.h>
#include <aws/redshift-serverless/model/DeleteWorkgroupResult.h>
#include <aws/redshift-serverless/model/GetCredentialsResult.h>
#include <aws/redshift-serverless/model/GetEndpointAccessResult.h>
#include <aws/redshift-serverless/model/GetNamespaceResult.h>
#include <aws/redshift-serverless/model/GetRecoveryPointResult.h>
#include <aws/redshift-serverless/model/GetResourcePolicyResult.h>
#include <aws/redshift-serverless/model/GetSnapshotResult.h>
#include <aws/redshift-serverless/model/GetTableRestoreStatusResult.h>
#include <aws/redshift-serverless/model/GetUsageLimitResult.h>
#include <aws/redshift-serverless/model/GetWorkgroupResult.h>
#include <aws/redshift-serverless/model/ListEndpointAccessResult.h>
#include <aws/redshift-serverless/model/ListNamespacesResult.h>
#include <aws/redshift-serverless/model/ListRecoveryPointsResult.h>
#include <aws/redshift-serverless/model/ListSnapshotsResult.h>
#include <aws/redshift-serverless/model/ListTableRestoreStatusResult.h>
#include <aws/redshift-serverless/model/ListTagsForResourceResult.h>
#include <aws/redshift-serverless/model/ListUsageLimitsResult.h>
#include <aws/redshift-serverless/model/ListWorkgroupsResult.h>
#include <aws/redshift-serverless/model/PutResourcePolicyResult.h>
#include <aws/redshift-serverless/model/RestoreFromRecoveryPointResult.h>
#include <aws/redshift-serverless/model/RestoreFromSnapshotResult.h>
#include <aws/redshift-serverless/model/RestoreTableFromSnapshotResult.h>
#include <aws/redshift-serverless/model/TagResourceResult.h>
#include <aws/redshift-serverless/model/UntagResourceResult.h>
#include <aws/redshift-serverless/model/UpdateEndpointAccessResult.h>
#include <aws/redshift-serverless/model/UpdateNamespaceResult.h>
#include <aws/redshift-serverless/model/UpdateSnapshotResult.h>
#include <aws/redshift-serverless/model/UpdateUsageLimitResult.h>
#include <aws/redshift-serverless/model/UpdateWorkgroupResult.h>
/* End of service model headers required in RedshiftServerlessClient header */

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

  namespace RedshiftServerless
  {
    using RedshiftServerlessClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RedshiftServerlessEndpointProviderBase = Aws::RedshiftServerless::Endpoint::RedshiftServerlessEndpointProviderBase;
    using RedshiftServerlessEndpointProvider = Aws::RedshiftServerless::Endpoint::RedshiftServerlessEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RedshiftServerlessClient header */
      class ConvertRecoveryPointToSnapshotRequest;
      class CreateEndpointAccessRequest;
      class CreateNamespaceRequest;
      class CreateSnapshotRequest;
      class CreateUsageLimitRequest;
      class CreateWorkgroupRequest;
      class DeleteEndpointAccessRequest;
      class DeleteNamespaceRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSnapshotRequest;
      class DeleteUsageLimitRequest;
      class DeleteWorkgroupRequest;
      class GetCredentialsRequest;
      class GetEndpointAccessRequest;
      class GetNamespaceRequest;
      class GetRecoveryPointRequest;
      class GetResourcePolicyRequest;
      class GetSnapshotRequest;
      class GetTableRestoreStatusRequest;
      class GetUsageLimitRequest;
      class GetWorkgroupRequest;
      class ListEndpointAccessRequest;
      class ListNamespacesRequest;
      class ListRecoveryPointsRequest;
      class ListSnapshotsRequest;
      class ListTableRestoreStatusRequest;
      class ListTagsForResourceRequest;
      class ListUsageLimitsRequest;
      class ListWorkgroupsRequest;
      class PutResourcePolicyRequest;
      class RestoreFromRecoveryPointRequest;
      class RestoreFromSnapshotRequest;
      class RestoreTableFromSnapshotRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateEndpointAccessRequest;
      class UpdateNamespaceRequest;
      class UpdateSnapshotRequest;
      class UpdateUsageLimitRequest;
      class UpdateWorkgroupRequest;
      /* End of service model forward declarations required in RedshiftServerlessClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ConvertRecoveryPointToSnapshotResult, RedshiftServerlessError> ConvertRecoveryPointToSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateEndpointAccessResult, RedshiftServerlessError> CreateEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<CreateNamespaceResult, RedshiftServerlessError> CreateNamespaceOutcome;
      typedef Aws::Utils::Outcome<CreateSnapshotResult, RedshiftServerlessError> CreateSnapshotOutcome;
      typedef Aws::Utils::Outcome<CreateUsageLimitResult, RedshiftServerlessError> CreateUsageLimitOutcome;
      typedef Aws::Utils::Outcome<CreateWorkgroupResult, RedshiftServerlessError> CreateWorkgroupOutcome;
      typedef Aws::Utils::Outcome<DeleteEndpointAccessResult, RedshiftServerlessError> DeleteEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<DeleteNamespaceResult, RedshiftServerlessError> DeleteNamespaceOutcome;
      typedef Aws::Utils::Outcome<DeleteResourcePolicyResult, RedshiftServerlessError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteSnapshotResult, RedshiftServerlessError> DeleteSnapshotOutcome;
      typedef Aws::Utils::Outcome<DeleteUsageLimitResult, RedshiftServerlessError> DeleteUsageLimitOutcome;
      typedef Aws::Utils::Outcome<DeleteWorkgroupResult, RedshiftServerlessError> DeleteWorkgroupOutcome;
      typedef Aws::Utils::Outcome<GetCredentialsResult, RedshiftServerlessError> GetCredentialsOutcome;
      typedef Aws::Utils::Outcome<GetEndpointAccessResult, RedshiftServerlessError> GetEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<GetNamespaceResult, RedshiftServerlessError> GetNamespaceOutcome;
      typedef Aws::Utils::Outcome<GetRecoveryPointResult, RedshiftServerlessError> GetRecoveryPointOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, RedshiftServerlessError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetSnapshotResult, RedshiftServerlessError> GetSnapshotOutcome;
      typedef Aws::Utils::Outcome<GetTableRestoreStatusResult, RedshiftServerlessError> GetTableRestoreStatusOutcome;
      typedef Aws::Utils::Outcome<GetUsageLimitResult, RedshiftServerlessError> GetUsageLimitOutcome;
      typedef Aws::Utils::Outcome<GetWorkgroupResult, RedshiftServerlessError> GetWorkgroupOutcome;
      typedef Aws::Utils::Outcome<ListEndpointAccessResult, RedshiftServerlessError> ListEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<ListNamespacesResult, RedshiftServerlessError> ListNamespacesOutcome;
      typedef Aws::Utils::Outcome<ListRecoveryPointsResult, RedshiftServerlessError> ListRecoveryPointsOutcome;
      typedef Aws::Utils::Outcome<ListSnapshotsResult, RedshiftServerlessError> ListSnapshotsOutcome;
      typedef Aws::Utils::Outcome<ListTableRestoreStatusResult, RedshiftServerlessError> ListTableRestoreStatusOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RedshiftServerlessError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListUsageLimitsResult, RedshiftServerlessError> ListUsageLimitsOutcome;
      typedef Aws::Utils::Outcome<ListWorkgroupsResult, RedshiftServerlessError> ListWorkgroupsOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, RedshiftServerlessError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<RestoreFromRecoveryPointResult, RedshiftServerlessError> RestoreFromRecoveryPointOutcome;
      typedef Aws::Utils::Outcome<RestoreFromSnapshotResult, RedshiftServerlessError> RestoreFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<RestoreTableFromSnapshotResult, RedshiftServerlessError> RestoreTableFromSnapshotOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RedshiftServerlessError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RedshiftServerlessError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateEndpointAccessResult, RedshiftServerlessError> UpdateEndpointAccessOutcome;
      typedef Aws::Utils::Outcome<UpdateNamespaceResult, RedshiftServerlessError> UpdateNamespaceOutcome;
      typedef Aws::Utils::Outcome<UpdateSnapshotResult, RedshiftServerlessError> UpdateSnapshotOutcome;
      typedef Aws::Utils::Outcome<UpdateUsageLimitResult, RedshiftServerlessError> UpdateUsageLimitOutcome;
      typedef Aws::Utils::Outcome<UpdateWorkgroupResult, RedshiftServerlessError> UpdateWorkgroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ConvertRecoveryPointToSnapshotOutcome> ConvertRecoveryPointToSnapshotOutcomeCallable;
      typedef std::future<CreateEndpointAccessOutcome> CreateEndpointAccessOutcomeCallable;
      typedef std::future<CreateNamespaceOutcome> CreateNamespaceOutcomeCallable;
      typedef std::future<CreateSnapshotOutcome> CreateSnapshotOutcomeCallable;
      typedef std::future<CreateUsageLimitOutcome> CreateUsageLimitOutcomeCallable;
      typedef std::future<CreateWorkgroupOutcome> CreateWorkgroupOutcomeCallable;
      typedef std::future<DeleteEndpointAccessOutcome> DeleteEndpointAccessOutcomeCallable;
      typedef std::future<DeleteNamespaceOutcome> DeleteNamespaceOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSnapshotOutcome> DeleteSnapshotOutcomeCallable;
      typedef std::future<DeleteUsageLimitOutcome> DeleteUsageLimitOutcomeCallable;
      typedef std::future<DeleteWorkgroupOutcome> DeleteWorkgroupOutcomeCallable;
      typedef std::future<GetCredentialsOutcome> GetCredentialsOutcomeCallable;
      typedef std::future<GetEndpointAccessOutcome> GetEndpointAccessOutcomeCallable;
      typedef std::future<GetNamespaceOutcome> GetNamespaceOutcomeCallable;
      typedef std::future<GetRecoveryPointOutcome> GetRecoveryPointOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetSnapshotOutcome> GetSnapshotOutcomeCallable;
      typedef std::future<GetTableRestoreStatusOutcome> GetTableRestoreStatusOutcomeCallable;
      typedef std::future<GetUsageLimitOutcome> GetUsageLimitOutcomeCallable;
      typedef std::future<GetWorkgroupOutcome> GetWorkgroupOutcomeCallable;
      typedef std::future<ListEndpointAccessOutcome> ListEndpointAccessOutcomeCallable;
      typedef std::future<ListNamespacesOutcome> ListNamespacesOutcomeCallable;
      typedef std::future<ListRecoveryPointsOutcome> ListRecoveryPointsOutcomeCallable;
      typedef std::future<ListSnapshotsOutcome> ListSnapshotsOutcomeCallable;
      typedef std::future<ListTableRestoreStatusOutcome> ListTableRestoreStatusOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListUsageLimitsOutcome> ListUsageLimitsOutcomeCallable;
      typedef std::future<ListWorkgroupsOutcome> ListWorkgroupsOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<RestoreFromRecoveryPointOutcome> RestoreFromRecoveryPointOutcomeCallable;
      typedef std::future<RestoreFromSnapshotOutcome> RestoreFromSnapshotOutcomeCallable;
      typedef std::future<RestoreTableFromSnapshotOutcome> RestoreTableFromSnapshotOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateEndpointAccessOutcome> UpdateEndpointAccessOutcomeCallable;
      typedef std::future<UpdateNamespaceOutcome> UpdateNamespaceOutcomeCallable;
      typedef std::future<UpdateSnapshotOutcome> UpdateSnapshotOutcomeCallable;
      typedef std::future<UpdateUsageLimitOutcome> UpdateUsageLimitOutcomeCallable;
      typedef std::future<UpdateWorkgroupOutcome> UpdateWorkgroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RedshiftServerlessClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ConvertRecoveryPointToSnapshotRequest&, const Model::ConvertRecoveryPointToSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConvertRecoveryPointToSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateEndpointAccessRequest&, const Model::CreateEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateNamespaceRequest&, const Model::CreateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateSnapshotRequest&, const Model::CreateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateUsageLimitRequest&, const Model::CreateUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::CreateWorkgroupRequest&, const Model::CreateWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteEndpointAccessRequest&, const Model::DeleteEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteNamespaceRequest&, const Model::DeleteNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteSnapshotRequest&, const Model::DeleteSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteUsageLimitRequest&, const Model::DeleteUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::DeleteWorkgroupRequest&, const Model::DeleteWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetCredentialsRequest&, const Model::GetCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCredentialsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetEndpointAccessRequest&, const Model::GetEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetNamespaceRequest&, const Model::GetNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetRecoveryPointRequest&, const Model::GetRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetSnapshotRequest&, const Model::GetSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetTableRestoreStatusRequest&, const Model::GetTableRestoreStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTableRestoreStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetUsageLimitRequest&, const Model::GetUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::GetWorkgroupRequest&, const Model::GetWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetWorkgroupResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListEndpointAccessRequest&, const Model::ListEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListNamespacesRequest&, const Model::ListNamespacesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNamespacesResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListRecoveryPointsRequest&, const Model::ListRecoveryPointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecoveryPointsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListSnapshotsRequest&, const Model::ListSnapshotsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSnapshotsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListTableRestoreStatusRequest&, const Model::ListTableRestoreStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTableRestoreStatusResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListUsageLimitsRequest&, const Model::ListUsageLimitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListUsageLimitsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::ListWorkgroupsRequest&, const Model::ListWorkgroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListWorkgroupsResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::RestoreFromRecoveryPointRequest&, const Model::RestoreFromRecoveryPointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromRecoveryPointResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::RestoreFromSnapshotRequest&, const Model::RestoreFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::RestoreTableFromSnapshotRequest&, const Model::RestoreTableFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RestoreTableFromSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateEndpointAccessRequest&, const Model::UpdateEndpointAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateEndpointAccessResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateNamespaceRequest&, const Model::UpdateNamespaceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateNamespaceResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateSnapshotRequest&, const Model::UpdateSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSnapshotResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateUsageLimitRequest&, const Model::UpdateUsageLimitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateUsageLimitResponseReceivedHandler;
    typedef std::function<void(const RedshiftServerlessClient*, const Model::UpdateWorkgroupRequest&, const Model::UpdateWorkgroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateWorkgroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RedshiftServerless
} // namespace Aws
