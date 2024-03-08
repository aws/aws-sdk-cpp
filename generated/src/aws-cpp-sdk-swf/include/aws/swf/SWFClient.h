/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/swf/SWFServiceClientModel.h>

namespace Aws
{
namespace SWF
{
  /**
   * <fullname>Amazon Simple Workflow Service</fullname> <p>The Amazon Simple
   * Workflow Service (Amazon SWF) makes it easy to build applications that use
   * Amazon's cloud to coordinate work across distributed components. In Amazon SWF,
   * a <i>task</i> represents a logical unit of work that is performed by a component
   * of your workflow. Coordinating tasks in a workflow involves managing intertask
   * dependencies, scheduling, and concurrency in accordance with the logical flow of
   * the application.</p> <p>Amazon SWF gives you full control over implementing
   * tasks and coordinating them without worrying about underlying complexities such
   * as tracking their progress and maintaining their state.</p> <p>This
   * documentation serves as reference only. For a broader overview of the Amazon SWF
   * programming model, see the <i> <a
   * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF
   * Developer Guide</a> </i>.</p>
   */
  class AWS_SWF_API SWFClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SWFClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SWFClientConfiguration ClientConfigurationType;
      typedef SWFEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::SWF::SWFClientConfiguration& clientConfiguration = Aws::SWF::SWFClientConfiguration(),
                  std::shared_ptr<SWFEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SWFEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SWF::SWFClientConfiguration& clientConfiguration = Aws::SWF::SWFClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SWFClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SWFEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SWF::SWFClientConfiguration& clientConfiguration = Aws::SWF::SWFClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SWFClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SWFClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SWFClient();

        /**
         * <p>Returns the number of closed workflow executions within the given domain that
         * meet the specified filtering criteria.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p>  <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::CountClosedWorkflowExecutionsOutcome CountClosedWorkflowExecutions(const Model::CountClosedWorkflowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for CountClosedWorkflowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CountClosedWorkflowExecutionsRequestT = Model::CountClosedWorkflowExecutionsRequest>
        Model::CountClosedWorkflowExecutionsOutcomeCallable CountClosedWorkflowExecutionsCallable(const CountClosedWorkflowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SWFClient::CountClosedWorkflowExecutions, request);
        }

        /**
         * An Async wrapper for CountClosedWorkflowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CountClosedWorkflowExecutionsRequestT = Model::CountClosedWorkflowExecutionsRequest>
        void CountClosedWorkflowExecutionsAsync(const CountClosedWorkflowExecutionsRequestT& request, const CountClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::CountClosedWorkflowExecutions, request, handler, context);
        }

        /**
         * <p>Returns the number of open workflow executions within the given domain that
         * meet the specified filtering criteria.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not exactly reflect
         * recent updates and changes.</p>  <p> <b>Access Control</b> </p> <p>You
         * can use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagFilter.tag</code>: String constraint. The key is
         * <code>swf:tagFilter.tag</code>.</p> </li> <li> <p> <code>typeFilter.name</code>:
         * String constraint. The key is <code>swf:typeFilter.name</code>.</p> </li> <li>
         * <p> <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::CountOpenWorkflowExecutionsOutcome CountOpenWorkflowExecutions(const Model::CountOpenWorkflowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for CountOpenWorkflowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CountOpenWorkflowExecutionsRequestT = Model::CountOpenWorkflowExecutionsRequest>
        Model::CountOpenWorkflowExecutionsOutcomeCallable CountOpenWorkflowExecutionsCallable(const CountOpenWorkflowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SWFClient::CountOpenWorkflowExecutions, request);
        }

        /**
         * An Async wrapper for CountOpenWorkflowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CountOpenWorkflowExecutionsRequestT = Model::CountOpenWorkflowExecutionsRequest>
        void CountOpenWorkflowExecutionsAsync(const CountOpenWorkflowExecutionsRequestT& request, const CountOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::CountOpenWorkflowExecutions, request, handler, context);
        }

        /**
         * <p>Returns the estimated number of activity tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no activity task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingActivityTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::CountPendingActivityTasksOutcome CountPendingActivityTasks(const Model::CountPendingActivityTasksRequest& request) const;

        /**
         * A Callable wrapper for CountPendingActivityTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CountPendingActivityTasksRequestT = Model::CountPendingActivityTasksRequest>
        Model::CountPendingActivityTasksOutcomeCallable CountPendingActivityTasksCallable(const CountPendingActivityTasksRequestT& request) const
        {
            return SubmitCallable(&SWFClient::CountPendingActivityTasks, request);
        }

        /**
         * An Async wrapper for CountPendingActivityTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CountPendingActivityTasksRequestT = Model::CountPendingActivityTasksRequest>
        void CountPendingActivityTasksAsync(const CountPendingActivityTasksRequestT& request, const CountPendingActivityTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::CountPendingActivityTasks, request, handler, context);
        }

        /**
         * <p>Returns the estimated number of decision tasks in the specified task list.
         * The count returned is an approximation and isn't guaranteed to be exact. If you
         * specify a task list that no decision task was ever scheduled in then
         * <code>0</code> is returned.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the <code>taskList.name</code> parameter by using a
         * <code>Condition</code> element with the <code>swf:taskList.name</code> key to
         * allow the action to access only certain task lists.</p> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/CountPendingDecisionTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::CountPendingDecisionTasksOutcome CountPendingDecisionTasks(const Model::CountPendingDecisionTasksRequest& request) const;

        /**
         * A Callable wrapper for CountPendingDecisionTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CountPendingDecisionTasksRequestT = Model::CountPendingDecisionTasksRequest>
        Model::CountPendingDecisionTasksOutcomeCallable CountPendingDecisionTasksCallable(const CountPendingDecisionTasksRequestT& request) const
        {
            return SubmitCallable(&SWFClient::CountPendingDecisionTasks, request);
        }

        /**
         * An Async wrapper for CountPendingDecisionTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CountPendingDecisionTasksRequestT = Model::CountPendingDecisionTasksRequest>
        void CountPendingDecisionTasksAsync(const CountPendingDecisionTasksRequestT& request, const CountPendingDecisionTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::CountPendingDecisionTasks, request, handler, context);
        }

        /**
         * <p>Deprecates the specified <i>activity type</i>. After an activity type has
         * been deprecated, you cannot create new tasks of that activity type. Tasks of
         * this type that were scheduled before the type was deprecated continue to
         * run.</p>  <p>This operation is eventually consistent. The results are best
         * effort and may not exactly reflect recent updates and changes.</p>  <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateActivityTypeOutcome DeprecateActivityType(const Model::DeprecateActivityTypeRequest& request) const;

        /**
         * A Callable wrapper for DeprecateActivityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeprecateActivityTypeRequestT = Model::DeprecateActivityTypeRequest>
        Model::DeprecateActivityTypeOutcomeCallable DeprecateActivityTypeCallable(const DeprecateActivityTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DeprecateActivityType, request);
        }

        /**
         * An Async wrapper for DeprecateActivityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeprecateActivityTypeRequestT = Model::DeprecateActivityTypeRequest>
        void DeprecateActivityTypeAsync(const DeprecateActivityTypeRequestT& request, const DeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DeprecateActivityType, request, handler, context);
        }

        /**
         * <p>Deprecates the specified domain. After a domain has been deprecated it cannot
         * be used to create new workflow executions or register new types. However, you
         * can still use visibility actions on this domain. Deprecating a domain also
         * deprecates all activity and workflow types registered in the domain. Executions
         * that were started before the domain was deprecated continues to run.</p> 
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p>  <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateDomainOutcome DeprecateDomain(const Model::DeprecateDomainRequest& request) const;

        /**
         * A Callable wrapper for DeprecateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeprecateDomainRequestT = Model::DeprecateDomainRequest>
        Model::DeprecateDomainOutcomeCallable DeprecateDomainCallable(const DeprecateDomainRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DeprecateDomain, request);
        }

        /**
         * An Async wrapper for DeprecateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeprecateDomainRequestT = Model::DeprecateDomainRequest>
        void DeprecateDomainAsync(const DeprecateDomainRequestT& request, const DeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DeprecateDomain, request, handler, context);
        }

        /**
         * <p>Deprecates the specified <i>workflow type</i>. After a workflow type has been
         * deprecated, you cannot create new executions of that type. Executions that were
         * started before the type was deprecated continues to run. A deprecated workflow
         * type may still be used when calling visibility actions.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p>  <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DeprecateWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateWorkflowTypeOutcome DeprecateWorkflowType(const Model::DeprecateWorkflowTypeRequest& request) const;

        /**
         * A Callable wrapper for DeprecateWorkflowType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeprecateWorkflowTypeRequestT = Model::DeprecateWorkflowTypeRequest>
        Model::DeprecateWorkflowTypeOutcomeCallable DeprecateWorkflowTypeCallable(const DeprecateWorkflowTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DeprecateWorkflowType, request);
        }

        /**
         * An Async wrapper for DeprecateWorkflowType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeprecateWorkflowTypeRequestT = Model::DeprecateWorkflowTypeRequest>
        void DeprecateWorkflowTypeAsync(const DeprecateWorkflowTypeRequestT& request, const DeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DeprecateWorkflowType, request, handler, context);
        }

        /**
         * <p>Returns information about the specified activity type. This includes
         * configuration settings provided when the type was registered and other general
         * information about the type.</p> <p> <b>Access Control</b> </p> <p>You can use
         * IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>activityType.name</code>: String constraint. The key is
         * <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivityTypeOutcome DescribeActivityType(const Model::DescribeActivityTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeActivityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActivityTypeRequestT = Model::DescribeActivityTypeRequest>
        Model::DescribeActivityTypeOutcomeCallable DescribeActivityTypeCallable(const DescribeActivityTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DescribeActivityType, request);
        }

        /**
         * An Async wrapper for DescribeActivityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActivityTypeRequestT = Model::DescribeActivityTypeRequest>
        void DescribeActivityTypeAsync(const DescribeActivityTypeRequestT& request, const DescribeActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DescribeActivityType, request, handler, context);
        }

        /**
         * <p>Returns information about the specified domain, including description and
         * status.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainOutcome DescribeDomain(const Model::DescribeDomainRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        Model::DescribeDomainOutcomeCallable DescribeDomainCallable(const DescribeDomainRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DescribeDomain, request);
        }

        /**
         * An Async wrapper for DescribeDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainRequestT = Model::DescribeDomainRequest>
        void DescribeDomainAsync(const DescribeDomainRequestT& request, const DescribeDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DescribeDomain, request, handler, context);
        }

        /**
         * <p>Returns information about the specified workflow execution including its type
         * and some statistics.</p>  <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p>  <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowExecutionOutcome DescribeWorkflowExecution(const Model::DescribeWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkflowExecutionRequestT = Model::DescribeWorkflowExecutionRequest>
        Model::DescribeWorkflowExecutionOutcomeCallable DescribeWorkflowExecutionCallable(const DescribeWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DescribeWorkflowExecution, request);
        }

        /**
         * An Async wrapper for DescribeWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkflowExecutionRequestT = Model::DescribeWorkflowExecutionRequest>
        void DescribeWorkflowExecutionAsync(const DescribeWorkflowExecutionRequestT& request, const DescribeWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DescribeWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Returns information about the specified <i>workflow type</i>. This includes
         * configuration settings specified when the type was registered and other
         * information such as creation date, current status, etc.</p> <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>Constrain the following parameters by using
         * a <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DescribeWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeWorkflowTypeOutcome DescribeWorkflowType(const Model::DescribeWorkflowTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeWorkflowType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeWorkflowTypeRequestT = Model::DescribeWorkflowTypeRequest>
        Model::DescribeWorkflowTypeOutcomeCallable DescribeWorkflowTypeCallable(const DescribeWorkflowTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::DescribeWorkflowType, request);
        }

        /**
         * An Async wrapper for DescribeWorkflowType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeWorkflowTypeRequestT = Model::DescribeWorkflowTypeRequest>
        void DescribeWorkflowTypeAsync(const DescribeWorkflowTypeRequestT& request, const DescribeWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::DescribeWorkflowType, request, handler, context);
        }

        /**
         * <p>Returns the history of the specified workflow execution. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the <code>nextPageToken</code> returned by the initial call.</p> 
         * <p>This operation is eventually consistent. The results are best effort and may
         * not exactly reflect recent updates and changes.</p>  <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/GetWorkflowExecutionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetWorkflowExecutionHistoryOutcome GetWorkflowExecutionHistory(const Model::GetWorkflowExecutionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetWorkflowExecutionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetWorkflowExecutionHistoryRequestT = Model::GetWorkflowExecutionHistoryRequest>
        Model::GetWorkflowExecutionHistoryOutcomeCallable GetWorkflowExecutionHistoryCallable(const GetWorkflowExecutionHistoryRequestT& request) const
        {
            return SubmitCallable(&SWFClient::GetWorkflowExecutionHistory, request);
        }

        /**
         * An Async wrapper for GetWorkflowExecutionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetWorkflowExecutionHistoryRequestT = Model::GetWorkflowExecutionHistoryRequest>
        void GetWorkflowExecutionHistoryAsync(const GetWorkflowExecutionHistoryRequestT& request, const GetWorkflowExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::GetWorkflowExecutionHistory, request, handler, context);
        }

        /**
         * <p>Returns information about all activities registered in the specified domain
         * that match the specified name and registration status. The result includes
         * information like creation date, current status of the activity, etc. The results
         * may be split into multiple pages. To retrieve subsequent pages, make the call
         * again using the <code>nextPageToken</code> returned by the initial call.</p> <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListActivityTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivityTypesOutcome ListActivityTypes(const Model::ListActivityTypesRequest& request) const;

        /**
         * A Callable wrapper for ListActivityTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActivityTypesRequestT = Model::ListActivityTypesRequest>
        Model::ListActivityTypesOutcomeCallable ListActivityTypesCallable(const ListActivityTypesRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListActivityTypes, request);
        }

        /**
         * An Async wrapper for ListActivityTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActivityTypesRequestT = Model::ListActivityTypesRequest>
        void ListActivityTypesAsync(const ListActivityTypesRequestT& request, const ListActivityTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListActivityTypes, request, handler, context);
        }

        /**
         * <p>Returns a list of closed workflow executions in the specified domain that
         * meet the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p>  <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p>  <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListClosedWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClosedWorkflowExecutionsOutcome ListClosedWorkflowExecutions(const Model::ListClosedWorkflowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListClosedWorkflowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClosedWorkflowExecutionsRequestT = Model::ListClosedWorkflowExecutionsRequest>
        Model::ListClosedWorkflowExecutionsOutcomeCallable ListClosedWorkflowExecutionsCallable(const ListClosedWorkflowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListClosedWorkflowExecutions, request);
        }

        /**
         * An Async wrapper for ListClosedWorkflowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClosedWorkflowExecutionsRequestT = Model::ListClosedWorkflowExecutionsRequest>
        void ListClosedWorkflowExecutionsAsync(const ListClosedWorkflowExecutionsRequestT& request, const ListClosedWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListClosedWorkflowExecutions, request, handler, context);
        }

        /**
         * <p>Returns the list of domains registered in the account. The results may be
         * split into multiple pages. To retrieve subsequent pages, make the call again
         * using the nextPageToken returned by the initial call.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * exactly reflect recent updates and changes.</p>  <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains. The
         * element must be set to <code>arn:aws:swf::AccountID:domain/ *</code>, where
         * <i>AccountID</i> is the account ID, with no dashes.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListDomains">AWS API
         * Reference</a></p>
         */
        virtual Model::ListDomainsOutcome ListDomains(const Model::ListDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        Model::ListDomainsOutcomeCallable ListDomainsCallable(const ListDomainsRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListDomains, request);
        }

        /**
         * An Async wrapper for ListDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainsRequestT = Model::ListDomainsRequest>
        void ListDomainsAsync(const ListDomainsRequestT& request, const ListDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListDomains, request, handler, context);
        }

        /**
         * <p>Returns a list of open workflow executions in the specified domain that meet
         * the filtering criteria. The results may be split into multiple pages. To
         * retrieve subsequent pages, make the call again using the nextPageToken returned
         * by the initial call.</p>  <p>This operation is eventually consistent. The
         * results are best effort and may not exactly reflect recent updates and
         * changes.</p>  <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li>
         * <p>Constrain the following parameters by using a <code>Condition</code> element
         * with the appropriate keys.</p> <ul> <li> <p> <code>tagFilter.tag</code>: String
         * constraint. The key is <code>swf:tagFilter.tag</code>.</p> </li> <li> <p>
         * <code>typeFilter.name</code>: String constraint. The key is
         * <code>swf:typeFilter.name</code>.</p> </li> <li> <p>
         * <code>typeFilter.version</code>: String constraint. The key is
         * <code>swf:typeFilter.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListOpenWorkflowExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOpenWorkflowExecutionsOutcome ListOpenWorkflowExecutions(const Model::ListOpenWorkflowExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListOpenWorkflowExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOpenWorkflowExecutionsRequestT = Model::ListOpenWorkflowExecutionsRequest>
        Model::ListOpenWorkflowExecutionsOutcomeCallable ListOpenWorkflowExecutionsCallable(const ListOpenWorkflowExecutionsRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListOpenWorkflowExecutions, request);
        }

        /**
         * An Async wrapper for ListOpenWorkflowExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOpenWorkflowExecutionsRequestT = Model::ListOpenWorkflowExecutionsRequest>
        void ListOpenWorkflowExecutionsAsync(const ListOpenWorkflowExecutionsRequestT& request, const ListOpenWorkflowExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListOpenWorkflowExecutions, request, handler, context);
        }

        /**
         * <p>List tags for a given domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Returns information about workflow types in the specified domain. The results
         * may be split into multiple pages that can be retrieved by making the call
         * repeatedly.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/ListWorkflowTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListWorkflowTypesOutcome ListWorkflowTypes(const Model::ListWorkflowTypesRequest& request) const;

        /**
         * A Callable wrapper for ListWorkflowTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListWorkflowTypesRequestT = Model::ListWorkflowTypesRequest>
        Model::ListWorkflowTypesOutcomeCallable ListWorkflowTypesCallable(const ListWorkflowTypesRequestT& request) const
        {
            return SubmitCallable(&SWFClient::ListWorkflowTypes, request);
        }

        /**
         * An Async wrapper for ListWorkflowTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListWorkflowTypesRequestT = Model::ListWorkflowTypesRequest>
        void ListWorkflowTypesAsync(const ListWorkflowTypesRequestT& request, const ListWorkflowTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::ListWorkflowTypes, request, handler, context);
        }

        /**
         * <p>Used by workers to get an <a>ActivityTask</a> from the specified activity
         * <code>taskList</code>. This initiates a long poll, where the service holds the
         * HTTP connection open and responds as soon as a task becomes available. The
         * maximum time the service holds on to the request before responding is 60
         * seconds. If no task is available within 60 seconds, the poll returns an empty
         * result. An empty result, in this context, means that an ActivityTask is
         * returned, but that the value of taskToken is an empty string. If a task is
         * returned, the worker should use its type to identify and process it
         * correctly.</p>  <p>Workers should set their client side socket
         * timeout to at least 70 seconds (10 seconds higher than the maximum time service
         * may hold the poll request).</p>  <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the <code>taskList.name</code> parameter by
         * using a <code>Condition</code> element with the <code>swf:taskList.name</code>
         * key to allow the action to access only certain task lists.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForActivityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForActivityTaskOutcome PollForActivityTask(const Model::PollForActivityTaskRequest& request) const;

        /**
         * A Callable wrapper for PollForActivityTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PollForActivityTaskRequestT = Model::PollForActivityTaskRequest>
        Model::PollForActivityTaskOutcomeCallable PollForActivityTaskCallable(const PollForActivityTaskRequestT& request) const
        {
            return SubmitCallable(&SWFClient::PollForActivityTask, request);
        }

        /**
         * An Async wrapper for PollForActivityTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PollForActivityTaskRequestT = Model::PollForActivityTaskRequest>
        void PollForActivityTaskAsync(const PollForActivityTaskRequestT& request, const PollForActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::PollForActivityTask, request, handler, context);
        }

        /**
         * <p>Used by deciders to get a <a>DecisionTask</a> from the specified decision
         * <code>taskList</code>. A decision task may be returned for any open workflow
         * execution that is using the specified task list. The task includes a paginated
         * view of the history of the workflow execution. The decider should use the
         * workflow type and the history to determine how to properly handle the task.</p>
         * <p>This action initiates a long poll, where the service holds the HTTP
         * connection open and responds as soon a task becomes available. If no decision
         * task is available in the specified task list before the timeout of 60 seconds
         * expires, an empty result is returned. An empty result, in this context, means
         * that a DecisionTask is returned, but that the value of taskToken is an empty
         * string.</p>  <p>Deciders should set their client side socket timeout
         * to at least 70 seconds (10 seconds higher than the timeout).</p> 
         *  <p>Because the number of workflow history events for a single
         * workflow execution might be very large, the result returned might be split up
         * across a number of pages. To retrieve subsequent pages, make additional calls to
         * <code>PollForDecisionTask</code> using the <code>nextPageToken</code> returned
         * by the initial call. Note that you do <i>not</i> call
         * <code>GetWorkflowExecutionHistory</code> with this <code>nextPageToken</code>.
         * Instead, call <code>PollForDecisionTask</code> again.</p>  <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * <code>taskList.name</code> parameter by using a <code>Condition</code> element
         * with the <code>swf:taskList.name</code> key to allow the action to access only
         * certain task lists.</p> </li> </ul> <p>If the caller doesn't have sufficient
         * permissions to invoke the action, or the parameter values fall outside the
         * specified constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/PollForDecisionTask">AWS
         * API Reference</a></p>
         */
        virtual Model::PollForDecisionTaskOutcome PollForDecisionTask(const Model::PollForDecisionTaskRequest& request) const;

        /**
         * A Callable wrapper for PollForDecisionTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PollForDecisionTaskRequestT = Model::PollForDecisionTaskRequest>
        Model::PollForDecisionTaskOutcomeCallable PollForDecisionTaskCallable(const PollForDecisionTaskRequestT& request) const
        {
            return SubmitCallable(&SWFClient::PollForDecisionTask, request);
        }

        /**
         * An Async wrapper for PollForDecisionTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PollForDecisionTaskRequestT = Model::PollForDecisionTaskRequest>
        void PollForDecisionTaskAsync(const PollForDecisionTaskRequestT& request, const PollForDecisionTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::PollForDecisionTask, request, handler, context);
        }

        /**
         * <p>Used by activity workers to report to the service that the
         * <a>ActivityTask</a> represented by the specified <code>taskToken</code> is still
         * making progress. The worker can also specify details of the progress, for
         * example percent complete, using the <code>details</code> parameter. This action
         * can also be used by the worker as a mechanism to check if cancellation is being
         * requested for the activity task. If a cancellation is being attempted for the
         * specified task, then the boolean <code>cancelRequested</code> flag returned by
         * the service is set to <code>true</code>.</p> <p>This action resets the
         * <code>taskHeartbeatTimeout</code> clock. The <code>taskHeartbeatTimeout</code>
         * is specified in <a>RegisterActivityType</a>.</p> <p>This action doesn't in
         * itself create an event in the workflow execution history. However, if the task
         * times out, the workflow execution history contains a
         * <code>ActivityTaskTimedOut</code> event that contains the information from the
         * last heartbeat generated by the activity worker.</p>  <p>The
         * <code>taskStartToCloseTimeout</code> of an activity type is the maximum duration
         * of an activity task, regardless of the number of
         * <a>RecordActivityTaskHeartbeat</a> requests received. The
         * <code>taskStartToCloseTimeout</code> is also specified in
         * <a>RegisterActivityType</a>.</p>   <p>This operation is only useful
         * for long-lived activities to report liveliness of the task and to determine if a
         * cancellation is being attempted.</p>   <p>If the
         * <code>cancelRequested</code> flag returns <code>true</code>, a cancellation is
         * being attempted. If the worker can cancel the activity, it should respond with
         * <a>RespondActivityTaskCanceled</a>. Otherwise, it should ignore the cancellation
         * request.</p>  <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>Use a <code>Resource</code> element with the domain name to limit
         * the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>You cannot use an IAM policy to constrain this action's
         * parameters.</p> </li> </ul> <p>If the caller doesn't have sufficient permissions
         * to invoke the action, or the parameter values fall outside the specified
         * constraints, the action fails. The associated event attribute's
         * <code>cause</code> parameter is set to <code>OPERATION_NOT_PERMITTED</code>. For
         * details and example IAM policies, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RecordActivityTaskHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::RecordActivityTaskHeartbeatOutcome RecordActivityTaskHeartbeat(const Model::RecordActivityTaskHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for RecordActivityTaskHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RecordActivityTaskHeartbeatRequestT = Model::RecordActivityTaskHeartbeatRequest>
        Model::RecordActivityTaskHeartbeatOutcomeCallable RecordActivityTaskHeartbeatCallable(const RecordActivityTaskHeartbeatRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RecordActivityTaskHeartbeat, request);
        }

        /**
         * An Async wrapper for RecordActivityTaskHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RecordActivityTaskHeartbeatRequestT = Model::RecordActivityTaskHeartbeatRequest>
        void RecordActivityTaskHeartbeatAsync(const RecordActivityTaskHeartbeatRequestT& request, const RecordActivityTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RecordActivityTaskHeartbeat, request, handler, context);
        }

        /**
         * <p>Registers a new <i>activity type</i> along with its configuration settings in
         * the specified domain.</p>  <p>A <code>TypeAlreadyExists</code> fault
         * is returned if the type already exists in the domain. You cannot change any
         * configuration settings of the type after its registration, and it must be
         * registered as a new version.</p>  <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterActivityTypeOutcome RegisterActivityType(const Model::RegisterActivityTypeRequest& request) const;

        /**
         * A Callable wrapper for RegisterActivityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterActivityTypeRequestT = Model::RegisterActivityTypeRequest>
        Model::RegisterActivityTypeOutcomeCallable RegisterActivityTypeCallable(const RegisterActivityTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RegisterActivityType, request);
        }

        /**
         * An Async wrapper for RegisterActivityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterActivityTypeRequestT = Model::RegisterActivityTypeRequest>
        void RegisterActivityTypeAsync(const RegisterActivityTypeRequestT& request, const RegisterActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RegisterActivityType, request, handler, context);
        }

        /**
         * <p>Registers a new domain.</p> <p> <b>Access Control</b> </p> <p>You can use IAM
         * policies to control this action's access to Amazon SWF resources as follows:</p>
         * <ul> <li> <p>You cannot use an IAM policy to control domain access for this
         * action. The name of the domain being registered is available as the resource of
         * this action.</p> </li> <li> <p>Use an <code>Action</code> element to allow or
         * deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterDomainOutcome RegisterDomain(const Model::RegisterDomainRequest& request) const;

        /**
         * A Callable wrapper for RegisterDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterDomainRequestT = Model::RegisterDomainRequest>
        Model::RegisterDomainOutcomeCallable RegisterDomainCallable(const RegisterDomainRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RegisterDomain, request);
        }

        /**
         * An Async wrapper for RegisterDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterDomainRequestT = Model::RegisterDomainRequest>
        void RegisterDomainAsync(const RegisterDomainRequestT& request, const RegisterDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RegisterDomain, request, handler, context);
        }

        /**
         * <p>Registers a new <i>workflow type</i> and its configuration settings in the
         * specified domain.</p> <p>The retention period for the workflow history is set by
         * the <a>RegisterDomain</a> action.</p>  <p>If the type already exists,
         * then a <code>TypeAlreadyExists</code> fault is returned. You cannot change the
         * configuration settings of a workflow type once it is registered and it must be
         * registered as a new version.</p>  <p> <b>Access Control</b> </p>
         * <p>You can use IAM policies to control this action's access to Amazon SWF
         * resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with
         * the domain name to limit the action to only specified domains.</p> </li> <li>
         * <p>Use an <code>Action</code> element to allow or deny permission to call this
         * action.</p> </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>defaultTaskList.name</code>: String constraint. The key is
         * <code>swf:defaultTaskList.name</code>.</p> </li> <li> <p> <code>name</code>:
         * String constraint. The key is <code>swf:name</code>.</p> </li> <li> <p>
         * <code>version</code>: String constraint. The key is
         * <code>swf:version</code>.</p> </li> </ul> </li> </ul> <p>If the caller doesn't
         * have sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RegisterWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterWorkflowTypeOutcome RegisterWorkflowType(const Model::RegisterWorkflowTypeRequest& request) const;

        /**
         * A Callable wrapper for RegisterWorkflowType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterWorkflowTypeRequestT = Model::RegisterWorkflowTypeRequest>
        Model::RegisterWorkflowTypeOutcomeCallable RegisterWorkflowTypeCallable(const RegisterWorkflowTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RegisterWorkflowType, request);
        }

        /**
         * An Async wrapper for RegisterWorkflowType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterWorkflowTypeRequestT = Model::RegisterWorkflowTypeRequest>
        void RegisterWorkflowTypeAsync(const RegisterWorkflowTypeRequestT& request, const RegisterWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RegisterWorkflowType, request, handler, context);
        }

        /**
         * <p>Records a <code>WorkflowExecutionCancelRequested</code> event in the
         * currently running workflow execution identified by the given domain, workflowId,
         * and runId. This logically requests the cancellation of the workflow execution as
         * a whole. It is up to the decider to take appropriate actions when it receives an
         * execution history with this event.</p>  <p>If the runId isn't specified,
         * the <code>WorkflowExecutionCancelRequested</code> event is recorded in the
         * history of the current open workflow execution with the specified workflowId in
         * the domain.</p>   <p>Because this action allows the workflow to
         * properly clean up and gracefully close, it should be used instead of
         * <a>TerminateWorkflowExecution</a> when possible.</p>  <p> <b>Access
         * Control</b> </p> <p>You can use IAM policies to control this action's access to
         * Amazon SWF resources as follows:</p> <ul> <li> <p>Use a <code>Resource</code>
         * element with the domain name to limit the action to only specified domains.</p>
         * </li> <li> <p>Use an <code>Action</code> element to allow or deny permission to
         * call this action.</p> </li> <li> <p>You cannot use an IAM policy to constrain
         * this action's parameters.</p> </li> </ul> <p>If the caller doesn't have
         * sufficient permissions to invoke the action, or the parameter values fall
         * outside the specified constraints, the action fails. The associated event
         * attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RequestCancelWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RequestCancelWorkflowExecutionOutcome RequestCancelWorkflowExecution(const Model::RequestCancelWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for RequestCancelWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RequestCancelWorkflowExecutionRequestT = Model::RequestCancelWorkflowExecutionRequest>
        Model::RequestCancelWorkflowExecutionOutcomeCallable RequestCancelWorkflowExecutionCallable(const RequestCancelWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RequestCancelWorkflowExecution, request);
        }

        /**
         * An Async wrapper for RequestCancelWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RequestCancelWorkflowExecutionRequestT = Model::RequestCancelWorkflowExecutionRequest>
        void RequestCancelWorkflowExecutionAsync(const RequestCancelWorkflowExecutionRequestT& request, const RequestCancelWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RequestCancelWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> was successfully canceled. Additional
         * <code>details</code> can be provided using the <code>details</code>
         * argument.</p> <p>These <code>details</code> (if provided) appear in the
         * <code>ActivityTaskCanceled</code> event added to the workflow history.</p>
         *  <p>Only use this operation if the <code>canceled</code> flag of a
         * <a>RecordActivityTaskHeartbeat</a> request returns <code>true</code> and if the
         * activity can be safely undone or abandoned.</p>  <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to <a>RespondActivityTaskCompleted</a>,
         * RespondActivityTaskCanceled, <a>RespondActivityTaskFailed</a>, or the task has
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCanceled">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskCanceledOutcome RespondActivityTaskCanceled(const Model::RespondActivityTaskCanceledRequest& request) const;

        /**
         * A Callable wrapper for RespondActivityTaskCanceled that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RespondActivityTaskCanceledRequestT = Model::RespondActivityTaskCanceledRequest>
        Model::RespondActivityTaskCanceledOutcomeCallable RespondActivityTaskCanceledCallable(const RespondActivityTaskCanceledRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RespondActivityTaskCanceled, request);
        }

        /**
         * An Async wrapper for RespondActivityTaskCanceled that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RespondActivityTaskCanceledRequestT = Model::RespondActivityTaskCanceledRequest>
        void RespondActivityTaskCanceledAsync(const RespondActivityTaskCanceledRequestT& request, const RespondActivityTaskCanceledResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RespondActivityTaskCanceled, request, handler, context);
        }

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> completed successfully with a <code>result</code>
         * (if provided). The <code>result</code> appears in the
         * <code>ActivityTaskCompleted</code> event in the workflow history.</p>
         *  <p>If the requested task doesn't complete successfully, use
         * <a>RespondActivityTaskFailed</a> instead. If the worker finds that the task is
         * canceled through the <code>canceled</code> flag returned by
         * <a>RecordActivityTaskHeartbeat</a>, it should cancel the task, clean up and then
         * call <a>RespondActivityTaskCanceled</a>.</p>  <p>A task is
         * considered open from the time that it is scheduled until it is closed. Therefore
         * a task is reported as open while a worker is processing it. A task is closed
         * after it has been specified in a call to RespondActivityTaskCompleted,
         * <a>RespondActivityTaskCanceled</a>, <a>RespondActivityTaskFailed</a>, or the
         * task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskCompleted">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskCompletedOutcome RespondActivityTaskCompleted(const Model::RespondActivityTaskCompletedRequest& request) const;

        /**
         * A Callable wrapper for RespondActivityTaskCompleted that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RespondActivityTaskCompletedRequestT = Model::RespondActivityTaskCompletedRequest>
        Model::RespondActivityTaskCompletedOutcomeCallable RespondActivityTaskCompletedCallable(const RespondActivityTaskCompletedRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RespondActivityTaskCompleted, request);
        }

        /**
         * An Async wrapper for RespondActivityTaskCompleted that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RespondActivityTaskCompletedRequestT = Model::RespondActivityTaskCompletedRequest>
        void RespondActivityTaskCompletedAsync(const RespondActivityTaskCompletedRequestT& request, const RespondActivityTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RespondActivityTaskCompleted, request, handler, context);
        }

        /**
         * <p>Used by workers to tell the service that the <a>ActivityTask</a> identified
         * by the <code>taskToken</code> has failed with <code>reason</code> (if
         * specified). The <code>reason</code> and <code>details</code> appear in the
         * <code>ActivityTaskFailed</code> event added to the workflow history.</p> <p>A
         * task is considered open from the time that it is scheduled until it is closed.
         * Therefore a task is reported as open while a worker is processing it. A task is
         * closed after it has been specified in a call to
         * <a>RespondActivityTaskCompleted</a>, <a>RespondActivityTaskCanceled</a>,
         * RespondActivityTaskFailed, or the task has <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dg-basic.html#swf-dev-timeout-types">timed
         * out</a>.</p> <p> <b>Access Control</b> </p> <p>You can use IAM policies to
         * control this action's access to Amazon SWF resources as follows:</p> <ul> <li>
         * <p>Use a <code>Resource</code> element with the domain name to limit the action
         * to only specified domains.</p> </li> <li> <p>Use an <code>Action</code> element
         * to allow or deny permission to call this action.</p> </li> <li> <p>You cannot
         * use an IAM policy to constrain this action's parameters.</p> </li> </ul> <p>If
         * the caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondActivityTaskFailed">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondActivityTaskFailedOutcome RespondActivityTaskFailed(const Model::RespondActivityTaskFailedRequest& request) const;

        /**
         * A Callable wrapper for RespondActivityTaskFailed that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RespondActivityTaskFailedRequestT = Model::RespondActivityTaskFailedRequest>
        Model::RespondActivityTaskFailedOutcomeCallable RespondActivityTaskFailedCallable(const RespondActivityTaskFailedRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RespondActivityTaskFailed, request);
        }

        /**
         * An Async wrapper for RespondActivityTaskFailed that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RespondActivityTaskFailedRequestT = Model::RespondActivityTaskFailedRequest>
        void RespondActivityTaskFailedAsync(const RespondActivityTaskFailedRequestT& request, const RespondActivityTaskFailedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RespondActivityTaskFailed, request, handler, context);
        }

        /**
         * <p>Used by deciders to tell the service that the <a>DecisionTask</a> identified
         * by the <code>taskToken</code> has successfully completed. The
         * <code>decisions</code> argument specifies the list of decisions made while
         * processing the task.</p> <p>A <code>DecisionTaskCompleted</code> event is added
         * to the workflow history. The <code>executionContext</code> specified is attached
         * to the event in the workflow execution history.</p> <p> <b>Access Control</b>
         * </p> <p>If an IAM policy grants permission to use
         * <code>RespondDecisionTaskCompleted</code>, it can express permissions for the
         * list of decisions in the <code>decisions</code> parameter. Each of the decisions
         * has one or more parameters, much like a regular API call. To allow for policies
         * to be as readable as possible, you can express permissions on decisions as if
         * they were actual API calls, including applying conditions to some parameters.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/RespondDecisionTaskCompleted">AWS
         * API Reference</a></p>
         */
        virtual Model::RespondDecisionTaskCompletedOutcome RespondDecisionTaskCompleted(const Model::RespondDecisionTaskCompletedRequest& request) const;

        /**
         * A Callable wrapper for RespondDecisionTaskCompleted that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RespondDecisionTaskCompletedRequestT = Model::RespondDecisionTaskCompletedRequest>
        Model::RespondDecisionTaskCompletedOutcomeCallable RespondDecisionTaskCompletedCallable(const RespondDecisionTaskCompletedRequestT& request) const
        {
            return SubmitCallable(&SWFClient::RespondDecisionTaskCompleted, request);
        }

        /**
         * An Async wrapper for RespondDecisionTaskCompleted that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RespondDecisionTaskCompletedRequestT = Model::RespondDecisionTaskCompletedRequest>
        void RespondDecisionTaskCompletedAsync(const RespondDecisionTaskCompletedRequestT& request, const RespondDecisionTaskCompletedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::RespondDecisionTaskCompleted, request, handler, context);
        }

        /**
         * <p>Records a <code>WorkflowExecutionSignaled</code> event in the workflow
         * execution history and creates a decision task for the workflow execution
         * identified by the given domain, workflowId and runId. The event is recorded with
         * the specified user defined signalName and input (if provided).</p>  <p>If
         * a runId isn't specified, then the <code>WorkflowExecutionSignaled</code> event
         * is recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p>   <p>If the specified workflow
         * execution isn't open, this method fails with <code>UnknownResource</code>.</p>
         *  <p> <b>Access Control</b> </p> <p>You can use IAM policies to control
         * this action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/SignalWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalWorkflowExecutionOutcome SignalWorkflowExecution(const Model::SignalWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for SignalWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SignalWorkflowExecutionRequestT = Model::SignalWorkflowExecutionRequest>
        Model::SignalWorkflowExecutionOutcomeCallable SignalWorkflowExecutionCallable(const SignalWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&SWFClient::SignalWorkflowExecution, request);
        }

        /**
         * An Async wrapper for SignalWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SignalWorkflowExecutionRequestT = Model::SignalWorkflowExecutionRequest>
        void SignalWorkflowExecutionAsync(const SignalWorkflowExecutionRequestT& request, const SignalWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::SignalWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Starts an execution of the workflow type in the specified domain using the
         * provided <code>workflowId</code> and input data.</p> <p>This action returns the
         * newly started workflow execution.</p> <p> <b>Access Control</b> </p> <p>You can
         * use IAM policies to control this action's access to Amazon SWF resources as
         * follows:</p> <ul> <li> <p>Use a <code>Resource</code> element with the domain
         * name to limit the action to only specified domains.</p> </li> <li> <p>Use an
         * <code>Action</code> element to allow or deny permission to call this action.</p>
         * </li> <li> <p>Constrain the following parameters by using a
         * <code>Condition</code> element with the appropriate keys.</p> <ul> <li> <p>
         * <code>tagList.member.0</code>: The key is <code>swf:tagList.member.0</code>.</p>
         * </li> <li> <p> <code>tagList.member.1</code>: The key is
         * <code>swf:tagList.member.1</code>.</p> </li> <li> <p>
         * <code>tagList.member.2</code>: The key is <code>swf:tagList.member.2</code>.</p>
         * </li> <li> <p> <code>tagList.member.3</code>: The key is
         * <code>swf:tagList.member.3</code>.</p> </li> <li> <p>
         * <code>tagList.member.4</code>: The key is <code>swf:tagList.member.4</code>.</p>
         * </li> <li> <p> <code>taskList</code>: String constraint. The key is
         * <code>swf:taskList.name</code>.</p> </li> <li> <p>
         * <code>workflowType.name</code>: String constraint. The key is
         * <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/StartWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartWorkflowExecutionOutcome StartWorkflowExecution(const Model::StartWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartWorkflowExecutionRequestT = Model::StartWorkflowExecutionRequest>
        Model::StartWorkflowExecutionOutcomeCallable StartWorkflowExecutionCallable(const StartWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&SWFClient::StartWorkflowExecution, request);
        }

        /**
         * An Async wrapper for StartWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartWorkflowExecutionRequestT = Model::StartWorkflowExecutionRequest>
        void StartWorkflowExecutionAsync(const StartWorkflowExecutionRequestT& request, const StartWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::StartWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Add a tag to a Amazon SWF domain.</p>  <p>Amazon SWF supports a maximum
         * of 50 tags per resource.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SWFClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::TagResource, request, handler, context);
        }

        /**
         * <p>Records a <code>WorkflowExecutionTerminated</code> event and forces closure
         * of the workflow execution identified by the given domain, runId, and workflowId.
         * The child policy, registered with the workflow type or specified when starting
         * this execution, is applied to any open child workflow executions of this
         * workflow execution.</p>  <p>If the identified workflow execution was
         * in progress, it is terminated immediately.</p>   <p>If a runId
         * isn't specified, then the <code>WorkflowExecutionTerminated</code> event is
         * recorded in the history of the current open workflow with the matching
         * workflowId in the domain.</p>   <p>You should consider using
         * <a>RequestCancelWorkflowExecution</a> action instead because it allows the
         * workflow to gracefully close while <a>TerminateWorkflowExecution</a>
         * doesn't.</p>  <p> <b>Access Control</b> </p> <p>You can use IAM policies
         * to control this action's access to Amazon SWF resources as follows:</p> <ul>
         * <li> <p>Use a <code>Resource</code> element with the domain name to limit the
         * action to only specified domains.</p> </li> <li> <p>Use an <code>Action</code>
         * element to allow or deny permission to call this action.</p> </li> <li> <p>You
         * cannot use an IAM policy to constrain this action's parameters.</p> </li> </ul>
         * <p>If the caller doesn't have sufficient permissions to invoke the action, or
         * the parameter values fall outside the specified constraints, the action fails.
         * The associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/TerminateWorkflowExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateWorkflowExecutionOutcome TerminateWorkflowExecution(const Model::TerminateWorkflowExecutionRequest& request) const;

        /**
         * A Callable wrapper for TerminateWorkflowExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateWorkflowExecutionRequestT = Model::TerminateWorkflowExecutionRequest>
        Model::TerminateWorkflowExecutionOutcomeCallable TerminateWorkflowExecutionCallable(const TerminateWorkflowExecutionRequestT& request) const
        {
            return SubmitCallable(&SWFClient::TerminateWorkflowExecution, request);
        }

        /**
         * An Async wrapper for TerminateWorkflowExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateWorkflowExecutionRequestT = Model::TerminateWorkflowExecutionRequest>
        void TerminateWorkflowExecutionAsync(const TerminateWorkflowExecutionRequestT& request, const TerminateWorkflowExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::TerminateWorkflowExecution, request, handler, context);
        }

        /**
         * <p>Undeprecates a previously deprecated <i>activity type</i>. After an activity
         * type has been undeprecated, you can create new tasks of that activity type.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p>  <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>activityType.name</code>: String
         * constraint. The key is <code>swf:activityType.name</code>.</p> </li> <li> <p>
         * <code>activityType.version</code>: String constraint. The key is
         * <code>swf:activityType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateActivityType">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateActivityTypeOutcome UndeprecateActivityType(const Model::UndeprecateActivityTypeRequest& request) const;

        /**
         * A Callable wrapper for UndeprecateActivityType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UndeprecateActivityTypeRequestT = Model::UndeprecateActivityTypeRequest>
        Model::UndeprecateActivityTypeOutcomeCallable UndeprecateActivityTypeCallable(const UndeprecateActivityTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::UndeprecateActivityType, request);
        }

        /**
         * An Async wrapper for UndeprecateActivityType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UndeprecateActivityTypeRequestT = Model::UndeprecateActivityTypeRequest>
        void UndeprecateActivityTypeAsync(const UndeprecateActivityTypeRequestT& request, const UndeprecateActivityTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::UndeprecateActivityType, request, handler, context);
        }

        /**
         * <p>Undeprecates a previously deprecated domain. After a domain has been
         * undeprecated it can be used to create new workflow executions or register new
         * types.</p>  <p>This operation is eventually consistent. The results are
         * best effort and may not exactly reflect recent updates and changes.</p> 
         * <p> <b>Access Control</b> </p> <p>You can use IAM policies to control this
         * action's access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>You cannot use an IAM
         * policy to constrain this action's parameters.</p> </li> </ul> <p>If the caller
         * doesn't have sufficient permissions to invoke the action, or the parameter
         * values fall outside the specified constraints, the action fails. The associated
         * event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateDomainOutcome UndeprecateDomain(const Model::UndeprecateDomainRequest& request) const;

        /**
         * A Callable wrapper for UndeprecateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UndeprecateDomainRequestT = Model::UndeprecateDomainRequest>
        Model::UndeprecateDomainOutcomeCallable UndeprecateDomainCallable(const UndeprecateDomainRequestT& request) const
        {
            return SubmitCallable(&SWFClient::UndeprecateDomain, request);
        }

        /**
         * An Async wrapper for UndeprecateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UndeprecateDomainRequestT = Model::UndeprecateDomainRequest>
        void UndeprecateDomainAsync(const UndeprecateDomainRequestT& request, const UndeprecateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::UndeprecateDomain, request, handler, context);
        }

        /**
         * <p>Undeprecates a previously deprecated <i>workflow type</i>. After a workflow
         * type has been undeprecated, you can create new executions of that type. </p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not exactly reflect recent updates and changes.</p>  <p>
         * <b>Access Control</b> </p> <p>You can use IAM policies to control this action's
         * access to Amazon SWF resources as follows:</p> <ul> <li> <p>Use a
         * <code>Resource</code> element with the domain name to limit the action to only
         * specified domains.</p> </li> <li> <p>Use an <code>Action</code> element to allow
         * or deny permission to call this action.</p> </li> <li> <p>Constrain the
         * following parameters by using a <code>Condition</code> element with the
         * appropriate keys.</p> <ul> <li> <p> <code>workflowType.name</code>: String
         * constraint. The key is <code>swf:workflowType.name</code>.</p> </li> <li> <p>
         * <code>workflowType.version</code>: String constraint. The key is
         * <code>swf:workflowType.version</code>.</p> </li> </ul> </li> </ul> <p>If the
         * caller doesn't have sufficient permissions to invoke the action, or the
         * parameter values fall outside the specified constraints, the action fails. The
         * associated event attribute's <code>cause</code> parameter is set to
         * <code>OPERATION_NOT_PERMITTED</code>. For details and example IAM policies, see
         * <a
         * href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/swf-dev-iam.html">Using
         * IAM to Manage Access to Amazon SWF Workflows</a> in the <i>Amazon SWF Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UndeprecateWorkflowType">AWS
         * API Reference</a></p>
         */
        virtual Model::UndeprecateWorkflowTypeOutcome UndeprecateWorkflowType(const Model::UndeprecateWorkflowTypeRequest& request) const;

        /**
         * A Callable wrapper for UndeprecateWorkflowType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UndeprecateWorkflowTypeRequestT = Model::UndeprecateWorkflowTypeRequest>
        Model::UndeprecateWorkflowTypeOutcomeCallable UndeprecateWorkflowTypeCallable(const UndeprecateWorkflowTypeRequestT& request) const
        {
            return SubmitCallable(&SWFClient::UndeprecateWorkflowType, request);
        }

        /**
         * An Async wrapper for UndeprecateWorkflowType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UndeprecateWorkflowTypeRequestT = Model::UndeprecateWorkflowTypeRequest>
        void UndeprecateWorkflowTypeAsync(const UndeprecateWorkflowTypeRequestT& request, const UndeprecateWorkflowTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::UndeprecateWorkflowType, request, handler, context);
        }

        /**
         * <p>Remove a tag from a Amazon SWF domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SWFClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SWFClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SWFEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SWFClient>;
      void init(const SWFClientConfiguration& clientConfiguration);

      SWFClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SWFEndpointProviderBase> m_endpointProvider;
  };

} // namespace SWF
} // namespace Aws
