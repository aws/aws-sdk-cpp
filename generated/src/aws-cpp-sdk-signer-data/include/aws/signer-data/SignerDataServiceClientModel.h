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
#include <aws/signer-data/SignerDataEndpointProvider.h>
#include <aws/signer-data/SignerDataErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SignerDataClient header */
#include <aws/signer-data/model/GetRevocationStatusResult.h>
/* End of service model headers required in SignerDataClient header */

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

namespace SignerData {
using SignerDataClientConfiguration = Aws::Client::GenericClientConfiguration;
using SignerDataEndpointProviderBase = Aws::SignerData::Endpoint::SignerDataEndpointProviderBase;
using SignerDataEndpointProvider = Aws::SignerData::Endpoint::SignerDataEndpointProvider;

namespace Model {
/* Service model forward declarations required in SignerDataClient header */
class GetRevocationStatusRequest;
/* End of service model forward declarations required in SignerDataClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetRevocationStatusResult, SignerDataError> GetRevocationStatusOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetRevocationStatusOutcome> GetRevocationStatusOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SignerDataClient;

/* Service model async handlers definitions */
typedef std::function<void(const SignerDataClient*, const Model::GetRevocationStatusRequest&, const Model::GetRevocationStatusOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetRevocationStatusResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SignerData
}  // namespace Aws
