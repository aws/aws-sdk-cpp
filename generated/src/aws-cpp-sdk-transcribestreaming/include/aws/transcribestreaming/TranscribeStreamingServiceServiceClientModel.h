/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/transcribestreaming/TranscribeStreamingServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/transcribestreaming/TranscribeStreamingServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in TranscribeStreamingServiceClient header */
#include <aws/core/NoResult.h>
/* End of service model headers required in TranscribeStreamingServiceClient header */

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

    namespace Event
    {
      class EventEncoderStream;
    } // namespace Event

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

  namespace TranscribeStreamingService
  {
    using TranscribeStreamingServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using TranscribeStreamingServiceEndpointProviderBase = Aws::TranscribeStreamingService::Endpoint::TranscribeStreamingServiceEndpointProviderBase;
    using TranscribeStreamingServiceEndpointProvider = Aws::TranscribeStreamingService::Endpoint::TranscribeStreamingServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in TranscribeStreamingServiceClient header */
      class StartCallAnalyticsStreamTranscriptionRequest;
      class AudioStream;
      class StartMedicalStreamTranscriptionRequest;
      class AudioStream;
      class StartStreamTranscriptionRequest;
      class AudioStream;
      /* End of service model forward declarations required in TranscribeStreamingServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeStreamingServiceError> StartCallAnalyticsStreamTranscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeStreamingServiceError> StartMedicalStreamTranscriptionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, TranscribeStreamingServiceError> StartStreamTranscriptionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<StartCallAnalyticsStreamTranscriptionOutcome> StartCallAnalyticsStreamTranscriptionOutcomeCallable;
      typedef std::future<StartMedicalStreamTranscriptionOutcome> StartMedicalStreamTranscriptionOutcomeCallable;
      typedef std::future<StartStreamTranscriptionOutcome> StartStreamTranscriptionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class TranscribeStreamingServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(Model::AudioStream&)> StartCallAnalyticsStreamTranscriptionStreamReadyHandler;
    typedef std::function<void(const TranscribeStreamingServiceClient*, const Model::StartCallAnalyticsStreamTranscriptionRequest&, const Model::StartCallAnalyticsStreamTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartCallAnalyticsStreamTranscriptionResponseReceivedHandler;
    typedef std::function<void(Model::AudioStream&)> StartMedicalStreamTranscriptionStreamReadyHandler;
    typedef std::function<void(const TranscribeStreamingServiceClient*, const Model::StartMedicalStreamTranscriptionRequest&, const Model::StartMedicalStreamTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartMedicalStreamTranscriptionResponseReceivedHandler;
    typedef std::function<void(Model::AudioStream&)> StartStreamTranscriptionStreamReadyHandler;
    typedef std::function<void(const TranscribeStreamingServiceClient*, const Model::StartStreamTranscriptionRequest&, const Model::StartStreamTranscriptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartStreamTranscriptionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace TranscribeStreamingService
} // namespace Aws
