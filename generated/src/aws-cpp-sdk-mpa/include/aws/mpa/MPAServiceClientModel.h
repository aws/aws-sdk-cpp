/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/mpa/MPAErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/mpa/MPAEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MPAClient header */
#include <aws/mpa/model/CancelSessionResult.h>
#include <aws/mpa/model/CreateApprovalTeamResult.h>
#include <aws/mpa/model/CreateIdentitySourceResult.h>
#include <aws/mpa/model/DeleteInactiveApprovalTeamVersionResult.h>
#include <aws/mpa/model/GetApprovalTeamResult.h>
#include <aws/mpa/model/GetIdentitySourceResult.h>
#include <aws/mpa/model/GetPolicyVersionResult.h>
#include <aws/mpa/model/GetResourcePolicyResult.h>
#include <aws/mpa/model/GetSessionResult.h>
#include <aws/mpa/model/ListApprovalTeamsResult.h>
#include <aws/mpa/model/ListIdentitySourcesResult.h>
#include <aws/mpa/model/ListPoliciesResult.h>
#include <aws/mpa/model/ListPolicyVersionsResult.h>
#include <aws/mpa/model/ListResourcePoliciesResult.h>
#include <aws/mpa/model/ListSessionsResult.h>
#include <aws/mpa/model/ListTagsForResourceResult.h>
#include <aws/mpa/model/StartActiveApprovalTeamDeletionResult.h>
#include <aws/mpa/model/TagResourceResult.h>
#include <aws/mpa/model/UntagResourceResult.h>
#include <aws/mpa/model/UpdateApprovalTeamResult.h>
#include <aws/mpa/model/ListPoliciesRequest.h>
#include <aws/mpa/model/ListApprovalTeamsRequest.h>
#include <aws/mpa/model/ListIdentitySourcesRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MPAClient header */

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

  namespace MPA
  {
    using MPAClientConfiguration = Aws::Client::GenericClientConfiguration;
    using MPAEndpointProviderBase = Aws::MPA::Endpoint::MPAEndpointProviderBase;
    using MPAEndpointProvider = Aws::MPA::Endpoint::MPAEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MPAClient header */
      class CancelSessionRequest;
      class CreateApprovalTeamRequest;
      class CreateIdentitySourceRequest;
      class DeleteIdentitySourceRequest;
      class DeleteInactiveApprovalTeamVersionRequest;
      class GetApprovalTeamRequest;
      class GetIdentitySourceRequest;
      class GetPolicyVersionRequest;
      class GetResourcePolicyRequest;
      class GetSessionRequest;
      class ListApprovalTeamsRequest;
      class ListIdentitySourcesRequest;
      class ListPoliciesRequest;
      class ListPolicyVersionsRequest;
      class ListResourcePoliciesRequest;
      class ListSessionsRequest;
      class ListTagsForResourceRequest;
      class StartActiveApprovalTeamDeletionRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApprovalTeamRequest;
      /* End of service model forward declarations required in MPAClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelSessionResult, MPAError> CancelSessionOutcome;
      typedef Aws::Utils::Outcome<CreateApprovalTeamResult, MPAError> CreateApprovalTeamOutcome;
      typedef Aws::Utils::Outcome<CreateIdentitySourceResult, MPAError> CreateIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MPAError> DeleteIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<DeleteInactiveApprovalTeamVersionResult, MPAError> DeleteInactiveApprovalTeamVersionOutcome;
      typedef Aws::Utils::Outcome<GetApprovalTeamResult, MPAError> GetApprovalTeamOutcome;
      typedef Aws::Utils::Outcome<GetIdentitySourceResult, MPAError> GetIdentitySourceOutcome;
      typedef Aws::Utils::Outcome<GetPolicyVersionResult, MPAError> GetPolicyVersionOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, MPAError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<GetSessionResult, MPAError> GetSessionOutcome;
      typedef Aws::Utils::Outcome<ListApprovalTeamsResult, MPAError> ListApprovalTeamsOutcome;
      typedef Aws::Utils::Outcome<ListIdentitySourcesResult, MPAError> ListIdentitySourcesOutcome;
      typedef Aws::Utils::Outcome<ListPoliciesResult, MPAError> ListPoliciesOutcome;
      typedef Aws::Utils::Outcome<ListPolicyVersionsResult, MPAError> ListPolicyVersionsOutcome;
      typedef Aws::Utils::Outcome<ListResourcePoliciesResult, MPAError> ListResourcePoliciesOutcome;
      typedef Aws::Utils::Outcome<ListSessionsResult, MPAError> ListSessionsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, MPAError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<StartActiveApprovalTeamDeletionResult, MPAError> StartActiveApprovalTeamDeletionOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, MPAError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, MPAError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApprovalTeamResult, MPAError> UpdateApprovalTeamOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelSessionOutcome> CancelSessionOutcomeCallable;
      typedef std::future<CreateApprovalTeamOutcome> CreateApprovalTeamOutcomeCallable;
      typedef std::future<CreateIdentitySourceOutcome> CreateIdentitySourceOutcomeCallable;
      typedef std::future<DeleteIdentitySourceOutcome> DeleteIdentitySourceOutcomeCallable;
      typedef std::future<DeleteInactiveApprovalTeamVersionOutcome> DeleteInactiveApprovalTeamVersionOutcomeCallable;
      typedef std::future<GetApprovalTeamOutcome> GetApprovalTeamOutcomeCallable;
      typedef std::future<GetIdentitySourceOutcome> GetIdentitySourceOutcomeCallable;
      typedef std::future<GetPolicyVersionOutcome> GetPolicyVersionOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<GetSessionOutcome> GetSessionOutcomeCallable;
      typedef std::future<ListApprovalTeamsOutcome> ListApprovalTeamsOutcomeCallable;
      typedef std::future<ListIdentitySourcesOutcome> ListIdentitySourcesOutcomeCallable;
      typedef std::future<ListPoliciesOutcome> ListPoliciesOutcomeCallable;
      typedef std::future<ListPolicyVersionsOutcome> ListPolicyVersionsOutcomeCallable;
      typedef std::future<ListResourcePoliciesOutcome> ListResourcePoliciesOutcomeCallable;
      typedef std::future<ListSessionsOutcome> ListSessionsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<StartActiveApprovalTeamDeletionOutcome> StartActiveApprovalTeamDeletionOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApprovalTeamOutcome> UpdateApprovalTeamOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MPAClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MPAClient*, const Model::CancelSessionRequest&, const Model::CancelSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelSessionResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::CreateApprovalTeamRequest&, const Model::CreateApprovalTeamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApprovalTeamResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::CreateIdentitySourceRequest&, const Model::CreateIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::DeleteIdentitySourceRequest&, const Model::DeleteIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::DeleteInactiveApprovalTeamVersionRequest&, const Model::DeleteInactiveApprovalTeamVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInactiveApprovalTeamVersionResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::GetApprovalTeamRequest&, const Model::GetApprovalTeamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApprovalTeamResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::GetIdentitySourceRequest&, const Model::GetIdentitySourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetIdentitySourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::GetPolicyVersionRequest&, const Model::GetPolicyVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPolicyVersionResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::GetSessionRequest&, const Model::GetSessionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetSessionResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListApprovalTeamsRequest&, const Model::ListApprovalTeamsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApprovalTeamsResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListIdentitySourcesRequest&, const Model::ListIdentitySourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListIdentitySourcesResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListPoliciesRequest&, const Model::ListPoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPoliciesResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListPolicyVersionsRequest&, const Model::ListPolicyVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPolicyVersionsResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListResourcePoliciesRequest&, const Model::ListResourcePoliciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcePoliciesResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListSessionsRequest&, const Model::ListSessionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSessionsResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::StartActiveApprovalTeamDeletionRequest&, const Model::StartActiveApprovalTeamDeletionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartActiveApprovalTeamDeletionResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const MPAClient*, const Model::UpdateApprovalTeamRequest&, const Model::UpdateApprovalTeamOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApprovalTeamResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MPA
} // namespace Aws
