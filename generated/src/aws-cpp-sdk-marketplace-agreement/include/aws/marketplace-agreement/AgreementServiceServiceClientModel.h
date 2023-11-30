/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/marketplace-agreement/AgreementServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/marketplace-agreement/AgreementServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in AgreementServiceClient header */
#include <aws/marketplace-agreement/model/DescribeAgreementResult.h>
#include <aws/marketplace-agreement/model/GetAgreementTermsResult.h>
#include <aws/marketplace-agreement/model/SearchAgreementsResult.h>
/* End of service model headers required in AgreementServiceClient header */

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

  namespace AgreementService
  {
    using AgreementServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using AgreementServiceEndpointProviderBase = Aws::AgreementService::Endpoint::AgreementServiceEndpointProviderBase;
    using AgreementServiceEndpointProvider = Aws::AgreementService::Endpoint::AgreementServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in AgreementServiceClient header */
      class DescribeAgreementRequest;
      class GetAgreementTermsRequest;
      class SearchAgreementsRequest;
      /* End of service model forward declarations required in AgreementServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeAgreementResult, AgreementServiceError> DescribeAgreementOutcome;
      typedef Aws::Utils::Outcome<GetAgreementTermsResult, AgreementServiceError> GetAgreementTermsOutcome;
      typedef Aws::Utils::Outcome<SearchAgreementsResult, AgreementServiceError> SearchAgreementsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeAgreementOutcome> DescribeAgreementOutcomeCallable;
      typedef std::future<GetAgreementTermsOutcome> GetAgreementTermsOutcomeCallable;
      typedef std::future<SearchAgreementsOutcome> SearchAgreementsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class AgreementServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const AgreementServiceClient*, const Model::DescribeAgreementRequest&, const Model::DescribeAgreementOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAgreementResponseReceivedHandler;
    typedef std::function<void(const AgreementServiceClient*, const Model::GetAgreementTermsRequest&, const Model::GetAgreementTermsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAgreementTermsResponseReceivedHandler;
    typedef std::function<void(const AgreementServiceClient*, const Model::SearchAgreementsRequest&, const Model::SearchAgreementsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchAgreementsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace AgreementService
} // namespace Aws
