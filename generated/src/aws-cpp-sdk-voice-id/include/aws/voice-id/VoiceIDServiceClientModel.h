/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/voice-id/VoiceIDErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/voice-id/VoiceIDEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in VoiceIDClient header */
#include <aws/voice-id/model/CreateDomainResult.h>
#include <aws/voice-id/model/DescribeDomainResult.h>
#include <aws/voice-id/model/DescribeFraudsterResult.h>
#include <aws/voice-id/model/DescribeFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/DescribeSpeakerResult.h>
#include <aws/voice-id/model/DescribeSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/EvaluateSessionResult.h>
#include <aws/voice-id/model/ListDomainsResult.h>
#include <aws/voice-id/model/ListFraudsterRegistrationJobsResult.h>
#include <aws/voice-id/model/ListSpeakerEnrollmentJobsResult.h>
#include <aws/voice-id/model/ListSpeakersResult.h>
#include <aws/voice-id/model/ListTagsForResourceResult.h>
#include <aws/voice-id/model/OptOutSpeakerResult.h>
#include <aws/voice-id/model/StartFraudsterRegistrationJobResult.h>
#include <aws/voice-id/model/StartSpeakerEnrollmentJobResult.h>
#include <aws/voice-id/model/TagResourceResult.h>
#include <aws/voice-id/model/UntagResourceResult.h>
#include <aws/voice-id/model/UpdateDomainResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in VoiceIDClient header */

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

  namespace VoiceID
  {
    using VoiceIDClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using VoiceIDEndpointProviderBase = Aws::VoiceID::Endpoint::VoiceIDEndpointProviderBase;
    using VoiceIDEndpointProvider = Aws::VoiceID::Endpoint::VoiceIDEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in VoiceIDClient header */
      class CreateDomainRequest;
      class DeleteDomainRequest;
      class DeleteFraudsterRequest;
      class DeleteSpeakerRequest;
      class DescribeDomainRequest;
      class DescribeFraudsterRequest;
      class DescribeFraudsterRegistrationJobRequest;
      class DescribeSpeakerRequest;
      class DescribeSpeakerEnrollmentJobRequest;
      class EvaluateSessionRequest;
      class ListDomainsRequest;
      class ListFraudsterRegistrationJobsRequest;
      class ListSpeakerEnrollmentJobsRequest;
      class ListSpeakersRequest;
      class ListTagsForResourceRequest;
      class OptOutSpeakerRequest;
      class StartFraudsterRegistrationJobRequest;
      class StartSpeakerEnrollmentJobRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDomainRequest;
      /* End of service model forward declarations required in VoiceIDClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDomainResult, VoiceIDError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteFraudsterOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, VoiceIDError> DeleteSpeakerOutcome;
      typedef Aws::Utils::Outcome<DescribeDomainResult, VoiceIDError> DescribeDomainOutcome;
      typedef Aws::Utils::Outcome<DescribeFraudsterResult, VoiceIDError> DescribeFraudsterOutcome;
      typedef Aws::Utils::Outcome<DescribeFraudsterRegistrationJobResult, VoiceIDError> DescribeFraudsterRegistrationJobOutcome;
      typedef Aws::Utils::Outcome<DescribeSpeakerResult, VoiceIDError> DescribeSpeakerOutcome;
      typedef Aws::Utils::Outcome<DescribeSpeakerEnrollmentJobResult, VoiceIDError> DescribeSpeakerEnrollmentJobOutcome;
      typedef Aws::Utils::Outcome<EvaluateSessionResult, VoiceIDError> EvaluateSessionOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, VoiceIDError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<ListFraudsterRegistrationJobsResult, VoiceIDError> ListFraudsterRegistrationJobsOutcome;
      typedef Aws::Utils::Outcome<ListSpeakerEnrollmentJobsResult, VoiceIDError> ListSpeakerEnrollmentJobsOutcome;
      typedef Aws::Utils::Outcome<ListSpeakersResult, VoiceIDError> ListSpeakersOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, VoiceIDError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<OptOutSpeakerResult, VoiceIDError> OptOutSpeakerOutcome;
      typedef Aws::Utils::Outcome<StartFraudsterRegistrationJobResult, VoiceIDError> StartFraudsterRegistrationJobOutcome;
      typedef Aws::Utils::Outcome<StartSpeakerEnrollmentJobResult, VoiceIDError> StartSpeakerEnrollmentJobOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, VoiceIDError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, VoiceIDError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDomainResult, VoiceIDError> UpdateDomainOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DeleteFraudsterOutcome> DeleteFraudsterOutcomeCallable;
      typedef std::future<DeleteSpeakerOutcome> DeleteSpeakerOutcomeCallable;
      typedef std::future<DescribeDomainOutcome> DescribeDomainOutcomeCallable;
      typedef std::future<DescribeFraudsterOutcome> DescribeFraudsterOutcomeCallable;
      typedef std::future<DescribeFraudsterRegistrationJobOutcome> DescribeFraudsterRegistrationJobOutcomeCallable;
      typedef std::future<DescribeSpeakerOutcome> DescribeSpeakerOutcomeCallable;
      typedef std::future<DescribeSpeakerEnrollmentJobOutcome> DescribeSpeakerEnrollmentJobOutcomeCallable;
      typedef std::future<EvaluateSessionOutcome> EvaluateSessionOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<ListFraudsterRegistrationJobsOutcome> ListFraudsterRegistrationJobsOutcomeCallable;
      typedef std::future<ListSpeakerEnrollmentJobsOutcome> ListSpeakerEnrollmentJobsOutcomeCallable;
      typedef std::future<ListSpeakersOutcome> ListSpeakersOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<OptOutSpeakerOutcome> OptOutSpeakerOutcomeCallable;
      typedef std::future<StartFraudsterRegistrationJobOutcome> StartFraudsterRegistrationJobOutcomeCallable;
      typedef std::future<StartSpeakerEnrollmentJobOutcome> StartSpeakerEnrollmentJobOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDomainOutcome> UpdateDomainOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class VoiceIDClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const VoiceIDClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteFraudsterRequest&, const Model::DeleteFraudsterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteFraudsterResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DeleteSpeakerRequest&, const Model::DeleteSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeDomainRequest&, const Model::DescribeDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDomainResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeFraudsterRequest&, const Model::DescribeFraudsterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFraudsterResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeFraudsterRegistrationJobRequest&, const Model::DescribeFraudsterRegistrationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFraudsterRegistrationJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeSpeakerRequest&, const Model::DescribeSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::DescribeSpeakerEnrollmentJobRequest&, const Model::DescribeSpeakerEnrollmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSpeakerEnrollmentJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::EvaluateSessionRequest&, const Model::EvaluateSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EvaluateSessionResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListFraudsterRegistrationJobsRequest&, const Model::ListFraudsterRegistrationJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListFraudsterRegistrationJobsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListSpeakerEnrollmentJobsRequest&, const Model::ListSpeakerEnrollmentJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeakerEnrollmentJobsResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListSpeakersRequest&, const Model::ListSpeakersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSpeakersResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::OptOutSpeakerRequest&, const Model::OptOutSpeakerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > OptOutSpeakerResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::StartFraudsterRegistrationJobRequest&, const Model::StartFraudsterRegistrationJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartFraudsterRegistrationJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::StartSpeakerEnrollmentJobRequest&, const Model::StartSpeakerEnrollmentJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSpeakerEnrollmentJobResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const VoiceIDClient*, const Model::UpdateDomainRequest&, const Model::UpdateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDomainResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace VoiceID
} // namespace Aws
