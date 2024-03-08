/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/xray/XRayServiceClientModel.h>

namespace Aws
{
namespace XRay
{
  /**
   * <p>Amazon Web Services X-Ray provides APIs for managing debug traces and
   * retrieving service maps and other data created by processing those traces.</p>
   */
  class AWS_XRAY_API XRayClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<XRayClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef XRayClientConfiguration ClientConfigurationType;
      typedef XRayEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration(),
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Auth::AWSCredentials& credentials,
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        XRayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   std::shared_ptr<XRayEndpointProviderBase> endpointProvider = nullptr,
                   const Aws::XRay::XRayClientConfiguration& clientConfiguration = Aws::XRay::XRayClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        XRayClient(const Aws::Auth::AWSCredentials& credentials,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        XRayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~XRayClient();

        /**
         * <p>Retrieves a list of traces specified by ID. Each trace is a collection of
         * segment documents that originates from a single request. Use
         * <code>GetTraceSummaries</code> to get a list of trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/BatchGetTraces">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetTracesOutcome BatchGetTraces(const Model::BatchGetTracesRequest& request) const;

        /**
         * A Callable wrapper for BatchGetTraces that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetTracesRequestT = Model::BatchGetTracesRequest>
        Model::BatchGetTracesOutcomeCallable BatchGetTracesCallable(const BatchGetTracesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::BatchGetTraces, request);
        }

        /**
         * An Async wrapper for BatchGetTraces that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetTracesRequestT = Model::BatchGetTracesRequest>
        void BatchGetTracesAsync(const BatchGetTracesRequestT& request, const BatchGetTracesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::BatchGetTraces, request, handler, context);
        }

        /**
         * <p>Creates a group resource with a name and a filter expression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        Model::CreateGroupOutcomeCallable CreateGroupCallable(const CreateGroupRequestT& request) const
        {
            return SubmitCallable(&XRayClient::CreateGroup, request);
        }

        /**
         * An Async wrapper for CreateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGroupRequestT = Model::CreateGroupRequest>
        void CreateGroupAsync(const CreateGroupRequestT& request, const CreateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::CreateGroup, request, handler, context);
        }

        /**
         * <p>Creates a rule to control sampling behavior for instrumented applications.
         * Services retrieve rules with <a
         * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingRules.html">GetSamplingRules</a>,
         * and evaluate each rule in ascending order of <i>priority</i> for each request.
         * If a rule matches, the service records a trace, borrowing it from the reservoir
         * size. After 10 seconds, the service reports back to X-Ray with <a
         * href="https://docs.aws.amazon.com/xray/latest/api/API_GetSamplingTargets.html">GetSamplingTargets</a>
         * to get updated versions of each in-use rule. The updated rule contains a trace
         * quota that the service can use instead of borrowing from the
         * reservoir.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/CreateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSamplingRuleOutcome CreateSamplingRule(const Model::CreateSamplingRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateSamplingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSamplingRuleRequestT = Model::CreateSamplingRuleRequest>
        Model::CreateSamplingRuleOutcomeCallable CreateSamplingRuleCallable(const CreateSamplingRuleRequestT& request) const
        {
            return SubmitCallable(&XRayClient::CreateSamplingRule, request);
        }

        /**
         * An Async wrapper for CreateSamplingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSamplingRuleRequestT = Model::CreateSamplingRuleRequest>
        void CreateSamplingRuleAsync(const CreateSamplingRuleRequestT& request, const CreateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::CreateSamplingRule, request, handler, context);
        }

        /**
         * <p>Deletes a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        Model::DeleteGroupOutcomeCallable DeleteGroupCallable(const DeleteGroupRequestT& request) const
        {
            return SubmitCallable(&XRayClient::DeleteGroup, request);
        }

        /**
         * An Async wrapper for DeleteGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGroupRequestT = Model::DeleteGroupRequest>
        void DeleteGroupAsync(const DeleteGroupRequestT& request, const DeleteGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::DeleteGroup, request, handler, context);
        }

        /**
         * <p>Deletes a resource policy from the target Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&XRayClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/DeleteSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSamplingRuleOutcome DeleteSamplingRule(const Model::DeleteSamplingRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteSamplingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSamplingRuleRequestT = Model::DeleteSamplingRuleRequest>
        Model::DeleteSamplingRuleOutcomeCallable DeleteSamplingRuleCallable(const DeleteSamplingRuleRequestT& request) const
        {
            return SubmitCallable(&XRayClient::DeleteSamplingRule, request);
        }

        /**
         * An Async wrapper for DeleteSamplingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSamplingRuleRequestT = Model::DeleteSamplingRuleRequest>
        void DeleteSamplingRuleAsync(const DeleteSamplingRuleRequestT& request, const DeleteSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::DeleteSamplingRule, request, handler, context);
        }

        /**
         * <p>Retrieves the current encryption configuration for X-Ray data.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEncryptionConfigOutcome GetEncryptionConfig(const Model::GetEncryptionConfigRequest& request) const;

        /**
         * A Callable wrapper for GetEncryptionConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEncryptionConfigRequestT = Model::GetEncryptionConfigRequest>
        Model::GetEncryptionConfigOutcomeCallable GetEncryptionConfigCallable(const GetEncryptionConfigRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetEncryptionConfig, request);
        }

        /**
         * An Async wrapper for GetEncryptionConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEncryptionConfigRequestT = Model::GetEncryptionConfigRequest>
        void GetEncryptionConfigAsync(const GetEncryptionConfigRequestT& request, const GetEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetEncryptionConfig, request, handler, context);
        }

        /**
         * <p>Retrieves group resource details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroup">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupOutcome GetGroup(const Model::GetGroupRequest& request) const;

        /**
         * A Callable wrapper for GetGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        Model::GetGroupOutcomeCallable GetGroupCallable(const GetGroupRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetGroup, request);
        }

        /**
         * An Async wrapper for GetGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupRequestT = Model::GetGroupRequest>
        void GetGroupAsync(const GetGroupRequestT& request, const GetGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetGroup, request, handler, context);
        }

        /**
         * <p>Retrieves all active group details.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetGroups">AWS API
         * Reference</a></p>
         */
        virtual Model::GetGroupsOutcome GetGroups(const Model::GetGroupsRequest& request) const;

        /**
         * A Callable wrapper for GetGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetGroupsRequestT = Model::GetGroupsRequest>
        Model::GetGroupsOutcomeCallable GetGroupsCallable(const GetGroupsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetGroups, request);
        }

        /**
         * An Async wrapper for GetGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGroupsRequestT = Model::GetGroupsRequest>
        void GetGroupsAsync(const GetGroupsRequestT& request, const GetGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetGroups, request, handler, context);
        }

        /**
         * <p>Retrieves the summary information of an insight. This includes impact to
         * clients and root cause services, the top anomalous services, the category, the
         * state of the insight, and the start and end time of the insight.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsight">AWS API
         * Reference</a></p>
         */
        virtual Model::GetInsightOutcome GetInsight(const Model::GetInsightRequest& request) const;

        /**
         * A Callable wrapper for GetInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightRequestT = Model::GetInsightRequest>
        Model::GetInsightOutcomeCallable GetInsightCallable(const GetInsightRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetInsight, request);
        }

        /**
         * An Async wrapper for GetInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightRequestT = Model::GetInsightRequest>
        void GetInsightAsync(const GetInsightRequestT& request, const GetInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetInsight, request, handler, context);
        }

        /**
         * <p>X-Ray reevaluates insights periodically until they're resolved, and records
         * each intermediate state as an event. You can review an insight's events in the
         * Impact Timeline on the Inspect page in the X-Ray console.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightEventsOutcome GetInsightEvents(const Model::GetInsightEventsRequest& request) const;

        /**
         * A Callable wrapper for GetInsightEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightEventsRequestT = Model::GetInsightEventsRequest>
        Model::GetInsightEventsOutcomeCallable GetInsightEventsCallable(const GetInsightEventsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetInsightEvents, request);
        }

        /**
         * An Async wrapper for GetInsightEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightEventsRequestT = Model::GetInsightEventsRequest>
        void GetInsightEventsAsync(const GetInsightEventsRequestT& request, const GetInsightEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetInsightEvents, request, handler, context);
        }

        /**
         * <p>Retrieves a service graph structure filtered by the specified insight. The
         * service graph is limited to only structural information. For a complete service
         * graph, use this API with the GetServiceGraph API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightImpactGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightImpactGraphOutcome GetInsightImpactGraph(const Model::GetInsightImpactGraphRequest& request) const;

        /**
         * A Callable wrapper for GetInsightImpactGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightImpactGraphRequestT = Model::GetInsightImpactGraphRequest>
        Model::GetInsightImpactGraphOutcomeCallable GetInsightImpactGraphCallable(const GetInsightImpactGraphRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetInsightImpactGraph, request);
        }

        /**
         * An Async wrapper for GetInsightImpactGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightImpactGraphRequestT = Model::GetInsightImpactGraphRequest>
        void GetInsightImpactGraphAsync(const GetInsightImpactGraphRequestT& request, const GetInsightImpactGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetInsightImpactGraph, request, handler, context);
        }

        /**
         * <p>Retrieves the summaries of all insights in the specified group matching the
         * provided filter values.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetInsightSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInsightSummariesOutcome GetInsightSummaries(const Model::GetInsightSummariesRequest& request) const;

        /**
         * A Callable wrapper for GetInsightSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInsightSummariesRequestT = Model::GetInsightSummariesRequest>
        Model::GetInsightSummariesOutcomeCallable GetInsightSummariesCallable(const GetInsightSummariesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetInsightSummaries, request);
        }

        /**
         * An Async wrapper for GetInsightSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInsightSummariesRequestT = Model::GetInsightSummariesRequest>
        void GetInsightSummariesAsync(const GetInsightSummariesRequestT& request, const GetInsightSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetInsightSummaries, request, handler, context);
        }

        /**
         * <p>Retrieves all sampling rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingRules">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingRulesOutcome GetSamplingRules(const Model::GetSamplingRulesRequest& request) const;

        /**
         * A Callable wrapper for GetSamplingRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSamplingRulesRequestT = Model::GetSamplingRulesRequest>
        Model::GetSamplingRulesOutcomeCallable GetSamplingRulesCallable(const GetSamplingRulesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetSamplingRules, request);
        }

        /**
         * An Async wrapper for GetSamplingRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSamplingRulesRequestT = Model::GetSamplingRulesRequest>
        void GetSamplingRulesAsync(const GetSamplingRulesRequestT& request, const GetSamplingRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetSamplingRules, request, handler, context);
        }

        /**
         * <p>Retrieves information about recent sampling results for all sampling
         * rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingStatisticSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingStatisticSummariesOutcome GetSamplingStatisticSummaries(const Model::GetSamplingStatisticSummariesRequest& request) const;

        /**
         * A Callable wrapper for GetSamplingStatisticSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSamplingStatisticSummariesRequestT = Model::GetSamplingStatisticSummariesRequest>
        Model::GetSamplingStatisticSummariesOutcomeCallable GetSamplingStatisticSummariesCallable(const GetSamplingStatisticSummariesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetSamplingStatisticSummaries, request);
        }

        /**
         * An Async wrapper for GetSamplingStatisticSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSamplingStatisticSummariesRequestT = Model::GetSamplingStatisticSummariesRequest>
        void GetSamplingStatisticSummariesAsync(const GetSamplingStatisticSummariesRequestT& request, const GetSamplingStatisticSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetSamplingStatisticSummaries, request, handler, context);
        }

        /**
         * <p>Requests a sampling quota for rules that the service is using to sample
         * requests. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetSamplingTargets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSamplingTargetsOutcome GetSamplingTargets(const Model::GetSamplingTargetsRequest& request) const;

        /**
         * A Callable wrapper for GetSamplingTargets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSamplingTargetsRequestT = Model::GetSamplingTargetsRequest>
        Model::GetSamplingTargetsOutcomeCallable GetSamplingTargetsCallable(const GetSamplingTargetsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetSamplingTargets, request);
        }

        /**
         * An Async wrapper for GetSamplingTargets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSamplingTargetsRequestT = Model::GetSamplingTargetsRequest>
        void GetSamplingTargetsAsync(const GetSamplingTargetsRequestT& request, const GetSamplingTargetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetSamplingTargets, request, handler, context);
        }

        /**
         * <p>Retrieves a document that describes services that process incoming requests,
         * and downstream services that they call as a result. Root services process
         * incoming requests and make calls to downstream services. Root services are
         * applications that use the <a
         * href="https://docs.aws.amazon.com/xray/index.html">Amazon Web Services X-Ray
         * SDK</a>. Downstream services can be other applications, Amazon Web Services
         * resources, HTTP web APIs, or SQL databases.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetServiceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceGraphOutcome GetServiceGraph(const Model::GetServiceGraphRequest& request) const;

        /**
         * A Callable wrapper for GetServiceGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceGraphRequestT = Model::GetServiceGraphRequest>
        Model::GetServiceGraphOutcomeCallable GetServiceGraphCallable(const GetServiceGraphRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetServiceGraph, request);
        }

        /**
         * An Async wrapper for GetServiceGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceGraphRequestT = Model::GetServiceGraphRequest>
        void GetServiceGraphAsync(const GetServiceGraphRequestT& request, const GetServiceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetServiceGraph, request, handler, context);
        }

        /**
         * <p>Get an aggregation of service statistics defined by a specific time
         * range.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTimeSeriesServiceStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimeSeriesServiceStatisticsOutcome GetTimeSeriesServiceStatistics(const Model::GetTimeSeriesServiceStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetTimeSeriesServiceStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTimeSeriesServiceStatisticsRequestT = Model::GetTimeSeriesServiceStatisticsRequest>
        Model::GetTimeSeriesServiceStatisticsOutcomeCallable GetTimeSeriesServiceStatisticsCallable(const GetTimeSeriesServiceStatisticsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetTimeSeriesServiceStatistics, request);
        }

        /**
         * An Async wrapper for GetTimeSeriesServiceStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTimeSeriesServiceStatisticsRequestT = Model::GetTimeSeriesServiceStatisticsRequest>
        void GetTimeSeriesServiceStatisticsAsync(const GetTimeSeriesServiceStatisticsRequestT& request, const GetTimeSeriesServiceStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetTimeSeriesServiceStatistics, request, handler, context);
        }

        /**
         * <p>Retrieves a service graph for one or more specific trace IDs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceGraph">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceGraphOutcome GetTraceGraph(const Model::GetTraceGraphRequest& request) const;

        /**
         * A Callable wrapper for GetTraceGraph that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTraceGraphRequestT = Model::GetTraceGraphRequest>
        Model::GetTraceGraphOutcomeCallable GetTraceGraphCallable(const GetTraceGraphRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetTraceGraph, request);
        }

        /**
         * An Async wrapper for GetTraceGraph that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTraceGraphRequestT = Model::GetTraceGraphRequest>
        void GetTraceGraphAsync(const GetTraceGraphRequestT& request, const GetTraceGraphResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetTraceGraph, request, handler, context);
        }

        /**
         * <p>Retrieves IDs and annotations for traces available for a specified time frame
         * using an optional filter. To get the full traces, pass the trace IDs to
         * <code>BatchGetTraces</code>.</p> <p>A filter expression can target traced
         * requests that hit specific service nodes or edges, have errors, or come from a
         * known user. For example, the following filter expression targets traces that
         * pass through <code>api.example.com</code>:</p> <p>
         * <code>service("api.example.com")</code> </p> <p>This filter expression finds
         * traces that have an annotation named <code>account</code> with the value
         * <code>12345</code>:</p> <p> <code>annotation.account = "12345"</code> </p>
         * <p>For a full list of indexed fields and keywords that you can use in filter
         * expressions, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-console-filters.html">Using
         * Filter Expressions</a> in the <i>Amazon Web Services X-Ray Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/GetTraceSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTraceSummariesOutcome GetTraceSummaries(const Model::GetTraceSummariesRequest& request) const;

        /**
         * A Callable wrapper for GetTraceSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTraceSummariesRequestT = Model::GetTraceSummariesRequest>
        Model::GetTraceSummariesOutcomeCallable GetTraceSummariesCallable(const GetTraceSummariesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::GetTraceSummaries, request);
        }

        /**
         * An Async wrapper for GetTraceSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTraceSummariesRequestT = Model::GetTraceSummariesRequest>
        void GetTraceSummariesAsync(const GetTraceSummariesRequestT& request, const GetTraceSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::GetTraceSummaries, request, handler, context);
        }

        /**
         * <p>Returns the list of resource policies in the target Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ListResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcePoliciesOutcome ListResourcePolicies(const Model::ListResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
        Model::ListResourcePoliciesOutcomeCallable ListResourcePoliciesCallable(const ListResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&XRayClient::ListResourcePolicies, request);
        }

        /**
         * An Async wrapper for ListResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcePoliciesRequestT = Model::ListResourcePoliciesRequest>
        void ListResourcePoliciesAsync(const ListResourcePoliciesRequestT& request, const ListResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::ListResourcePolicies, request, handler, context);
        }

        /**
         * <p>Returns a list of tags that are applied to the specified Amazon Web Services
         * X-Ray group or sampling rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&XRayClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Updates the encryption configuration for X-Ray data.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEncryptionConfigOutcome PutEncryptionConfig(const Model::PutEncryptionConfigRequest& request) const;

        /**
         * A Callable wrapper for PutEncryptionConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEncryptionConfigRequestT = Model::PutEncryptionConfigRequest>
        Model::PutEncryptionConfigOutcomeCallable PutEncryptionConfigCallable(const PutEncryptionConfigRequestT& request) const
        {
            return SubmitCallable(&XRayClient::PutEncryptionConfig, request);
        }

        /**
         * An Async wrapper for PutEncryptionConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEncryptionConfigRequestT = Model::PutEncryptionConfigRequest>
        void PutEncryptionConfigAsync(const PutEncryptionConfigRequestT& request, const PutEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::PutEncryptionConfig, request, handler, context);
        }

        /**
         * <p> Sets the resource policy to grant one or more Amazon Web Services services
         * and accounts permissions to access X-Ray. Each resource policy will be
         * associated with a specific Amazon Web Services account. Each Amazon Web Services
         * account can have a maximum of 5 resource policies, and each policy name must be
         * unique within that account. The maximum size of each resource policy is 5KB.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&XRayClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Used by the Amazon Web Services X-Ray daemon to upload
         * telemetry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTelemetryRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTelemetryRecordsOutcome PutTelemetryRecords(const Model::PutTelemetryRecordsRequest& request) const;

        /**
         * A Callable wrapper for PutTelemetryRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTelemetryRecordsRequestT = Model::PutTelemetryRecordsRequest>
        Model::PutTelemetryRecordsOutcomeCallable PutTelemetryRecordsCallable(const PutTelemetryRecordsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::PutTelemetryRecords, request);
        }

        /**
         * An Async wrapper for PutTelemetryRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTelemetryRecordsRequestT = Model::PutTelemetryRecordsRequest>
        void PutTelemetryRecordsAsync(const PutTelemetryRecordsRequestT& request, const PutTelemetryRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::PutTelemetryRecords, request, handler, context);
        }

        /**
         * <p>Uploads segment documents to Amazon Web Services X-Ray. The <a
         * href="https://docs.aws.amazon.com/xray/index.html">X-Ray SDK</a> generates
         * segment documents and sends them to the X-Ray daemon, which uploads them in
         * batches. A segment document can be a completed segment, an in-progress segment,
         * or an array of subsegments.</p> <p>Segments must include the following fields.
         * For the full segment document schema, see <a
         * href="https://docs.aws.amazon.com/xray/latest/devguide/xray-api-segmentdocuments.html">Amazon
         * Web Services X-Ray Segment Documents</a> in the <i>Amazon Web Services X-Ray
         * Developer Guide</i>.</p> <p class="title"> <b>Required segment document
         * fields</b> </p> <ul> <li> <p> <code>name</code> - The name of the service that
         * handled the request.</p> </li> <li> <p> <code>id</code> - A 64-bit identifier
         * for the segment, unique among segments in the same trace, in 16 hexadecimal
         * digits.</p> </li> <li> <p> <code>trace_id</code> - A unique identifier that
         * connects all segments and subsegments originating from a single client
         * request.</p> </li> <li> <p> <code>start_time</code> - Time the segment or
         * subsegment was created, in floating point seconds in epoch time, accurate to
         * milliseconds. For example, <code>1480615200.010</code> or
         * <code>1.480615200010E9</code>.</p> </li> <li> <p> <code>end_time</code> - Time
         * the segment or subsegment was closed. For example, <code>1480615200.090</code>
         * or <code>1.480615200090E9</code>. Specify either an <code>end_time</code> or
         * <code>in_progress</code>.</p> </li> <li> <p> <code>in_progress</code> - Set to
         * <code>true</code> instead of specifying an <code>end_time</code> to record that
         * a segment has been started, but is not complete. Send an in-progress segment
         * when your application receives a request that will take a long time to serve, to
         * trace that the request was received. When the response is sent, send the
         * complete segment to overwrite the in-progress segment.</p> </li> </ul> <p>A
         * <code>trace_id</code> consists of three numbers separated by hyphens. For
         * example, 1-58406520-a006649127e371903a2de979. This includes:</p> <p
         * class="title"> <b>Trace ID Format</b> </p> <ul> <li> <p>The version number, for
         * instance, <code>1</code>.</p> </li> <li> <p>The time of the original request, in
         * Unix epoch time, in 8 hexadecimal digits. For example, 10:00AM December 2nd,
         * 2016 PST in epoch time is <code>1480615200</code> seconds, or
         * <code>58406520</code> in hexadecimal.</p> </li> <li> <p>A 96-bit identifier for
         * the trace, globally unique, in 24 hexadecimal digits.</p> </li> </ul><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/PutTraceSegments">AWS
         * API Reference</a></p>
         */
        virtual Model::PutTraceSegmentsOutcome PutTraceSegments(const Model::PutTraceSegmentsRequest& request) const;

        /**
         * A Callable wrapper for PutTraceSegments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutTraceSegmentsRequestT = Model::PutTraceSegmentsRequest>
        Model::PutTraceSegmentsOutcomeCallable PutTraceSegmentsCallable(const PutTraceSegmentsRequestT& request) const
        {
            return SubmitCallable(&XRayClient::PutTraceSegments, request);
        }

        /**
         * An Async wrapper for PutTraceSegments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutTraceSegmentsRequestT = Model::PutTraceSegmentsRequest>
        void PutTraceSegmentsAsync(const PutTraceSegmentsRequestT& request, const PutTraceSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::PutTraceSegments, request, handler, context);
        }

        /**
         * <p>Applies tags to an existing Amazon Web Services X-Ray group or sampling
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&XRayClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from an Amazon Web Services X-Ray group or sampling rule. You
         * cannot edit or delete system tags (those with an <code>aws:</code>
         * prefix).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&XRayClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a group resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGroupOutcome UpdateGroup(const Model::UpdateGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        Model::UpdateGroupOutcomeCallable UpdateGroupCallable(const UpdateGroupRequestT& request) const
        {
            return SubmitCallable(&XRayClient::UpdateGroup, request);
        }

        /**
         * An Async wrapper for UpdateGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGroupRequestT = Model::UpdateGroupRequest>
        void UpdateGroupAsync(const UpdateGroupRequestT& request, const UpdateGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::UpdateGroup, request, handler, context);
        }

        /**
         * <p>Modifies a sampling rule's configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/UpdateSamplingRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSamplingRuleOutcome UpdateSamplingRule(const Model::UpdateSamplingRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateSamplingRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSamplingRuleRequestT = Model::UpdateSamplingRuleRequest>
        Model::UpdateSamplingRuleOutcomeCallable UpdateSamplingRuleCallable(const UpdateSamplingRuleRequestT& request) const
        {
            return SubmitCallable(&XRayClient::UpdateSamplingRule, request);
        }

        /**
         * An Async wrapper for UpdateSamplingRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSamplingRuleRequestT = Model::UpdateSamplingRuleRequest>
        void UpdateSamplingRuleAsync(const UpdateSamplingRuleRequestT& request, const UpdateSamplingRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&XRayClient::UpdateSamplingRule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<XRayEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<XRayClient>;
      void init(const XRayClientConfiguration& clientConfiguration);

      XRayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<XRayEndpointProviderBase> m_endpointProvider;
  };

} // namespace XRay
} // namespace Aws
