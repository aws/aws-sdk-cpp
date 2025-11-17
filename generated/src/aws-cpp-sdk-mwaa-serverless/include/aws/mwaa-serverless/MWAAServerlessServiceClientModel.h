/**
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
#include <aws/mwaa-serverless/MWAAServerlessEndpointProvider.h>
#include <aws/mwaa-serverless/MWAAServerlessErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in MWAAServerlessClient header */
#include <aws/mwaa-serverless/model/CreateWorkflowResult.h>
#include <aws/mwaa-serverless/model/DeleteWorkflowResult.h>
#include <aws/mwaa-serverless/model/GetTaskInstanceResult.h>
#include <aws/mwaa-serverless/model/GetWorkflowResult.h>
#include <aws/mwaa-serverless/model/GetWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/ListTagsForResourceResult.h>
#include <aws/mwaa-serverless/model/ListTaskInstancesResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowRunsResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowVersionsResult.h>
#include <aws/mwaa-serverless/model/ListWorkflowsRequest.h>
#include <aws/mwaa-serverless/model/ListWorkflowsResult.h>
#include <aws/mwaa-serverless/model/StartWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/StopWorkflowRunResult.h>
#include <aws/mwaa-serverless/model/TagResourceResult.h>
#include <aws/mwaa-serverless/model/UntagResourceResult.h>
#include <aws/mwaa-serverless/model/UpdateWorkflowResult.h>
/* End of service model headers required in MWAAServerlessClient header */

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

namespace MWAAServerless {
using MWAAServerlessClientConfiguration = Aws::Client::GenericClientConfiguration;
using MWAAServerlessEndpointProviderBase = Aws::MWAAServerless::Endpoint::MWAAServerlessEndpointProviderBase;
using MWAAServerlessEndpointProvider = Aws::MWAAServerless::Endpoint::MWAAServerlessEndpointProvider;

namespace Model {
/* Service model forward declarations required in MWAAServerlessClient header */
class CreateWorkflowRequest;
class DeleteWorkflowRequest;
class GetTaskInstanceRequest;
class GetWorkflowRequest;
class GetWorkflowRunRequest;
class ListTagsForResourceRequest;
class ListTaskInstancesRequest;
class ListWorkflowRunsRequest;
class ListWorkflowVersionsRequest;
class ListWorkflowsRequest;
class StartWorkflowRunRequest;
class StopWorkflowRunRequest;
class TagResourceRequest;
class UntagResourceRequest;
class UpdateWorkflowRequest;
/* End of service model forward declarations required in MWAAServerlessClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateWorkflowResult, MWAAServerlessError> CreateWorkflowOutcome;
typedef Aws::Utils::Outcome<DeleteWorkflowResult, MWAAServerlessError> DeleteWorkflowOutcome;
typedef Aws::Utils::Outcome<GetTaskInstanceResult, MWAAServerlessError> GetTaskInstanceOutcome;
typedef Aws::Utils::Outcome<GetWorkflowResult, MWAAServerlessError> GetWorkflowOutcome;
typedef Aws::Utils::Outcome<GetWorkflowRunResult, MWAAServerlessError> GetWorkflowRunOutcome;
typedef Aws::Utils::Outcome<ListTagsForResourceResult, MWAAServerlessError> ListTagsForResourceOutcome;
typedef Aws::Utils::Outcome<ListTaskInstancesResult, MWAAServerlessError> ListTaskInstancesOutcome;
typedef Aws::Utils::Outcome<ListWorkflowRunsResult, MWAAServerlessError> ListWorkflowRunsOutcome;
typedef Aws::Utils::Outcome<ListWorkflowVersionsResult, MWAAServerlessError> ListWorkflowVersionsOutcome;
typedef Aws::Utils::Outcome<ListWorkflowsResult, MWAAServerlessError> ListWorkflowsOutcome;
typedef Aws::Utils::Outcome<StartWorkflowRunResult, MWAAServerlessError> StartWorkflowRunOutcome;
typedef Aws::Utils::Outcome<StopWorkflowRunResult, MWAAServerlessError> StopWorkflowRunOutcome;
typedef Aws::Utils::Outcome<TagResourceResult, MWAAServerlessError> TagResourceOutcome;
typedef Aws::Utils::Outcome<UntagResourceResult, MWAAServerlessError> UntagResourceOutcome;
typedef Aws::Utils::Outcome<UpdateWorkflowResult, MWAAServerlessError> UpdateWorkflowOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateWorkflowOutcome> CreateWorkflowOutcomeCallable;
typedef std::future<DeleteWorkflowOutcome> DeleteWorkflowOutcomeCallable;
typedef std::future<GetTaskInstanceOutcome> GetTaskInstanceOutcomeCallable;
typedef std::future<GetWorkflowOutcome> GetWorkflowOutcomeCallable;
typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
typedef std::future<ListTaskInstancesOutcome> ListTaskInstancesOutcomeCallable;
typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
typedef std::future<ListWorkflowVersionsOutcome> ListWorkflowVersionsOutcomeCallable;
typedef std::future<ListWorkflowsOutcome> ListWorkflowsOutcomeCallable;
typedef std::future<StartWorkflowRunOutcome> StartWorkflowRunOutcomeCallable;
typedef std::future<StopWorkflowRunOutcome> StopWorkflowRunOutcomeCallable;
typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
typedef std::future<UpdateWorkflowOutcome> UpdateWorkflowOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class MWAAServerlessClient;

/* Service model async handlers definitions */
typedef std::function<void(const MWAAServerlessClient*, const Model::CreateWorkflowRequest&, const Model::CreateWorkflowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWorkflowResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::DeleteWorkflowRequest&, const Model::DeleteWorkflowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWorkflowResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::GetTaskInstanceRequest&, const Model::GetTaskInstanceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTaskInstanceResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::GetWorkflowRequest&, const Model::GetWorkflowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkflowResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkflowRunResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTagsForResourceResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::ListTaskInstancesRequest&, const Model::ListTaskInstancesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListTaskInstancesResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::ListWorkflowRunsRequest&, const Model::ListWorkflowRunsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkflowRunsResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::ListWorkflowVersionsRequest&,
                           const Model::ListWorkflowVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkflowVersionsResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::ListWorkflowsRequest&, const Model::ListWorkflowsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkflowsResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::StartWorkflowRunRequest&, const Model::StartWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartWorkflowRunResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::StopWorkflowRunRequest&, const Model::StopWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StopWorkflowRunResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    TagResourceResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UntagResourceResponseReceivedHandler;
typedef std::function<void(const MWAAServerlessClient*, const Model::UpdateWorkflowRequest&, const Model::UpdateWorkflowOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWorkflowResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace MWAAServerless
}  // namespace Aws
