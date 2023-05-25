/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/schemas/SchemasErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/schemas/SchemasEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SchemasClient header */
#include <aws/schemas/model/CreateDiscovererResult.h>
#include <aws/schemas/model/CreateRegistryResult.h>
#include <aws/schemas/model/CreateSchemaResult.h>
#include <aws/schemas/model/DescribeCodeBindingResult.h>
#include <aws/schemas/model/DescribeDiscovererResult.h>
#include <aws/schemas/model/DescribeRegistryResult.h>
#include <aws/schemas/model/DescribeSchemaResult.h>
#include <aws/schemas/model/ExportSchemaResult.h>
#include <aws/schemas/model/GetCodeBindingSourceResult.h>
#include <aws/schemas/model/GetDiscoveredSchemaResult.h>
#include <aws/schemas/model/GetResourcePolicyResult.h>
#include <aws/schemas/model/ListDiscoverersResult.h>
#include <aws/schemas/model/ListRegistriesResult.h>
#include <aws/schemas/model/ListSchemaVersionsResult.h>
#include <aws/schemas/model/ListSchemasResult.h>
#include <aws/schemas/model/ListTagsForResourceResult.h>
#include <aws/schemas/model/PutCodeBindingResult.h>
#include <aws/schemas/model/PutResourcePolicyResult.h>
#include <aws/schemas/model/SearchSchemasResult.h>
#include <aws/schemas/model/StartDiscovererResult.h>
#include <aws/schemas/model/StopDiscovererResult.h>
#include <aws/schemas/model/UpdateDiscovererResult.h>
#include <aws/schemas/model/UpdateRegistryResult.h>
#include <aws/schemas/model/UpdateSchemaResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SchemasClient header */

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

  namespace Schemas
  {
    using SchemasClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SchemasEndpointProviderBase = Aws::Schemas::Endpoint::SchemasEndpointProviderBase;
    using SchemasEndpointProvider = Aws::Schemas::Endpoint::SchemasEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SchemasClient header */
      class CreateDiscovererRequest;
      class CreateRegistryRequest;
      class CreateSchemaRequest;
      class DeleteDiscovererRequest;
      class DeleteRegistryRequest;
      class DeleteResourcePolicyRequest;
      class DeleteSchemaRequest;
      class DeleteSchemaVersionRequest;
      class DescribeCodeBindingRequest;
      class DescribeDiscovererRequest;
      class DescribeRegistryRequest;
      class DescribeSchemaRequest;
      class ExportSchemaRequest;
      class GetCodeBindingSourceRequest;
      class GetDiscoveredSchemaRequest;
      class GetResourcePolicyRequest;
      class ListDiscoverersRequest;
      class ListRegistriesRequest;
      class ListSchemaVersionsRequest;
      class ListSchemasRequest;
      class ListTagsForResourceRequest;
      class PutCodeBindingRequest;
      class PutResourcePolicyRequest;
      class SearchSchemasRequest;
      class StartDiscovererRequest;
      class StopDiscovererRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateDiscovererRequest;
      class UpdateRegistryRequest;
      class UpdateSchemaRequest;
      /* End of service model forward declarations required in SchemasClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateDiscovererResult, SchemasError> CreateDiscovererOutcome;
      typedef Aws::Utils::Outcome<CreateRegistryResult, SchemasError> CreateRegistryOutcome;
      typedef Aws::Utils::Outcome<CreateSchemaResult, SchemasError> CreateSchemaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteDiscovererOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteRegistryOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteSchemaOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> DeleteSchemaVersionOutcome;
      typedef Aws::Utils::Outcome<DescribeCodeBindingResult, SchemasError> DescribeCodeBindingOutcome;
      typedef Aws::Utils::Outcome<DescribeDiscovererResult, SchemasError> DescribeDiscovererOutcome;
      typedef Aws::Utils::Outcome<DescribeRegistryResult, SchemasError> DescribeRegistryOutcome;
      typedef Aws::Utils::Outcome<DescribeSchemaResult, SchemasError> DescribeSchemaOutcome;
      typedef Aws::Utils::Outcome<ExportSchemaResult, SchemasError> ExportSchemaOutcome;
      typedef Aws::Utils::Outcome<GetCodeBindingSourceResult, SchemasError> GetCodeBindingSourceOutcome;
      typedef Aws::Utils::Outcome<GetDiscoveredSchemaResult, SchemasError> GetDiscoveredSchemaOutcome;
      typedef Aws::Utils::Outcome<GetResourcePolicyResult, SchemasError> GetResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<ListDiscoverersResult, SchemasError> ListDiscoverersOutcome;
      typedef Aws::Utils::Outcome<ListRegistriesResult, SchemasError> ListRegistriesOutcome;
      typedef Aws::Utils::Outcome<ListSchemaVersionsResult, SchemasError> ListSchemaVersionsOutcome;
      typedef Aws::Utils::Outcome<ListSchemasResult, SchemasError> ListSchemasOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, SchemasError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<PutCodeBindingResult, SchemasError> PutCodeBindingOutcome;
      typedef Aws::Utils::Outcome<PutResourcePolicyResult, SchemasError> PutResourcePolicyOutcome;
      typedef Aws::Utils::Outcome<SearchSchemasResult, SchemasError> SearchSchemasOutcome;
      typedef Aws::Utils::Outcome<StartDiscovererResult, SchemasError> StartDiscovererOutcome;
      typedef Aws::Utils::Outcome<StopDiscovererResult, SchemasError> StopDiscovererOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SchemasError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateDiscovererResult, SchemasError> UpdateDiscovererOutcome;
      typedef Aws::Utils::Outcome<UpdateRegistryResult, SchemasError> UpdateRegistryOutcome;
      typedef Aws::Utils::Outcome<UpdateSchemaResult, SchemasError> UpdateSchemaOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateDiscovererOutcome> CreateDiscovererOutcomeCallable;
      typedef std::future<CreateRegistryOutcome> CreateRegistryOutcomeCallable;
      typedef std::future<CreateSchemaOutcome> CreateSchemaOutcomeCallable;
      typedef std::future<DeleteDiscovererOutcome> DeleteDiscovererOutcomeCallable;
      typedef std::future<DeleteRegistryOutcome> DeleteRegistryOutcomeCallable;
      typedef std::future<DeleteResourcePolicyOutcome> DeleteResourcePolicyOutcomeCallable;
      typedef std::future<DeleteSchemaOutcome> DeleteSchemaOutcomeCallable;
      typedef std::future<DeleteSchemaVersionOutcome> DeleteSchemaVersionOutcomeCallable;
      typedef std::future<DescribeCodeBindingOutcome> DescribeCodeBindingOutcomeCallable;
      typedef std::future<DescribeDiscovererOutcome> DescribeDiscovererOutcomeCallable;
      typedef std::future<DescribeRegistryOutcome> DescribeRegistryOutcomeCallable;
      typedef std::future<DescribeSchemaOutcome> DescribeSchemaOutcomeCallable;
      typedef std::future<ExportSchemaOutcome> ExportSchemaOutcomeCallable;
      typedef std::future<GetCodeBindingSourceOutcome> GetCodeBindingSourceOutcomeCallable;
      typedef std::future<GetDiscoveredSchemaOutcome> GetDiscoveredSchemaOutcomeCallable;
      typedef std::future<GetResourcePolicyOutcome> GetResourcePolicyOutcomeCallable;
      typedef std::future<ListDiscoverersOutcome> ListDiscoverersOutcomeCallable;
      typedef std::future<ListRegistriesOutcome> ListRegistriesOutcomeCallable;
      typedef std::future<ListSchemaVersionsOutcome> ListSchemaVersionsOutcomeCallable;
      typedef std::future<ListSchemasOutcome> ListSchemasOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<PutCodeBindingOutcome> PutCodeBindingOutcomeCallable;
      typedef std::future<PutResourcePolicyOutcome> PutResourcePolicyOutcomeCallable;
      typedef std::future<SearchSchemasOutcome> SearchSchemasOutcomeCallable;
      typedef std::future<StartDiscovererOutcome> StartDiscovererOutcomeCallable;
      typedef std::future<StopDiscovererOutcome> StopDiscovererOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateDiscovererOutcome> UpdateDiscovererOutcomeCallable;
      typedef std::future<UpdateRegistryOutcome> UpdateRegistryOutcomeCallable;
      typedef std::future<UpdateSchemaOutcome> UpdateSchemaOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SchemasClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SchemasClient*, const Model::CreateDiscovererRequest&, const Model::CreateDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::CreateRegistryRequest&, const Model::CreateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::CreateSchemaRequest&, const Model::CreateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteDiscovererRequest&, const Model::DeleteDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteRegistryRequest&, const Model::DeleteRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteResourcePolicyRequest&, const Model::DeleteResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteSchemaRequest&, const Model::DeleteSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DeleteSchemaVersionRequest&, const Model::DeleteSchemaVersionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteSchemaVersionResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeCodeBindingRequest&, const Model::DescribeCodeBindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCodeBindingResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeDiscovererRequest&, const Model::DescribeDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeRegistryRequest&, const Model::DescribeRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::DescribeSchemaRequest&, const Model::DescribeSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ExportSchemaRequest&, const Model::ExportSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExportSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetCodeBindingSourceRequest&, Model::GetCodeBindingSourceOutcome, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetCodeBindingSourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetDiscoveredSchemaRequest&, const Model::GetDiscoveredSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDiscoveredSchemaResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::GetResourcePolicyRequest&, const Model::GetResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListDiscoverersRequest&, const Model::ListDiscoverersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDiscoverersResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListRegistriesRequest&, const Model::ListRegistriesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRegistriesResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListSchemaVersionsRequest&, const Model::ListSchemaVersionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemaVersionsResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListSchemasRequest&, const Model::ListSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSchemasResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::PutCodeBindingRequest&, const Model::PutCodeBindingOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutCodeBindingResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::PutResourcePolicyRequest&, const Model::PutResourcePolicyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutResourcePolicyResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::SearchSchemasRequest&, const Model::SearchSchemasOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchSchemasResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::StartDiscovererRequest&, const Model::StartDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::StopDiscovererRequest&, const Model::StopDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateDiscovererRequest&, const Model::UpdateDiscovererOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateDiscovererResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateRegistryRequest&, const Model::UpdateRegistryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRegistryResponseReceivedHandler;
    typedef std::function<void(const SchemasClient*, const Model::UpdateSchemaRequest&, const Model::UpdateSchemaOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateSchemaResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Schemas
} // namespace Aws
