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
#include <aws/uxc/UxcEndpointProvider.h>
#include <aws/uxc/UxcErrors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in UxcClient header */
#include <aws/uxc/model/GetAccountCustomizationsRequest.h>
#include <aws/uxc/model/GetAccountCustomizationsResult.h>
#include <aws/uxc/model/ListServicesRequest.h>
#include <aws/uxc/model/ListServicesResult.h>
#include <aws/uxc/model/UpdateAccountCustomizationsRequest.h>
#include <aws/uxc/model/UpdateAccountCustomizationsResult.h>
/* End of service model headers required in UxcClient header */

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

namespace uxc {
using UxcClientConfiguration = Aws::Client::GenericClientConfiguration;
using UxcEndpointProviderBase = Aws::uxc::Endpoint::UxcEndpointProviderBase;
using UxcEndpointProvider = Aws::uxc::Endpoint::UxcEndpointProvider;

namespace Model {
/* Service model forward declarations required in UxcClient header */
class GetAccountCustomizationsRequest;
class ListServicesRequest;
class UpdateAccountCustomizationsRequest;
/* End of service model forward declarations required in UxcClient header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetAccountCustomizationsResult, UxcError> GetAccountCustomizationsOutcome;
typedef Aws::Utils::Outcome<ListServicesResult, UxcError> ListServicesOutcome;
typedef Aws::Utils::Outcome<UpdateAccountCustomizationsResult, UxcError> UpdateAccountCustomizationsOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetAccountCustomizationsOutcome> GetAccountCustomizationsOutcomeCallable;
typedef std::future<ListServicesOutcome> ListServicesOutcomeCallable;
typedef std::future<UpdateAccountCustomizationsOutcome> UpdateAccountCustomizationsOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class UxcClient;

/* Service model async handlers definitions */
typedef std::function<void(const UxcClient*, const Model::GetAccountCustomizationsRequest&, const Model::GetAccountCustomizationsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetAccountCustomizationsResponseReceivedHandler;
typedef std::function<void(const UxcClient*, const Model::ListServicesRequest&, const Model::ListServicesOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListServicesResponseReceivedHandler;
typedef std::function<void(const UxcClient*, const Model::UpdateAccountCustomizationsRequest&,
                           const Model::UpdateAccountCustomizationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    UpdateAccountCustomizationsResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace uxc
}  // namespace Aws
