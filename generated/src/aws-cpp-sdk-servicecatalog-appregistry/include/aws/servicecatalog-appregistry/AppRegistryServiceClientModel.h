/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/servicecatalog-appregistry/AppRegistryErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/servicecatalog-appregistry/AppRegistryEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AppRegistryClient header */
#include <aws/servicecatalog-appregistry/model/AssociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/AssociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/CreateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/CreateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/DeleteAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/DisassociateResourceResult.h>
#include <aws/servicecatalog-appregistry/model/GetApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/GetAssociatedResourceResult.h>
#include <aws/servicecatalog-appregistry/model/GetAttributeGroupResult.h>
#include <aws/servicecatalog-appregistry/model/GetConfigurationResult.h>
#include <aws/servicecatalog-appregistry/model/ListApplicationsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAssociatedResourcesResult.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsResult.h>
#include <aws/servicecatalog-appregistry/model/ListAttributeGroupsForApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/ListTagsForResourceResult.h>
#include <aws/servicecatalog-appregistry/model/SyncResourceResult.h>
#include <aws/servicecatalog-appregistry/model/TagResourceResult.h>
#include <aws/servicecatalog-appregistry/model/UntagResourceResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateApplicationResult.h>
#include <aws/servicecatalog-appregistry/model/UpdateAttributeGroupResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in AppRegistryClient header */

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

  namespace AppRegistry
  {
    using AppRegistryClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AppRegistryEndpointProviderBase = Aws::AppRegistry::Endpoint::AppRegistryEndpointProviderBase;
    using AppRegistryEndpointProvider = Aws::AppRegistry::Endpoint::AppRegistryEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AppRegistryClient header */
      class AssociateAttributeGroupRequest;
      class AssociateResourceRequest;
      class CreateApplicationRequest;
      class CreateAttributeGroupRequest;
      class DeleteApplicationRequest;
      class DeleteAttributeGroupRequest;
      class DisassociateAttributeGroupRequest;
      class DisassociateResourceRequest;
      class GetApplicationRequest;
      class GetAssociatedResourceRequest;
      class GetAttributeGroupRequest;
      class ListApplicationsRequest;
      class ListAssociatedAttributeGroupsRequest;
      class ListAssociatedResourcesRequest;
      class ListAttributeGroupsRequest;
      class ListAttributeGroupsForApplicationRequest;
      class ListTagsForResourceRequest;
      class PutConfigurationRequest;
      class SyncResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateApplicationRequest;
      class UpdateAttributeGroupRequest;
      /* End of service model forward declarations required in AppRegistryClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AssociateAttributeGroupResult, AppRegistryError> AssociateAttributeGroupOutcome;
      typedef Aws::Utils::Outcome<AssociateResourceResult, AppRegistryError> AssociateResourceOutcome;
      typedef Aws::Utils::Outcome<CreateApplicationResult, AppRegistryError> CreateApplicationOutcome;
      typedef Aws::Utils::Outcome<CreateAttributeGroupResult, AppRegistryError> CreateAttributeGroupOutcome;
      typedef Aws::Utils::Outcome<DeleteApplicationResult, AppRegistryError> DeleteApplicationOutcome;
      typedef Aws::Utils::Outcome<DeleteAttributeGroupResult, AppRegistryError> DeleteAttributeGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateAttributeGroupResult, AppRegistryError> DisassociateAttributeGroupOutcome;
      typedef Aws::Utils::Outcome<DisassociateResourceResult, AppRegistryError> DisassociateResourceOutcome;
      typedef Aws::Utils::Outcome<GetApplicationResult, AppRegistryError> GetApplicationOutcome;
      typedef Aws::Utils::Outcome<GetAssociatedResourceResult, AppRegistryError> GetAssociatedResourceOutcome;
      typedef Aws::Utils::Outcome<GetAttributeGroupResult, AppRegistryError> GetAttributeGroupOutcome;
      typedef Aws::Utils::Outcome<GetConfigurationResult, AppRegistryError> GetConfigurationOutcome;
      typedef Aws::Utils::Outcome<ListApplicationsResult, AppRegistryError> ListApplicationsOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedAttributeGroupsResult, AppRegistryError> ListAssociatedAttributeGroupsOutcome;
      typedef Aws::Utils::Outcome<ListAssociatedResourcesResult, AppRegistryError> ListAssociatedResourcesOutcome;
      typedef Aws::Utils::Outcome<ListAttributeGroupsResult, AppRegistryError> ListAttributeGroupsOutcome;
      typedef Aws::Utils::Outcome<ListAttributeGroupsForApplicationResult, AppRegistryError> ListAttributeGroupsForApplicationOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, AppRegistryError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, AppRegistryError> PutConfigurationOutcome;
      typedef Aws::Utils::Outcome<SyncResourceResult, AppRegistryError> SyncResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, AppRegistryError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, AppRegistryError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationResult, AppRegistryError> UpdateApplicationOutcome;
      typedef Aws::Utils::Outcome<UpdateAttributeGroupResult, AppRegistryError> UpdateAttributeGroupOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateAttributeGroupOutcome> AssociateAttributeGroupOutcomeCallable;
      typedef std::future<AssociateResourceOutcome> AssociateResourceOutcomeCallable;
      typedef std::future<CreateApplicationOutcome> CreateApplicationOutcomeCallable;
      typedef std::future<CreateAttributeGroupOutcome> CreateAttributeGroupOutcomeCallable;
      typedef std::future<DeleteApplicationOutcome> DeleteApplicationOutcomeCallable;
      typedef std::future<DeleteAttributeGroupOutcome> DeleteAttributeGroupOutcomeCallable;
      typedef std::future<DisassociateAttributeGroupOutcome> DisassociateAttributeGroupOutcomeCallable;
      typedef std::future<DisassociateResourceOutcome> DisassociateResourceOutcomeCallable;
      typedef std::future<GetApplicationOutcome> GetApplicationOutcomeCallable;
      typedef std::future<GetAssociatedResourceOutcome> GetAssociatedResourceOutcomeCallable;
      typedef std::future<GetAttributeGroupOutcome> GetAttributeGroupOutcomeCallable;
      typedef std::future<GetConfigurationOutcome> GetConfigurationOutcomeCallable;
      typedef std::future<ListApplicationsOutcome> ListApplicationsOutcomeCallable;
      typedef std::future<ListAssociatedAttributeGroupsOutcome> ListAssociatedAttributeGroupsOutcomeCallable;
      typedef std::future<ListAssociatedResourcesOutcome> ListAssociatedResourcesOutcomeCallable;
      typedef std::future<ListAttributeGroupsOutcome> ListAttributeGroupsOutcomeCallable;
      typedef std::future<ListAttributeGroupsForApplicationOutcome> ListAttributeGroupsForApplicationOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutConfigurationOutcome> PutConfigurationOutcomeCallable;
      typedef std::future<SyncResourceOutcome> SyncResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateApplicationOutcome> UpdateApplicationOutcomeCallable;
      typedef std::future<UpdateAttributeGroupOutcome> UpdateAttributeGroupOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AppRegistryClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AppRegistryClient*, const Model::AssociateAttributeGroupRequest&, const Model::AssociateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::AssociateResourceRequest&, const Model::AssociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::CreateApplicationRequest&, const Model::CreateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::CreateAttributeGroupRequest&, const Model::CreateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DeleteApplicationRequest&, const Model::DeleteApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DeleteAttributeGroupRequest&, const Model::DeleteAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DisassociateAttributeGroupRequest&, const Model::DisassociateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::DisassociateResourceRequest&, const Model::DisassociateResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetApplicationRequest&, const Model::GetApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetAssociatedResourceRequest&, const Model::GetAssociatedResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssociatedResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetAttributeGroupRequest&, const Model::GetAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttributeGroupResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::GetConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListApplicationsRequest&, const Model::ListApplicationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAssociatedAttributeGroupsRequest&, const Model::ListAssociatedAttributeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedAttributeGroupsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAssociatedResourcesRequest&, const Model::ListAssociatedResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAssociatedResourcesResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAttributeGroupsRequest&, const Model::ListAttributeGroupsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttributeGroupsResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListAttributeGroupsForApplicationRequest&, const Model::ListAttributeGroupsForApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAttributeGroupsForApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::PutConfigurationRequest&, const Model::PutConfigurationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutConfigurationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::SyncResourceRequest&, const Model::SyncResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SyncResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::UpdateApplicationRequest&, const Model::UpdateApplicationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationResponseReceivedHandler;
    typedef std::function<void(const AppRegistryClient*, const Model::UpdateAttributeGroupRequest&, const Model::UpdateAttributeGroupOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateAttributeGroupResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AppRegistry
} // namespace Aws
