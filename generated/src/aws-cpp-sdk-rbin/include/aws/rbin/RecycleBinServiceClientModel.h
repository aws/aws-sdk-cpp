/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/rbin/RecycleBinErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/rbin/RecycleBinEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in RecycleBinClient header */
#include <aws/rbin/model/CreateRuleResult.h>
#include <aws/rbin/model/DeleteRuleResult.h>
#include <aws/rbin/model/GetRuleResult.h>
#include <aws/rbin/model/ListRulesResult.h>
#include <aws/rbin/model/ListTagsForResourceResult.h>
#include <aws/rbin/model/LockRuleResult.h>
#include <aws/rbin/model/TagResourceResult.h>
#include <aws/rbin/model/UnlockRuleResult.h>
#include <aws/rbin/model/UntagResourceResult.h>
#include <aws/rbin/model/UpdateRuleResult.h>
/* End of service model headers required in RecycleBinClient header */

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

  namespace RecycleBin
  {
    using RecycleBinClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using RecycleBinEndpointProviderBase = Aws::RecycleBin::Endpoint::RecycleBinEndpointProviderBase;
    using RecycleBinEndpointProvider = Aws::RecycleBin::Endpoint::RecycleBinEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in RecycleBinClient header */
      class CreateRuleRequest;
      class DeleteRuleRequest;
      class GetRuleRequest;
      class ListRulesRequest;
      class ListTagsForResourceRequest;
      class LockRuleRequest;
      class TagResourceRequest;
      class UnlockRuleRequest;
      class UntagResourceRequest;
      class UpdateRuleRequest;
      /* End of service model forward declarations required in RecycleBinClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateRuleResult, RecycleBinError> CreateRuleOutcome;
      typedef Aws::Utils::Outcome<DeleteRuleResult, RecycleBinError> DeleteRuleOutcome;
      typedef Aws::Utils::Outcome<GetRuleResult, RecycleBinError> GetRuleOutcome;
      typedef Aws::Utils::Outcome<ListRulesResult, RecycleBinError> ListRulesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, RecycleBinError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<LockRuleResult, RecycleBinError> LockRuleOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, RecycleBinError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UnlockRuleResult, RecycleBinError> UnlockRuleOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, RecycleBinError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateRuleResult, RecycleBinError> UpdateRuleOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateRuleOutcome> CreateRuleOutcomeCallable;
      typedef std::future<DeleteRuleOutcome> DeleteRuleOutcomeCallable;
      typedef std::future<GetRuleOutcome> GetRuleOutcomeCallable;
      typedef std::future<ListRulesOutcome> ListRulesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<LockRuleOutcome> LockRuleOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UnlockRuleOutcome> UnlockRuleOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateRuleOutcome> UpdateRuleOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class RecycleBinClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const RecycleBinClient*, const Model::CreateRuleRequest&, const Model::CreateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRuleResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::DeleteRuleRequest&, const Model::DeleteRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRuleResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::GetRuleRequest&, const Model::GetRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRuleResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::ListRulesRequest&, const Model::ListRulesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRulesResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::LockRuleRequest&, const Model::LockRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > LockRuleResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::UnlockRuleRequest&, const Model::UnlockRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnlockRuleResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const RecycleBinClient*, const Model::UpdateRuleRequest&, const Model::UpdateRuleOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRuleResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace RecycleBin
} // namespace Aws
