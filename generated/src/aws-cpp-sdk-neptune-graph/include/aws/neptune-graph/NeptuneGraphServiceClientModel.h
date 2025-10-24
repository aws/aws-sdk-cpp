﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/core/client/AWSError.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/neptune-graph/NeptuneGraphEndpointProvider.h>
#include <aws/neptune-graph/NeptuneGraphErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in NeptuneGraphClient header */
#include <aws/core/NoResult.h>
#include <aws/neptune-graph/model/CancelExportTaskResult.h>
#include <aws/neptune-graph/model/CancelImportTaskResult.h>
#include <aws/neptune-graph/model/CreateGraphResult.h>
#include <aws/neptune-graph/model/CreateGraphSnapshotResult.h>
#include <aws/neptune-graph/model/CreateGraphUsingImportTaskResult.h>
#include <aws/neptune-graph/model/CreatePrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/DeleteGraphResult.h>
#include <aws/neptune-graph/model/DeleteGraphSnapshotResult.h>
#include <aws/neptune-graph/model/DeletePrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/ExecuteQueryResult.h>
#include <aws/neptune-graph/model/GetExportTaskResult.h>
#include <aws/neptune-graph/model/GetGraphResult.h>
#include <aws/neptune-graph/model/GetGraphSnapshotResult.h>
#include <aws/neptune-graph/model/GetGraphSummaryResult.h>
#include <aws/neptune-graph/model/GetImportTaskResult.h>
#include <aws/neptune-graph/model/GetPrivateGraphEndpointResult.h>
#include <aws/neptune-graph/model/GetQueryResult.h>
#include <aws/neptune-graph/model/ListExportTasksRequest.h>
#include <aws/neptune-graph/model/ListExportTasksResult.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsRequest.h>
#include <aws/neptune-graph/model/ListGraphSnapshotsResult.h>
#include <aws/neptune-graph/model/ListGraphsRequest.h>
#include <aws/neptune-graph/model/ListGraphsResult.h>
#include <aws/neptune-graph/model/ListImportTasksRequest.h>
#include <aws/neptune-graph/model/ListImportTasksResult.h>
#include <aws/neptune-graph/model/ListPrivateGraphEndpointsResult.h>
#include <aws/neptune-graph/model/ListQueriesResult.h>
#include <aws/neptune-graph/model/ListTagsForResourceResult.h>
#include <aws/neptune-graph/model/ResetGraphResult.h>
#include <aws/neptune-graph/model/RestoreGraphFromSnapshotResult.h>
#include <aws/neptune-graph/model/StartExportTaskResult.h>
#include <aws/neptune-graph/model/StartGraphResult.h>
#include <aws/neptune-graph/model/StartImportTaskResult.h>
#include <aws/neptune-graph/model/StopGraphResult.h>
#include <aws/neptune-graph/model/TagResourceResult.h>
#include <aws/neptune-graph/model/UntagResourceResult.h>
#include <aws/neptune-graph/model/UpdateGraphResult.h>
/* End of service model headers required in NeptuneGraphClient header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Threading {
class Executor;
}  // namespace Threading
}  // namespace Utils

namespace Auth {
class AWSCredentials;
class AWSCredentialsProvider;
}  // namespace Auth

namespace Client {
class RetryStrategy;
}  // namespace Client

namespace NeptuneGraph {
using NeptuneGraphClientConfiguration = Aws::Client::GenericClientConfiguration;
using NeptuneGraphEndpointProviderBase = Aws::NeptuneGraph::Endpoint::NeptuneGraphEndpointProviderBase;
using NeptuneGraphEndpointProvider = Aws::NeptuneGraph::Endpoint::NeptuneGraphEndpointProvider;

namespace Model {
/* Service model forward declarations required in NeptuneGraphClient header */
class CancelExportTaskRequest;
class CancelImportTaskRequest;
class CancelQueryRequest;
class CreateGraphRequest;
class CreateGraphSnapshotRequest;
class CreateGraphUsingImportTaskRequest;
class CreatePrivateGraphEndpointRequest;
class DeleteGraphRequest;
class DeleteGraphSnapshotRequest;
class DeletePrivateGraphEndpointRequest;
class ExecuteQueryRequest;
class GetExportTaskRequest;
class GetGraphRequest;
class GetGraphSnapshotRequest;
class GetGraphSummaryRequest;
class GetImportTaskRequest;
class GetPrivateGraphEndpointRequest;
class GetQueryRequest;
class ListExportTasksRequest;
class ListGraphSnapshotsRequest;
class ListGraphsRequest;
class ListImportTasksRequest;
class ListPrivateGraphEndpointsRequest;
class ListQueriesRequest;
class ListTagsForResourceRequest;
class ResetGraphRequest;
class RestoreGraphFromSnapshotRequest;
class StartExportTaskRequest;
class StartGraphRequest;
class StartImportTaskRequest;
class StopGraphRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateGraphRequest;
/* End of service model forward declarations required in NeptuneGraphClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CancelExportTaskResult, NeptuneGraphError> CancelExportTaskOutcome;
typedef Aws::Utils::Outcome<CancelImportTaskResult, NeptuneGraphError> CancelImportTaskOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, NeptuneGraphError> CancelQueryOutcome;
typedef Aws::Utils::Outcome<CreateGraphResult, NeptuneGraphError> CreateGraphOutcome;
typedef Aws::Utils::Outcome<CreateGraphSnapshotResult, NeptuneGraphError> CreateGraphSnapshotOutcome;
typedef Aws::Utils::Outcome<CreateGraphUsingImportTaskResult, NeptuneGraphError> CreateGraphUsingImportTaskOutcome;
typedef Aws::Utils::Outcome<CreatePrivateGraphEndpointResult, NeptuneGraphError> CreatePrivateGraphEndpointOutcome;
typedef Aws::Utils::Outcome<DeleteGraphResult, NeptuneGraphError> DeleteGraphOutcome;
typedef Aws::Utils::Outcome<DeleteGraphSnapshotResult, NeptuneGraphError> DeleteGraphSnapshotOutcome;
typedef Aws::Utils::Outcome<DeletePrivateGraphEndpointResult, NeptuneGraphError> DeletePrivateGraphEndpointOutcome;
typedef Aws::Utils::Outcome<ExecuteQueryResult, NeptuneGraphError> ExecuteQueryOutcome;
typedef Aws::Utils::Outcome<GetExportTaskResult, NeptuneGraphError> GetExportTaskOutcome;
typedef Aws::Utils::Outcome<GetGraphResult, NeptuneGraphError> GetGraphOutcome;
typedef Aws::Utils::Outcome<GetGraphSnapshotResult, NeptuneGraphError> GetGraphSnapshotOutcome;
typedef Aws::Utils::Outcome<GetGraphSummaryResult, NeptuneGraphError> GetGraphSummaryOutcome;
typedef Aws::Utils::Outcome<GetImportTaskResult, NeptuneGraphError> GetImportTaskOutcome;
typedef Aws::Utils::Outcome<GetPrivateGraphEndpointResult, NeptuneGraphError> GetPrivateGraphEndpointOutcome;
typedef Aws::Utils::Outcome<GetQueryResult, NeptuneGraphError> GetQueryOutcome;
typedef Aws::Utils::Outcome<ListExportTasksResult, NeptuneGraphError> ListExportTasksOutcome;
typedef Aws::Utils::Outcome<ListGraphSnapshotsResult, NeptuneGraphError> ListGraphSnapshotsOutcome;
typedef Aws::Utils::Outcome<ListGraphsResult, NeptuneGraphError> ListGraphsOutcome;
typedef Aws::Utils::Outcome<ListImportTasksResult, NeptuneGraphError> ListImportTasksOutcome;
typedef Aws::Utils::Outcome<ListPrivateGraphEndpointsResult, NeptuneGraphError> ListPrivateGraphEndpointsOutcome;
typedef Aws::Utils::Outcome<ListQueriesResult, NeptuneGraphError> ListQueriesOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, NeptuneGraphError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ResetGraphResult, NeptuneGraphError> ResetGraphOutcome;
typedef Aws::Utils::Outcome<RestoreGraphFromSnapshotResult, NeptuneGraphError> RestoreGraphFromSnapshotOutcome;
typedef Aws::Utils::Outcome<StartExportTaskResult, NeptuneGraphError> StartExportTaskOutcome;
typedef Aws::Utils::Outcome<StartGraphResult, NeptuneGraphError> StartGraphOutcome;
typedef Aws::Utils::Outcome<StartImportTaskResult, NeptuneGraphError> StartImportTaskOutcome;
typedef Aws::Utils::Outcome<StopGraphResult, NeptuneGraphError> StopGraphOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, NeptuneGraphError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, NeptuneGraphError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateGraphResult, NeptuneGraphError> UpdateGraphOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CancelExportTaskOutcome> CancelExportTaskOutcomeCallable;
typedef std::future<CancelImportTaskOutcome> CancelImportTaskOutcomeCallable;
typedef std::future<CancelQueryOutcome> CancelQueryOutcomeCallable;
typedef std::future<CreateGraphOutcome> CreateGraphOutcomeCallable;
typedef std::future<CreateGraphSnapshotOutcome> CreateGraphSnapshotOutcomeCallable;
typedef std::future<CreateGraphUsingImportTaskOutcome> CreateGraphUsingImportTaskOutcomeCallable;
typedef std::future<CreatePrivateGraphEndpointOutcome> CreatePrivateGraphEndpointOutcomeCallable;
typedef std::future<DeleteGraphOutcome> DeleteGraphOutcomeCallable;
typedef std::future<DeleteGraphSnapshotOutcome> DeleteGraphSnapshotOutcomeCallable;
typedef std::future<DeletePrivateGraphEndpointOutcome> DeletePrivateGraphEndpointOutcomeCallable;
typedef std::future<ExecuteQueryOutcome> ExecuteQueryOutcomeCallable;
typedef std::future<GetExportTaskOutcome> GetExportTaskOutcomeCallable;
typedef std::future<GetGraphOutcome> GetGraphOutcomeCallable;
typedef std::future<GetGraphSnapshotOutcome> GetGraphSnapshotOutcomeCallable;
typedef std::future<GetGraphSummaryOutcome> GetGraphSummaryOutcomeCallable;
typedef std::future<GetImportTaskOutcome> GetImportTaskOutcomeCallable;
typedef std::future<GetPrivateGraphEndpointOutcome> GetPrivateGraphEndpointOutcomeCallable;
typedef std::future<GetQueryOutcome> GetQueryOutcomeCallable;
typedef std::future<ListExportTasksOutcome> ListExportTasksOutcomeCallable;
typedef std::future<ListGraphSnapshotsOutcome> ListGraphSnapshotsOutcomeCallable;
typedef std::future<ListGraphsOutcome> ListGraphsOutcomeCallable;
typedef std::future<ListImportTasksOutcome> ListImportTasksOutcomeCallable;
typedef std::future<ListPrivateGraphEndpointsOutcome> ListPrivateGraphEndpointsOutcomeCallable;
typedef std::future<ListQueriesOutcome> ListQueriesOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ResetGraphOutcome> ResetGraphOutcomeCallable;
typedef std::future<RestoreGraphFromSnapshotOutcome> RestoreGraphFromSnapshotOutcomeCallable;
typedef std::future<StartExportTaskOutcome> StartExportTaskOutcomeCallable;
typedef std::future<StartGraphOutcome> StartGraphOutcomeCallable;
typedef std::future<StartImportTaskOutcome> StartImportTaskOutcomeCallable;
typedef std::future<StopGraphOutcome> StopGraphOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateGraphOutcome> UpdateGraphOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class NeptuneGraphClient;

/* Service model async handlers definitions */
typedef std::function<void(const NeptuneGraphClient*, const Model::CancelExportTaskRequest&, const Model::CancelExportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelExportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CancelImportTaskRequest&, const Model::CancelImportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelImportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CancelQueryRequest&, const Model::CancelQueryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CancelQueryResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CreateGraphRequest&, const Model::CreateGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CreateGraphSnapshotRequest&, const Model::CreateGraphSnapshotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGraphSnapshotResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CreateGraphUsingImportTaskRequest&,
                           const Model::CreateGraphUsingImportTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateGraphUsingImportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::CreatePrivateGraphEndpointRequest&,
                           const Model::CreatePrivateGraphEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreatePrivateGraphEndpointResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::DeleteGraphRequest&, const Model::DeleteGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::DeleteGraphSnapshotRequest&, const Model::DeleteGraphSnapshotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteGraphSnapshotResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::DeletePrivateGraphEndpointRequest&,
                           const Model::DeletePrivateGraphEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeletePrivateGraphEndpointResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ExecuteQueryRequest&, Model::ExecuteQueryOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExecuteQueryResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetExportTaskRequest&, const Model::GetExportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetExportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetGraphRequest&, const Model::GetGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetGraphSnapshotRequest&, const Model::GetGraphSnapshotOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGraphSnapshotResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetGraphSummaryRequest&, const Model::GetGraphSummaryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetGraphSummaryResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetImportTaskRequest&, const Model::GetImportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetImportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetPrivateGraphEndpointRequest&,
                           const Model::GetPrivateGraphEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetPrivateGraphEndpointResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::GetQueryRequest&, const Model::GetQueryOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetQueryResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListExportTasksRequest&, const Model::ListExportTasksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListExportTasksResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListGraphSnapshotsRequest&, const Model::ListGraphSnapshotsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGraphSnapshotsResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListGraphsRequest&, const Model::ListGraphsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListGraphsResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListImportTasksRequest&, const Model::ListImportTasksOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListImportTasksResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListPrivateGraphEndpointsRequest&,
                           const Model::ListPrivateGraphEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListPrivateGraphEndpointsResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListQueriesRequest&, const Model::ListQueriesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListQueriesResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::ResetGraphRequest&, const Model::ResetGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ResetGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::RestoreGraphFromSnapshotRequest&,
                           const Model::RestoreGraphFromSnapshotOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    RestoreGraphFromSnapshotResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::StartExportTaskRequest&, const Model::StartExportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartExportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::StartGraphRequest&, const Model::StartGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::StartImportTaskRequest&, const Model::StartImportTaskOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartImportTaskResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::StopGraphRequest&, const Model::StopGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopGraphResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const NeptuneGraphClient*, const Model::UpdateGraphRequest&, const Model::UpdateGraphOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateGraphResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace NeptuneGraph
}  // namespace Aws
