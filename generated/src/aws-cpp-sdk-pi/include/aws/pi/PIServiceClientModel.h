/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/pi/PIErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/pi/PIEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in PIClient header */
#include <aws/pi/model/CreatePerformanceAnalysisReportResult.h>
#include <aws/pi/model/DeletePerformanceAnalysisReportResult.h>
#include <aws/pi/model/DescribeDimensionKeysResult.h>
#include <aws/pi/model/GetDimensionKeyDetailsResult.h>
#include <aws/pi/model/GetPerformanceAnalysisReportResult.h>
#include <aws/pi/model/GetResourceMetadataResult.h>
#include <aws/pi/model/GetResourceMetricsResult.h>
#include <aws/pi/model/ListAvailableResourceDimensionsResult.h>
#include <aws/pi/model/ListAvailableResourceMetricsResult.h>
#include <aws/pi/model/ListPerformanceAnalysisReportsResult.h>
#include <aws/pi/model/ListTagsForResourceResult.h>
#include <aws/pi/model/TagResourceResult.h>
#include <aws/pi/model/UntagResourceResult.h>
/* End of service model headers required in PIClient header */

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

  namespace PI
  {
    using PIClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using PIEndpointProviderBase = Aws::PI::Endpoint::PIEndpointProviderBase;
    using PIEndpointProvider = Aws::PI::Endpoint::PIEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in PIClient header */
      class CreatePerformanceAnalysisReportRequest;
      class DeletePerformanceAnalysisReportRequest;
      class DescribeDimensionKeysRequest;
      class GetDimensionKeyDetailsRequest;
      class GetPerformanceAnalysisReportRequest;
      class GetResourceMetadataRequest;
      class GetResourceMetricsRequest;
      class ListAvailableResourceDimensionsRequest;
      class ListAvailableResourceMetricsRequest;
      class ListPerformanceAnalysisReportsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      /* End of service model forward declarations required in PIClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CreatePerformanceAnalysisReportResult, PIError> CreatePerformanceAnalysisReportOutcome;
      typedef Aws::Utils::Outcome<DeletePerformanceAnalysisReportResult, PIError> DeletePerformanceAnalysisReportOutcome;
      typedef Aws::Utils::Outcome<DescribeDimensionKeysResult, PIError> DescribeDimensionKeysOutcome;
      typedef Aws::Utils::Outcome<GetDimensionKeyDetailsResult, PIError> GetDimensionKeyDetailsOutcome;
      typedef Aws::Utils::Outcome<GetPerformanceAnalysisReportResult, PIError> GetPerformanceAnalysisReportOutcome;
      typedef Aws::Utils::Outcome<GetResourceMetadataResult, PIError> GetResourceMetadataOutcome;
      typedef Aws::Utils::Outcome<GetResourceMetricsResult, PIError> GetResourceMetricsOutcome;
      typedef Aws::Utils::Outcome<ListAvailableResourceDimensionsResult, PIError> ListAvailableResourceDimensionsOutcome;
      typedef Aws::Utils::Outcome<ListAvailableResourceMetricsResult, PIError> ListAvailableResourceMetricsOutcome;
      typedef Aws::Utils::Outcome<ListPerformanceAnalysisReportsResult, PIError> ListPerformanceAnalysisReportsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, PIError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, PIError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, PIError> UntagResourceOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CreatePerformanceAnalysisReportOutcome> CreatePerformanceAnalysisReportOutcomeCallable;
      typedef std::future<DeletePerformanceAnalysisReportOutcome> DeletePerformanceAnalysisReportOutcomeCallable;
      typedef std::future<DescribeDimensionKeysOutcome> DescribeDimensionKeysOutcomeCallable;
      typedef std::future<GetDimensionKeyDetailsOutcome> GetDimensionKeyDetailsOutcomeCallable;
      typedef std::future<GetPerformanceAnalysisReportOutcome> GetPerformanceAnalysisReportOutcomeCallable;
      typedef std::future<GetResourceMetadataOutcome> GetResourceMetadataOutcomeCallable;
      typedef std::future<GetResourceMetricsOutcome> GetResourceMetricsOutcomeCallable;
      typedef std::future<ListAvailableResourceDimensionsOutcome> ListAvailableResourceDimensionsOutcomeCallable;
      typedef std::future<ListAvailableResourceMetricsOutcome> ListAvailableResourceMetricsOutcomeCallable;
      typedef std::future<ListPerformanceAnalysisReportsOutcome> ListPerformanceAnalysisReportsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class PIClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const PIClient*, const Model::CreatePerformanceAnalysisReportRequest&, const Model::CreatePerformanceAnalysisReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePerformanceAnalysisReportResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::DeletePerformanceAnalysisReportRequest&, const Model::DeletePerformanceAnalysisReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePerformanceAnalysisReportResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::DescribeDimensionKeysRequest&, const Model::DescribeDimensionKeysOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeDimensionKeysResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetDimensionKeyDetailsRequest&, const Model::GetDimensionKeyDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetDimensionKeyDetailsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetPerformanceAnalysisReportRequest&, const Model::GetPerformanceAnalysisReportOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPerformanceAnalysisReportResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetadataRequest&, const Model::GetResourceMetadataOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetadataResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::GetResourceMetricsRequest&, const Model::GetResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceMetricsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListAvailableResourceDimensionsRequest&, const Model::ListAvailableResourceDimensionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableResourceDimensionsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListAvailableResourceMetricsRequest&, const Model::ListAvailableResourceMetricsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAvailableResourceMetricsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListPerformanceAnalysisReportsRequest&, const Model::ListPerformanceAnalysisReportsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPerformanceAnalysisReportsResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const PIClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace PI
} // namespace Aws
