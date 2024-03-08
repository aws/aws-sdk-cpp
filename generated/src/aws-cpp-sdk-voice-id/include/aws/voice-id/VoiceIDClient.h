/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/voice-id/VoiceIDServiceClientModel.h>

namespace Aws
{
namespace VoiceID
{
  /**
   * <p>Amazon Connect Voice ID provides real-time caller authentication and fraud
   * risk detection, which make voice interactions in contact centers more secure and
   * efficient.</p>
   */
  class AWS_VOICEID_API VoiceIDClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<VoiceIDClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef VoiceIDClientConfiguration ClientConfigurationType;
      typedef VoiceIDEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration(),
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VoiceIDClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<VoiceIDEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::VoiceID::VoiceIDClientConfiguration& clientConfiguration = Aws::VoiceID::VoiceIDClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VoiceIDClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VoiceIDClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~VoiceIDClient();

        /**
         * <p>Associates the fraudsters with the watchlist specified in the same domain.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/AssociateFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFraudsterOutcome AssociateFraudster(const Model::AssociateFraudsterRequest& request) const;

        /**
         * A Callable wrapper for AssociateFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFraudsterRequestT = Model::AssociateFraudsterRequest>
        Model::AssociateFraudsterOutcomeCallable AssociateFraudsterCallable(const AssociateFraudsterRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::AssociateFraudster, request);
        }

        /**
         * An Async wrapper for AssociateFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFraudsterRequestT = Model::AssociateFraudsterRequest>
        void AssociateFraudsterAsync(const AssociateFraudsterRequestT& request, const AssociateFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::AssociateFraudster, request, handler, context);
        }

        /**
         * <p>Creates a domain that contains all Amazon Connect Voice ID data, such as
         * speakers, fraudsters, customer audio, and voiceprints. Every domain is created
         * with a default watchlist that fraudsters can be a part of.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates a watchlist that fraudsters can be a part of.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/CreateWatchlist">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateWatchlistOutcome CreateWatchlist(const Model::CreateWatchlistRequest& request) const;

        /**
         * A Callable wrapper for CreateWatchlist that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateWatchlistRequestT = Model::CreateWatchlistRequest>
        Model::CreateWatchlistOutcomeCallable CreateWatchlistCallable(const CreateWatchlistRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::CreateWatchlist, request);
        }

        /**
         * An Async wrapper for CreateWatchlist that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateWatchlistRequestT = Model::CreateWatchlistRequest>
        void CreateWatchlistAsync(const CreateWatchlistRequestT& request, const CreateWatchlistResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::CreateWatchlist, request, handler, context);
        }

        /**
         * <p>Deletes the specified domain from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Deletes the specified fraudster from Voice ID. This action disassociates the
         * fraudster from any watchlists it is a part of.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFraudsterOutcome DeleteFraudster(const Model::DeleteFraudsterRequest& request) const;

        /**
         * A Callable wrapper for DeleteFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFraudsterRequestT = Model::DeleteFraudsterRequest>
        Model::DeleteFraudsterOutcomeCallable DeleteFraudsterCallable(const DeleteFraudsterRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DeleteFraudster, request);
        }

        /**
         * An Async wrapper for DeleteFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFraudsterRequestT = Model::DeleteFraudsterRequest>
        void DeleteFraudsterAsync(const DeleteFraudsterRequestT& request, const DeleteFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DeleteFraudster, request, handler, context);
        }

        /**
         * <p>Deletes the specified speaker from Voice ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSpeakerOutcome DeleteSpeaker(const Model::DeleteSpeakerRequest& request) const;

        /**
         * A Callable wrapper for DeleteSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSpeakerRequestT = Model::DeleteSpeakerRequest>
        Model::DeleteSpeakerOutcomeCallable DeleteSpeakerCallable(const DeleteSpeakerRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DeleteSpeaker, request);
        }

        /**
         * An Async wrapper for DeleteSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSpeakerRequestT = Model::DeleteSpeakerRequest>
        void DeleteSpeakerAsync(const DeleteSpeakerRequestT& request, const DeleteSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DeleteSpeaker, request, handler, context);
        }

        /**
         * <p>Deletes the specified watchlist from Voice ID. This API throws an exception
         * when there are fraudsters in the watchlist that you are trying to delete. You
         * must delete the fraudsters, and then delete the watchlist. Every domain has a
         * default watchlist which cannot be deleted. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DeleteWatchlist">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteWatchlistOutcome DeleteWatchlist(const Model::DeleteWatchlistRequest& request) const;

        /**
         * A Callable wrapper for DeleteWatchlist that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteWatchlistRequestT = Model::DeleteWatchlistRequest>
        Model::DeleteWatchlistOutcomeCallable DeleteWatchlistCallable(const DeleteWatchlistRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DeleteWatchlist, request);
        }

        /**
         * An Async wrapper for DeleteWatchlist that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteWatchlistRequestT = Model::DeleteWatchlistRequest>
        void DeleteWatchlistAsync(const DeleteWatchlistRequestT& request, const DeleteWatchlistResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DeleteWatchlist, request, handler, context);
        }

        /**
         * <p>Describes the specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const DescribeDomainRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeDomain, request);
        }

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        void DescribeDomainAsync(const DescribeDomainRequestT& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeDomain, request, handler, context);
        }

        /**
         * <p>Describes the specified fraudster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterOutcome DescribeFraudster(const Model::DescribeFraudsterRequest& request) const;

        /**
         * A Callable wrapper for DescribeFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFraudsterRequestT = Model::DescribeFraudsterRequest>
        Model::DescribeFraudsterOutcomeCallable DescribeFraudsterCallable(const DescribeFraudsterRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeFraudster, request);
        }

        /**
         * An Async wrapper for DescribeFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFraudsterRequestT = Model::DescribeFraudsterRequest>
        void DescribeFraudsterAsync(const DescribeFraudsterRequestT& request, const DescribeFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeFraudster, request, handler, context);
        }

        /**
         * <p>Describes the specified fraudster registration job.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFraudsterRegistrationJobOutcome DescribeFraudsterRegistrationJob(const Model::DescribeFraudsterRegistrationJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeFraudsterRegistrationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFraudsterRegistrationJobRequestT = Model::DescribeFraudsterRegistrationJobRequest>
        Model::DescribeFraudsterRegistrationJobOutcomeCallable DescribeFraudsterRegistrationJobCallable(const DescribeFraudsterRegistrationJobRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeFraudsterRegistrationJob, request);
        }

        /**
         * An Async wrapper for DescribeFraudsterRegistrationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFraudsterRegistrationJobRequestT = Model::DescribeFraudsterRegistrationJobRequest>
        void DescribeFraudsterRegistrationJobAsync(const DescribeFraudsterRegistrationJobRequestT& request, const DescribeFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeFraudsterRegistrationJob, request, handler, context);
        }

        /**
         * <p>Describes the specified speaker.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerOutcome DescribeSpeaker(const Model::DescribeSpeakerRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSpeakerRequestT = Model::DescribeSpeakerRequest>
        Model::DescribeSpeakerOutcomeCallable DescribeSpeakerCallable(const DescribeSpeakerRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeSpeaker, request);
        }

        /**
         * An Async wrapper for DescribeSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSpeakerRequestT = Model::DescribeSpeakerRequest>
        void DescribeSpeakerAsync(const DescribeSpeakerRequestT& request, const DescribeSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeSpeaker, request, handler, context);
        }

        /**
         * <p>Describes the specified speaker enrollment job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSpeakerEnrollmentJobOutcome DescribeSpeakerEnrollmentJob(const Model::DescribeSpeakerEnrollmentJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSpeakerEnrollmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSpeakerEnrollmentJobRequestT = Model::DescribeSpeakerEnrollmentJobRequest>
        Model::DescribeSpeakerEnrollmentJobOutcomeCallable DescribeSpeakerEnrollmentJobCallable(const DescribeSpeakerEnrollmentJobRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeSpeakerEnrollmentJob, request);
        }

        /**
         * An Async wrapper for DescribeSpeakerEnrollmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSpeakerEnrollmentJobRequestT = Model::DescribeSpeakerEnrollmentJobRequest>
        void DescribeSpeakerEnrollmentJobAsync(const DescribeSpeakerEnrollmentJobRequestT& request, const DescribeSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeSpeakerEnrollmentJob, request, handler, context);
        }

        /**
         * <p>Describes the specified watchlist.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DescribeWatchlist">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWatchlistOutcome DescribeWatchlist(const Model::DescribeWatchlistRequest& request) const;

        /**
         * A Callable wrapper for DescribeWatchlist that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWatchlistRequestT = Model::DescribeWatchlistRequest>
        Model::DescribeWatchlistOutcomeCallable DescribeWatchlistCallable(const DescribeWatchlistRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DescribeWatchlist, request);
        }

        /**
         * An Async wrapper for DescribeWatchlist that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWatchlistRequestT = Model::DescribeWatchlistRequest>
        void DescribeWatchlistAsync(const DescribeWatchlistRequestT& request, const DescribeWatchlistResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DescribeWatchlist, request, handler, context);
        }

        /**
         * <p>Disassociates the fraudsters from the watchlist specified. Voice ID always
         * expects a fraudster to be a part of at least one watchlist. If you try to
         * disassociate a fraudster from its only watchlist, a
         * <code>ValidationException</code> is thrown. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/DisassociateFraudster">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFraudsterOutcome DisassociateFraudster(const Model::DisassociateFraudsterRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFraudster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFraudsterRequestT = Model::DisassociateFraudsterRequest>
        Model::DisassociateFraudsterOutcomeCallable DisassociateFraudsterCallable(const DisassociateFraudsterRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::DisassociateFraudster, request);
        }

        /**
         * An Async wrapper for DisassociateFraudster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFraudsterRequestT = Model::DisassociateFraudsterRequest>
        void DisassociateFraudsterAsync(const DisassociateFraudsterRequestT& request, const DisassociateFraudsterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::DisassociateFraudster, request, handler, context);
        }

        /**
         * <p>Evaluates a specified session based on audio data accumulated during a
         * streaming Amazon Connect Voice ID call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/EvaluateSession">AWS
         * API Reference</a></p>
         */
        virtual Model::EvaluateSessionOutcome EvaluateSession(const Model::EvaluateSessionRequest& request) const;

        /**
         * A Callable wrapper for EvaluateSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EvaluateSessionRequestT = Model::EvaluateSessionRequest>
        Model::EvaluateSessionOutcomeCallable EvaluateSessionCallable(const EvaluateSessionRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::EvaluateSession, request);
        }

        /**
         * An Async wrapper for EvaluateSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EvaluateSessionRequestT = Model::EvaluateSessionRequest>
        void EvaluateSessionAsync(const EvaluateSessionRequestT& request, const EvaluateSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::EvaluateSession, request, handler, context);
        }

        /**
         * <p>Lists all the domains in the Amazon Web Services account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Lists all the fraudster registration jobs in the domain with the given
         * <code>JobStatus</code>. If <code>JobStatus</code> is not provided, this lists
         * all fraudster registration jobs in the given domain. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListFraudsterRegistrationJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFraudsterRegistrationJobsOutcome ListFraudsterRegistrationJobs(const Model::ListFraudsterRegistrationJobsRequest& request) const;

        /**
         * A Callable wrapper for ListFraudsterRegistrationJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFraudsterRegistrationJobsRequestT = Model::ListFraudsterRegistrationJobsRequest>
        Model::ListFraudsterRegistrationJobsOutcomeCallable ListFraudsterRegistrationJobsCallable(const ListFraudsterRegistrationJobsRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListFraudsterRegistrationJobs, request);
        }

        /**
         * An Async wrapper for ListFraudsterRegistrationJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFraudsterRegistrationJobsRequestT = Model::ListFraudsterRegistrationJobsRequest>
        void ListFraudsterRegistrationJobsAsync(const ListFraudsterRegistrationJobsRequestT& request, const ListFraudsterRegistrationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListFraudsterRegistrationJobs, request, handler, context);
        }

        /**
         * <p>Lists all fraudsters in a specified watchlist or domain.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListFraudsters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFraudstersOutcome ListFraudsters(const Model::ListFraudstersRequest& request) const;

        /**
         * A Callable wrapper for ListFraudsters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFraudstersRequestT = Model::ListFraudstersRequest>
        Model::ListFraudstersOutcomeCallable ListFraudstersCallable(const ListFraudstersRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListFraudsters, request);
        }

        /**
         * An Async wrapper for ListFraudsters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFraudstersRequestT = Model::ListFraudstersRequest>
        void ListFraudstersAsync(const ListFraudstersRequestT& request, const ListFraudstersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListFraudsters, request, handler, context);
        }

        /**
         * <p>Lists all the speaker enrollment jobs in the domain with the specified
         * <code>JobStatus</code>. If <code>JobStatus</code> is not provided, this lists
         * all jobs with all possible speaker enrollment job statuses.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakerEnrollmentJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakerEnrollmentJobsOutcome ListSpeakerEnrollmentJobs(const Model::ListSpeakerEnrollmentJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSpeakerEnrollmentJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSpeakerEnrollmentJobsRequestT = Model::ListSpeakerEnrollmentJobsRequest>
        Model::ListSpeakerEnrollmentJobsOutcomeCallable ListSpeakerEnrollmentJobsCallable(const ListSpeakerEnrollmentJobsRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListSpeakerEnrollmentJobs, request);
        }

        /**
         * An Async wrapper for ListSpeakerEnrollmentJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSpeakerEnrollmentJobsRequestT = Model::ListSpeakerEnrollmentJobsRequest>
        void ListSpeakerEnrollmentJobsAsync(const ListSpeakerEnrollmentJobsRequestT& request, const ListSpeakerEnrollmentJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListSpeakerEnrollmentJobs, request, handler, context);
        }

        /**
         * <p>Lists all speakers in a specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListSpeakers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSpeakersOutcome ListSpeakers(const Model::ListSpeakersRequest& request) const;

        /**
         * A Callable wrapper for ListSpeakers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSpeakersRequestT = Model::ListSpeakersRequest>
        Model::ListSpeakersOutcomeCallable ListSpeakersCallable(const ListSpeakersRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListSpeakers, request);
        }

        /**
         * An Async wrapper for ListSpeakers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSpeakersRequestT = Model::ListSpeakersRequest>
        void ListSpeakersAsync(const ListSpeakersRequestT& request, const ListSpeakersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListSpeakers, request, handler, context);
        }

        /**
         * <p>Lists all tags associated with a specified Voice ID resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists all watchlists in a specified domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/ListWatchlists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWatchlistsOutcome ListWatchlists(const Model::ListWatchlistsRequest& request) const;

        /**
         * A Callable wrapper for ListWatchlists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWatchlistsRequestT = Model::ListWatchlistsRequest>
        Model::ListWatchlistsOutcomeCallable ListWatchlistsCallable(const ListWatchlistsRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::ListWatchlists, request);
        }

        /**
         * An Async wrapper for ListWatchlists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWatchlistsRequestT = Model::ListWatchlistsRequest>
        void ListWatchlistsAsync(const ListWatchlistsRequestT& request, const ListWatchlistsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::ListWatchlists, request, handler, context);
        }

        /**
         * <p>Opts out a speaker from Voice ID. A speaker can be opted out regardless of
         * whether or not they already exist in Voice ID. If they don't yet exist, a new
         * speaker is created in an opted out state. If they already exist, their existing
         * status is overridden and they are opted out. Enrollment and evaluation
         * authentication requests are rejected for opted out speakers, and opted out
         * speakers have no voice embeddings stored in Voice ID.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/OptOutSpeaker">AWS
         * API Reference</a></p>
         */
        virtual Model::OptOutSpeakerOutcome OptOutSpeaker(const Model::OptOutSpeakerRequest& request) const;

        /**
         * A Callable wrapper for OptOutSpeaker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OptOutSpeakerRequestT = Model::OptOutSpeakerRequest>
        Model::OptOutSpeakerOutcomeCallable OptOutSpeakerCallable(const OptOutSpeakerRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::OptOutSpeaker, request);
        }

        /**
         * An Async wrapper for OptOutSpeaker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OptOutSpeakerRequestT = Model::OptOutSpeakerRequest>
        void OptOutSpeakerAsync(const OptOutSpeakerRequestT& request, const OptOutSpeakerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::OptOutSpeaker, request, handler, context);
        }

        /**
         * <p>Starts a new batch fraudster registration job using provided
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartFraudsterRegistrationJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFraudsterRegistrationJobOutcome StartFraudsterRegistrationJob(const Model::StartFraudsterRegistrationJobRequest& request) const;

        /**
         * A Callable wrapper for StartFraudsterRegistrationJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFraudsterRegistrationJobRequestT = Model::StartFraudsterRegistrationJobRequest>
        Model::StartFraudsterRegistrationJobOutcomeCallable StartFraudsterRegistrationJobCallable(const StartFraudsterRegistrationJobRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::StartFraudsterRegistrationJob, request);
        }

        /**
         * An Async wrapper for StartFraudsterRegistrationJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFraudsterRegistrationJobRequestT = Model::StartFraudsterRegistrationJobRequest>
        void StartFraudsterRegistrationJobAsync(const StartFraudsterRegistrationJobRequestT& request, const StartFraudsterRegistrationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::StartFraudsterRegistrationJob, request, handler, context);
        }

        /**
         * <p>Starts a new batch speaker enrollment job using specified
         * details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/StartSpeakerEnrollmentJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSpeakerEnrollmentJobOutcome StartSpeakerEnrollmentJob(const Model::StartSpeakerEnrollmentJobRequest& request) const;

        /**
         * A Callable wrapper for StartSpeakerEnrollmentJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSpeakerEnrollmentJobRequestT = Model::StartSpeakerEnrollmentJobRequest>
        Model::StartSpeakerEnrollmentJobOutcomeCallable StartSpeakerEnrollmentJobCallable(const StartSpeakerEnrollmentJobRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::StartSpeakerEnrollmentJob, request);
        }

        /**
         * An Async wrapper for StartSpeakerEnrollmentJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSpeakerEnrollmentJobRequestT = Model::StartSpeakerEnrollmentJobRequest>
        void StartSpeakerEnrollmentJobAsync(const StartSpeakerEnrollmentJobRequestT& request, const StartSpeakerEnrollmentJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::StartSpeakerEnrollmentJob, request, handler, context);
        }

        /**
         * <p>Tags a Voice ID resource with the provided list of tags.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes specified tags from a specified Amazon Connect Voice ID
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified domain. This API has clobber behavior, and clears and
         * replaces all attributes. If an optional field, such as 'Description' is not
         * provided, it is removed from the domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UpdateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainOutcome UpdateDomain(const Model::UpdateDomainRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        Model::UpdateDomainOutcomeCallable UpdateDomainCallable(const UpdateDomainRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::UpdateDomain, request);
        }

        /**
         * An Async wrapper for UpdateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainRequestT = Model::UpdateDomainRequest>
        void UpdateDomainAsync(const UpdateDomainRequestT& request, const UpdateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::UpdateDomain, request, handler, context);
        }

        /**
         * <p>Updates the specified watchlist. Every domain has a default watchlist which
         * cannot be updated. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/UpdateWatchlist">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateWatchlistOutcome UpdateWatchlist(const Model::UpdateWatchlistRequest& request) const;

        /**
         * A Callable wrapper for UpdateWatchlist that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateWatchlistRequestT = Model::UpdateWatchlistRequest>
        Model::UpdateWatchlistOutcomeCallable UpdateWatchlistCallable(const UpdateWatchlistRequestT& request) const
        {
            return SubmitCallable(&VoiceIDClient::UpdateWatchlist, request);
        }

        /**
         * An Async wrapper for UpdateWatchlist that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateWatchlistRequestT = Model::UpdateWatchlistRequest>
        void UpdateWatchlistAsync(const UpdateWatchlistRequestT& request, const UpdateWatchlistResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VoiceIDClient::UpdateWatchlist, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<VoiceIDEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<VoiceIDClient>;
      void init(const VoiceIDClientConfiguration& clientConfiguration);

      VoiceIDClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<VoiceIDEndpointProviderBase> m_endpointProvider;
  };

} // namespace VoiceID
} // namespace Aws
