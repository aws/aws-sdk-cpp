/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/serverlessrepo/ServerlessApplicationRepositoryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/serverlessrepo/ServerlessApplicationRepositoryEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ServerlessApplicationRepositoryClient header */
#include <aws/serverlessrepo/model/CreateApplicationResult.h>
#include <aws/serverlessrepo/model/CreateApplicationVersionResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationChangeSetResult.h>
#include <aws/serverlessrepo/model/CreateCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/GetApplicationResult.h>
#include <aws/serverlessrepo/model/GetApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/GetCloudFormationTemplateResult.h>
#include <aws/serverlessrepo/model/ListApplicationDependenciesResult.h>
#include <aws/serverlessrepo/model/ListApplicationVersionsResult.h>
#include <aws/serverlessrepo/model/ListApplicationsResult.h>
#include <aws/serverlessrepo/model/PutApplicationPolicyResult.h>
#include <aws/serverlessrepo/model/UpdateApplicationResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in ServerlessApplicationRepositoryClient header */

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

  namespace ServerlessApplicationRepository
  {
    using ServerlessApplicationRepositoryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ServerlessApplicationRepositoryEndpointProviderBase = Aws::ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryEndpointProviderBase;
    using ServerlessApplicationRepositoryEndpointProvider = Aws::ServerlessApplicationRepository::Endpoint::ServerlessApplicationRepositoryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ServerlessApplicationRepositoryClient header */
      class CreateApplicationRequest;
      class CreateApplicationVersionRequest;
      class CreateCloudFormationChangeSetRequest;
      class CreateCloudFormationTemplateRequest;
      class DeleteApplicationRequest;
      class GetApplicationRequest;
      class GetApplicationPolicyRequest;
      class GetCloudFormationTemplateRequest;
      class ListApplicationDependenciesRequest;
      class ListApplicationVersionsRequest;
      class ListApplicationsRequest;
      class PutApplicationPolicyRequest;
      class UnshareApplicationRequest;
      class UpdateApplicationRequest;
      /* End of service model forward declarations required in ServerlessApplicationRepositoryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateApplicationResult, ServerlessApplicationRepositoryError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationVersionResult, ServerlessApplicationRepositoryError> CreateApplicationVersionOutcome;
      typedef Aws::Utils::Outcome<CreateCloudFormationChangeSetResult, ServerlessApplicationRepositoryError> CreateCloudFormationChangeSetOutcome;
      typedef Aws::Utils::Outcome<CreateCloudFormationTemplateResult, ServerlessApplicationRepositoryError> CreateCloudFormationTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ServerlessApplicationRepositoryError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, ServerlessApplicationRepositoryError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetApplicationPolicyResult, ServerlessApplicationRepositoryError> GetApplicationPolicyOutcome;
      typedef Aws::Utils::Outcome<GetCloudFormationTemplateResult, ServerlessApplicationRepositoryError> GetCloudFormationTemplateOutcome;
      typedef Aws::Utils::Outcome<ListApplicationDependenciesResult, ServerlessApplicationRepositoryError> ListApplicationDependenciesOutcome;
      typedef Aws::Utils::Outcome<ListApplicationVersionsResult, ServerlessApplicationRepositoryError> ListApplicationVersionsOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, ServerlessApplicationRepositoryError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<PutApplicationPolicyResult, ServerlessApplicationRepositoryError> PutApplicationPolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, ServerlessApplicationRepositoryError> UnshareApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, ServerlessApplicationRepositoryError> UpdateApplicationOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateApplicationVersionOutcome> CreateApplicationVersionOutcomeCallable;
      typedef std::future<CreateCloudFormationChangeSetOutcome> CreateCloudFormationChangeSetOutcomeCallable;
      typedef std::future<CreateCloudFormationTemplateOutcome> CreateCloudFormationTemplateOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetApplicationPolicyOutcome> GetApplicationPolicyOutcomeCallable;
      typedef std::future<GetCloudFormationTemplateOutcome> GetCloudFormationTemplateOutcomeCallable;
      typedef std::future<ListApplicationDependenciesOutcome> ListApplicationDependenciesOutcomeCallable;
      typedef std::future<ListApplicationVersionsOutcome> ListApplicationVersionsOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<PutApplicationPolicyOutcome> PutApplicationPolicyOutcomeCallable;
      typedef std::future<UnshareApplicationOutcome> UnshareApplicationOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ServerlessApplicationRepositoryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateApplicationVersionRequest&, const Model::CreateApplicationVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationVersionResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateCloudFormationChangeSetRequest&, const Model::CreateCloudFormationChangeSetOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationChangeSetResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::CreateCloudFormationTemplateRequest&, const Model::CreateCloudFormationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateCloudFormationTemplateResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetApplicationPolicyRequest&, const Model::GetApplicationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationPolicyResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::GetCloudFormationTemplateRequest&, const Model::GetCloudFormationTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCloudFormationTemplateResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationDependenciesRequest&, const Model::ListApplicationDependenciesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationDependenciesResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationVersionsRequest&, const Model::ListApplicationVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationVersionsResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::PutApplicationPolicyRequest&, const Model::PutApplicationPolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutApplicationPolicyResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::UnshareApplicationRequest&, const Model::UnshareApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UnshareApplicationResponseReceivedHandler;
    typedef std::function<void(const ServerlessApplicationRepositoryClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ServerlessApplicationRepository
} // namespace Aws
