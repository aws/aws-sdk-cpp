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
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeEndpointProvider.h>
#include <aws/sagemaker-gateway-runtime/SageMakerGatewayRuntimeErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SageMakerGatewayRuntimeClient header */
#include <aws/core/NoResult.h>
#include <aws/sagemaker-gateway-runtime/model/InvokeGlobalInferenceGatewayResult.h>
/* End of service model headers required in SageMakerGatewayRuntimeClient header */

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

namespace SageMakerGatewayRuntime {
using SageMakerGatewayRuntimeClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerGatewayRuntimeEndpointProviderBase = Aws::SageMakerGatewayRuntime::Endpoint::SageMakerGatewayRuntimeEndpointProviderBase;
using SageMakerGatewayRuntimeEndpointProvider = Aws::SageMakerGatewayRuntime::Endpoint::SageMakerGatewayRuntimeEndpointProvider;

namespace Model {
/* Service model forward declarations required in SageMakerGatewayRuntimeClient header */
class InvokeGlobalInferenceGatewayRequest;
class InvokeGlobalInferenceGatewayWithResponseStreamRequest;
/* End of service model forward declarations required in SageMakerGatewayRuntimeClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<InvokeGlobalInferenceGatewayResult, SageMakerGatewayRuntimeError> InvokeGlobalInferenceGatewayOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerGatewayRuntimeError> InvokeGlobalInferenceGatewayWithResponseStreamOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<InvokeGlobalInferenceGatewayOutcome> InvokeGlobalInferenceGatewayOutcomeCallable;
typedef std::future<InvokeGlobalInferenceGatewayWithResponseStreamOutcome> InvokeGlobalInferenceGatewayWithResponseStreamOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SageMakerGatewayRuntimeClient;

/* Service model async handlers definitions */
typedef std::function<void(const SageMakerGatewayRuntimeClient*, const Model::InvokeGlobalInferenceGatewayRequest&,
                           Model::InvokeGlobalInferenceGatewayOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeGlobalInferenceGatewayResponseReceivedHandler;
typedef std::function<void(const SageMakerGatewayRuntimeClient*, const Model::InvokeGlobalInferenceGatewayWithResponseStreamRequest&,
                           const Model::InvokeGlobalInferenceGatewayWithResponseStreamOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeGlobalInferenceGatewayWithResponseStreamResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SageMakerGatewayRuntime
}  // namespace Aws
