/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mediatailor/MediaTailorErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mediatailor/MediaTailorEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MediaTailorClient header */
#include <aws/mediatailor/model/ConfigureLogsForPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/CreateChannelResult.h>
#include <aws/mediatailor/model/CreateLiveSourceResult.h>
#include <aws/mediatailor/model/CreatePrefetchScheduleResult.h>
#include <aws/mediatailor/model/CreateProgramResult.h>
#include <aws/mediatailor/model/CreateSourceLocationResult.h>
#include <aws/mediatailor/model/CreateVodSourceResult.h>
#include <aws/mediatailor/model/DeleteChannelResult.h>
#include <aws/mediatailor/model/DeleteChannelPolicyResult.h>
#include <aws/mediatailor/model/DeleteLiveSourceResult.h>
#include <aws/mediatailor/model/DeletePlaybackConfigurationResult.h>
#include <aws/mediatailor/model/DeletePrefetchScheduleResult.h>
#include <aws/mediatailor/model/DeleteProgramResult.h>
#include <aws/mediatailor/model/DeleteSourceLocationResult.h>
#include <aws/mediatailor/model/DeleteVodSourceResult.h>
#include <aws/mediatailor/model/DescribeChannelResult.h>
#include <aws/mediatailor/model/DescribeLiveSourceResult.h>
#include <aws/mediatailor/model/DescribeProgramResult.h>
#include <aws/mediatailor/model/DescribeSourceLocationResult.h>
#include <aws/mediatailor/model/DescribeVodSourceResult.h>
#include <aws/mediatailor/model/GetChannelPolicyResult.h>
#include <aws/mediatailor/model/GetChannelScheduleResult.h>
#include <aws/mediatailor/model/GetPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/GetPrefetchScheduleResult.h>
#include <aws/mediatailor/model/ListAlertsResult.h>
#include <aws/mediatailor/model/ListChannelsResult.h>
#include <aws/mediatailor/model/ListLiveSourcesResult.h>
#include <aws/mediatailor/model/ListPlaybackConfigurationsResult.h>
#include <aws/mediatailor/model/ListPrefetchSchedulesResult.h>
#include <aws/mediatailor/model/ListSourceLocationsResult.h>
#include <aws/mediatailor/model/ListTagsForResourceResult.h>
#include <aws/mediatailor/model/ListVodSourcesResult.h>
#include <aws/mediatailor/model/PutChannelPolicyResult.h>
#include <aws/mediatailor/model/PutPlaybackConfigurationResult.h>
#include <aws/mediatailor/model/StartChannelResult.h>
#include <aws/mediatailor/model/StopChannelResult.h>
#include <aws/mediatailor/model/UpdateChannelResult.h>
#include <aws/mediatailor/model/UpdateLiveSourceResult.h>
#include <aws/mediatailor/model/UpdateSourceLocationResult.h>
#include <aws/mediatailor/model/UpdateVodSourceResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MediaTailorClient header */

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

  namespace MediaTailor
  {
    using MediaTailorClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MediaTailorEndpointProviderBase = Aws::MediaTailor::Endpoint::MediaTailorEndpointProviderBase;
    using MediaTailorEndpointProvider = Aws::MediaTailor::Endpoint::MediaTailorEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MediaTailorClient header */
      class ConfigureLogsForPlaybackConfigurationRequest;
      class CreateChannelRequest;
      class CreateLiveSourceRequest;
      class CreatePrefetchScheduleRequest;
      class CreateProgramRequest;
      class CreateSourceLocationRequest;
      class CreateVodSourceRequest;
      class DeleteChannelRequest;
      class DeleteChannelPolicyRequest;
      class DeleteLiveSourceRequest;
      class DeletePlaybackConfigurationRequest;
      class DeletePrefetchScheduleRequest;
      class DeleteProgramRequest;
      class DeleteSourceLocationRequest;
      class DeleteVodSourceRequest;
      class DescribeChannelRequest;
      class DescribeLiveSourceRequest;
      class DescribeProgramRequest;
      class DescribeSourceLocationRequest;
      class DescribeVodSourceRequest;
      class GetChannelPolicyRequest;
      class GetChannelScheduleRequest;
      class GetPlaybackConfigurationRequest;
      class GetPrefetchScheduleRequest;
      class ListAlertsRequest;
      class ListChannelsRequest;
      class ListLiveSourcesRequest;
      class ListPlaybackConfigurationsRequest;
      class ListPrefetchSchedulesRequest;
      class ListSourceLocationsRequest;
      class ListTagsForResourceRequest;
      class ListVodSourcesRequest;
      class PutChannelPolicyRequest;
      class PutPlaybackConfigurationRequest;
      class StartChannelRequest;
      class StopChannelRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateChannelRequest;
      class UpdateLiveSourceRequest;
      class UpdateSourceLocationRequest;
      class UpdateVodSourceRequest;
      /* End of service model forward declarations required in MediaTailorClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<ConfigureLogsForPlaybackConfigurationResult, MediaTailorError> ConfigureLogsForPlaybackConfigurationOutcome;
      typedef Aws::Utils::Outcome<CreateChannelResult, MediaTailorError> CreateChannelOutcome;
      typedef Aws::Utils::Outcome<CreateLiveSourceResult, MediaTailorError> CreateLiveSourceOutcome;
      typedef Aws::Utils::Outcome<CreatePrefetchScheduleResult, MediaTailorError> CreatePrefetchScheduleOutcome;
      typedef Aws::Utils::Outcome<CreateProgramResult, MediaTailorError> CreateProgramOutcome;
      typedef Aws::Utils::Outcome<CreateSourceLocationResult, MediaTailorError> CreateSourceLocationOutcome;
      typedef Aws::Utils::Outcome<CreateVodSourceResult, MediaTailorError> CreateVodSourceOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelResult, MediaTailorError> DeleteChannelOutcome;
      typedef Aws::Utils::Outcome<DeleteChannelPolicyResult, MediaTailorError> DeleteChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<DeleteLiveSourceResult, MediaTailorError> DeleteLiveSourceOutcome;
      typedef Aws::Utils::Outcome<DeletePlaybackConfigurationResult, MediaTailorError> DeletePlaybackConfigurationOutcome;
      typedef Aws::Utils::Outcome<DeletePrefetchScheduleResult, MediaTailorError> DeletePrefetchScheduleOutcome;
      typedef Aws::Utils::Outcome<DeleteProgramResult, MediaTailorError> DeleteProgramOutcome;
      typedef Aws::Utils::Outcome<DeleteSourceLocationResult, MediaTailorError> DeleteSourceLocationOutcome;
      typedef Aws::Utils::Outcome<DeleteVodSourceResult, MediaTailorError> DeleteVodSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeChannelResult, MediaTailorError> DescribeChannelOutcome;
      typedef Aws::Utils::Outcome<DescribeLiveSourceResult, MediaTailorError> DescribeLiveSourceOutcome;
      typedef Aws::Utils::Outcome<DescribeProgramResult, MediaTailorError> DescribeProgramOutcome;
      typedef Aws::Utils::Outcome<DescribeSourceLocationResult, MediaTailorError> DescribeSourceLocationOutcome;
      typedef Aws::Utils::Outcome<DescribeVodSourceResult, MediaTailorError> DescribeVodSourceOutcome;
      typedef Aws::Utils::Outcome<GetChannelPolicyResult, MediaTailorError> GetChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<GetChannelScheduleResult, MediaTailorError> GetChannelScheduleOutcome;
      typedef Aws::Utils::Outcome<GetPlaybackConfigurationResult, MediaTailorError> GetPlaybackConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetPrefetchScheduleResult, MediaTailorError> GetPrefetchScheduleOutcome;
      typedef Aws::Utils::Outcome<ListAlertsResult, MediaTailorError> ListAlertsOutcome;
      typedef Aws::Utils::Outcome<ListChannelsResult, MediaTailorError> ListChannelsOutcome;
      typedef Aws::Utils::Outcome<ListLiveSourcesResult, MediaTailorError> ListLiveSourcesOutcome;
      typedef Aws::Utils::Outcome<ListPlaybackConfigurationsResult, MediaTailorError> ListPlaybackConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListPrefetchSchedulesResult, MediaTailorError> ListPrefetchSchedulesOutcome;
      typedef Aws::Utils::Outcome<ListSourceLocationsResult, MediaTailorError> ListSourceLocationsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MediaTailorError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListVodSourcesResult, MediaTailorError> ListVodSourcesOutcome;
      typedef Aws::Utils::Outcome<PutChannelPolicyResult, MediaTailorError> PutChannelPolicyOutcome;
      typedef Aws::Utils::Outcome<PutPlaybackConfigurationResult, MediaTailorError> PutPlaybackConfigurationOutcome;
      typedef Aws::Utils::Outcome<StartChannelResult, MediaTailorError> StartChannelOutcome;
      typedef Aws::Utils::Outcome<StopChannelResult, MediaTailorError> StopChannelOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaTailorError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MediaTailorError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateChannelResult, MediaTailorError> UpdateChannelOutcome;
      typedef Aws::Utils::Outcome<UpdateLiveSourceResult, MediaTailorError> UpdateLiveSourceOutcome;
      typedef Aws::Utils::Outcome<UpdateSourceLocationResult, MediaTailorError> UpdateSourceLocationOutcome;
      typedef Aws::Utils::Outcome<UpdateVodSourceResult, MediaTailorError> UpdateVodSourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<ConfigureLogsForPlaybackConfigurationOutcome> ConfigureLogsForPlaybackConfigurationOutcomeCallable;
      typedef std::future<CreateChannelOutcome> CreateChannelOutcomeCallable;
      typedef std::future<CreateLiveSourceOutcome> CreateLiveSourceOutcomeCallable;
      typedef std::future<CreatePrefetchScheduleOutcome> CreatePrefetchScheduleOutcomeCallable;
      typedef std::future<CreateProgramOutcome> CreateProgramOutcomeCallable;
      typedef std::future<CreateSourceLocationOutcome> CreateSourceLocationOutcomeCallable;
      typedef std::future<CreateVodSourceOutcome> CreateVodSourceOutcomeCallable;
      typedef std::future<DeleteChannelOutcome> DeleteChannelOutcomeCallable;
      typedef std::future<DeleteChannelPolicyOutcome> DeleteChannelPolicyOutcomeCallable;
      typedef std::future<DeleteLiveSourceOutcome> DeleteLiveSourceOutcomeCallable;
      typedef std::future<DeletePlaybackConfigurationOutcome> DeletePlaybackConfigurationOutcomeCallable;
      typedef std::future<DeletePrefetchScheduleOutcome> DeletePrefetchScheduleOutcomeCallable;
      typedef std::future<DeleteProgramOutcome> DeleteProgramOutcomeCallable;
      typedef std::future<DeleteSourceLocationOutcome> DeleteSourceLocationOutcomeCallable;
      typedef std::future<DeleteVodSourceOutcome> DeleteVodSourceOutcomeCallable;
      typedef std::future<DescribeChannelOutcome> DescribeChannelOutcomeCallable;
      typedef std::future<DescribeLiveSourceOutcome> DescribeLiveSourceOutcomeCallable;
      typedef std::future<DescribeProgramOutcome> DescribeProgramOutcomeCallable;
      typedef std::future<DescribeSourceLocationOutcome> DescribeSourceLocationOutcomeCallable;
      typedef std::future<DescribeVodSourceOutcome> DescribeVodSourceOutcomeCallable;
      typedef std::future<GetChannelPolicyOutcome> GetChannelPolicyOutcomeCallable;
      typedef std::future<GetChannelScheduleOutcome> GetChannelScheduleOutcomeCallable;
      typedef std::future<GetPlaybackConfigurationOutcome> GetPlaybackConfigurationOutcomeCallable;
      typedef std::future<GetPrefetchScheduleOutcome> GetPrefetchScheduleOutcomeCallable;
      typedef std::future<ListAlertsOutcome> ListAlertsOutcomeCallable;
      typedef std::future<ListChannelsOutcome> ListChannelsOutcomeCallable;
      typedef std::future<ListLiveSourcesOutcome> ListLiveSourcesOutcomeCallable;
      typedef std::future<ListPlaybackConfigurationsOutcome> ListPlaybackConfigurationsOutcomeCallable;
      typedef std::future<ListPrefetchSchedulesOutcome> ListPrefetchSchedulesOutcomeCallable;
      typedef std::future<ListSourceLocationsOutcome> ListSourceLocationsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListVodSourcesOutcome> ListVodSourcesOutcomeCallable;
      typedef std::future<PutChannelPolicyOutcome> PutChannelPolicyOutcomeCallable;
      typedef std::future<PutPlaybackConfigurationOutcome> PutPlaybackConfigurationOutcomeCallable;
      typedef std::future<StartChannelOutcome> StartChannelOutcomeCallable;
      typedef std::future<StopChannelOutcome> StopChannelOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateChannelOutcome> UpdateChannelOutcomeCallable;
      typedef std::future<UpdateLiveSourceOutcome> UpdateLiveSourceOutcomeCallable;
      typedef std::future<UpdateSourceLocationOutcome> UpdateSourceLocationOutcomeCallable;
      typedef std::future<UpdateVodSourceOutcome> UpdateVodSourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MediaTailorClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MediaTailorClient*, const Model::ConfigureLogsForPlaybackConfigurationRequest&, const Model::ConfigureLogsForPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ConfigureLogsForPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateChannelRequest&, const Model::CreateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateLiveSourceRequest&, const Model::CreateLiveSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateLiveSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreatePrefetchScheduleRequest&, const Model::CreatePrefetchScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePrefetchScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateProgramRequest&, const Model::CreateProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateSourceLocationRequest&, const Model::CreateSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::CreateVodSourceRequest&, const Model::CreateVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteChannelRequest&, const Model::DeleteChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteChannelPolicyRequest&, const Model::DeleteChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteLiveSourceRequest&, const Model::DeleteLiveSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteLiveSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeletePlaybackConfigurationRequest&, const Model::DeletePlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeletePrefetchScheduleRequest&, const Model::DeletePrefetchScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePrefetchScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteProgramRequest&, const Model::DeleteProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteSourceLocationRequest&, const Model::DeleteSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DeleteVodSourceRequest&, const Model::DeleteVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeChannelRequest&, const Model::DescribeChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeLiveSourceRequest&, const Model::DescribeLiveSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeLiveSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeProgramRequest&, const Model::DescribeProgramOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProgramResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeSourceLocationRequest&, const Model::DescribeSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::DescribeVodSourceRequest&, const Model::DescribeVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVodSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetChannelPolicyRequest&, const Model::GetChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetChannelScheduleRequest&, const Model::GetChannelScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChannelScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetPlaybackConfigurationRequest&, const Model::GetPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::GetPrefetchScheduleRequest&, const Model::GetPrefetchScheduleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPrefetchScheduleResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListAlertsRequest&, const Model::ListAlertsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAlertsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListChannelsRequest&, const Model::ListChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChannelsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListLiveSourcesRequest&, const Model::ListLiveSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLiveSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListPlaybackConfigurationsRequest&, const Model::ListPlaybackConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPlaybackConfigurationsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListPrefetchSchedulesRequest&, const Model::ListPrefetchSchedulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrefetchSchedulesResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListSourceLocationsRequest&, const Model::ListSourceLocationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSourceLocationsResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::ListVodSourcesRequest&, const Model::ListVodSourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVodSourcesResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::PutChannelPolicyRequest&, const Model::PutChannelPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutChannelPolicyResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::PutPlaybackConfigurationRequest&, const Model::PutPlaybackConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPlaybackConfigurationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::StartChannelRequest&, const Model::StartChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::StopChannelRequest&, const Model::StopChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateChannelRequest&, const Model::UpdateChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateChannelResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateLiveSourceRequest&, const Model::UpdateLiveSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateLiveSourceResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateSourceLocationRequest&, const Model::UpdateSourceLocationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSourceLocationResponseReceivedHandler;
    typedef std::function<void(const MediaTailorClient*, const Model::UpdateVodSourceRequest&, const Model::UpdateVodSourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVodSourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MediaTailor
} // namespace Aws
