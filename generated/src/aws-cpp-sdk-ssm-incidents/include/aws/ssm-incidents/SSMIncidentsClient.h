/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-incidents/SSMIncidentsServiceClientModel.h>

namespace Aws
{
namespace SSMIncidents
{
  /**
   * <p>Systems Manager Incident Manager is an incident management console designed
   * to help users mitigate and recover from incidents affecting their Amazon Web
   * Services-hosted applications. An incident is any unplanned interruption or
   * reduction in quality of services. </p> <p>Incident Manager increases incident
   * resolution by notifying responders of impact, highlighting relevant
   * troubleshooting data, and providing collaboration tools to get services back up
   * and running. To achieve the primary goal of reducing the time-to-resolution of
   * critical incidents, Incident Manager automates response plans and enables
   * responder team escalation. </p>
   */
  class AWS_SSMINCIDENTS_API SSMIncidentsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMIncidentsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SSMIncidentsClientConfiguration ClientConfigurationType;
      typedef SSMIncidentsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration(),
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMIncidentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<SSMIncidentsEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::SSMIncidents::SSMIncidentsClientConfiguration& clientConfiguration = Aws::SSMIncidents::SSMIncidentsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMIncidentsClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMIncidentsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMIncidentsClient();

        /**
         * <p>Retrieves details about all specified findings for an incident, including
         * descriptive details about each finding. A finding represents a recent
         * application environment change made by an CodeDeploy deployment or an
         * CloudFormation stack creation or update that can be investigated as a potential
         * cause of the incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/BatchGetIncidentFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetIncidentFindingsOutcome BatchGetIncidentFindings(const Model::BatchGetIncidentFindingsRequest& request) const;

        /**
         * A Callable wrapper for BatchGetIncidentFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetIncidentFindingsRequestT = Model::BatchGetIncidentFindingsRequest>
        Model::BatchGetIncidentFindingsOutcomeCallable BatchGetIncidentFindingsCallable(const BatchGetIncidentFindingsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::BatchGetIncidentFindings, request);
        }

        /**
         * An Async wrapper for BatchGetIncidentFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetIncidentFindingsRequestT = Model::BatchGetIncidentFindingsRequest>
        void BatchGetIncidentFindingsAsync(const BatchGetIncidentFindingsRequestT& request, const BatchGetIncidentFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::BatchGetIncidentFindings, request, handler, context);
        }

        /**
         * <p>A replication set replicates and encrypts your data to the provided Regions
         * with the provided KMS key. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReplicationSetOutcome CreateReplicationSet(const Model::CreateReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateReplicationSetRequestT = Model::CreateReplicationSetRequest>
        Model::CreateReplicationSetOutcomeCallable CreateReplicationSetCallable(const CreateReplicationSetRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::CreateReplicationSet, request);
        }

        /**
         * An Async wrapper for CreateReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateReplicationSetRequestT = Model::CreateReplicationSetRequest>
        void CreateReplicationSetAsync(const CreateReplicationSetRequestT& request, const CreateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::CreateReplicationSet, request, handler, context);
        }

        /**
         * <p>Creates a response plan that automates the initial response to incidents. A
         * response plan engages contacts, starts chat channel collaboration, and initiates
         * runbooks at the beginning of an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResponsePlanOutcome CreateResponsePlan(const Model::CreateResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for CreateResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResponsePlanRequestT = Model::CreateResponsePlanRequest>
        Model::CreateResponsePlanOutcomeCallable CreateResponsePlanCallable(const CreateResponsePlanRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::CreateResponsePlan, request);
        }

        /**
         * An Async wrapper for CreateResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResponsePlanRequestT = Model::CreateResponsePlanRequest>
        void CreateResponsePlanAsync(const CreateResponsePlanRequestT& request, const CreateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::CreateResponsePlan, request, handler, context);
        }

        /**
         * <p>Creates a custom timeline event on the incident details page of an incident
         * record. Incident Manager automatically creates timeline events that mark key
         * moments during an incident. You can create custom timeline events to mark
         * important events that Incident Manager can detect automatically.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/CreateTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTimelineEventOutcome CreateTimelineEvent(const Model::CreateTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for CreateTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTimelineEventRequestT = Model::CreateTimelineEventRequest>
        Model::CreateTimelineEventOutcomeCallable CreateTimelineEventCallable(const CreateTimelineEventRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::CreateTimelineEvent, request);
        }

        /**
         * An Async wrapper for CreateTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTimelineEventRequestT = Model::CreateTimelineEventRequest>
        void CreateTimelineEventAsync(const CreateTimelineEventRequestT& request, const CreateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::CreateTimelineEvent, request, handler, context);
        }

        /**
         * <p>Delete an incident record from Incident Manager. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIncidentRecordOutcome DeleteIncidentRecord(const Model::DeleteIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for DeleteIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIncidentRecordRequestT = Model::DeleteIncidentRecordRequest>
        Model::DeleteIncidentRecordOutcomeCallable DeleteIncidentRecordCallable(const DeleteIncidentRecordRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::DeleteIncidentRecord, request);
        }

        /**
         * An Async wrapper for DeleteIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIncidentRecordRequestT = Model::DeleteIncidentRecordRequest>
        void DeleteIncidentRecordAsync(const DeleteIncidentRecordRequestT& request, const DeleteIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::DeleteIncidentRecord, request, handler, context);
        }

        /**
         * <p>Deletes all Regions in your replication set. Deleting the replication set
         * deletes all Incident Manager data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReplicationSetOutcome DeleteReplicationSet(const Model::DeleteReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReplicationSetRequestT = Model::DeleteReplicationSetRequest>
        Model::DeleteReplicationSetOutcomeCallable DeleteReplicationSetCallable(const DeleteReplicationSetRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::DeleteReplicationSet, request);
        }

        /**
         * An Async wrapper for DeleteReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReplicationSetRequestT = Model::DeleteReplicationSetRequest>
        void DeleteReplicationSetAsync(const DeleteReplicationSetRequestT& request, const DeleteReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::DeleteReplicationSet, request, handler, context);
        }

        /**
         * <p>Deletes the resource policy that Resource Access Manager uses to share your
         * Incident Manager resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified response plan. Deleting a response plan stops all
         * linked CloudWatch alarms and EventBridge events from creating an incident with
         * this response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResponsePlanOutcome DeleteResponsePlan(const Model::DeleteResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResponsePlanRequestT = Model::DeleteResponsePlanRequest>
        Model::DeleteResponsePlanOutcomeCallable DeleteResponsePlanCallable(const DeleteResponsePlanRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::DeleteResponsePlan, request);
        }

        /**
         * An Async wrapper for DeleteResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResponsePlanRequestT = Model::DeleteResponsePlanRequest>
        void DeleteResponsePlanAsync(const DeleteResponsePlanRequestT& request, const DeleteResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::DeleteResponsePlan, request, handler, context);
        }

        /**
         * <p>Deletes a timeline event from an incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/DeleteTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTimelineEventOutcome DeleteTimelineEvent(const Model::DeleteTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for DeleteTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTimelineEventRequestT = Model::DeleteTimelineEventRequest>
        Model::DeleteTimelineEventOutcomeCallable DeleteTimelineEventCallable(const DeleteTimelineEventRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::DeleteTimelineEvent, request);
        }

        /**
         * An Async wrapper for DeleteTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTimelineEventRequestT = Model::DeleteTimelineEventRequest>
        void DeleteTimelineEventAsync(const DeleteTimelineEventRequestT& request, const DeleteTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::DeleteTimelineEvent, request, handler, context);
        }

        /**
         * <p>Returns the details for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIncidentRecordOutcome GetIncidentRecord(const Model::GetIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for GetIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIncidentRecordRequestT = Model::GetIncidentRecordRequest>
        Model::GetIncidentRecordOutcomeCallable GetIncidentRecordCallable(const GetIncidentRecordRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::GetIncidentRecord, request);
        }

        /**
         * An Async wrapper for GetIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIncidentRecordRequestT = Model::GetIncidentRecordRequest>
        void GetIncidentRecordAsync(const GetIncidentRecordRequestT& request, const GetIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::GetIncidentRecord, request, handler, context);
        }

        /**
         * <p>Retrieve your Incident Manager replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReplicationSetOutcome GetReplicationSet(const Model::GetReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for GetReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReplicationSetRequestT = Model::GetReplicationSetRequest>
        Model::GetReplicationSetOutcomeCallable GetReplicationSetCallable(const GetReplicationSetRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::GetReplicationSet, request);
        }

        /**
         * An Async wrapper for GetReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReplicationSetRequestT = Model::GetReplicationSetRequest>
        void GetReplicationSetAsync(const GetReplicationSetRequestT& request, const GetReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::GetReplicationSet, request, handler, context);
        }

        /**
         * <p>Retrieves the resource policies attached to the specified response
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResourcePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePoliciesOutcome GetResourcePolicies(const Model::GetResourcePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        Model::GetResourcePoliciesOutcomeCallable GetResourcePoliciesCallable(const GetResourcePoliciesRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::GetResourcePolicies, request);
        }

        /**
         * An Async wrapper for GetResourcePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePoliciesRequestT = Model::GetResourcePoliciesRequest>
        void GetResourcePoliciesAsync(const GetResourcePoliciesRequestT& request, const GetResourcePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::GetResourcePolicies, request, handler, context);
        }

        /**
         * <p>Retrieves the details of the specified response plan.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResponsePlanOutcome GetResponsePlan(const Model::GetResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for GetResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResponsePlanRequestT = Model::GetResponsePlanRequest>
        Model::GetResponsePlanOutcomeCallable GetResponsePlanCallable(const GetResponsePlanRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::GetResponsePlan, request);
        }

        /**
         * An Async wrapper for GetResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResponsePlanRequestT = Model::GetResponsePlanRequest>
        void GetResponsePlanAsync(const GetResponsePlanRequestT& request, const GetResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::GetResponsePlan, request, handler, context);
        }

        /**
         * <p>Retrieves a timeline event based on its ID and incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/GetTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTimelineEventOutcome GetTimelineEvent(const Model::GetTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for GetTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTimelineEventRequestT = Model::GetTimelineEventRequest>
        Model::GetTimelineEventOutcomeCallable GetTimelineEventCallable(const GetTimelineEventRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::GetTimelineEvent, request);
        }

        /**
         * An Async wrapper for GetTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTimelineEventRequestT = Model::GetTimelineEventRequest>
        void GetTimelineEventAsync(const GetTimelineEventRequestT& request, const GetTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::GetTimelineEvent, request, handler, context);
        }

        /**
         * <p>Retrieves a list of the IDs of findings, plus their last modified times, that
         * have been identified for a specified incident. A finding represents a recent
         * application environment change made by an CloudFormation stack creation or
         * update or an CodeDeploy deployment that can be investigated as a potential cause
         * of the incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListIncidentFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIncidentFindingsOutcome ListIncidentFindings(const Model::ListIncidentFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListIncidentFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIncidentFindingsRequestT = Model::ListIncidentFindingsRequest>
        Model::ListIncidentFindingsOutcomeCallable ListIncidentFindingsCallable(const ListIncidentFindingsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListIncidentFindings, request);
        }

        /**
         * An Async wrapper for ListIncidentFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIncidentFindingsRequestT = Model::ListIncidentFindingsRequest>
        void ListIncidentFindingsAsync(const ListIncidentFindingsRequestT& request, const ListIncidentFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListIncidentFindings, request, handler, context);
        }

        /**
         * <p>Lists all incident records in your account. Use this command to retrieve the
         * Amazon Resource Name (ARN) of the incident record you want to update.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListIncidentRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIncidentRecordsOutcome ListIncidentRecords(const Model::ListIncidentRecordsRequest& request) const;

        /**
         * A Callable wrapper for ListIncidentRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIncidentRecordsRequestT = Model::ListIncidentRecordsRequest>
        Model::ListIncidentRecordsOutcomeCallable ListIncidentRecordsCallable(const ListIncidentRecordsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListIncidentRecords, request);
        }

        /**
         * An Async wrapper for ListIncidentRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIncidentRecordsRequestT = Model::ListIncidentRecordsRequest>
        void ListIncidentRecordsAsync(const ListIncidentRecordsRequestT& request, const ListIncidentRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListIncidentRecords, request, handler, context);
        }

        /**
         * <p>List all related items for an incident record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRelatedItemsOutcome ListRelatedItems(const Model::ListRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for ListRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRelatedItemsRequestT = Model::ListRelatedItemsRequest>
        Model::ListRelatedItemsOutcomeCallable ListRelatedItemsCallable(const ListRelatedItemsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListRelatedItems, request);
        }

        /**
         * An Async wrapper for ListRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRelatedItemsRequestT = Model::ListRelatedItemsRequest>
        void ListRelatedItemsAsync(const ListRelatedItemsRequestT& request, const ListRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListRelatedItems, request, handler, context);
        }

        /**
         * <p>Lists details about the replication set configured in your account.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListReplicationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReplicationSetsOutcome ListReplicationSets(const Model::ListReplicationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReplicationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReplicationSetsRequestT = Model::ListReplicationSetsRequest>
        Model::ListReplicationSetsOutcomeCallable ListReplicationSetsCallable(const ListReplicationSetsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListReplicationSets, request);
        }

        /**
         * An Async wrapper for ListReplicationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReplicationSetsRequestT = Model::ListReplicationSetsRequest>
        void ListReplicationSetsAsync(const ListReplicationSetsRequestT& request, const ListReplicationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListReplicationSets, request, handler, context);
        }

        /**
         * <p>Lists all response plans in your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListResponsePlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResponsePlansOutcome ListResponsePlans(const Model::ListResponsePlansRequest& request) const;

        /**
         * A Callable wrapper for ListResponsePlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResponsePlansRequestT = Model::ListResponsePlansRequest>
        Model::ListResponsePlansOutcomeCallable ListResponsePlansCallable(const ListResponsePlansRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListResponsePlans, request);
        }

        /**
         * An Async wrapper for ListResponsePlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResponsePlansRequestT = Model::ListResponsePlansRequest>
        void ListResponsePlansAsync(const ListResponsePlansRequestT& request, const ListResponsePlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListResponsePlans, request, handler, context);
        }

        /**
         * <p>Lists the tags that are attached to the specified response plan or
         * incident.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists timeline events for the specified incident record.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/ListTimelineEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTimelineEventsOutcome ListTimelineEvents(const Model::ListTimelineEventsRequest& request) const;

        /**
         * A Callable wrapper for ListTimelineEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTimelineEventsRequestT = Model::ListTimelineEventsRequest>
        Model::ListTimelineEventsOutcomeCallable ListTimelineEventsCallable(const ListTimelineEventsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::ListTimelineEvents, request);
        }

        /**
         * An Async wrapper for ListTimelineEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTimelineEventsRequestT = Model::ListTimelineEventsRequest>
        void ListTimelineEventsAsync(const ListTimelineEventsRequestT& request, const ListTimelineEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::ListTimelineEvents, request, handler, context);
        }

        /**
         * <p>Adds a resource policy to the specified response plan. The resource policy is
         * used to share the response plan using Resource Access Manager (RAM). For more
         * information about cross-account sharing, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/incident-manager-cross-account-cross-region.html">Cross-Region
         * and cross-account incident management</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Used to start an incident from CloudWatch alarms, EventBridge events, or
         * manually. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/StartIncident">AWS
         * API Reference</a></p>
         */
        virtual Model::StartIncidentOutcome StartIncident(const Model::StartIncidentRequest& request) const;

        /**
         * A Callable wrapper for StartIncident that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartIncidentRequestT = Model::StartIncidentRequest>
        Model::StartIncidentOutcomeCallable StartIncidentCallable(const StartIncidentRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::StartIncident, request);
        }

        /**
         * An Async wrapper for StartIncident that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartIncidentRequestT = Model::StartIncidentRequest>
        void StartIncidentAsync(const StartIncidentRequestT& request, const StartIncidentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::StartIncident, request, handler, context);
        }

        /**
         * <p>Adds a tag to a response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes a tag from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update deletion protection to either allow or deny deletion of the final
         * Region in a replication set.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateDeletionProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeletionProtectionOutcome UpdateDeletionProtection(const Model::UpdateDeletionProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeletionProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeletionProtectionRequestT = Model::UpdateDeletionProtectionRequest>
        Model::UpdateDeletionProtectionOutcomeCallable UpdateDeletionProtectionCallable(const UpdateDeletionProtectionRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateDeletionProtection, request);
        }

        /**
         * An Async wrapper for UpdateDeletionProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeletionProtectionRequestT = Model::UpdateDeletionProtectionRequest>
        void UpdateDeletionProtectionAsync(const UpdateDeletionProtectionRequestT& request, const UpdateDeletionProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateDeletionProtection, request, handler, context);
        }

        /**
         * <p>Update the details of an incident record. You can use this operation to
         * update an incident record from the defined chat channel. For more information
         * about using actions in chat channels, see <a
         * href="https://docs.aws.amazon.com/incident-manager/latest/userguide/chat.html#chat-interact">Interacting
         * through chat</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateIncidentRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIncidentRecordOutcome UpdateIncidentRecord(const Model::UpdateIncidentRecordRequest& request) const;

        /**
         * A Callable wrapper for UpdateIncidentRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIncidentRecordRequestT = Model::UpdateIncidentRecordRequest>
        Model::UpdateIncidentRecordOutcomeCallable UpdateIncidentRecordCallable(const UpdateIncidentRecordRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateIncidentRecord, request);
        }

        /**
         * An Async wrapper for UpdateIncidentRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIncidentRecordRequestT = Model::UpdateIncidentRecordRequest>
        void UpdateIncidentRecordAsync(const UpdateIncidentRecordRequestT& request, const UpdateIncidentRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateIncidentRecord, request, handler, context);
        }

        /**
         * <p>Add or remove related items from the related items tab of an incident
         * record.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateRelatedItems">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelatedItemsOutcome UpdateRelatedItems(const Model::UpdateRelatedItemsRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelatedItems that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRelatedItemsRequestT = Model::UpdateRelatedItemsRequest>
        Model::UpdateRelatedItemsOutcomeCallable UpdateRelatedItemsCallable(const UpdateRelatedItemsRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateRelatedItems, request);
        }

        /**
         * An Async wrapper for UpdateRelatedItems that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRelatedItemsRequestT = Model::UpdateRelatedItemsRequest>
        void UpdateRelatedItemsAsync(const UpdateRelatedItemsRequestT& request, const UpdateRelatedItemsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateRelatedItems, request, handler, context);
        }

        /**
         * <p>Add or delete Regions from your replication set.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateReplicationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReplicationSetOutcome UpdateReplicationSet(const Model::UpdateReplicationSetRequest& request) const;

        /**
         * A Callable wrapper for UpdateReplicationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReplicationSetRequestT = Model::UpdateReplicationSetRequest>
        Model::UpdateReplicationSetOutcomeCallable UpdateReplicationSetCallable(const UpdateReplicationSetRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateReplicationSet, request);
        }

        /**
         * An Async wrapper for UpdateReplicationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReplicationSetRequestT = Model::UpdateReplicationSetRequest>
        void UpdateReplicationSetAsync(const UpdateReplicationSetRequestT& request, const UpdateReplicationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateReplicationSet, request, handler, context);
        }

        /**
         * <p>Updates the specified response plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateResponsePlan">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResponsePlanOutcome UpdateResponsePlan(const Model::UpdateResponsePlanRequest& request) const;

        /**
         * A Callable wrapper for UpdateResponsePlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResponsePlanRequestT = Model::UpdateResponsePlanRequest>
        Model::UpdateResponsePlanOutcomeCallable UpdateResponsePlanCallable(const UpdateResponsePlanRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateResponsePlan, request);
        }

        /**
         * An Async wrapper for UpdateResponsePlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResponsePlanRequestT = Model::UpdateResponsePlanRequest>
        void UpdateResponsePlanAsync(const UpdateResponsePlanRequestT& request, const UpdateResponsePlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateResponsePlan, request, handler, context);
        }

        /**
         * <p>Updates a timeline event. You can update events of type <code>Custom
         * Event</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-incidents-2018-05-10/UpdateTimelineEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTimelineEventOutcome UpdateTimelineEvent(const Model::UpdateTimelineEventRequest& request) const;

        /**
         * A Callable wrapper for UpdateTimelineEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTimelineEventRequestT = Model::UpdateTimelineEventRequest>
        Model::UpdateTimelineEventOutcomeCallable UpdateTimelineEventCallable(const UpdateTimelineEventRequestT& request) const
        {
            return SubmitCallable(&SSMIncidentsClient::UpdateTimelineEvent, request);
        }

        /**
         * An Async wrapper for UpdateTimelineEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTimelineEventRequestT = Model::UpdateTimelineEventRequest>
        void UpdateTimelineEventAsync(const UpdateTimelineEventRequestT& request, const UpdateTimelineEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMIncidentsClient::UpdateTimelineEvent, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMIncidentsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMIncidentsClient>;
      void init(const SSMIncidentsClientConfiguration& clientConfiguration);

      SSMIncidentsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SSMIncidentsEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMIncidents
} // namespace Aws
