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
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeEndpointProvider.h>
#include <aws/sagemaker-inference-router-runtime/SageMakerInferenceRouterRuntimeErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SageMakerInferenceRouterRuntimeClient header */
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterAsyncResult.h>
#include <aws/sagemaker-inference-router-runtime/model/InvokeInferenceRouterResult.h>
/* End of service model headers required in SageMakerInferenceRouterRuntimeClient header */

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

namespace SageMakerInferenceRouterRuntime {
using SageMakerInferenceRouterRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerInferenceRouterRuntimeEndpointProviderBase =
    Aws::SageMakerInferenceRouterRuntime::Endpoint::SageMakerInferenceRouterRuntimeEndpointProviderBase;
using SageMakerInferenceRouterRuntimeEndpointProvider =
    Aws::SageMakerInferenceRouterRuntime::Endpoint::SageMakerInferenceRouterRuntimeEndpointProvider;

namespace Model {
/* Service model forward declarations required in SageMakerInferenceRouterRuntimeClient header */
class InvokeInferenceRouterRequest;
class InvokeInferenceRouterAsyncRequest;
/* End of service model forward declarations required in SageMakerInferenceRouterRuntimeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<InvokeInferenceRouterResult, SageMakerInferenceRouterRuntimeError> InvokeInferenceRouterOutcome;
typedef Aws::Utils::Outcome<InvokeInferenceRouterAsyncResult, SageMakerInferenceRouterRuntimeError> InvokeInferenceRouterAsyncOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<InvokeInferenceRouterOutcome> InvokeInferenceRouterOutcomeCallable;
typedef std::future<InvokeInferenceRouterAsyncOutcome> InvokeInferenceRouterAsyncOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SageMakerInferenceRouterRuntimeClient;

/* Service model async handlers definitions */
typedef std::function<void(const SageMakerInferenceRouterRuntimeClient*, const Model::InvokeInferenceRouterRequest&,
                           Model::InvokeInferenceRouterOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeInferenceRouterResponseReceivedHandler;
typedef std::function<void(const SageMakerInferenceRouterRuntimeClient*, const Model::InvokeInferenceRouterAsyncRequest&,
                           const Model::InvokeInferenceRouterAsyncOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeInferenceRouterAsyncResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SageMakerInferenceRouterRuntime
}  // namespace Aws
