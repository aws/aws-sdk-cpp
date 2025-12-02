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
#include <aws/nova-act/NovaActEndpointProvider.h>
#include <aws/nova-act/NovaActErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in NovaActClient header */
#include <aws/nova-act/model/CreateActResult.h>
#include <aws/nova-act/model/CreateSessionResult.h>
#include <aws/nova-act/model/CreateWorkflowDefinitionResult.h>
#include <aws/nova-act/model/CreateWorkflowRunResult.h>
#include <aws/nova-act/model/DeleteWorkflowDefinitionResult.h>
#include <aws/nova-act/model/DeleteWorkflowRunResult.h>
#include <aws/nova-act/model/GetWorkflowDefinitionResult.h>
#include <aws/nova-act/model/GetWorkflowRunResult.h>
#include <aws/nova-act/model/InvokeActStepResult.h>
#include <aws/nova-act/model/ListActsResult.h>
#include <aws/nova-act/model/ListModelsResult.h>
#include <aws/nova-act/model/ListSessionsResult.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsRequest.h>
#include <aws/nova-act/model/ListWorkflowDefinitionsResult.h>
#include <aws/nova-act/model/ListWorkflowRunsResult.h>
#include <aws/nova-act/model/UpdateActResult.h>
#include <aws/nova-act/model/UpdateWorkflowRunResult.h>
/* End of service model headers required in NovaActClient header */

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

namespace NovaAct {
using NovaActClientConfiguration = Aws::Client::GenericClientConfiguration;
using NovaActEndpointProviderBase = Aws::NovaAct::Endpoint::NovaActEndpointProviderBase;
using NovaActEndpointProvider = Aws::NovaAct::Endpoint::NovaActEndpointProvider;

namespace Model {
/* Service model forward declarations required in NovaActClient header */
class CreateActRequest;
class CreateSessionRequest;
class CreateWorkflowDefinitionRequest;
class CreateWorkflowRunRequest;
class DeleteWorkflowDefinitionRequest;
class DeleteWorkflowRunRequest;
class GetWorkflowDefinitionRequest;
class GetWorkflowRunRequest;
class InvokeActStepRequest;
class ListActsRequest;
class ListModelsRequest;
class ListSessionsRequest;
class ListWorkflowDefinitionsRequest;
class ListWorkflowRunsRequest;
class UpdateActRequest;
class UpdateWorkflowRunRequest;
/* End of service model forward declarations required in NovaActClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CreateActResult, NovaActError> CreateActOutcome;
typedef Aws::Utils::Outcome<CreateSessionResult, NovaActError> CreateSessionOutcome;
typedef Aws::Utils::Outcome<CreateWorkflowDefinitionResult, NovaActError> CreateWorkflowDefinitionOutcome;
typedef Aws::Utils::Outcome<CreateWorkflowRunResult, NovaActError> CreateWorkflowRunOutcome;
typedef Aws::Utils::Outcome<DeleteWorkflowDefinitionResult, NovaActError> DeleteWorkflowDefinitionOutcome;
typedef Aws::Utils::Outcome<DeleteWorkflowRunResult, NovaActError> DeleteWorkflowRunOutcome;
typedef Aws::Utils::Outcome<GetWorkflowDefinitionResult, NovaActError> GetWorkflowDefinitionOutcome;
typedef Aws::Utils::Outcome<GetWorkflowRunResult, NovaActError> GetWorkflowRunOutcome;
typedef Aws::Utils::Outcome<InvokeActStepResult, NovaActError> InvokeActStepOutcome;
typedef Aws::Utils::Outcome<ListActsResult, NovaActError> ListActsOutcome;
typedef Aws::Utils::Outcome<ListModelsResult, NovaActError> ListModelsOutcome;
typedef Aws::Utils::Outcome<ListSessionsResult, NovaActError> ListSessionsOutcome;
typedef Aws::Utils::Outcome<ListWorkflowDefinitionsResult, NovaActError> ListWorkflowDefinitionsOutcome;
typedef Aws::Utils::Outcome<ListWorkflowRunsResult, NovaActError> ListWorkflowRunsOutcome;
typedef Aws::Utils::Outcome<UpdateActResult, NovaActError> UpdateActOutcome;
typedef Aws::Utils::Outcome<UpdateWorkflowRunResult, NovaActError> UpdateWorkflowRunOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CreateActOutcome> CreateActOutcomeCallable;
typedef std::future<CreateSessionOutcome> CreateSessionOutcomeCallable;
typedef std::future<CreateWorkflowDefinitionOutcome> CreateWorkflowDefinitionOutcomeCallable;
typedef std::future<CreateWorkflowRunOutcome> CreateWorkflowRunOutcomeCallable;
typedef std::future<DeleteWorkflowDefinitionOutcome> DeleteWorkflowDefinitionOutcomeCallable;
typedef std::future<DeleteWorkflowRunOutcome> DeleteWorkflowRunOutcomeCallable;
typedef std::future<GetWorkflowDefinitionOutcome> GetWorkflowDefinitionOutcomeCallable;
typedef std::future<GetWorkflowRunOutcome> GetWorkflowRunOutcomeCallable;
typedef std::future<InvokeActStepOutcome> InvokeActStepOutcomeCallable;
typedef std::future<ListActsOutcome> ListActsOutcomeCallable;
typedef std::future<ListModelsOutcome> ListModelsOutcomeCallable;
typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
typedef std::future<ListWorkflowDefinitionsOutcome> ListWorkflowDefinitionsOutcomeCallable;
typedef std::future<ListWorkflowRunsOutcome> ListWorkflowRunsOutcomeCallable;
typedef std::future<UpdateActOutcome> UpdateActOutcomeCallable;
typedef std::future<UpdateWorkflowRunOutcome> UpdateWorkflowRunOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class NovaActClient;

/* Service model async handlers definitions */
typedef std::function<void(const NovaActClient*, const Model::CreateActRequest&, const Model::CreateActOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateActResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::CreateSessionRequest&, const Model::CreateSessionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateSessionResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::CreateWorkflowDefinitionRequest&,
                           const Model::CreateWorkflowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWorkflowDefinitionResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::CreateWorkflowRunRequest&, const Model::CreateWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CreateWorkflowRunResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::DeleteWorkflowDefinitionRequest&,
                           const Model::DeleteWorkflowDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWorkflowDefinitionResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::DeleteWorkflowRunRequest&, const Model::DeleteWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    DeleteWorkflowRunResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::GetWorkflowDefinitionRequest&, const Model::GetWorkflowDefinitionOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkflowDefinitionResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::GetWorkflowRunRequest&, const Model::GetWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetWorkflowRunResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::InvokeActStepRequest&, const Model::InvokeActStepOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeActStepResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::ListActsRequest&, const Model::ListActsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListActsResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::ListModelsRequest&, const Model::ListModelsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListModelsResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListSessionsResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::ListWorkflowDefinitionsRequest&, const Model::ListWorkflowDefinitionsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkflowDefinitionsResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::ListWorkflowRunsRequest&, const Model::ListWorkflowRunsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListWorkflowRunsResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::UpdateActRequest&, const Model::UpdateActOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateActResponseReceivedHandler;
typedef std::function<void(const NovaActClient*, const Model::UpdateWorkflowRunRequest&, const Model::UpdateWorkflowRunOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateWorkflowRunResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace NovaAct
}  // namespace Aws
