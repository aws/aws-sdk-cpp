/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediastore-data/MediaStoreDataErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediastore-data/MediaStoreDataEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaStoreDataClient header */
#include <aws/mediastore-data/model/DeleteObjectResult.h>
#include <aws/mediastore-data/model/DescribeObjectResult.h>
#include <aws/mediastore-data/model/GetObjectResult.h>
#include <aws/mediastore-data/model/ListItemsResult.h>
#include <aws/mediastore-data/model/PutObjectResult.h>
/* End of service model headers required in MediaStoreDataClient header */

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

  namespace MediaStoreData
  {
    using MediaStoreDataClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaStoreDataEndpointProviderBase = Aws::MediaStoreData::Endpoint::MediaStoreDataEndpointProviderBase;
    using MediaStoreDataEndpointProvider = Aws::MediaStoreData::Endpoint::MediaStoreDataEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaStoreDataClient header */
      class DeleteObjectRequest;
      class DescribeObjectRequest;
      class GetObjectRequest;
      class ListItemsRequest;
      class PutObjectRequest;
      /* End of service model forward declarations required in MediaStoreDataClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteObjectResult, MediaStoreDataError> DeleteObjectOutcome;
      typedef Aws::Utils::Outcome<DescribeObjectResult, MediaStoreDataError> DescribeObjectOutcome;
      typedef Aws::Utils::Outcome<GetObjectResult, MediaStoreDataError> GetObjectOutcome;
      typedef Aws::Utils::Outcome<ListItemsResult, MediaStoreDataError> ListItemsOutcome;
      typedef Aws::Utils::Outcome<PutObjectResult, MediaStoreDataError> PutObjectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteObjectOutcome> DeleteObjectOutcomeCallable;
      typedef std::future<DescribeObjectOutcome> DescribeObjectOutcomeCallable;
      typedef std::future<GetObjectOutcome> GetObjectOutcomeCallable;
      typedef std::future<ListItemsOutcome> ListItemsOutcomeCallable;
      typedef std::future<PutObjectOutcome> PutObjectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaStoreDataClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaStoreDataClient*, const Model::DeleteObjectRequest&, const Model::DeleteObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::DescribeObjectRequest&, const Model::DescribeObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::GetObjectRequest&, Model::GetObjectOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetObjectResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::ListItemsRequest&, const Model::ListItemsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListItemsResponseReceivedHandler;
    typedef std::function<void(const MediaStoreDataClient*, const Model::PutObjectRequest&, const Model::PutObjectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutObjectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaStoreData
} // namespace Aws
