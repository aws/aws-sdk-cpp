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
#include <aws/sustainability/SustainabilityEndpointProvider.h>
#include <aws/sustainability/SustainabilityErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SustainabilityClient header */
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsDimensionValuesResult.h>
#include <aws/sustainability/model/GetEstimatedCarbonEmissionsResult.h>
/* End of service model headers required in SustainabilityClient header */

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

namespace Sustainability {
using SustainabilityClientConfiguration = Aws::Client::GenericClientConfiguration;
using SustainabilityEndpointProviderBase = Aws::Sustainability::Endpoint::SustainabilityEndpointProviderBase;
using SustainabilityEndpointProvider = Aws::Sustainability::Endpoint::SustainabilityEndpointProvider;

namespace Model {
/* Service model forward declarations required in SustainabilityClient header */
class GetEstimatedCarbonEmissionsRequest;
class GetEstimatedCarbonEmissionsDimensionValuesRequest;
/* End of service model forward declarations required in SustainabilityClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetEstimatedCarbonEmissionsResult, SustainabilityError> GetEstimatedCarbonEmissionsOutcome;
typedef Aws::Utils::Outcome<GetEstimatedCarbonEmissionsDimensionValuesResult, SustainabilityError>
    GetEstimatedCarbonEmissionsDimensionValuesOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetEstimatedCarbonEmissionsOutcome> GetEstimatedCarbonEmissionsOutcomeCallable;
typedef std::future<GetEstimatedCarbonEmissionsDimensionValuesOutcome> GetEstimatedCarbonEmissionsDimensionValuesOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SustainabilityClient;

/* Service model async handlers definitions */
typedef std::function<void(const SustainabilityClient*, const Model::GetEstimatedCarbonEmissionsRequest&,
                           const Model::GetEstimatedCarbonEmissionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEstimatedCarbonEmissionsResponseReceivedHandler;
typedef std::function<void(const SustainabilityClient*, const Model::GetEstimatedCarbonEmissionsDimensionValuesRequest&,
                           const Model::GetEstimatedCarbonEmissionsDimensionValuesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetEstimatedCarbonEmissionsDimensionValuesResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace Sustainability
}  // namespace Aws
