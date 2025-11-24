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
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2EndpointProvider.h>
#include <aws/sagemaker-runtime-http2/SageMakerRuntimeHTTP2Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SageMakerRuntimeHTTP2Client header */
#include <aws/core/NoResult.h>
/* End of service model headers required in SageMakerRuntimeHTTP2Client header */

namespace Aws {
namespace Http {
class HttpClient;
class HttpClientFactory;
}  // namespace Http

namespace Utils {
template <typename R, typename E>
class Outcome;

namespace Event {
class EventEncoderStream;
}  // namespace Event

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

namespace SageMakerRuntimeHTTP2 {
using SageMakerRuntimeHTTP2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using SageMakerRuntimeHTTP2EndpointProviderBase = Aws::SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2EndpointProviderBase;
using SageMakerRuntimeHTTP2EndpointProvider = Aws::SageMakerRuntimeHTTP2::Endpoint::SageMakerRuntimeHTTP2EndpointProvider;

namespace Model {
/* Service model forward declarations required in SageMakerRuntimeHTTP2Client header */
class InvokeEndpointWithBidirectionalStreamRequest;
class RequestStreamEvent;
/* End of service model forward declarations required in SageMakerRuntimeHTTP2Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<Aws::NoResult, SageMakerRuntimeHTTP2Error> InvokeEndpointWithBidirectionalStreamOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<InvokeEndpointWithBidirectionalStreamOutcome> InvokeEndpointWithBidirectionalStreamOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SageMakerRuntimeHTTP2Client;

/* Service model async handlers definitions */
typedef std::function<void(Model::RequestStreamEvent&)> InvokeEndpointWithBidirectionalStreamStreamReadyHandler;
typedef std::function<void(const SageMakerRuntimeHTTP2Client*, const Model::InvokeEndpointWithBidirectionalStreamRequest&,
                           const Model::InvokeEndpointWithBidirectionalStreamOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    InvokeEndpointWithBidirectionalStreamResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SageMakerRuntimeHTTP2
}  // namespace Aws
