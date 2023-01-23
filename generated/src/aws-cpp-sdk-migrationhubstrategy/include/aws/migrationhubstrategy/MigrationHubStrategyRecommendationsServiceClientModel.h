/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MigrationHubStrategyRecommendationsClient header */
#include <aws/migrationhubstrategy/model/GetApplicationComponentDetailsResult.h>
#include <aws/migrationhubstrategy/model/GetApplicationComponentStrategiesResult.h>
#include <aws/migrationhubstrategy/model/GetAssessmentResult.h>
#include <aws/migrationhubstrategy/model/GetImportFileTaskResult.h>
#include <aws/migrationhubstrategy/model/GetLatestAssessmentIdResult.h>
#include <aws/migrationhubstrategy/model/GetPortfolioPreferencesResult.h>
#include <aws/migrationhubstrategy/model/GetPortfolioSummaryResult.h>
#include <aws/migrationhubstrategy/model/GetRecommendationReportDetailsResult.h>
#include <aws/migrationhubstrategy/model/GetServerDetailsResult.h>
#include <aws/migrationhubstrategy/model/GetServerStrategiesResult.h>
#include <aws/migrationhubstrategy/model/ListApplicationComponentsResult.h>
#include <aws/migrationhubstrategy/model/ListCollectorsResult.h>
#include <aws/migrationhubstrategy/model/ListImportFileTaskResult.h>
#include <aws/migrationhubstrategy/model/ListServersResult.h>
#include <aws/migrationhubstrategy/model/PutPortfolioPreferencesResult.h>
#include <aws/migrationhubstrategy/model/StartAssessmentResult.h>
#include <aws/migrationhubstrategy/model/StartImportFileTaskResult.h>
#include <aws/migrationhubstrategy/model/StartRecommendationReportGenerationResult.h>
#include <aws/migrationhubstrategy/model/StopAssessmentResult.h>
#include <aws/migrationhubstrategy/model/UpdateApplicationComponentConfigResult.h>
#include <aws/migrationhubstrategy/model/UpdateServerConfigResult.h>
/* End of service model headers required in MigrationHubStrategyRecommendationsClient header */

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

  namespace MigrationHubStrategyRecommendations
  {
    using MigrationHubStrategyRecommendationsClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MigrationHubStrategyRecommendationsEndpointProviderBase = Aws::MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsEndpointProviderBase;
    using MigrationHubStrategyRecommendationsEndpointProvider = Aws::MigrationHubStrategyRecommendations::Endpoint::MigrationHubStrategyRecommendationsEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MigrationHubStrategyRecommendationsClient header */
      class GetApplicationComponentDetailsRequest;
      class GetApplicationComponentStrategiesRequest;
      class GetAssessmentRequest;
      class GetImportFileTaskRequest;
      class GetLatestAssessmentIdRequest;
      class GetPortfolioPreferencesRequest;
      class GetPortfolioSummaryRequest;
      class GetRecommendationReportDetailsRequest;
      class GetServerDetailsRequest;
      class GetServerStrategiesRequest;
      class ListApplicationComponentsRequest;
      class ListCollectorsRequest;
      class ListImportFileTaskRequest;
      class ListServersRequest;
      class PutPortfolioPreferencesRequest;
      class StartAssessmentRequest;
      class StartImportFileTaskRequest;
      class StartRecommendationReportGenerationRequest;
      class StopAssessmentRequest;
      class UpdateApplicationComponentConfigRequest;
      class UpdateServerConfigRequest;
      /* End of service model forward declarations required in MigrationHubStrategyRecommendationsClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<GetApplicationComponentDetailsResult, MigrationHubStrategyRecommendationsError> GetApplicationComponentDetailsOutcome;
      typedef Aws::Utils::Outcome<GetApplicationComponentStrategiesResult, MigrationHubStrategyRecommendationsError> GetApplicationComponentStrategiesOutcome;
      typedef Aws::Utils::Outcome<GetAssessmentResult, MigrationHubStrategyRecommendationsError> GetAssessmentOutcome;
      typedef Aws::Utils::Outcome<GetImportFileTaskResult, MigrationHubStrategyRecommendationsError> GetImportFileTaskOutcome;
      typedef Aws::Utils::Outcome<GetLatestAssessmentIdResult, MigrationHubStrategyRecommendationsError> GetLatestAssessmentIdOutcome;
      typedef Aws::Utils::Outcome<GetPortfolioPreferencesResult, MigrationHubStrategyRecommendationsError> GetPortfolioPreferencesOutcome;
      typedef Aws::Utils::Outcome<GetPortfolioSummaryResult, MigrationHubStrategyRecommendationsError> GetPortfolioSummaryOutcome;
      typedef Aws::Utils::Outcome<GetRecommendationReportDetailsResult, MigrationHubStrategyRecommendationsError> GetRecommendationReportDetailsOutcome;
      typedef Aws::Utils::Outcome<GetServerDetailsResult, MigrationHubStrategyRecommendationsError> GetServerDetailsOutcome;
      typedef Aws::Utils::Outcome<GetServerStrategiesResult, MigrationHubStrategyRecommendationsError> GetServerStrategiesOutcome;
      typedef Aws::Utils::Outcome<ListApplicationComponentsResult, MigrationHubStrategyRecommendationsError> ListApplicationComponentsOutcome;
      typedef Aws::Utils::Outcome<ListCollectorsResult, MigrationHubStrategyRecommendationsError> ListCollectorsOutcome;
      typedef Aws::Utils::Outcome<ListImportFileTaskResult, MigrationHubStrategyRecommendationsError> ListImportFileTaskOutcome;
      typedef Aws::Utils::Outcome<ListServersResult, MigrationHubStrategyRecommendationsError> ListServersOutcome;
      typedef Aws::Utils::Outcome<PutPortfolioPreferencesResult, MigrationHubStrategyRecommendationsError> PutPortfolioPreferencesOutcome;
      typedef Aws::Utils::Outcome<StartAssessmentResult, MigrationHubStrategyRecommendationsError> StartAssessmentOutcome;
      typedef Aws::Utils::Outcome<StartImportFileTaskResult, MigrationHubStrategyRecommendationsError> StartImportFileTaskOutcome;
      typedef Aws::Utils::Outcome<StartRecommendationReportGenerationResult, MigrationHubStrategyRecommendationsError> StartRecommendationReportGenerationOutcome;
      typedef Aws::Utils::Outcome<StopAssessmentResult, MigrationHubStrategyRecommendationsError> StopAssessmentOutcome;
      typedef Aws::Utils::Outcome<UpdateApplicationComponentConfigResult, MigrationHubStrategyRecommendationsError> UpdateApplicationComponentConfigOutcome;
      typedef Aws::Utils::Outcome<UpdateServerConfigResult, MigrationHubStrategyRecommendationsError> UpdateServerConfigOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<GetApplicationComponentDetailsOutcome> GetApplicationComponentDetailsOutcomeCallable;
      typedef std::future<GetApplicationComponentStrategiesOutcome> GetApplicationComponentStrategiesOutcomeCallable;
      typedef std::future<GetAssessmentOutcome> GetAssessmentOutcomeCallable;
      typedef std::future<GetImportFileTaskOutcome> GetImportFileTaskOutcomeCallable;
      typedef std::future<GetLatestAssessmentIdOutcome> GetLatestAssessmentIdOutcomeCallable;
      typedef std::future<GetPortfolioPreferencesOutcome> GetPortfolioPreferencesOutcomeCallable;
      typedef std::future<GetPortfolioSummaryOutcome> GetPortfolioSummaryOutcomeCallable;
      typedef std::future<GetRecommendationReportDetailsOutcome> GetRecommendationReportDetailsOutcomeCallable;
      typedef std::future<GetServerDetailsOutcome> GetServerDetailsOutcomeCallable;
      typedef std::future<GetServerStrategiesOutcome> GetServerStrategiesOutcomeCallable;
      typedef std::future<ListApplicationComponentsOutcome> ListApplicationComponentsOutcomeCallable;
      typedef std::future<ListCollectorsOutcome> ListCollectorsOutcomeCallable;
      typedef std::future<ListImportFileTaskOutcome> ListImportFileTaskOutcomeCallable;
      typedef std::future<ListServersOutcome> ListServersOutcomeCallable;
      typedef std::future<PutPortfolioPreferencesOutcome> PutPortfolioPreferencesOutcomeCallable;
      typedef std::future<StartAssessmentOutcome> StartAssessmentOutcomeCallable;
      typedef std::future<StartImportFileTaskOutcome> StartImportFileTaskOutcomeCallable;
      typedef std::future<StartRecommendationReportGenerationOutcome> StartRecommendationReportGenerationOutcomeCallable;
      typedef std::future<StopAssessmentOutcome> StopAssessmentOutcomeCallable;
      typedef std::future<UpdateApplicationComponentConfigOutcome> UpdateApplicationComponentConfigOutcomeCallable;
      typedef std::future<UpdateServerConfigOutcome> UpdateServerConfigOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MigrationHubStrategyRecommendationsClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetApplicationComponentDetailsRequest&, const Model::GetApplicationComponentDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationComponentDetailsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetApplicationComponentStrategiesRequest&, const Model::GetApplicationComponentStrategiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetApplicationComponentStrategiesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetAssessmentRequest&, const Model::GetAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAssessmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetImportFileTaskRequest&, const Model::GetImportFileTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetImportFileTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetLatestAssessmentIdRequest&, const Model::GetLatestAssessmentIdOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetLatestAssessmentIdResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetPortfolioPreferencesRequest&, const Model::GetPortfolioPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortfolioPreferencesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetPortfolioSummaryRequest&, const Model::GetPortfolioSummaryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPortfolioSummaryResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetRecommendationReportDetailsRequest&, const Model::GetRecommendationReportDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetRecommendationReportDetailsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetServerDetailsRequest&, const Model::GetServerDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServerDetailsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::GetServerStrategiesRequest&, const Model::GetServerStrategiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetServerStrategiesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::ListApplicationComponentsRequest&, const Model::ListApplicationComponentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListApplicationComponentsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::ListCollectorsRequest&, const Model::ListCollectorsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListCollectorsResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::ListImportFileTaskRequest&, const Model::ListImportFileTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListImportFileTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::ListServersRequest&, const Model::ListServersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServersResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::PutPortfolioPreferencesRequest&, const Model::PutPortfolioPreferencesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutPortfolioPreferencesResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::StartAssessmentRequest&, const Model::StartAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartAssessmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::StartImportFileTaskRequest&, const Model::StartImportFileTaskOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartImportFileTaskResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::StartRecommendationReportGenerationRequest&, const Model::StartRecommendationReportGenerationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRecommendationReportGenerationResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::StopAssessmentRequest&, const Model::StopAssessmentOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopAssessmentResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::UpdateApplicationComponentConfigRequest&, const Model::UpdateApplicationComponentConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateApplicationComponentConfigResponseReceivedHandler;
    typedef std::function<void(const MigrationHubStrategyRecommendationsClient*, const Model::UpdateServerConfigRequest&, const Model::UpdateServerConfigOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServerConfigResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace MigrationHubStrategyRecommendations
} // namespace Aws
