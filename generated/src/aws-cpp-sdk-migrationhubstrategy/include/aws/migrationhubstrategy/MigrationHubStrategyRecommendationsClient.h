/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
  /**
   * <p><fullname>Migration Hub Strategy Recommendations</fullname> <p>This API
   * reference provides descriptions, syntax, and other details about each of the
   * actions and data types for Migration Hub Strategy Recommendations (Strategy
   * Recommendations). The topic for each action shows the API request parameters and
   * the response. Alternatively, you can use one of the AWS SDKs to access an API
   * that is tailored to the programming language or platform that you're using. For
   * more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
   * SDKs</a>.</p></p>
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubStrategyRecommendationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MigrationHubStrategyRecommendationsClientConfiguration ClientConfigurationType;
      typedef MigrationHubStrategyRecommendationsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration(),
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = nullptr,
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = nullptr,
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubStrategyRecommendationsClient();

        /**
         * <p> Retrieves details about an application component. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentDetailsOutcome GetApplicationComponentDetails(const Model::GetApplicationComponentDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationComponentDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationComponentDetailsRequestT = Model::GetApplicationComponentDetailsRequest>
        Model::GetApplicationComponentDetailsOutcomeCallable GetApplicationComponentDetailsCallable(const GetApplicationComponentDetailsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails, request);
        }

        /**
         * An Async wrapper for GetApplicationComponentDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationComponentDetailsRequestT = Model::GetApplicationComponentDetailsRequest>
        void GetApplicationComponentDetailsAsync(const GetApplicationComponentDetailsRequestT& request, const GetApplicationComponentDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentDetails, request, handler, context);
        }

        /**
         * <p> Retrieves a list of all the recommended strategies and tools for an
         * application component running on a server. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentStrategiesOutcome GetApplicationComponentStrategies(const Model::GetApplicationComponentStrategiesRequest& request) const;

        /**
         * A Callable wrapper for GetApplicationComponentStrategies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationComponentStrategiesRequestT = Model::GetApplicationComponentStrategiesRequest>
        Model::GetApplicationComponentStrategiesOutcomeCallable GetApplicationComponentStrategiesCallable(const GetApplicationComponentStrategiesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies, request);
        }

        /**
         * An Async wrapper for GetApplicationComponentStrategies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationComponentStrategiesRequestT = Model::GetApplicationComponentStrategiesRequest>
        void GetApplicationComponentStrategiesAsync(const GetApplicationComponentStrategiesRequestT& request, const GetApplicationComponentStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetApplicationComponentStrategies, request, handler, context);
        }

        /**
         * <p> Retrieves the status of an on-going assessment. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;

        /**
         * A Callable wrapper for GetAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAssessmentRequestT = Model::GetAssessmentRequest>
        Model::GetAssessmentOutcomeCallable GetAssessmentCallable(const GetAssessmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetAssessment, request);
        }

        /**
         * An Async wrapper for GetAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAssessmentRequestT = Model::GetAssessmentRequest>
        void GetAssessmentAsync(const GetAssessmentRequestT& request, const GetAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetAssessment, request, handler, context);
        }

        /**
         * <p> Retrieves the details about a specific import task. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportFileTaskOutcome GetImportFileTask(const Model::GetImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for GetImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetImportFileTaskRequestT = Model::GetImportFileTaskRequest>
        Model::GetImportFileTaskOutcomeCallable GetImportFileTaskCallable(const GetImportFileTaskRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetImportFileTask, request);
        }

        /**
         * An Async wrapper for GetImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetImportFileTaskRequestT = Model::GetImportFileTaskRequest>
        void GetImportFileTaskAsync(const GetImportFileTaskRequestT& request, const GetImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetImportFileTask, request, handler, context);
        }

        /**
         * <p>Retrieve the latest ID of a specific assessment task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetLatestAssessmentId">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLatestAssessmentIdOutcome GetLatestAssessmentId(const Model::GetLatestAssessmentIdRequest& request) const;

        /**
         * A Callable wrapper for GetLatestAssessmentId that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLatestAssessmentIdRequestT = Model::GetLatestAssessmentIdRequest>
        Model::GetLatestAssessmentIdOutcomeCallable GetLatestAssessmentIdCallable(const GetLatestAssessmentIdRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetLatestAssessmentId, request);
        }

        /**
         * An Async wrapper for GetLatestAssessmentId that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLatestAssessmentIdRequestT = Model::GetLatestAssessmentIdRequest>
        void GetLatestAssessmentIdAsync(const GetLatestAssessmentIdRequestT& request, const GetLatestAssessmentIdResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetLatestAssessmentId, request, handler, context);
        }

        /**
         * <p> Retrieves your migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioPreferencesOutcome GetPortfolioPreferences(const Model::GetPortfolioPreferencesRequest& request) const;

        /**
         * A Callable wrapper for GetPortfolioPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPortfolioPreferencesRequestT = Model::GetPortfolioPreferencesRequest>
        Model::GetPortfolioPreferencesOutcomeCallable GetPortfolioPreferencesCallable(const GetPortfolioPreferencesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences, request);
        }

        /**
         * An Async wrapper for GetPortfolioPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPortfolioPreferencesRequestT = Model::GetPortfolioPreferencesRequest>
        void GetPortfolioPreferencesAsync(const GetPortfolioPreferencesRequestT& request, const GetPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetPortfolioPreferences, request, handler, context);
        }

        /**
         * <p> Retrieves overall summary including the number of servers to rehost and the
         * overall number of anti-patterns. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioSummaryOutcome GetPortfolioSummary(const Model::GetPortfolioSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetPortfolioSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPortfolioSummaryRequestT = Model::GetPortfolioSummaryRequest>
        Model::GetPortfolioSummaryOutcomeCallable GetPortfolioSummaryCallable(const GetPortfolioSummaryRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetPortfolioSummary, request);
        }

        /**
         * An Async wrapper for GetPortfolioSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPortfolioSummaryRequestT = Model::GetPortfolioSummaryRequest>
        void GetPortfolioSummaryAsync(const GetPortfolioSummaryRequestT& request, const GetPortfolioSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetPortfolioSummary, request, handler, context);
        }

        /**
         * <p> Retrieves detailed information about the specified recommendation report.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetRecommendationReportDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationReportDetailsOutcome GetRecommendationReportDetails(const Model::GetRecommendationReportDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetRecommendationReportDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRecommendationReportDetailsRequestT = Model::GetRecommendationReportDetailsRequest>
        Model::GetRecommendationReportDetailsOutcomeCallable GetRecommendationReportDetailsCallable(const GetRecommendationReportDetailsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails, request);
        }

        /**
         * An Async wrapper for GetRecommendationReportDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRecommendationReportDetailsRequestT = Model::GetRecommendationReportDetailsRequest>
        void GetRecommendationReportDetailsAsync(const GetRecommendationReportDetailsRequestT& request, const GetRecommendationReportDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetRecommendationReportDetails, request, handler, context);
        }

        /**
         * <p> Retrieves detailed information about a specified server. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerDetailsOutcome GetServerDetails(const Model::GetServerDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetServerDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServerDetailsRequestT = Model::GetServerDetailsRequest>
        Model::GetServerDetailsOutcomeCallable GetServerDetailsCallable(const GetServerDetailsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetServerDetails, request);
        }

        /**
         * An Async wrapper for GetServerDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServerDetailsRequestT = Model::GetServerDetailsRequest>
        void GetServerDetailsAsync(const GetServerDetailsRequestT& request, const GetServerDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetServerDetails, request, handler, context);
        }

        /**
         * <p> Retrieves recommended strategies and tools for the specified server.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerStrategiesOutcome GetServerStrategies(const Model::GetServerStrategiesRequest& request) const;

        /**
         * A Callable wrapper for GetServerStrategies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServerStrategiesRequestT = Model::GetServerStrategiesRequest>
        Model::GetServerStrategiesOutcomeCallable GetServerStrategiesCallable(const GetServerStrategiesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::GetServerStrategies, request);
        }

        /**
         * An Async wrapper for GetServerStrategies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServerStrategiesRequestT = Model::GetServerStrategiesRequest>
        void GetServerStrategiesAsync(const GetServerStrategiesRequestT& request, const GetServerStrategiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::GetServerStrategies, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all the servers fetched from customer vCenter using
         * Strategy Recommendation Collector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListAnalyzableServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalyzableServersOutcome ListAnalyzableServers(const Model::ListAnalyzableServersRequest& request) const;

        /**
         * A Callable wrapper for ListAnalyzableServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalyzableServersRequestT = Model::ListAnalyzableServersRequest>
        Model::ListAnalyzableServersOutcomeCallable ListAnalyzableServersCallable(const ListAnalyzableServersRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListAnalyzableServers, request);
        }

        /**
         * An Async wrapper for ListAnalyzableServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalyzableServersRequestT = Model::ListAnalyzableServersRequest>
        void ListAnalyzableServersAsync(const ListAnalyzableServersRequestT& request, const ListAnalyzableServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListAnalyzableServers, request, handler, context);
        }

        /**
         * <p> Retrieves a list of all the application components (processes).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListApplicationComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationComponentsOutcome ListApplicationComponents(const Model::ListApplicationComponentsRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationComponents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationComponentsRequestT = Model::ListApplicationComponentsRequest>
        Model::ListApplicationComponentsOutcomeCallable ListApplicationComponentsCallable(const ListApplicationComponentsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListApplicationComponents, request);
        }

        /**
         * An Async wrapper for ListApplicationComponents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationComponentsRequestT = Model::ListApplicationComponentsRequest>
        void ListApplicationComponentsAsync(const ListApplicationComponentsRequestT& request, const ListApplicationComponentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListApplicationComponents, request, handler, context);
        }

        /**
         * <p> Retrieves a list of all the installed collectors. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListCollectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectorsOutcome ListCollectors(const Model::ListCollectorsRequest& request) const;

        /**
         * A Callable wrapper for ListCollectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCollectorsRequestT = Model::ListCollectorsRequest>
        Model::ListCollectorsOutcomeCallable ListCollectorsCallable(const ListCollectorsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListCollectors, request);
        }

        /**
         * An Async wrapper for ListCollectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCollectorsRequestT = Model::ListCollectorsRequest>
        void ListCollectorsAsync(const ListCollectorsRequestT& request, const ListCollectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListCollectors, request, handler, context);
        }

        /**
         * <p> Retrieves a list of all the imports performed. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportFileTaskOutcome ListImportFileTask(const Model::ListImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for ListImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListImportFileTaskRequestT = Model::ListImportFileTaskRequest>
        Model::ListImportFileTaskOutcomeCallable ListImportFileTaskCallable(const ListImportFileTaskRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListImportFileTask, request);
        }

        /**
         * An Async wrapper for ListImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListImportFileTaskRequestT = Model::ListImportFileTaskRequest>
        void ListImportFileTaskAsync(const ListImportFileTaskRequestT& request, const ListImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListImportFileTask, request, handler, context);
        }

        /**
         * <p> Returns a list of all the servers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServersOutcome ListServers(const Model::ListServersRequest& request) const;

        /**
         * A Callable wrapper for ListServers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServersRequestT = Model::ListServersRequest>
        Model::ListServersOutcomeCallable ListServersCallable(const ListServersRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::ListServers, request);
        }

        /**
         * An Async wrapper for ListServers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServersRequestT = Model::ListServersRequest>
        void ListServersAsync(const ListServersRequestT& request, const ListServersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::ListServers, request, handler, context);
        }

        /**
         * <p> Saves the specified migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/PutPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPortfolioPreferencesOutcome PutPortfolioPreferences(const Model::PutPortfolioPreferencesRequest& request) const;

        /**
         * A Callable wrapper for PutPortfolioPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutPortfolioPreferencesRequestT = Model::PutPortfolioPreferencesRequest>
        Model::PutPortfolioPreferencesOutcomeCallable PutPortfolioPreferencesCallable(const PutPortfolioPreferencesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences, request);
        }

        /**
         * An Async wrapper for PutPortfolioPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutPortfolioPreferencesRequestT = Model::PutPortfolioPreferencesRequest>
        void PutPortfolioPreferencesAsync(const PutPortfolioPreferencesRequestT& request, const PutPortfolioPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::PutPortfolioPreferences, request, handler, context);
        }

        /**
         * <p> Starts the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentOutcome StartAssessment(const Model::StartAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StartAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAssessmentRequestT = Model::StartAssessmentRequest>
        Model::StartAssessmentOutcomeCallable StartAssessmentCallable(const StartAssessmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartAssessment, request);
        }

        /**
         * An Async wrapper for StartAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAssessmentRequestT = Model::StartAssessmentRequest>
        void StartAssessmentAsync(const StartAssessmentRequestT& request, const StartAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartAssessment, request, handler, context);
        }

        /**
         * <p> Starts a file import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportFileTaskOutcome StartImportFileTask(const Model::StartImportFileTaskRequest& request) const;

        /**
         * A Callable wrapper for StartImportFileTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartImportFileTaskRequestT = Model::StartImportFileTaskRequest>
        Model::StartImportFileTaskOutcomeCallable StartImportFileTaskCallable(const StartImportFileTaskRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartImportFileTask, request);
        }

        /**
         * An Async wrapper for StartImportFileTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartImportFileTaskRequestT = Model::StartImportFileTaskRequest>
        void StartImportFileTaskAsync(const StartImportFileTaskRequestT& request, const StartImportFileTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartImportFileTask, request, handler, context);
        }

        /**
         * <p> Starts generating a recommendation report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartRecommendationReportGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommendationReportGenerationOutcome StartRecommendationReportGeneration(const Model::StartRecommendationReportGenerationRequest& request) const;

        /**
         * A Callable wrapper for StartRecommendationReportGeneration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRecommendationReportGenerationRequestT = Model::StartRecommendationReportGenerationRequest>
        Model::StartRecommendationReportGenerationOutcomeCallable StartRecommendationReportGenerationCallable(const StartRecommendationReportGenerationRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration, request);
        }

        /**
         * An Async wrapper for StartRecommendationReportGeneration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRecommendationReportGenerationRequestT = Model::StartRecommendationReportGenerationRequest>
        void StartRecommendationReportGenerationAsync(const StartRecommendationReportGenerationRequestT& request, const StartRecommendationReportGenerationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::StartRecommendationReportGeneration, request, handler, context);
        }

        /**
         * <p> Stops the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StopAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentOutcome StopAssessment(const Model::StopAssessmentRequest& request) const;

        /**
         * A Callable wrapper for StopAssessment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAssessmentRequestT = Model::StopAssessmentRequest>
        Model::StopAssessmentOutcomeCallable StopAssessmentCallable(const StopAssessmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::StopAssessment, request);
        }

        /**
         * An Async wrapper for StopAssessment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAssessmentRequestT = Model::StopAssessmentRequest>
        void StopAssessmentAsync(const StopAssessmentRequestT& request, const StopAssessmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::StopAssessment, request, handler, context);
        }

        /**
         * <p> Updates the configuration of an application component. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateApplicationComponentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationComponentConfigOutcome UpdateApplicationComponentConfig(const Model::UpdateApplicationComponentConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplicationComponentConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationComponentConfigRequestT = Model::UpdateApplicationComponentConfigRequest>
        Model::UpdateApplicationComponentConfigOutcomeCallable UpdateApplicationComponentConfigCallable(const UpdateApplicationComponentConfigRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig, request);
        }

        /**
         * An Async wrapper for UpdateApplicationComponentConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationComponentConfigRequestT = Model::UpdateApplicationComponentConfigRequest>
        void UpdateApplicationComponentConfigAsync(const UpdateApplicationComponentConfigRequestT& request, const UpdateApplicationComponentConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::UpdateApplicationComponentConfig, request, handler, context);
        }

        /**
         * <p> Updates the configuration of the specified server. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateServerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerConfigOutcome UpdateServerConfig(const Model::UpdateServerConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateServerConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServerConfigRequestT = Model::UpdateServerConfigRequest>
        Model::UpdateServerConfigOutcomeCallable UpdateServerConfigCallable(const UpdateServerConfigRequestT& request) const
        {
            return SubmitCallable(&MigrationHubStrategyRecommendationsClient::UpdateServerConfig, request);
        }

        /**
         * An Async wrapper for UpdateServerConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServerConfigRequestT = Model::UpdateServerConfigRequest>
        void UpdateServerConfigAsync(const UpdateServerConfigRequestT& request, const UpdateServerConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubStrategyRecommendationsClient::UpdateServerConfig, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubStrategyRecommendationsClient>;
      void init(const MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration);

      MigrationHubStrategyRecommendationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
