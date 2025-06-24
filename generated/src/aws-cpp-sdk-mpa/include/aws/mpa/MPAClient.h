/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/mpa/MPAServiceClientModel.h>

namespace Aws
{
namespace MPA
{
  /**
   * <p>Multi-party approval is a capability of <a
   * href="http://aws.amazon.com/organizations">Organizations</a> that allows you to
   * protect a predefined list of operations through a distributed approval process.
   * Use Multi-party approval to establish approval workflows and transform security
   * processes into team-based decisions.</p> <p> <b>When to use Multi-party
   * approval</b>:</p> <ul> <li> <p>You need to align with the Zero Trust principle
   * of "never trust, always verify"</p> </li> <li> <p>You need to make sure that the
   * right humans have access to the right things in the right way</p> </li> <li>
   * <p>You need distributed decision-making for sensitive or critical operations</p>
   * </li> <li> <p>You need to protect against unintended operations on sensitive or
   * critical resources</p> </li> <li> <p>You need formal reviews and approvals for
   * auditing or compliance reasons</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/what-is.html">What is
   * Multi-party approval</a> in the <i>Multi-party approval User Guide</i>.</p>
   */
  class AWS_MPA_API MPAClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MPAClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MPAClientConfiguration ClientConfigurationType;
      typedef MPAEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MPAClient(const Aws::MPA::MPAClientConfiguration& clientConfiguration = Aws::MPA::MPAClientConfiguration(),
                  std::shared_ptr<MPAEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MPAClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<MPAEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::MPA::MPAClientConfiguration& clientConfiguration = Aws::MPA::MPAClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MPAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<MPAEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::MPA::MPAClientConfiguration& clientConfiguration = Aws::MPA::MPAClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MPAClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MPAClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MPAClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MPAClient();

        /**
         * <p>Cancels an approval session. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Session</a>
         * in the <i>Multi-party approval User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/CancelSession">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSessionOutcome CancelSession(const Model::CancelSessionRequest& request) const;

        /**
         * A Callable wrapper for CancelSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSessionRequestT = Model::CancelSessionRequest>
        Model::CancelSessionOutcomeCallable CancelSessionCallable(const CancelSessionRequestT& request) const
        {
            return SubmitCallable(&MPAClient::CancelSession, request);
        }

        /**
         * An Async wrapper for CancelSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSessionRequestT = Model::CancelSessionRequest>
        void CancelSessionAsync(const CancelSessionRequestT& request, const CancelSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::CancelSession, request, handler, context);
        }

        /**
         * <p>Creates a new approval team. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Approval
         * team</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/CreateApprovalTeam">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApprovalTeamOutcome CreateApprovalTeam(const Model::CreateApprovalTeamRequest& request) const;

        /**
         * A Callable wrapper for CreateApprovalTeam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApprovalTeamRequestT = Model::CreateApprovalTeamRequest>
        Model::CreateApprovalTeamOutcomeCallable CreateApprovalTeamCallable(const CreateApprovalTeamRequestT& request) const
        {
            return SubmitCallable(&MPAClient::CreateApprovalTeam, request);
        }

        /**
         * An Async wrapper for CreateApprovalTeam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApprovalTeamRequestT = Model::CreateApprovalTeamRequest>
        void CreateApprovalTeamAsync(const CreateApprovalTeamRequestT& request, const CreateApprovalTeamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::CreateApprovalTeam, request, handler, context);
        }

        /**
         * <p>Creates a new identity source. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Identity
         * Source</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/CreateIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentitySourceOutcome CreateIdentitySource(const Model::CreateIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIdentitySourceRequestT = Model::CreateIdentitySourceRequest>
        Model::CreateIdentitySourceOutcomeCallable CreateIdentitySourceCallable(const CreateIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::CreateIdentitySource, request);
        }

        /**
         * An Async wrapper for CreateIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIdentitySourceRequestT = Model::CreateIdentitySourceRequest>
        void CreateIdentitySourceAsync(const CreateIdentitySourceRequestT& request, const CreateIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::CreateIdentitySource, request, handler, context);
        }

        /**
         * <p>Deletes an identity source. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Identity
         * Source</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/DeleteIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentitySourceOutcome DeleteIdentitySource(const Model::DeleteIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentitySourceRequestT = Model::DeleteIdentitySourceRequest>
        Model::DeleteIdentitySourceOutcomeCallable DeleteIdentitySourceCallable(const DeleteIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::DeleteIdentitySource, request);
        }

        /**
         * An Async wrapper for DeleteIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentitySourceRequestT = Model::DeleteIdentitySourceRequest>
        void DeleteIdentitySourceAsync(const DeleteIdentitySourceRequestT& request, const DeleteIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::DeleteIdentitySource, request, handler, context);
        }

        /**
         * <p>Deletes an inactive approval team. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
         * health</a> in the <i>Multi-party approval User Guide</i>.</p> <p>You can also
         * use this operation to delete a team draft. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/update-team.html#update-team-draft-status">Interacting
         * with drafts</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/DeleteInactiveApprovalTeamVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInactiveApprovalTeamVersionOutcome DeleteInactiveApprovalTeamVersion(const Model::DeleteInactiveApprovalTeamVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteInactiveApprovalTeamVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInactiveApprovalTeamVersionRequestT = Model::DeleteInactiveApprovalTeamVersionRequest>
        Model::DeleteInactiveApprovalTeamVersionOutcomeCallable DeleteInactiveApprovalTeamVersionCallable(const DeleteInactiveApprovalTeamVersionRequestT& request) const
        {
            return SubmitCallable(&MPAClient::DeleteInactiveApprovalTeamVersion, request);
        }

        /**
         * An Async wrapper for DeleteInactiveApprovalTeamVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInactiveApprovalTeamVersionRequestT = Model::DeleteInactiveApprovalTeamVersionRequest>
        void DeleteInactiveApprovalTeamVersionAsync(const DeleteInactiveApprovalTeamVersionRequestT& request, const DeleteInactiveApprovalTeamVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::DeleteInactiveApprovalTeamVersion, request, handler, context);
        }

        /**
         * <p>Returns details for an approval team.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetApprovalTeam">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApprovalTeamOutcome GetApprovalTeam(const Model::GetApprovalTeamRequest& request) const;

        /**
         * A Callable wrapper for GetApprovalTeam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApprovalTeamRequestT = Model::GetApprovalTeamRequest>
        Model::GetApprovalTeamOutcomeCallable GetApprovalTeamCallable(const GetApprovalTeamRequestT& request) const
        {
            return SubmitCallable(&MPAClient::GetApprovalTeam, request);
        }

        /**
         * An Async wrapper for GetApprovalTeam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApprovalTeamRequestT = Model::GetApprovalTeamRequest>
        void GetApprovalTeamAsync(const GetApprovalTeamRequestT& request, const GetApprovalTeamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::GetApprovalTeam, request, handler, context);
        }

        /**
         * <p>Returns details for an identity source. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Identity
         * Source</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentitySourceOutcome GetIdentitySource(const Model::GetIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for GetIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentitySourceRequestT = Model::GetIdentitySourceRequest>
        Model::GetIdentitySourceOutcomeCallable GetIdentitySourceCallable(const GetIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::GetIdentitySource, request);
        }

        /**
         * An Async wrapper for GetIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentitySourceRequestT = Model::GetIdentitySourceRequest>
        void GetIdentitySourceAsync(const GetIdentitySourceRequestT& request, const GetIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::GetIdentitySource, request, handler, context);
        }

        /**
         * <p>Returns details for the version of a policy. Policies define the permissions
         * for team resources.</p> <p>The protected operation for a service integration
         * might require specific permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
         * other services work with Multi-party approval</a> in the <i>Multi-party approval
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for GetPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyVersionRequestT = Model::GetPolicyVersionRequest>
        Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const GetPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&MPAClient::GetPolicyVersion, request);
        }

        /**
         * An Async wrapper for GetPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyVersionRequestT = Model::GetPolicyVersionRequest>
        void GetPolicyVersionAsync(const GetPolicyVersionRequestT& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::GetPolicyVersion, request, handler, context);
        }

        /**
         * <p>Returns details about a policy for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MPAClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns details for an approval session. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Session</a>
         * in the <i>Multi-party approval User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/GetSession">AWS API
         * Reference</a></p>
         */
        virtual Model::GetSessionOutcome GetSession(const Model::GetSessionRequest& request) const;

        /**
         * A Callable wrapper for GetSession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        Model::GetSessionOutcomeCallable GetSessionCallable(const GetSessionRequestT& request) const
        {
            return SubmitCallable(&MPAClient::GetSession, request);
        }

        /**
         * An Async wrapper for GetSession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSessionRequestT = Model::GetSessionRequest>
        void GetSessionAsync(const GetSessionRequestT& request, const GetSessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::GetSession, request, handler, context);
        }

        /**
         * <p>Returns a list of approval teams.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListApprovalTeams">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApprovalTeamsOutcome ListApprovalTeams(const Model::ListApprovalTeamsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListApprovalTeams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApprovalTeamsRequestT = Model::ListApprovalTeamsRequest>
        Model::ListApprovalTeamsOutcomeCallable ListApprovalTeamsCallable(const ListApprovalTeamsRequestT& request = {}) const
        {
            return SubmitCallable(&MPAClient::ListApprovalTeams, request);
        }

        /**
         * An Async wrapper for ListApprovalTeams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApprovalTeamsRequestT = Model::ListApprovalTeamsRequest>
        void ListApprovalTeamsAsync(const ListApprovalTeamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListApprovalTeamsRequestT& request = {}) const
        {
            return SubmitAsync(&MPAClient::ListApprovalTeams, request, handler, context);
        }

        /**
         * <p>Returns a list of identity sources. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Identity
         * Source</a> in the <i>Multi-party approval User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListIdentitySources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitySourcesOutcome ListIdentitySources(const Model::ListIdentitySourcesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListIdentitySources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentitySourcesRequestT = Model::ListIdentitySourcesRequest>
        Model::ListIdentitySourcesOutcomeCallable ListIdentitySourcesCallable(const ListIdentitySourcesRequestT& request = {}) const
        {
            return SubmitCallable(&MPAClient::ListIdentitySources, request);
        }

        /**
         * An Async wrapper for ListIdentitySources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentitySourcesRequestT = Model::ListIdentitySourcesRequest>
        void ListIdentitySourcesAsync(const ListIdentitySourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListIdentitySourcesRequestT& request = {}) const
        {
            return SubmitAsync(&MPAClient::ListIdentitySources, request, handler, context);
        }

        /**
         * <p>Returns a list of policies. Policies define the permissions for team
         * resources.</p> <p>The protected operation for a service integration might
         * require specific permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
         * other services work with Multi-party approval</a> in the <i>Multi-party approval
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request = {}) const
        {
            return SubmitCallable(&MPAClient::ListPolicies, request);
        }

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        void ListPoliciesAsync(const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPoliciesRequestT& request = {}) const
        {
            return SubmitAsync(&MPAClient::ListPolicies, request, handler, context);
        }

        /**
         * <p>Returns a list of the versions for policies. Policies define the permissions
         * for team resources.</p> <p>The protected operation for a service integration
         * might require specific permissions. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
         * other services work with Multi-party approval</a> in the <i>Multi-party approval
         * User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyVersionsRequestT = Model::ListPolicyVersionsRequest>
        Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const ListPolicyVersionsRequestT& request) const
        {
            return SubmitCallable(&MPAClient::ListPolicyVersions, request);
        }

        /**
         * An Async wrapper for ListPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyVersionsRequestT = Model::ListPolicyVersionsRequest>
        void ListPolicyVersionsAsync(const ListPolicyVersionsRequestT& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::ListPolicyVersions, request, handler, context);
        }

        /**
         * <p>Returns a list of policies for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcePoliciesOutcome ListResourcePolicies(const Model::ListResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
        Model::ListResourcePoliciesOutcomeCallable ListResourcePoliciesCallable(const ListResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&MPAClient::ListResourcePolicies, request);
        }

        /**
         * An Async wrapper for ListResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
        void ListResourcePoliciesAsync(const ListResourcePoliciesRequestT& request, const ListResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::ListResourcePolicies, request, handler, context);
        }

        /**
         * <p>Returns a list of approval sessions. For more information, see <a
         * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-concepts.html">Session</a>
         * in the <i>Multi-party approval User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListSessions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSessionsOutcome ListSessions(const Model::ListSessionsRequest& request) const;

        /**
         * A Callable wrapper for ListSessions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        Model::ListSessionsOutcomeCallable ListSessionsCallable(const ListSessionsRequestT& request) const
        {
            return SubmitCallable(&MPAClient::ListSessions, request);
        }

        /**
         * An Async wrapper for ListSessions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSessionsRequestT = Model::ListSessionsRequest>
        void ListSessionsAsync(const ListSessionsRequestT& request, const ListSessionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::ListSessions, request, handler, context);
        }

        /**
         * <p>Returns a list of the tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts the deletion process for an active approval team.</p>  <p>
         * <b>Deletions require team approval</b> </p> <p>Requests to delete an active team
         * must be approved by the team.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/StartActiveApprovalTeamDeletion">AWS
         * API Reference</a></p>
         */
        virtual Model::StartActiveApprovalTeamDeletionOutcome StartActiveApprovalTeamDeletion(const Model::StartActiveApprovalTeamDeletionRequest& request) const;

        /**
         * A Callable wrapper for StartActiveApprovalTeamDeletion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartActiveApprovalTeamDeletionRequestT = Model::StartActiveApprovalTeamDeletionRequest>
        Model::StartActiveApprovalTeamDeletionOutcomeCallable StartActiveApprovalTeamDeletionCallable(const StartActiveApprovalTeamDeletionRequestT& request) const
        {
            return SubmitCallable(&MPAClient::StartActiveApprovalTeamDeletion, request);
        }

        /**
         * An Async wrapper for StartActiveApprovalTeamDeletion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartActiveApprovalTeamDeletionRequestT = Model::StartActiveApprovalTeamDeletionRequest>
        void StartActiveApprovalTeamDeletionAsync(const StartActiveApprovalTeamDeletionRequestT& request, const StartActiveApprovalTeamDeletionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::StartActiveApprovalTeamDeletion, request, handler, context);
        }

        /**
         * <p>Creates or updates a resource tag. Each tag is a label consisting of a
         * user-defined key and value. Tags can help you manage, identify, organize, search
         * for, and filter resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a resource tag. Each tag is a label consisting of a user-defined key
         * and value. Tags can help you manage, identify, organize, search for, and filter
         * resources. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MPAClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an approval team. You can request to update the team description,
         * approval threshold, and approvers in the team.</p>  <p> <b>Updates require
         * team approval</b> </p> <p>Updates to an active team must be approved by the
         * team.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/UpdateApprovalTeam">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApprovalTeamOutcome UpdateApprovalTeam(const Model::UpdateApprovalTeamRequest& request) const;

        /**
         * A Callable wrapper for UpdateApprovalTeam that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApprovalTeamRequestT = Model::UpdateApprovalTeamRequest>
        Model::UpdateApprovalTeamOutcomeCallable UpdateApprovalTeamCallable(const UpdateApprovalTeamRequestT& request) const
        {
            return SubmitCallable(&MPAClient::UpdateApprovalTeam, request);
        }

        /**
         * An Async wrapper for UpdateApprovalTeam that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApprovalTeamRequestT = Model::UpdateApprovalTeamRequest>
        void UpdateApprovalTeamAsync(const UpdateApprovalTeamRequestT& request, const UpdateApprovalTeamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MPAClient::UpdateApprovalTeam, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MPAEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MPAClient>;
      void init(const MPAClientConfiguration& clientConfiguration);

      MPAClientConfiguration m_clientConfiguration;
      std::shared_ptr<MPAEndpointProviderBase> m_endpointProvider;
  };

} // namespace MPA
} // namespace Aws
