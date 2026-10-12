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
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeEndpointProvider.h>
#include <aws/sagemakertrainingsessionruntime/SageMakerTrainingSessionRuntimeErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SageMakerTrainingSessionRuntimeClient header */
#include <aws/sagemakertrainingsessionruntime/model/ExecuteSamplingOperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/ExecuteTrainingOperationResult.h>
#include <aws/sagemakertrainingsessionruntime/model/GetSamplingOperationResultResult.h>
#include <aws/sagemakertrainingsessionruntime/model/GetTrainingOperationResultResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionResult.h>
#include <aws/sagemakertrainingsessionruntime/model/SampleTrainingSessionWithResponseStreamResult.h>
/* End of service model headers required in SageMakerTrainingSessionRuntimeClient header */

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

namespace SageMakerTrainingSessionRuntime {
using SageMakerTrainingSessionRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerTrainingSessionRuntimeEndpointProviderBase =
    Aws::SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeEndpointProviderBase;
using SageMakerTrainingSessionRuntimeEndpointProvider =
    Aws::SageMakerTrainingSessionRuntime::Endpoint::SageMakerTrainingSessionRuntimeEndpointProvider;

namespace Model {
/* Service model forward declarations required in SageMakerTrainingSessionRuntimeClient header */
class ExecuteSamplingOperationRequest;
class ExecuteTrainingOperationRequest;
class GetSamplingOperationResultRequest;
class GetTrainingOperationResultRequest;
class SampleTrainingSessionRequest;
class SampleTrainingSessionWithResponseStreamRequest;
/* End of service model forward declarations required in SageMakerTrainingSessionRuntimeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<ExecuteSamplingOperationResult, SageMakerTrainingSessionRuntimeError> ExecuteSamplingOperationOutcome;
typedef Aws::Utils::Outcome<ExecuteTrainingOperationResult, SageMakerTrainingSessionRuntimeError> ExecuteTrainingOperationOutcome;
typedef Aws::Utils::Outcome<GetSamplingOperationResultResult, SageMakerTrainingSessionRuntimeError> GetSamplingOperationResultOutcome;
typedef Aws::Utils::Outcome<GetTrainingOperationResultResult, SageMakerTrainingSessionRuntimeError> GetTrainingOperationResultOutcome;
typedef Aws::Utils::Outcome<SampleTrainingSessionResult, SageMakerTrainingSessionRuntimeError> SampleTrainingSessionOutcome;
typedef Aws::Utils::Outcome<SampleTrainingSessionWithResponseStreamResult, SageMakerTrainingSessionRuntimeError>
    SampleTrainingSessionWithResponseStreamOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<ExecuteSamplingOperationOutcome> ExecuteSamplingOperationOutcomeCallable;
typedef std::future<ExecuteTrainingOperationOutcome> ExecuteTrainingOperationOutcomeCallable;
typedef std::future<GetSamplingOperationResultOutcome> GetSamplingOperationResultOutcomeCallable;
typedef std::future<GetTrainingOperationResultOutcome> GetTrainingOperationResultOutcomeCallable;
typedef std::future<SampleTrainingSessionOutcome> SampleTrainingSessionOutcomeCallable;
typedef std::future<SampleTrainingSessionWithResponseStreamOutcome> SampleTrainingSessionWithResponseStreamOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SageMakerTrainingSessionRuntimeClient;

/* Service model async handlers definitions */
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::ExecuteSamplingOperationRequest&,
                           const Model::ExecuteSamplingOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExecuteSamplingOperationResponseReceivedHandler;
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::ExecuteTrainingOperationRequest&,
                           const Model::ExecuteTrainingOperationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ExecuteTrainingOperationResponseReceivedHandler;
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::GetSamplingOperationResultRequest&,
                           const Model::GetSamplingOperationResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetSamplingOperationResultResponseReceivedHandler;
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::GetTrainingOperationResultRequest&,
                           const Model::GetTrainingOperationResultOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetTrainingOperationResultResponseReceivedHandler;
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::SampleTrainingSessionRequest&,
                           Model::SampleTrainingSessionOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SampleTrainingSessionResponseReceivedHandler;
typedef std::function<void(const SageMakerTrainingSessionRuntimeClient*, const Model::SampleTrainingSessionWithResponseStreamRequest&,
                           Model::SampleTrainingSessionWithResponseStreamOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SampleTrainingSessionWithResponseStreamResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SageMakerTrainingSessionRuntime
}  // namespace Aws
