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
#include <aws/simpledbv2/SimpleDBv2EndpointProvider.h>
#include <aws/simpledbv2/SimpleDBv2Errors.h>

#include <functional>
#include <future>
/* End of generic header includes */

/* Service model headers required in SimpleDBv2Client header */
#include <aws/simpledbv2/model/GetExportResult.h>
#include <aws/simpledbv2/model/ListExportsRequest.h>
#include <aws/simpledbv2/model/ListExportsResult.h>
#include <aws/simpledbv2/model/StartDomainExportResult.h>
/* End of service model headers required in SimpleDBv2Client header */

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

namespace SimpleDBv2 {
using SimpleDBv2ClientConfiguration = Aws::Client::GenericClientConfiguration;
using SimpleDBv2EndpointProviderBase = Aws::SimpleDBv2::Endpoint::SimpleDBv2EndpointProviderBase;
using SimpleDBv2EndpointProvider = Aws::SimpleDBv2::Endpoint::SimpleDBv2EndpointProvider;

namespace Model {
/* Service model forward declarations required in SimpleDBv2Client header */
class GetExportRequest;
class ListExportsRequest;
class StartDomainExportRequest;
/* End of service model forward declarations required in SimpleDBv2Client header */

/* Service model Outcome class definitions */
typedef Aws::Utils::Outcome<GetExportResult, SimpleDBv2Error> GetExportOutcome;
typedef Aws::Utils::Outcome<ListExportsResult, SimpleDBv2Error> ListExportsOutcome;
typedef Aws::Utils::Outcome<StartDomainExportResult, SimpleDBv2Error> StartDomainExportOutcome;
/* End of service model Outcome class definitions */

/* Service model Outcome callable definitions */
typedef std::future<GetExportOutcome> GetExportOutcomeCallable;
typedef std::future<ListExportsOutcome> ListExportsOutcomeCallable;
typedef std::future<StartDomainExportOutcome> StartDomainExportOutcomeCallable;
/* End of service model Outcome callable definitions */
}  // namespace Model

class SimpleDBv2Client;

/* Service model async handlers definitions */
typedef std::function<void(const SimpleDBv2Client*, const Model::GetExportRequest&, const Model::GetExportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    GetExportResponseReceivedHandler;
typedef std::function<void(const SimpleDBv2Client*, const Model::ListExportsRequest&, const Model::ListExportsOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    ListExportsResponseReceivedHandler;
typedef std::function<void(const SimpleDBv2Client*, const Model::StartDomainExportRequest&, const Model::StartDomainExportOutcome&,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>&)>
    StartDomainExportResponseReceivedHandler;
/* End of service model async handlers definitions */
}  // namespace SimpleDBv2
}  // namespace Aws
