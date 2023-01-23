/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/migrationhub-config/MigrationHubConfigErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/migrationhub-config/MigrationHubConfigEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MigrationHubConfigClient header */
#include <aws/migrationhub-config/model/CreateHomeRegionControlResult.h>
#include <aws/migrationhub-config/model/DescribeHomeRegionControlsResult.h>
#include <aws/migrationhub-config/model/GetHomeRegionResult.h>
/* End of service model headers required in MigrationHubConfigClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace MigrationHubConfig
  {
    using MigrationHubConfigClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MigrationHubConfigEndpointProviderBase = Aws::MigrationHubConfig::Endpoint::MigrationHubConfigEndpointProviderBase;
    using MigrationHubConfigEndpointProvider = Aws::MigrationHubConfig::Endpoint::MigrationHubConfigEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MigrationHubConfigClient header */
      class CreateHomeRegionControlRequest;
      class DescribeHomeRegionControlsRequest;
      class GetHomeRegionRequest;
      /* End of service model forward declarations required in MigrationHubConfigClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateHomeRegionControlResult, MigrationHubConfigError> CreateHomeRegionControlOutcome;
      typedef Aws::Utils::Outcome<DescribeHomeRegionControlsResult, MigrationHubConfigError> DescribeHomeRegionControlsOutcome;
      typedef Aws::Utils::Outcome<GetHomeRegionResult, MigrationHubConfigError> GetHomeRegionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateHomeRegionControlOutcome> CreateHomeRegionControlOutcomeCallable;
      typedef std::future<DescribeHomeRegionControlsOutcome> DescribeHomeRegionControlsOutcomeCallable;
      typedef std::future<GetHomeRegionOutcome> GetHomeRegionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MigrationHubConfigClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MigrationHubConfigClient*, const Model::CreateHomeRegionControlRequest&, const Model::CreateHomeRegionControlOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHomeRegionControlResponseReceivedHandler;
    typedef std::function<void(const MigrationHubConfigClient*, const Model::DescribeHomeRegionControlsRequest&, const Model::DescribeHomeRegionControlsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHomeRegionControlsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubConfigClient*, const Model::GetHomeRegionRequest&, const Model::GetHomeRegionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetHomeRegionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MigrationHubConfig
} // namespace Aws
