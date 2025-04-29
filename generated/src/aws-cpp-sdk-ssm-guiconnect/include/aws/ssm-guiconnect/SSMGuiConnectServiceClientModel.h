/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ssm-guiconnect/SSMGuiConnectErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ssm-guiconnect/SSMGuiConnectEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSMGuiConnectClient header */
#include <aws/ssm-guiconnect/model/DeleteConnectionRecordingPreferencesResult.h>
#include <aws/ssm-guiconnect/model/GetConnectionRecordingPreferencesResult.h>
#include <aws/ssm-guiconnect/model/UpdateConnectionRecordingPreferencesResult.h>
#include <aws/ssm-guiconnect/model/GetConnectionRecordingPreferencesRequest.h>
#include <aws/ssm-guiconnect/model/DeleteConnectionRecordingPreferencesRequest.h>
/* End of service model headers required in SSMGuiConnectClient header */

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

  namespace SSMGuiConnect
  {
    using SSMGuiConnectClientConfiguration = Aws::Client::GenericClientConfiguration;
    using SSMGuiConnectEndpointProviderBase = Aws::SSMGuiConnect::Endpoint::SSMGuiConnectEndpointProviderBase;
    using SSMGuiConnectEndpointProvider = Aws::SSMGuiConnect::Endpoint::SSMGuiConnectEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSMGuiConnectClient header */
      class DeleteConnectionRecordingPreferencesRequest;
      class GetConnectionRecordingPreferencesRequest;
      class UpdateConnectionRecordingPreferencesRequest;
      /* End of service model forward declarations required in SSMGuiConnectClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteConnectionRecordingPreferencesResult, SSMGuiConnectError> DeleteConnectionRecordingPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetConnectionRecordingPreferencesResult, SSMGuiConnectError> GetConnectionRecordingPreferencesOutcome;
      typedef Aws::Utils::Outcome<UpdateConnectionRecordingPreferencesResult, SSMGuiConnectError> UpdateConnectionRecordingPreferencesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteConnectionRecordingPreferencesOutcome> DeleteConnectionRecordingPreferencesOutcomeCallable;
      typedef std::future<GetConnectionRecordingPreferencesOutcome> GetConnectionRecordingPreferencesOutcomeCallable;
      typedef std::future<UpdateConnectionRecordingPreferencesOutcome> UpdateConnectionRecordingPreferencesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSMGuiConnectClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSMGuiConnectClient*, const Model::DeleteConnectionRecordingPreferencesRequest&, const Model::DeleteConnectionRecordingPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectionRecordingPreferencesResponseReceivedHandler;
    typedef std::function<void(const SSMGuiConnectClient*, const Model::GetConnectionRecordingPreferencesRequest&, const Model::GetConnectionRecordingPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectionRecordingPreferencesResponseReceivedHandler;
    typedef std::function<void(const SSMGuiConnectClient*, const Model::UpdateConnectionRecordingPreferencesRequest&, const Model::UpdateConnectionRecordingPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConnectionRecordingPreferencesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSMGuiConnect
} // namespace Aws
