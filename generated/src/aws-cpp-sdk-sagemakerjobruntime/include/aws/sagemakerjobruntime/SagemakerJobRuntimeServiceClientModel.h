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
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeEndpointProvider.h>
#include <aws/sagemakerjobruntime/SagemakerJobRuntimeErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SagemakerJobRuntimeClient header */
#include <aws/sagemakerjobruntime/model/CompleteRolloutResult.h>
#include <aws/sagemakerjobruntime/model/SampleResult.h>
#include <aws/sagemakerjobruntime/model/SampleWithResponseStreamResult.h>
#include <aws/sagemakerjobruntime/model/UpdateRewardResult.h>
/* End of service model headers required in SagemakerJobRuntimeClient header */

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

namespace SagemakerJobRuntime {
using SagemakerJobRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SagemakerJobRuntimeEndpointProviderBase = Aws::SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeEndpointProviderBase;
using SagemakerJobRuntimeEndpointProvider = Aws::SagemakerJobRuntime::Endpoint::SagemakerJobRuntimeEndpointProvider;

namespace Model {
/* Service model forward declarations required in SagemakerJobRuntimeClient header */
class CompleteRolloutRequest;
class SampleRequest;
class SampleWithResponseStreamRequest;
class UpdateRewardRequest;
/* End of service model forward declarations required in SagemakerJobRuntimeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<CompleteRolloutResult, SagemakerJobRuntimeError> CompleteRolloutOutcome;
typedef Aws::Utils::Outcome<SampleResult, SagemakerJobRuntimeError> SampleOutcome;
typedef Aws::Utils::Outcome<SampleWithResponseStreamResult, SagemakerJobRuntimeError> SampleWithResponseStreamOutcome;
typedef Aws::Utils::Outcome<UpdateRewardResult, SagemakerJobRuntimeError> UpdateRewardOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<CompleteRolloutOutcome> CompleteRolloutOutcomeCallable;
typedef std::future<SampleOutcome> SampleOutcomeCallable;
typedef std::future<SampleWithResponseStreamOutcome> SampleWithResponseStreamOutcomeCallable;
typedef std::future<UpdateRewardOutcome> UpdateRewardOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SagemakerJobRuntimeClient;

/* Service model async handlers definitions */
typedef std::function<void(const SagemakerJobRuntimeClient*, const Model::CompleteRolloutRequest&, const Model::CompleteRolloutOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    CompleteRolloutResponseReceivedHandler;
typedef std::function<void(const SagemakerJobRuntimeClient*, const Model::SampleRequest&, Model::SampleOutcome,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SampleResponseReceivedHandler;
typedef std::function<void(const SagemakerJobRuntimeClient*, const Model::SampleWithResponseStreamRequest&,
                           Model::SampleWithResponseStreamOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    SampleWithResponseStreamResponseReceivedHandler;
typedef std::function<void(const SagemakerJobRuntimeClient*, const Model::UpdateRewardRequest&, const Model::UpdateRewardOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateRewardResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SagemakerJobRuntime
}  // namespace Aws
