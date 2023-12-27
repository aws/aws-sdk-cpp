/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pca-connector-ad/PcaConnectorAdErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pca-connector-ad/PcaConnectorAdEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PcaConnectorAdClient header */
#include <aws/pca-connector-ad/model/CreateConnectorResult.h>
#include <aws/pca-connector-ad/model/CreateDirectoryRegistrationResult.h>
#include <aws/pca-connector-ad/model/CreateTemplateResult.h>
#include <aws/pca-connector-ad/model/GetConnectorResult.h>
#include <aws/pca-connector-ad/model/GetDirectoryRegistrationResult.h>
#include <aws/pca-connector-ad/model/GetServicePrincipalNameResult.h>
#include <aws/pca-connector-ad/model/GetTemplateResult.h>
#include <aws/pca-connector-ad/model/GetTemplateGroupAccessControlEntryResult.h>
#include <aws/pca-connector-ad/model/ListConnectorsResult.h>
#include <aws/pca-connector-ad/model/ListDirectoryRegistrationsResult.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesResult.h>
#include <aws/pca-connector-ad/model/ListTagsForResourceResult.h>
#include <aws/pca-connector-ad/model/ListTemplateGroupAccessControlEntriesResult.h>
#include <aws/pca-connector-ad/model/ListTemplatesResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PcaConnectorAdClient header */

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

  namespace PcaConnectorAd
  {
    using PcaConnectorAdClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PcaConnectorAdEndpointProviderBase = Aws::PcaConnectorAd::Endpoint::PcaConnectorAdEndpointProviderBase;
    using PcaConnectorAdEndpointProvider = Aws::PcaConnectorAd::Endpoint::PcaConnectorAdEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PcaConnectorAdClient header */
      class CreateConnectorRequest;
      class CreateDirectoryRegistrationRequest;
      class CreateServicePrincipalNameRequest;
      class CreateTemplateRequest;
      class CreateTemplateGroupAccessControlEntryRequest;
      class DeleteConnectorRequest;
      class DeleteDirectoryRegistrationRequest;
      class DeleteServicePrincipalNameRequest;
      class DeleteTemplateRequest;
      class DeleteTemplateGroupAccessControlEntryRequest;
      class GetConnectorRequest;
      class GetDirectoryRegistrationRequest;
      class GetServicePrincipalNameRequest;
      class GetTemplateRequest;
      class GetTemplateGroupAccessControlEntryRequest;
      class ListConnectorsRequest;
      class ListDirectoryRegistrationsRequest;
      class ListServicePrincipalNamesRequest;
      class ListTagsForResourceRequest;
      class ListTemplateGroupAccessControlEntriesRequest;
      class ListTemplatesRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateTemplateRequest;
      class UpdateTemplateGroupAccessControlEntryRequest;
      /* End of service model forward declarations required in PcaConnectorAdClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateConnectorResult, PcaConnectorAdError> CreateConnectorOutcome;
      typedef Aws::Utils::Outcome<CreateDirectoryRegistrationResult, PcaConnectorAdError> CreateDirectoryRegistrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> CreateServicePrincipalNameOutcome;
      typedef Aws::Utils::Outcome<CreateTemplateResult, PcaConnectorAdError> CreateTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> CreateTemplateGroupAccessControlEntryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> DeleteConnectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> DeleteDirectoryRegistrationOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> DeleteServicePrincipalNameOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> DeleteTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> DeleteTemplateGroupAccessControlEntryOutcome;
      typedef Aws::Utils::Outcome<GetConnectorResult, PcaConnectorAdError> GetConnectorOutcome;
      typedef Aws::Utils::Outcome<GetDirectoryRegistrationResult, PcaConnectorAdError> GetDirectoryRegistrationOutcome;
      typedef Aws::Utils::Outcome<GetServicePrincipalNameResult, PcaConnectorAdError> GetServicePrincipalNameOutcome;
      typedef Aws::Utils::Outcome<GetTemplateResult, PcaConnectorAdError> GetTemplateOutcome;
      typedef Aws::Utils::Outcome<GetTemplateGroupAccessControlEntryResult, PcaConnectorAdError> GetTemplateGroupAccessControlEntryOutcome;
      typedef Aws::Utils::Outcome<ListConnectorsResult, PcaConnectorAdError> ListConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListDirectoryRegistrationsResult, PcaConnectorAdError> ListDirectoryRegistrationsOutcome;
      typedef Aws::Utils::Outcome<ListServicePrincipalNamesResult, PcaConnectorAdError> ListServicePrincipalNamesOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PcaConnectorAdError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListTemplateGroupAccessControlEntriesResult, PcaConnectorAdError> ListTemplateGroupAccessControlEntriesOutcome;
      typedef Aws::Utils::Outcome<ListTemplatesResult, PcaConnectorAdError> ListTemplatesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> UpdateTemplateOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorAdError> UpdateTemplateGroupAccessControlEntryOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateConnectorOutcome> CreateConnectorOutcomeCallable;
      typedef std::future<CreateDirectoryRegistrationOutcome> CreateDirectoryRegistrationOutcomeCallable;
      typedef std::future<CreateServicePrincipalNameOutcome> CreateServicePrincipalNameOutcomeCallable;
      typedef std::future<CreateTemplateOutcome> CreateTemplateOutcomeCallable;
      typedef std::future<CreateTemplateGroupAccessControlEntryOutcome> CreateTemplateGroupAccessControlEntryOutcomeCallable;
      typedef std::future<DeleteConnectorOutcome> DeleteConnectorOutcomeCallable;
      typedef std::future<DeleteDirectoryRegistrationOutcome> DeleteDirectoryRegistrationOutcomeCallable;
      typedef std::future<DeleteServicePrincipalNameOutcome> DeleteServicePrincipalNameOutcomeCallable;
      typedef std::future<DeleteTemplateOutcome> DeleteTemplateOutcomeCallable;
      typedef std::future<DeleteTemplateGroupAccessControlEntryOutcome> DeleteTemplateGroupAccessControlEntryOutcomeCallable;
      typedef std::future<GetConnectorOutcome> GetConnectorOutcomeCallable;
      typedef std::future<GetDirectoryRegistrationOutcome> GetDirectoryRegistrationOutcomeCallable;
      typedef std::future<GetServicePrincipalNameOutcome> GetServicePrincipalNameOutcomeCallable;
      typedef std::future<GetTemplateOutcome> GetTemplateOutcomeCallable;
      typedef std::future<GetTemplateGroupAccessControlEntryOutcome> GetTemplateGroupAccessControlEntryOutcomeCallable;
      typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
      typedef std::future<ListDirectoryRegistrationsOutcome> ListDirectoryRegistrationsOutcomeCallable;
      typedef std::future<ListServicePrincipalNamesOutcome> ListServicePrincipalNamesOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<ListTemplateGroupAccessControlEntriesOutcome> ListTemplateGroupAccessControlEntriesOutcomeCallable;
      typedef std::future<ListTemplatesOutcome> ListTemplatesOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateTemplateOutcome> UpdateTemplateOutcomeCallable;
      typedef std::future<UpdateTemplateGroupAccessControlEntryOutcome> UpdateTemplateGroupAccessControlEntryOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PcaConnectorAdClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PcaConnectorAdClient*, const Model::CreateConnectorRequest&, const Model::CreateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::CreateDirectoryRegistrationRequest&, const Model::CreateDirectoryRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDirectoryRegistrationResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::CreateServicePrincipalNameRequest&, const Model::CreateServicePrincipalNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServicePrincipalNameResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::CreateTemplateRequest&, const Model::CreateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::CreateTemplateGroupAccessControlEntryRequest&, const Model::CreateTemplateGroupAccessControlEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTemplateGroupAccessControlEntryResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::DeleteConnectorRequest&, const Model::DeleteConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::DeleteDirectoryRegistrationRequest&, const Model::DeleteDirectoryRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDirectoryRegistrationResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::DeleteServicePrincipalNameRequest&, const Model::DeleteServicePrincipalNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServicePrincipalNameResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::DeleteTemplateRequest&, const Model::DeleteTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::DeleteTemplateGroupAccessControlEntryRequest&, const Model::DeleteTemplateGroupAccessControlEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTemplateGroupAccessControlEntryResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::GetConnectorRequest&, const Model::GetConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::GetDirectoryRegistrationRequest&, const Model::GetDirectoryRegistrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDirectoryRegistrationResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::GetServicePrincipalNameRequest&, const Model::GetServicePrincipalNameOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServicePrincipalNameResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::GetTemplateRequest&, const Model::GetTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::GetTemplateGroupAccessControlEntryRequest&, const Model::GetTemplateGroupAccessControlEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetTemplateGroupAccessControlEntryResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListConnectorsRequest&, const Model::ListConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorsResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListDirectoryRegistrationsRequest&, const Model::ListDirectoryRegistrationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDirectoryRegistrationsResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListServicePrincipalNamesRequest&, const Model::ListServicePrincipalNamesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServicePrincipalNamesResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListTemplateGroupAccessControlEntriesRequest&, const Model::ListTemplateGroupAccessControlEntriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplateGroupAccessControlEntriesResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::ListTemplatesRequest&, const Model::ListTemplatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTemplatesResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::UpdateTemplateRequest&, const Model::UpdateTemplateOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorAdClient*, const Model::UpdateTemplateGroupAccessControlEntryRequest&, const Model::UpdateTemplateGroupAccessControlEntryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTemplateGroupAccessControlEntryResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PcaConnectorAd
} // namespace Aws
