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
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingEndpointProvider.h>
#include <aws/test-new-service-sdk-testing/TestNewServiceSDKTestingErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in TestNewServiceSDKTestingClient header */
#include <aws/core/NoResult.h>
#include <aws/test-new-service-sdk-testing/model/GetFooResult.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosRequest.h>
#include <aws/test-new-service-sdk-testing/model/GetFoosResult.h>
#include <aws/test-new-service-sdk-testing/model/PublishFoosRequest.h>
/* End of service model headers required in TestNewServiceSDKTestingClient header */

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

namespace TestNewServiceSDKTesting {
using TestNewServiceSDKTestingClientConfiguration = Aws::Client::GenericClientConfiguration;
using TestNewServiceSDKTestingEndpointProviderBase = Aws::TestNewServiceSDKTesting::Endpoint::TestNewServiceSDKTestingEndpointProviderBase;
using TestNewServiceSDKTestingEndpointProvider = Aws::TestNewServiceSDKTesting::Endpoint::TestNewServiceSDKTestingEndpointProvider;

namespace Model {
/* Service model forward declarations required in TestNewServiceSDKTestingClient header */
class GetFooRequest;
class GetFoosRequest;
class PublishFoosRequest;
class PublishEvents;
/* End of service model forward declarations required in TestNewServiceSDKTestingClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetFooResult, TestNewServiceSDKTestingError> GetFooOutcome;
typedef Aws::Utils::Outcome<GetFoosResult, TestNewServiceSDKTestingError> GetFoosOutcome;
typedef Aws::Utils::Outcome<Aws::NoResult, TestNewServiceSDKTestingError> PublishFoosOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetFooOutcome> GetFooOutcomeCallable;
typedef std::future<GetFoosOutcome> GetFoosOutcomeCallable;
typedef std::future<PublishFoosOutcome> PublishFoosOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class TestNewServiceSDKTestingClient;

/* Service model async handlers definitions */
typedef std::function<void(const TestNewServiceSDKTestingClient*, const Model::GetFooRequest&, const Model::GetFooOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFooResponseReceivedHandler;
typedef std::function<void(const TestNewServiceSDKTestingClient*, const Model::GetFoosRequest&, const Model::GetFoosOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetFoosResponseReceivedHandler;
typedef std::function<void(Model::PublishEvents&)> PublishFoosStreamReadyHandler;
typedef std::function<void(const TestNewServiceSDKTestingClient*, const Model::PublishFoosRequest&, const Model::PublishFoosOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    PublishFoosResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace TestNewServiceSDKTesting
}  // namespace Aws
