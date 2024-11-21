/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/ssm-quicksetup/SSMQuickSetupErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/ssm-quicksetup/SSMQuickSetupEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SSMQuickSetupClient header */
#include <aws/ssm-quicksetup/model/CreateConfigurationManagerResult.h>
#include <aws/ssm-quicksetup/model/GetConfigurationResult.h>
#include <aws/ssm-quicksetup/model/GetConfigurationManagerResult.h>
#include <aws/ssm-quicksetup/model/GetServiceSettingsResult.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersResult.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsResult.h>
#include <aws/ssm-quicksetup/model/ListQuickSetupTypesResult.h>
#include <aws/ssm-quicksetup/model/ListTagsForResourceResult.h>
#include <aws/ssm-quicksetup/model/GetServiceSettingsRequest.h>
#include <aws/ssm-quicksetup/model/ListQuickSetupTypesRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationsRequest.h>
#include <aws/ssm-quicksetup/model/UpdateServiceSettingsRequest.h>
#include <aws/ssm-quicksetup/model/ListConfigurationManagersRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SSMQuickSetupClient header */

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

  namespace SSMQuickSetup
  {
    using SSMQuickSetupClientConfiguration = Aws::Client::GenericClientConfiguration;
    using SSMQuickSetupEndpointProviderBase = Aws::SSMQuickSetup::Endpoint::SSMQuickSetupEndpointProviderBase;
    using SSMQuickSetupEndpointProvider = Aws::SSMQuickSetup::Endpoint::SSMQuickSetupEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SSMQuickSetupClient header */
      class CreateConfigurationManagerRequest;
      class DeleteConfigurationManagerRequest;
      class GetConfigurationRequest;
      class GetConfigurationManagerRequest;
      class GetServiceSettingsRequest;
      class ListConfigurationManagersRequest;
      class ListConfigurationsRequest;
      class ListQuickSetupTypesRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateConfigurationDefinitionRequest;
      class UpdateConfigurationManagerRequest;
      class UpdateServiceSettingsRequest;
      /* End of service model forward declarations required in SSMQuickSetupClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConfigurationManagerResult, SSMQuickSetupError> CreateConfigurationManagerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> DeleteConfigurationManagerOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationResult, SSMQuickSetupError> GetConfigurationOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationManagerResult, SSMQuickSetupError> GetConfigurationManagerOutcome;
      typedef Aws::Utils::Outcome<GetServiceSettingsResult, SSMQuickSetupError> GetServiceSettingsOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationManagersResult, SSMQuickSetupError> ListConfigurationManagersOutcome;
      typedef Aws::Utils::Outcome<ListConfigurationsResult, SSMQuickSetupError> ListConfigurationsOutcome;
      typedef Aws::Utils::Outcome<ListQuickSetupTypesResult, SSMQuickSetupError> ListQuickSetupTypesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SSMQuickSetupError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> UpdateConfigurationDefinitionOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> UpdateConfigurationManagerOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SSMQuickSetupError> UpdateServiceSettingsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConfigurationManagerOutcome> CreateConfigurationManagerOutcomeCallable;
      typedef std::future<DeleteConfigurationManagerOutcome> DeleteConfigurationManagerOutcomeCallable;
      typedef std::future<GetConfigurationOutcome> GetConfigurationOutcomeCallable;
      typedef std::future<GetConfigurationManagerOutcome> GetConfigurationManagerOutcomeCallable;
      typedef std::future<GetServiceSettingsOutcome> GetServiceSettingsOutcomeCallable;
      typedef std::future<ListConfigurationManagersOutcome> ListConfigurationManagersOutcomeCallable;
      typedef std::future<ListConfigurationsOutcome> ListConfigurationsOutcomeCallable;
      typedef std::future<ListQuickSetupTypesOutcome> ListQuickSetupTypesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateConfigurationDefinitionOutcome> UpdateConfigurationDefinitionOutcomeCallable;
      typedef std::future<UpdateConfigurationManagerOutcome> UpdateConfigurationManagerOutcomeCallable;
      typedef std::future<UpdateServiceSettingsOutcome> UpdateServiceSettingsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SSMQuickSetupClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SSMQuickSetupClient*, const Model::CreateConfigurationManagerRequest&, const Model::CreateConfigurationManagerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConfigurationManagerResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::DeleteConfigurationManagerRequest&, const Model::DeleteConfigurationManagerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConfigurationManagerResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::GetConfigurationRequest&, const Model::GetConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::GetConfigurationManagerRequest&, const Model::GetConfigurationManagerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationManagerResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::GetServiceSettingsRequest&, const Model::GetServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServiceSettingsResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::ListConfigurationManagersRequest&, const Model::ListConfigurationManagersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationManagersResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::ListConfigurationsRequest&, const Model::ListConfigurationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConfigurationsResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::ListQuickSetupTypesRequest&, const Model::ListQuickSetupTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListQuickSetupTypesResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::UpdateConfigurationDefinitionRequest&, const Model::UpdateConfigurationDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationDefinitionResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::UpdateConfigurationManagerRequest&, const Model::UpdateConfigurationManagerOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConfigurationManagerResponseReceivedHandler;
    typedef std::function<void(const SSMQuickSetupClient*, const Model::UpdateServiceSettingsRequest&, const Model::UpdateServiceSettingsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceSettingsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SSMQuickSetup
} // namespace Aws
