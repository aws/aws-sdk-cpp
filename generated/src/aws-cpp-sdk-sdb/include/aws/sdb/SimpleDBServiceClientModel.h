/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/sdb/SimpleDBErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/sdb/SimpleDBEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in SimpleDBClient header */
#include <aws/sdb/model/DomainMetadataResult.h>
#include <aws/sdb/model/GetAttributesResult.h>
#include <aws/sdb/model/ListDomainsResult.h>
#include <aws/sdb/model/SelectResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in SimpleDBClient header */

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

  namespace SimpleDB
  {
    using SimpleDBClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using SimpleDBEndpointProviderBase = Aws::SimpleDB::Endpoint::SimpleDBEndpointProviderBase;
    using SimpleDBEndpointProvider = Aws::SimpleDB::Endpoint::SimpleDBEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in SimpleDBClient header */
      class BatchDeleteAttributesRequest;
      class BatchPutAttributesRequest;
      class CreateDomainRequest;
      class DeleteAttributesRequest;
      class DeleteDomainRequest;
      class DomainMetadataRequest;
      class GetAttributesRequest;
      class ListDomainsRequest;
      class PutAttributesRequest;
      class SelectRequest;
      /* End of service model forward declarations required in SimpleDBClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> BatchDeleteAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> BatchPutAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> CreateDomainOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> DeleteAttributesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> DeleteDomainOutcome;
      typedef Aws::Utils::Outcome<DomainMetadataResult, SimpleDBError> DomainMetadataOutcome;
      typedef Aws::Utils::Outcome<GetAttributesResult, SimpleDBError> GetAttributesOutcome;
      typedef Aws::Utils::Outcome<ListDomainsResult, SimpleDBError> ListDomainsOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, SimpleDBError> PutAttributesOutcome;
      typedef Aws::Utils::Outcome<SelectResult, SimpleDBError> SelectOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchDeleteAttributesOutcome> BatchDeleteAttributesOutcomeCallable;
      typedef std::future<BatchPutAttributesOutcome> BatchPutAttributesOutcomeCallable;
      typedef std::future<CreateDomainOutcome> CreateDomainOutcomeCallable;
      typedef std::future<DeleteAttributesOutcome> DeleteAttributesOutcomeCallable;
      typedef std::future<DeleteDomainOutcome> DeleteDomainOutcomeCallable;
      typedef std::future<DomainMetadataOutcome> DomainMetadataOutcomeCallable;
      typedef std::future<GetAttributesOutcome> GetAttributesOutcomeCallable;
      typedef std::future<ListDomainsOutcome> ListDomainsOutcomeCallable;
      typedef std::future<PutAttributesOutcome> PutAttributesOutcomeCallable;
      typedef std::future<SelectOutcome> SelectOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class SimpleDBClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const SimpleDBClient*, const Model::BatchDeleteAttributesRequest&, const Model::BatchDeleteAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDeleteAttributesResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::BatchPutAttributesRequest&, const Model::BatchPutAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchPutAttributesResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::CreateDomainRequest&, const Model::CreateDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateDomainResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::DeleteAttributesRequest&, const Model::DeleteAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteAttributesResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::DeleteDomainRequest&, const Model::DeleteDomainOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteDomainResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::DomainMetadataRequest&, const Model::DomainMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DomainMetadataResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::GetAttributesRequest&, const Model::GetAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAttributesResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::ListDomainsRequest&, const Model::ListDomainsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListDomainsResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::PutAttributesRequest&, const Model::PutAttributesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutAttributesResponseReceivedHandler;
    typedef std::function<void(const SimpleDBClient*, const Model::SelectRequest&, const Model::SelectOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SelectResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace SimpleDB
} // namespace Aws
