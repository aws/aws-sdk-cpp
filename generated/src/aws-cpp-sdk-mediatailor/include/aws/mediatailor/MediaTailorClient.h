/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mediatailor/MediaTailorServiceClientModel.h>

namespace Aws
{
namespace MediaTailor
{
  /**
   * <p>Use the AWS Elemental MediaTailor SDKs and CLI to configure scalable ad
   * insertion and linear channels. With MediaTailor, you can assemble existing
   * content into a linear stream and serve targeted ads to viewers while maintaining
   * broadcast quality in over-the-top (OTT) video applications. For information
   * about using the service, including detailed information about the settings
   * covered in this guide, see the <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/">AWS Elemental
   * MediaTailor User Guide</a>.</p> <p>Through the SDKs and the CLI you manage AWS
   * Elemental MediaTailor configurations and channels the same as you do through the
   * console. For example, you specify ad insertion behavior and mapping information
   * for the origin server and the ad decision server (ADS).</p>
   */
  class AWS_MEDIATAILOR_API MediaTailorClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MediaTailorClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MediaTailorClientConfiguration ClientConfigurationType;
      typedef MediaTailorEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration(),
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<MediaTailorEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::MediaTailor::MediaTailorClientConfiguration& clientConfiguration = Aws::MediaTailor::MediaTailorClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MediaTailorClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MediaTailorClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MediaTailorClient();

        /**
         * <p>Configures Amazon CloudWatch log settings for a channel.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsForChannelOutcome ConfigureLogsForChannel(const Model::ConfigureLogsForChannelRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogsForChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfigureLogsForChannelRequestT = Model::ConfigureLogsForChannelRequest>
        Model::ConfigureLogsForChannelOutcomeCallable ConfigureLogsForChannelCallable(const ConfigureLogsForChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ConfigureLogsForChannel, request);
        }

        /**
         * An Async wrapper for ConfigureLogsForChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfigureLogsForChannelRequestT = Model::ConfigureLogsForChannelRequest>
        void ConfigureLogsForChannelAsync(const ConfigureLogsForChannelRequestT& request, const ConfigureLogsForChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ConfigureLogsForChannel, request, handler, context);
        }

        /**
         * <p>Amazon CloudWatch log settings for a playback configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ConfigureLogsForPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfigureLogsForPlaybackConfigurationOutcome ConfigureLogsForPlaybackConfiguration(const Model::ConfigureLogsForPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ConfigureLogsForPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ConfigureLogsForPlaybackConfigurationRequestT = Model::ConfigureLogsForPlaybackConfigurationRequest>
        Model::ConfigureLogsForPlaybackConfigurationOutcomeCallable ConfigureLogsForPlaybackConfigurationCallable(const ConfigureLogsForPlaybackConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ConfigureLogsForPlaybackConfiguration, request);
        }

        /**
         * An Async wrapper for ConfigureLogsForPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfigureLogsForPlaybackConfigurationRequestT = Model::ConfigureLogsForPlaybackConfigurationRequest>
        void ConfigureLogsForPlaybackConfigurationAsync(const ConfigureLogsForPlaybackConfigurationRequestT& request, const ConfigureLogsForPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ConfigureLogsForPlaybackConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChannelOutcome CreateChannel(const Model::CreateChannelRequest& request) const;

        /**
         * A Callable wrapper for CreateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        Model::CreateChannelOutcomeCallable CreateChannelCallable(const CreateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreateChannel, request);
        }

        /**
         * An Async wrapper for CreateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChannelRequestT = Model::CreateChannelRequest>
        void CreateChannelAsync(const CreateChannelRequestT& request, const CreateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreateChannel, request, handler, context);
        }

        /**
         * <p>The live source configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLiveSourceOutcome CreateLiveSource(const Model::CreateLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLiveSourceRequestT = Model::CreateLiveSourceRequest>
        Model::CreateLiveSourceOutcomeCallable CreateLiveSourceCallable(const CreateLiveSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreateLiveSource, request);
        }

        /**
         * An Async wrapper for CreateLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLiveSourceRequestT = Model::CreateLiveSourceRequest>
        void CreateLiveSourceAsync(const CreateLiveSourceRequestT& request, const CreateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreateLiveSource, request, handler, context);
        }

        /**
         * <p>Creates a prefetch schedule for a playback configuration. A prefetch schedule
         * allows you to tell MediaTailor to fetch and prepare certain ads before an ad
         * break happens. For more information about ad prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreatePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePrefetchScheduleOutcome CreatePrefetchSchedule(const Model::CreatePrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for CreatePrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePrefetchScheduleRequestT = Model::CreatePrefetchScheduleRequest>
        Model::CreatePrefetchScheduleOutcomeCallable CreatePrefetchScheduleCallable(const CreatePrefetchScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreatePrefetchSchedule, request);
        }

        /**
         * An Async wrapper for CreatePrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePrefetchScheduleRequestT = Model::CreatePrefetchScheduleRequest>
        void CreatePrefetchScheduleAsync(const CreatePrefetchScheduleRequestT& request, const CreatePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreatePrefetchSchedule, request, handler, context);
        }

        /**
         * <p>Creates a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProgramOutcome CreateProgram(const Model::CreateProgramRequest& request) const;

        /**
         * A Callable wrapper for CreateProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProgramRequestT = Model::CreateProgramRequest>
        Model::CreateProgramOutcomeCallable CreateProgramCallable(const CreateProgramRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreateProgram, request);
        }

        /**
         * An Async wrapper for CreateProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProgramRequestT = Model::CreateProgramRequest>
        void CreateProgramAsync(const CreateProgramRequestT& request, const CreateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreateProgram, request, handler, context);
        }

        /**
         * <p>Creates a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSourceLocationOutcome CreateSourceLocation(const Model::CreateSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for CreateSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSourceLocationRequestT = Model::CreateSourceLocationRequest>
        Model::CreateSourceLocationOutcomeCallable CreateSourceLocationCallable(const CreateSourceLocationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreateSourceLocation, request);
        }

        /**
         * An Async wrapper for CreateSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSourceLocationRequestT = Model::CreateSourceLocationRequest>
        void CreateSourceLocationAsync(const CreateSourceLocationRequestT& request, const CreateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreateSourceLocation, request, handler, context);
        }

        /**
         * <p>The VOD source configuration parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/CreateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVodSourceOutcome CreateVodSource(const Model::CreateVodSourceRequest& request) const;

        /**
         * A Callable wrapper for CreateVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVodSourceRequestT = Model::CreateVodSourceRequest>
        Model::CreateVodSourceOutcomeCallable CreateVodSourceCallable(const CreateVodSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::CreateVodSource, request);
        }

        /**
         * An Async wrapper for CreateVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVodSourceRequestT = Model::CreateVodSourceRequest>
        void CreateVodSourceAsync(const CreateVodSourceRequestT& request, const CreateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::CreateVodSource, request, handler, context);
        }

        /**
         * <p>Deletes a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelOutcome DeleteChannel(const Model::DeleteChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        Model::DeleteChannelOutcomeCallable DeleteChannelCallable(const DeleteChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteChannel, request);
        }

        /**
         * An Async wrapper for DeleteChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelRequestT = Model::DeleteChannelRequest>
        void DeleteChannelAsync(const DeleteChannelRequestT& request, const DeleteChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteChannel, request, handler, context);
        }

        /**
         * <p>The channel policy to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChannelPolicyOutcome DeleteChannelPolicy(const Model::DeleteChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChannelPolicyRequestT = Model::DeleteChannelPolicyRequest>
        Model::DeleteChannelPolicyOutcomeCallable DeleteChannelPolicyCallable(const DeleteChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteChannelPolicy, request);
        }

        /**
         * An Async wrapper for DeleteChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChannelPolicyRequestT = Model::DeleteChannelPolicyRequest>
        void DeleteChannelPolicyAsync(const DeleteChannelPolicyRequestT& request, const DeleteChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteChannelPolicy, request, handler, context);
        }

        /**
         * <p>The live source to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLiveSourceOutcome DeleteLiveSource(const Model::DeleteLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLiveSourceRequestT = Model::DeleteLiveSourceRequest>
        Model::DeleteLiveSourceOutcomeCallable DeleteLiveSourceCallable(const DeleteLiveSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteLiveSource, request);
        }

        /**
         * An Async wrapper for DeleteLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLiveSourceRequestT = Model::DeleteLiveSourceRequest>
        void DeleteLiveSourceAsync(const DeleteLiveSourceRequestT& request, const DeleteLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteLiveSource, request, handler, context);
        }

        /**
         * <p>Deletes a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePlaybackConfigurationOutcome DeletePlaybackConfiguration(const Model::DeletePlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeletePlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePlaybackConfigurationRequestT = Model::DeletePlaybackConfigurationRequest>
        Model::DeletePlaybackConfigurationOutcomeCallable DeletePlaybackConfigurationCallable(const DeletePlaybackConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeletePlaybackConfiguration, request);
        }

        /**
         * An Async wrapper for DeletePlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePlaybackConfigurationRequestT = Model::DeletePlaybackConfigurationRequest>
        void DeletePlaybackConfigurationAsync(const DeletePlaybackConfigurationRequestT& request, const DeletePlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeletePlaybackConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes a prefetch schedule for a specific playback configuration. If you
         * call <code>DeletePrefetchSchedule</code> on an expired prefetch schedule,
         * MediaTailor returns an HTTP 404 status code. For more information about ad
         * prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeletePrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePrefetchScheduleOutcome DeletePrefetchSchedule(const Model::DeletePrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for DeletePrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePrefetchScheduleRequestT = Model::DeletePrefetchScheduleRequest>
        Model::DeletePrefetchScheduleOutcomeCallable DeletePrefetchScheduleCallable(const DeletePrefetchScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeletePrefetchSchedule, request);
        }

        /**
         * An Async wrapper for DeletePrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePrefetchScheduleRequestT = Model::DeletePrefetchScheduleRequest>
        void DeletePrefetchScheduleAsync(const DeletePrefetchScheduleRequestT& request, const DeletePrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeletePrefetchSchedule, request, handler, context);
        }

        /**
         * <p>Deletes a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProgramOutcome DeleteProgram(const Model::DeleteProgramRequest& request) const;

        /**
         * A Callable wrapper for DeleteProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProgramRequestT = Model::DeleteProgramRequest>
        Model::DeleteProgramOutcomeCallable DeleteProgramCallable(const DeleteProgramRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteProgram, request);
        }

        /**
         * An Async wrapper for DeleteProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProgramRequestT = Model::DeleteProgramRequest>
        void DeleteProgramAsync(const DeleteProgramRequestT& request, const DeleteProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteProgram, request, handler, context);
        }

        /**
         * <p>Deletes a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSourceLocationOutcome DeleteSourceLocation(const Model::DeleteSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSourceLocationRequestT = Model::DeleteSourceLocationRequest>
        Model::DeleteSourceLocationOutcomeCallable DeleteSourceLocationCallable(const DeleteSourceLocationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteSourceLocation, request);
        }

        /**
         * An Async wrapper for DeleteSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSourceLocationRequestT = Model::DeleteSourceLocationRequest>
        void DeleteSourceLocationAsync(const DeleteSourceLocationRequestT& request, const DeleteSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteSourceLocation, request, handler, context);
        }

        /**
         * <p>The video on demand (VOD) source to delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DeleteVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVodSourceOutcome DeleteVodSource(const Model::DeleteVodSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVodSourceRequestT = Model::DeleteVodSourceRequest>
        Model::DeleteVodSourceOutcomeCallable DeleteVodSourceCallable(const DeleteVodSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DeleteVodSource, request);
        }

        /**
         * An Async wrapper for DeleteVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVodSourceRequestT = Model::DeleteVodSourceRequest>
        void DeleteVodSourceAsync(const DeleteVodSourceRequestT& request, const DeleteVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DeleteVodSource, request, handler, context);
        }

        /**
         * <p>Describes a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeChannelOutcome DescribeChannel(const Model::DescribeChannelRequest& request) const;

        /**
         * A Callable wrapper for DescribeChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        Model::DescribeChannelOutcomeCallable DescribeChannelCallable(const DescribeChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DescribeChannel, request);
        }

        /**
         * An Async wrapper for DescribeChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeChannelRequestT = Model::DescribeChannelRequest>
        void DescribeChannelAsync(const DescribeChannelRequestT& request, const DescribeChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DescribeChannel, request, handler, context);
        }

        /**
         * <p>The live source to describe.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLiveSourceOutcome DescribeLiveSource(const Model::DescribeLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLiveSourceRequestT = Model::DescribeLiveSourceRequest>
        Model::DescribeLiveSourceOutcomeCallable DescribeLiveSourceCallable(const DescribeLiveSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DescribeLiveSource, request);
        }

        /**
         * An Async wrapper for DescribeLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLiveSourceRequestT = Model::DescribeLiveSourceRequest>
        void DescribeLiveSourceAsync(const DescribeLiveSourceRequestT& request, const DescribeLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DescribeLiveSource, request, handler, context);
        }

        /**
         * <p>Describes a program within a channel. For information about programs, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-programs.html">Working
         * with programs</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProgramOutcome DescribeProgram(const Model::DescribeProgramRequest& request) const;

        /**
         * A Callable wrapper for DescribeProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProgramRequestT = Model::DescribeProgramRequest>
        Model::DescribeProgramOutcomeCallable DescribeProgramCallable(const DescribeProgramRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DescribeProgram, request);
        }

        /**
         * An Async wrapper for DescribeProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProgramRequestT = Model::DescribeProgramRequest>
        void DescribeProgramAsync(const DescribeProgramRequestT& request, const DescribeProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DescribeProgram, request, handler, context);
        }

        /**
         * <p>Describes a source location. A source location is a container for sources.
         * For more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSourceLocationOutcome DescribeSourceLocation(const Model::DescribeSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSourceLocationRequestT = Model::DescribeSourceLocationRequest>
        Model::DescribeSourceLocationOutcomeCallable DescribeSourceLocationCallable(const DescribeSourceLocationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DescribeSourceLocation, request);
        }

        /**
         * An Async wrapper for DescribeSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSourceLocationRequestT = Model::DescribeSourceLocationRequest>
        void DescribeSourceLocationAsync(const DescribeSourceLocationRequestT& request, const DescribeSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DescribeSourceLocation, request, handler, context);
        }

        /**
         * <p>Provides details about a specific video on demand (VOD) source in a specific
         * source location.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/DescribeVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVodSourceOutcome DescribeVodSource(const Model::DescribeVodSourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVodSourceRequestT = Model::DescribeVodSourceRequest>
        Model::DescribeVodSourceOutcomeCallable DescribeVodSourceCallable(const DescribeVodSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::DescribeVodSource, request);
        }

        /**
         * An Async wrapper for DescribeVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVodSourceRequestT = Model::DescribeVodSourceRequest>
        void DescribeVodSourceAsync(const DescribeVodSourceRequestT& request, const DescribeVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::DescribeVodSource, request, handler, context);
        }

        /**
         * <p>Returns the channel's IAM policy. IAM policies are used to control access to
         * your channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelPolicyOutcome GetChannelPolicy(const Model::GetChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelPolicyRequestT = Model::GetChannelPolicyRequest>
        Model::GetChannelPolicyOutcomeCallable GetChannelPolicyCallable(const GetChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::GetChannelPolicy, request);
        }

        /**
         * An Async wrapper for GetChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelPolicyRequestT = Model::GetChannelPolicyRequest>
        void GetChannelPolicyAsync(const GetChannelPolicyRequestT& request, const GetChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::GetChannelPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves information about your channel's schedule.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetChannelSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChannelScheduleOutcome GetChannelSchedule(const Model::GetChannelScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetChannelSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChannelScheduleRequestT = Model::GetChannelScheduleRequest>
        Model::GetChannelScheduleOutcomeCallable GetChannelScheduleCallable(const GetChannelScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::GetChannelSchedule, request);
        }

        /**
         * An Async wrapper for GetChannelSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChannelScheduleRequestT = Model::GetChannelScheduleRequest>
        void GetChannelScheduleAsync(const GetChannelScheduleRequestT& request, const GetChannelScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::GetChannelSchedule, request, handler, context);
        }

        /**
         * <p>Retrieves a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPlaybackConfigurationOutcome GetPlaybackConfiguration(const Model::GetPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPlaybackConfigurationRequestT = Model::GetPlaybackConfigurationRequest>
        Model::GetPlaybackConfigurationOutcomeCallable GetPlaybackConfigurationCallable(const GetPlaybackConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::GetPlaybackConfiguration, request);
        }

        /**
         * An Async wrapper for GetPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPlaybackConfigurationRequestT = Model::GetPlaybackConfigurationRequest>
        void GetPlaybackConfigurationAsync(const GetPlaybackConfigurationRequestT& request, const GetPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::GetPlaybackConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves a prefetch schedule for a playback configuration. A prefetch
         * schedule allows you to tell MediaTailor to fetch and prepare certain ads before
         * an ad break happens. For more information about ad prefetching, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/prefetching-ads.html">Using
         * ad prefetching</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/GetPrefetchSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPrefetchScheduleOutcome GetPrefetchSchedule(const Model::GetPrefetchScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetPrefetchSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPrefetchScheduleRequestT = Model::GetPrefetchScheduleRequest>
        Model::GetPrefetchScheduleOutcomeCallable GetPrefetchScheduleCallable(const GetPrefetchScheduleRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::GetPrefetchSchedule, request);
        }

        /**
         * An Async wrapper for GetPrefetchSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPrefetchScheduleRequestT = Model::GetPrefetchScheduleRequest>
        void GetPrefetchScheduleAsync(const GetPrefetchScheduleRequestT& request, const GetPrefetchScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::GetPrefetchSchedule, request, handler, context);
        }

        /**
         * <p>Lists the alerts that are associated with a MediaTailor channel assembly
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListAlerts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAlertsOutcome ListAlerts(const Model::ListAlertsRequest& request) const;

        /**
         * A Callable wrapper for ListAlerts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAlertsRequestT = Model::ListAlertsRequest>
        Model::ListAlertsOutcomeCallable ListAlertsCallable(const ListAlertsRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListAlerts, request);
        }

        /**
         * An Async wrapper for ListAlerts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAlertsRequestT = Model::ListAlertsRequest>
        void ListAlertsAsync(const ListAlertsRequestT& request, const ListAlertsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListAlerts, request, handler, context);
        }

        /**
         * <p>Retrieves information about the channels that are associated with the current
         * AWS account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChannelsOutcome ListChannels(const Model::ListChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        Model::ListChannelsOutcomeCallable ListChannelsCallable(const ListChannelsRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListChannels, request);
        }

        /**
         * An Async wrapper for ListChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChannelsRequestT = Model::ListChannelsRequest>
        void ListChannelsAsync(const ListChannelsRequestT& request, const ListChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListChannels, request, handler, context);
        }

        /**
         * <p>Lists the live sources contained in a source location. A source represents a
         * piece of content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListLiveSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLiveSourcesOutcome ListLiveSources(const Model::ListLiveSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListLiveSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLiveSourcesRequestT = Model::ListLiveSourcesRequest>
        Model::ListLiveSourcesOutcomeCallable ListLiveSourcesCallable(const ListLiveSourcesRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListLiveSources, request);
        }

        /**
         * An Async wrapper for ListLiveSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLiveSourcesRequestT = Model::ListLiveSourcesRequest>
        void ListLiveSourcesAsync(const ListLiveSourcesRequestT& request, const ListLiveSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListLiveSources, request, handler, context);
        }

        /**
         * <p>Retrieves existing playback configurations. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with Configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPlaybackConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPlaybackConfigurationsOutcome ListPlaybackConfigurations(const Model::ListPlaybackConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListPlaybackConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPlaybackConfigurationsRequestT = Model::ListPlaybackConfigurationsRequest>
        Model::ListPlaybackConfigurationsOutcomeCallable ListPlaybackConfigurationsCallable(const ListPlaybackConfigurationsRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListPlaybackConfigurations, request);
        }

        /**
         * An Async wrapper for ListPlaybackConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPlaybackConfigurationsRequestT = Model::ListPlaybackConfigurationsRequest>
        void ListPlaybackConfigurationsAsync(const ListPlaybackConfigurationsRequestT& request, const ListPlaybackConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListPlaybackConfigurations, request, handler, context);
        }

        /**
         * <p>Lists the prefetch schedules for a playback configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListPrefetchSchedules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrefetchSchedulesOutcome ListPrefetchSchedules(const Model::ListPrefetchSchedulesRequest& request) const;

        /**
         * A Callable wrapper for ListPrefetchSchedules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPrefetchSchedulesRequestT = Model::ListPrefetchSchedulesRequest>
        Model::ListPrefetchSchedulesOutcomeCallable ListPrefetchSchedulesCallable(const ListPrefetchSchedulesRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListPrefetchSchedules, request);
        }

        /**
         * An Async wrapper for ListPrefetchSchedules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPrefetchSchedulesRequestT = Model::ListPrefetchSchedulesRequest>
        void ListPrefetchSchedulesAsync(const ListPrefetchSchedulesRequestT& request, const ListPrefetchSchedulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListPrefetchSchedules, request, handler, context);
        }

        /**
         * <p>Lists the source locations for a channel. A source location defines the host
         * server URL, and contains a list of sources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListSourceLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSourceLocationsOutcome ListSourceLocations(const Model::ListSourceLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListSourceLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSourceLocationsRequestT = Model::ListSourceLocationsRequest>
        Model::ListSourceLocationsOutcomeCallable ListSourceLocationsCallable(const ListSourceLocationsRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListSourceLocations, request);
        }

        /**
         * An Async wrapper for ListSourceLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSourceLocationsRequestT = Model::ListSourceLocationsRequest>
        void ListSourceLocationsAsync(const ListSourceLocationsRequestT& request, const ListSourceLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListSourceLocations, request, handler, context);
        }

        /**
         * <p>A list of tags that are associated with this resource. Tags are key-value
         * pairs that you can associate with Amazon resources to help with organization,
         * access control, and cost tracking. For more information, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
         * AWS Elemental MediaTailor Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the VOD sources contained in a source location. A source represents a
         * piece of content.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ListVodSources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVodSourcesOutcome ListVodSources(const Model::ListVodSourcesRequest& request) const;

        /**
         * A Callable wrapper for ListVodSources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVodSourcesRequestT = Model::ListVodSourcesRequest>
        Model::ListVodSourcesOutcomeCallable ListVodSourcesCallable(const ListVodSourcesRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::ListVodSources, request);
        }

        /**
         * An Async wrapper for ListVodSources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVodSourcesRequestT = Model::ListVodSourcesRequest>
        void ListVodSourcesAsync(const ListVodSourcesRequestT& request, const ListVodSourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::ListVodSources, request, handler, context);
        }

        /**
         * <p>Creates an IAM policy for the channel. IAM policies are used to control
         * access to your channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutChannelPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutChannelPolicyOutcome PutChannelPolicy(const Model::PutChannelPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutChannelPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutChannelPolicyRequestT = Model::PutChannelPolicyRequest>
        Model::PutChannelPolicyOutcomeCallable PutChannelPolicyCallable(const PutChannelPolicyRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::PutChannelPolicy, request);
        }

        /**
         * An Async wrapper for PutChannelPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutChannelPolicyRequestT = Model::PutChannelPolicyRequest>
        void PutChannelPolicyAsync(const PutChannelPolicyRequestT& request, const PutChannelPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::PutChannelPolicy, request, handler, context);
        }

        /**
         * <p>Creates a playback configuration. For information about MediaTailor
         * configurations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/configurations.html">Working
         * with configurations in AWS Elemental MediaTailor</a>.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/PutPlaybackConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPlaybackConfigurationOutcome PutPlaybackConfiguration(const Model::PutPlaybackConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutPlaybackConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPlaybackConfigurationRequestT = Model::PutPlaybackConfigurationRequest>
        Model::PutPlaybackConfigurationOutcomeCallable PutPlaybackConfigurationCallable(const PutPlaybackConfigurationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::PutPlaybackConfiguration, request);
        }

        /**
         * An Async wrapper for PutPlaybackConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPlaybackConfigurationRequestT = Model::PutPlaybackConfigurationRequest>
        void PutPlaybackConfigurationAsync(const PutPlaybackConfigurationRequestT& request, const PutPlaybackConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::PutPlaybackConfiguration, request, handler, context);
        }

        /**
         * <p>Starts a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StartChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StartChannelOutcome StartChannel(const Model::StartChannelRequest& request) const;

        /**
         * A Callable wrapper for StartChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartChannelRequestT = Model::StartChannelRequest>
        Model::StartChannelOutcomeCallable StartChannelCallable(const StartChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::StartChannel, request);
        }

        /**
         * An Async wrapper for StartChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartChannelRequestT = Model::StartChannelRequest>
        void StartChannelAsync(const StartChannelRequestT& request, const StartChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::StartChannel, request, handler, context);
        }

        /**
         * <p>Stops a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/StopChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::StopChannelOutcome StopChannel(const Model::StopChannelRequest& request) const;

        /**
         * A Callable wrapper for StopChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopChannelRequestT = Model::StopChannelRequest>
        Model::StopChannelOutcomeCallable StopChannelCallable(const StopChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::StopChannel, request);
        }

        /**
         * An Async wrapper for StopChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopChannelRequestT = Model::StopChannelRequest>
        void StopChannelAsync(const StopChannelRequestT& request, const StopChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::StopChannel, request, handler, context);
        }

        /**
         * <p>The resource to tag. Tags are key-value pairs that you can associate with
         * Amazon resources to help with organization, access control, and cost tracking.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/tagging.html">Tagging
         * AWS Elemental MediaTailor Resources</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::TagResource, request, handler, context);
        }

        /**
         * <p>The resource to untag.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a channel. For information about MediaTailor channels, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-channels.html">Working
         * with channels</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateChannelOutcome UpdateChannel(const Model::UpdateChannelRequest& request) const;

        /**
         * A Callable wrapper for UpdateChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        Model::UpdateChannelOutcomeCallable UpdateChannelCallable(const UpdateChannelRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UpdateChannel, request);
        }

        /**
         * An Async wrapper for UpdateChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateChannelRequestT = Model::UpdateChannelRequest>
        void UpdateChannelAsync(const UpdateChannelRequestT& request, const UpdateChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UpdateChannel, request, handler, context);
        }

        /**
         * <p>Updates a live source's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateLiveSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLiveSourceOutcome UpdateLiveSource(const Model::UpdateLiveSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateLiveSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLiveSourceRequestT = Model::UpdateLiveSourceRequest>
        Model::UpdateLiveSourceOutcomeCallable UpdateLiveSourceCallable(const UpdateLiveSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UpdateLiveSource, request);
        }

        /**
         * An Async wrapper for UpdateLiveSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLiveSourceRequestT = Model::UpdateLiveSourceRequest>
        void UpdateLiveSourceAsync(const UpdateLiveSourceRequestT& request, const UpdateLiveSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UpdateLiveSource, request, handler, context);
        }

        /**
         * <p>Updates a program within a channel.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateProgram">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProgramOutcome UpdateProgram(const Model::UpdateProgramRequest& request) const;

        /**
         * A Callable wrapper for UpdateProgram that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProgramRequestT = Model::UpdateProgramRequest>
        Model::UpdateProgramOutcomeCallable UpdateProgramCallable(const UpdateProgramRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UpdateProgram, request);
        }

        /**
         * An Async wrapper for UpdateProgram that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProgramRequestT = Model::UpdateProgramRequest>
        void UpdateProgramAsync(const UpdateProgramRequestT& request, const UpdateProgramResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UpdateProgram, request, handler, context);
        }

        /**
         * <p>Updates a source location. A source location is a container for sources. For
         * more information about source locations, see <a
         * href="https://docs.aws.amazon.com/mediatailor/latest/ug/channel-assembly-source-locations.html">Working
         * with source locations</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateSourceLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSourceLocationOutcome UpdateSourceLocation(const Model::UpdateSourceLocationRequest& request) const;

        /**
         * A Callable wrapper for UpdateSourceLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSourceLocationRequestT = Model::UpdateSourceLocationRequest>
        Model::UpdateSourceLocationOutcomeCallable UpdateSourceLocationCallable(const UpdateSourceLocationRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UpdateSourceLocation, request);
        }

        /**
         * An Async wrapper for UpdateSourceLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSourceLocationRequestT = Model::UpdateSourceLocationRequest>
        void UpdateSourceLocationAsync(const UpdateSourceLocationRequestT& request, const UpdateSourceLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UpdateSourceLocation, request, handler, context);
        }

        /**
         * <p>Updates a VOD source's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateVodSource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVodSourceOutcome UpdateVodSource(const Model::UpdateVodSourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateVodSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateVodSourceRequestT = Model::UpdateVodSourceRequest>
        Model::UpdateVodSourceOutcomeCallable UpdateVodSourceCallable(const UpdateVodSourceRequestT& request) const
        {
            return SubmitCallable(&MediaTailorClient::UpdateVodSource, request);
        }

        /**
         * An Async wrapper for UpdateVodSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateVodSourceRequestT = Model::UpdateVodSourceRequest>
        void UpdateVodSourceAsync(const UpdateVodSourceRequestT& request, const UpdateVodSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MediaTailorClient::UpdateVodSource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MediaTailorEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MediaTailorClient>;
      void init(const MediaTailorClientConfiguration& clientConfiguration);

      MediaTailorClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MediaTailorEndpointProviderBase> m_endpointProvider;
  };

} // namespace MediaTailor
} // namespace Aws
