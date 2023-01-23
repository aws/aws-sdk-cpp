/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediapackage/MediaPackageErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediapackage/MediaPackageEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaPackageClient header */
#include <aws/mediapackage/model/ConfigureLogsResult.h>
#include <aws/mediapackage/model/CreateChannelResult.h>
#include <aws/mediapackage/model/CreateHarvestJobResult.h>
#include <aws/mediapackage/model/CreateOriginEndpointResult.h>
#include <aws/mediapackage/model/DeleteChannelResult.h>
#include <aws/mediapackage/model/DeleteOriginEndpointResult.h>
#include <aws/mediapackage/model/DescribeChannelResult.h>
#include <aws/mediapackage/model/DescribeHarvestJobResult.h>
#include <aws/mediapackage/model/DescribeOriginEndpointResult.h>
#include <aws/mediapackage/model/ListChannelsResult.h>
#include <aws/mediapackage/model/ListHarvestJobsResult.h>
#include <aws/mediapackage/model/ListOriginEndpointsResult.h>
#include <aws/mediapackage/model/ListTagsForResourceResult.h>
#include <aws/mediapackage/model/RotateIngestEndpointCredentialsResult.h>
#include <aws/mediapackage/model/UpdateChannelResult.h>
#include <aws/mediapackage/model/UpdateOriginEndpointResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaPackageClient header */

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

  namespace MediaPackage
  {
    using MediaPackageClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaPackageEndpointProviderBase = Aws::MediaPackage::Endpoint::MediaPackageEndpointProviderBase;
    using MediaPackageEndpointProvider = Aws::MediaPackage::Endpoint::MediaPackageEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaPackageClient header */
      class ConfigureLogsRequest;
      class CreateChannelRequest;
      class CreateHarvestJobRequest;
      class CreateOriginEndpointRequest;
      class DeleteChannelRequest;
      class DeleteOriginEndpointRequest;
      class DescribeChannelRequest;
      class DescribeHarvestJobRequest;
      class DescribeOriginEndpointRequest;
      class ListChannelsRequest;
      class ListHarvestJobsRequest;
      class ListOriginEndpointsRequest;
      class ListTagsForResourceRequest;
      class RotateIngestEndpointCredentialsRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      class UpdateOriginEndpointRequest;
      /* End of service model forward declarations required in MediaPackageClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ConfigureLogsResult, MediaPackageError> ConfigureLogsOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, MediaPackageError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateHarvestJobResult, MediaPackageError> CreateHarvestJobOutcome;
      typedef Aws::Utils::Outcome<CreateOriginEndpointResult, MediaPackageError> CreateOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, MediaPackageError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteOriginEndpointResult, MediaPackageError> DeleteOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelResult, MediaPackageError> DescribeChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeHarvestJobResult, MediaPackageError> DescribeHarvestJobOutcome;
      typedef Aws::Utils::Outcome<DescribeOriginEndpointResult, MediaPackageError> DescribeOriginEndpointOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, MediaPackageError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListHarvestJobsResult, MediaPackageError> ListHarvestJobsOutcome;
      typedef Aws::Utils::Outcome<ListOriginEndpointsResult, MediaPackageError> ListOriginEndpointsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaPackageError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<RotateIngestEndpointCredentialsResult, MediaPackageError> RotateIngestEndpointCredentialsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaPackageError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, MediaPackageError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateOriginEndpointResult, MediaPackageError> UpdateOriginEndpointOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ConfigureLogsOutcome> ConfigureLogsOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateHarvestJobOutcome> CreateHarvestJobOutcomeCallable;
      typedef std::future<CreateOriginEndpointOutcome> CreateOriginEndpointOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteOriginEndpointOutcome> DeleteOriginEndpointOutcomeCallable;
      typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
      typedef std::future<DescribeHarvestJobOutcome> DescribeHarvestJobOutcomeCallable;
      typedef std::future<DescribeOriginEndpointOutcome> DescribeOriginEndpointOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListHarvestJobsOutcome> ListHarvestJobsOutcomeCallable;
      typedef std::future<ListOriginEndpointsOutcome> ListOriginEndpointsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<RotateIngestEndpointCredentialsOutcome> RotateIngestEndpointCredentialsOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateOriginEndpointOutcome> UpdateOriginEndpointOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaPackageClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaPackageClient*, const Model::ConfigureLogsRequest&, const Model::ConfigureLogsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureLogsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateHarvestJobRequest&, const Model::CreateHarvestJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateHarvestJobResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::CreateOriginEndpointRequest&, const Model::CreateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DeleteOriginEndpointRequest&, const Model::DeleteOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeHarvestJobRequest&, const Model::DescribeHarvestJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHarvestJobResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::DescribeOriginEndpointRequest&, const Model::DescribeOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeOriginEndpointResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListHarvestJobsRequest&, const Model::ListHarvestJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListHarvestJobsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListOriginEndpointsRequest&, const Model::ListOriginEndpointsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOriginEndpointsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::RotateIngestEndpointCredentialsRequest&, const Model::RotateIngestEndpointCredentialsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RotateIngestEndpointCredentialsResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaPackageClient*, const Model::UpdateOriginEndpointRequest&, const Model::UpdateOriginEndpointOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateOriginEndpointResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaPackage
} // namespace Aws
