/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/s3outposts/S3OutpostsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/s3outposts/S3OutpostsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in S3OutpostsClient header */
#include <aws/s3outposts/model/CreateEndpointResult.h>
#include <aws/s3outposts/model/ListEndpointsResult.h>
#include <aws/s3outposts/model/ListSharedEndpointsResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in S3OutpostsClient header */

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

  namespace S3Outposts
  {
    using S3OutpostsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using S3OutpostsEndpointProviderBase = Aws::S3Outposts::Endpoint::S3OutpostsEndpointProviderBase;
    using S3OutpostsEndpointProvider = Aws::S3Outposts::Endpoint::S3OutpostsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in S3OutpostsClient header */
      class CreateEndpointRequest;
      class DeleteEndpointRequest;
      class ListEndpointsRequest;
      class ListSharedEndpointsRequest;
      /* End of service model forward declarations required in S3OutpostsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateEndpointResult, S3OutpostsError> CreateEndpointOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, S3OutpostsError> DeleteEndpointOutcome;
      typedef Aws::Utils::Outcome<ListEndpointsResult, S3OutpostsError> ListEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListSharedEndpointsResult, S3OutpostsError> ListSharedEndpointsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateEndpointOutcome> CreateEndpointOutcomeCallable;
      typedef std::future<DeleteEndpointOutcome> DeleteEndpointOutcomeCallable;
      typedef std::future<ListEndpointsOutcome> ListEndpointsOutcomeCallable;
      typedef std::future<ListSharedEndpointsOutcome> ListSharedEndpointsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class S3OutpostsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const S3OutpostsClient*, const Model::CreateEndpointRequest&, const Model::CreateEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateEndpointResponseReceivedHandler;
    typedef std::function<void(const S3OutpostsClient*, const Model::DeleteEndpointRequest&, const Model::DeleteEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteEndpointResponseReceivedHandler;
    typedef std::function<void(const S3OutpostsClient*, const Model::ListEndpointsRequest&, const Model::ListEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEndpointsResponseReceivedHandler;
    typedef std::function<void(const S3OutpostsClient*, const Model::ListSharedEndpointsRequest&, const Model::ListSharedEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSharedEndpointsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace S3Outposts
} // namespace Aws
