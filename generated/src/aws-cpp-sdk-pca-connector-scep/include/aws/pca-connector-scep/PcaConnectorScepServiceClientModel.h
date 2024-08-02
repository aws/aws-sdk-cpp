/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pca-connector-scep/PcaConnectorScepErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pca-connector-scep/PcaConnectorScepEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PcaConnectorScepClient header */
#include <aws/pca-connector-scep/model/CreateChallengeResult.h>
#include <aws/pca-connector-scep/model/CreateConnectorResult.h>
#include <aws/pca-connector-scep/model/GetChallengeMetadataResult.h>
#include <aws/pca-connector-scep/model/GetChallengePasswordResult.h>
#include <aws/pca-connector-scep/model/GetConnectorResult.h>
#include <aws/pca-connector-scep/model/ListChallengeMetadataResult.h>
#include <aws/pca-connector-scep/model/ListConnectorsResult.h>
#include <aws/pca-connector-scep/model/ListTagsForResourceResult.h>
#include <aws/pca-connector-scep/model/ListConnectorsRequest.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in PcaConnectorScepClient header */

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

  namespace PcaConnectorScep
  {
    using PcaConnectorScepClientConfiguration = Aws::Client::GenericClientConfiguration;
    using PcaConnectorScepEndpointProviderBase = Aws::PcaConnectorScep::Endpoint::PcaConnectorScepEndpointProviderBase;
    using PcaConnectorScepEndpointProvider = Aws::PcaConnectorScep::Endpoint::PcaConnectorScepEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PcaConnectorScepClient header */
      class CreateChallengeRequest;
      class CreateConnectorRequest;
      class DeleteChallengeRequest;
      class DeleteConnectorRequest;
      class GetChallengeMetadataRequest;
      class GetChallengePasswordRequest;
      class GetConnectorRequest;
      class ListChallengeMetadataRequest;
      class ListConnectorsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in PcaConnectorScepClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreateChallengeResult, PcaConnectorScepError> CreateChallengeOutcome;
      typedef Aws::Utils::Outcome<CreateConnectorResult, PcaConnectorScepError> CreateConnectorOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorScepError> DeleteChallengeOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorScepError> DeleteConnectorOutcome;
      typedef Aws::Utils::Outcome<GetChallengeMetadataResult, PcaConnectorScepError> GetChallengeMetadataOutcome;
      typedef Aws::Utils::Outcome<GetChallengePasswordResult, PcaConnectorScepError> GetChallengePasswordOutcome;
      typedef Aws::Utils::Outcome<GetConnectorResult, PcaConnectorScepError> GetConnectorOutcome;
      typedef Aws::Utils::Outcome<ListChallengeMetadataResult, PcaConnectorScepError> ListChallengeMetadataOutcome;
      typedef Aws::Utils::Outcome<ListConnectorsResult, PcaConnectorScepError> ListConnectorsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PcaConnectorScepError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorScepError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, PcaConnectorScepError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreateChallengeOutcome> CreateChallengeOutcomeCallable;
      typedef std::future<CreateConnectorOutcome> CreateConnectorOutcomeCallable;
      typedef std::future<DeleteChallengeOutcome> DeleteChallengeOutcomeCallable;
      typedef std::future<DeleteConnectorOutcome> DeleteConnectorOutcomeCallable;
      typedef std::future<GetChallengeMetadataOutcome> GetChallengeMetadataOutcomeCallable;
      typedef std::future<GetChallengePasswordOutcome> GetChallengePasswordOutcomeCallable;
      typedef std::future<GetConnectorOutcome> GetConnectorOutcomeCallable;
      typedef std::future<ListChallengeMetadataOutcome> ListChallengeMetadataOutcomeCallable;
      typedef std::future<ListConnectorsOutcome> ListConnectorsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PcaConnectorScepClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PcaConnectorScepClient*, const Model::CreateChallengeRequest&, const Model::CreateChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateChallengeResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::CreateConnectorRequest&, const Model::CreateConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::DeleteChallengeRequest&, const Model::DeleteChallengeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteChallengeResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::DeleteConnectorRequest&, const Model::DeleteConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::GetChallengeMetadataRequest&, const Model::GetChallengeMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChallengeMetadataResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::GetChallengePasswordRequest&, const Model::GetChallengePasswordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetChallengePasswordResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::GetConnectorRequest&, const Model::GetConnectorOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetConnectorResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::ListChallengeMetadataRequest&, const Model::ListChallengeMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListChallengeMetadataResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::ListConnectorsRequest&, const Model::ListConnectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConnectorsResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PcaConnectorScepClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PcaConnectorScep
} // namespace Aws
