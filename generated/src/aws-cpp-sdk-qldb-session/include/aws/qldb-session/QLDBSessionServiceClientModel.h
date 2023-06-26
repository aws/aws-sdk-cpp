/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/qldb-session/QLDBSessionErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/qldb-session/QLDBSessionEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in QLDBSessionClient header */
#include <aws/qldb-session/model/SendCommandResult.h>
/* End of service model headers required in QLDBSessionClient header */

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

  namespace QLDBSession
  {
    using QLDBSessionClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using QLDBSessionEndpointProviderBase = Aws::QLDBSession::Endpoint::QLDBSessionEndpointProviderBase;
    using QLDBSessionEndpointProvider = Aws::QLDBSession::Endpoint::QLDBSessionEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in QLDBSessionClient header */
      class SendCommandRequest;
      /* End of service model forward declarations required in QLDBSessionClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<SendCommandResult, QLDBSessionError> SendCommandOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<SendCommandOutcome> SendCommandOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class QLDBSessionClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const QLDBSessionClient*, const Model::SendCommandRequest&, const Model::SendCommandOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SendCommandResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace QLDBSession
} // namespace Aws
