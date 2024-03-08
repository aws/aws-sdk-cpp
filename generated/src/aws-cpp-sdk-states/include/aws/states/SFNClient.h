/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/states/SFNServiceClientModel.h>

namespace Aws
{
namespace SFN
{
  /**
   * <fullname>Step Functions</fullname> <p>Step Functions is a service that lets you
   * coordinate the components of distributed applications and microservices using
   * visual workflows.</p> <p>You can use Step Functions to build applications from
   * individual components, each of which performs a discrete function, or
   * <i>task</i>, allowing you to scale and change applications quickly. Step
   * Functions provides a console that helps visualize the components of your
   * application as a series of steps. Step Functions automatically triggers and
   * tracks each step, and retries steps when there are errors, so your application
   * executes predictably and in the right order every time. Step Functions logs the
   * state of each step, so you can quickly diagnose and debug any issues.</p>
   * <p>Step Functions manages operations and underlying infrastructure to ensure
   * your application is available at any scale. You can run tasks on Amazon Web
   * Services, your own servers, or any system that has access to Amazon Web
   * Services. You can access and use Step Functions using the console, the Amazon
   * Web Services SDKs, or an HTTP API. For more information about Step Functions,
   * see the <i> <a
   * href="https://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">Step
   * Functions Developer Guide</a> </i>.</p>  <p>If you use the Step
   * Functions API actions using Amazon Web Services SDK integrations, make sure the
   * API actions are in camel case and parameter names are in Pascal case. For
   * example, you could use Step Functions API action <code>startSyncExecution</code>
   * and specify its parameter as <code>StateMachineArn</code>.</p> 
   */
  class AWS_SFN_API SFNClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SFNClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SFNClientConfiguration ClientConfigurationType;
      typedef SFNEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration(),
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SFNClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<SFNEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::SFN::SFNClientConfiguration& clientConfiguration = Aws::SFN::SFNClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SFNClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SFNClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SFNClient();

        /**
         * <p>Creates an activity. An activity is a task that you write in any programming
         * language and host on any machine that has access to Step Functions. Activities
         * must poll Step Functions using the <code>GetActivityTask</code> API action and
         * respond using <code>SendTask*</code> API actions. This function lets Step
         * Functions know the existence of your activity and returns an identifier for use
         * in a state machine and when polling from the activity.</p>  <p>This
         * operation is eventually consistent. The results are best effort and may not
         * reflect very recent updates and changes.</p>   <p>
         * <code>CreateActivity</code> is an idempotent API. Subsequent requests won’t
         * create a duplicate resource if it was already created.
         * <code>CreateActivity</code>'s idempotency check is based on the activity
         * <code>name</code>. If a following request has different <code>tags</code>
         * values, Step Functions will ignore these differences and treat it as an
         * idempotent request of the previous. In this case, <code>tags</code> will not be
         * updated, even if they are different.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateActivityOutcome CreateActivity(const Model::CreateActivityRequest& request) const;

        /**
         * A Callable wrapper for CreateActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateActivityRequestT = Model::CreateActivityRequest>
        Model::CreateActivityOutcomeCallable CreateActivityCallable(const CreateActivityRequestT& request) const
        {
            return SubmitCallable(&SFNClient::CreateActivity, request);
        }

        /**
         * An Async wrapper for CreateActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateActivityRequestT = Model::CreateActivityRequest>
        void CreateActivityAsync(const CreateActivityRequestT& request, const CreateActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::CreateActivity, request, handler, context);
        }

        /**
         * <p>Creates a state machine. A state machine consists of a collection of states
         * that can do work (<code>Task</code> states), determine to which states to
         * transition next (<code>Choice</code> states), stop an execution with an error
         * (<code>Fail</code> states), and so on. State machines are specified using a
         * JSON-based, structured language. For more information, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-amazon-states-language.html">Amazon
         * States Language</a> in the Step Functions User Guide.</p> <p>If you set the
         * <code>publish</code> parameter of this API action to <code>true</code>, it
         * publishes version <code>1</code> as the first revision of the state machine.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p>   <p>
         * <code>CreateStateMachine</code> is an idempotent API. Subsequent requests won’t
         * create a duplicate resource if it was already created.
         * <code>CreateStateMachine</code>'s idempotency check is based on the state
         * machine <code>name</code>, <code>definition</code>, <code>type</code>,
         * <code>LoggingConfiguration</code>, and <code>TracingConfiguration</code>. The
         * check is also based on the <code>publish</code> and
         * <code>versionDescription</code> parameters. If a following request has a
         * different <code>roleArn</code> or <code>tags</code>, Step Functions will ignore
         * these differences and treat it as an idempotent request of the previous. In this
         * case, <code>roleArn</code> and <code>tags</code> will not be updated, even if
         * they are different.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStateMachineOutcome CreateStateMachine(const Model::CreateStateMachineRequest& request) const;

        /**
         * A Callable wrapper for CreateStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStateMachineRequestT = Model::CreateStateMachineRequest>
        Model::CreateStateMachineOutcomeCallable CreateStateMachineCallable(const CreateStateMachineRequestT& request) const
        {
            return SubmitCallable(&SFNClient::CreateStateMachine, request);
        }

        /**
         * An Async wrapper for CreateStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStateMachineRequestT = Model::CreateStateMachineRequest>
        void CreateStateMachineAsync(const CreateStateMachineRequestT& request, const CreateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::CreateStateMachine, request, handler, context);
        }

        /**
         * <p>Creates an <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>
         * for a state machine that points to one or two <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">versions</a>
         * of the same state machine. You can set your application to call
         * <a>StartExecution</a> with an alias and update the version the alias uses
         * without changing the client's code.</p> <p>You can also map an alias to split
         * <a>StartExecution</a> requests between two versions of a state machine. To do
         * this, add a second <code>RoutingConfig</code> object in the
         * <code>routingConfiguration</code> parameter. You must also specify the
         * percentage of execution run requests each version should receive in both
         * <code>RoutingConfig</code> objects. Step Functions randomly chooses which
         * version runs a given execution based on the percentage you specify.</p> <p>To
         * create an alias that points to a single version, specify a single
         * <code>RoutingConfig</code> object with a <code>weight</code> set to 100.</p>
         * <p>You can create up to 100 aliases for each state machine. You must delete
         * unused aliases using the <a>DeleteStateMachineAlias</a> API action.</p> <p>
         * <code>CreateStateMachineAlias</code> is an idempotent API. Step Functions bases
         * the idempotency check on the <code>stateMachineArn</code>,
         * <code>description</code>, <code>name</code>, and
         * <code>routingConfiguration</code> parameters. Requests that contain the same
         * values for these parameters return a successful idempotent response without
         * creating a duplicate resource.</p> <p> <b>Related operations:</b> </p> <ul> <li>
         * <p> <a>DescribeStateMachineAlias</a> </p> </li> <li> <p>
         * <a>ListStateMachineAliases</a> </p> </li> <li> <p>
         * <a>UpdateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DeleteStateMachineAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/CreateStateMachineAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStateMachineAliasOutcome CreateStateMachineAlias(const Model::CreateStateMachineAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateStateMachineAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateStateMachineAliasRequestT = Model::CreateStateMachineAliasRequest>
        Model::CreateStateMachineAliasOutcomeCallable CreateStateMachineAliasCallable(const CreateStateMachineAliasRequestT& request) const
        {
            return SubmitCallable(&SFNClient::CreateStateMachineAlias, request);
        }

        /**
         * An Async wrapper for CreateStateMachineAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStateMachineAliasRequestT = Model::CreateStateMachineAliasRequest>
        void CreateStateMachineAliasAsync(const CreateStateMachineAliasRequestT& request, const CreateStateMachineAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::CreateStateMachineAlias, request, handler, context);
        }

        /**
         * <p>Deletes an activity.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteActivityOutcome DeleteActivity(const Model::DeleteActivityRequest& request) const;

        /**
         * A Callable wrapper for DeleteActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteActivityRequestT = Model::DeleteActivityRequest>
        Model::DeleteActivityOutcomeCallable DeleteActivityCallable(const DeleteActivityRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DeleteActivity, request);
        }

        /**
         * An Async wrapper for DeleteActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteActivityRequestT = Model::DeleteActivityRequest>
        void DeleteActivityAsync(const DeleteActivityRequestT& request, const DeleteActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DeleteActivity, request, handler, context);
        }

        /**
         * <p>Deletes a state machine. This is an asynchronous operation. It sets the state
         * machine's status to <code>DELETING</code> and begins the deletion process. A
         * state machine is deleted only when all its executions are completed. On the next
         * state transition, the state machine's executions are terminated.</p> <p>A
         * qualified state machine ARN can either refer to a <i>Distributed Map state</i>
         * defined within a state machine, a version ARN, or an alias ARN.</p> <p>The
         * following are some examples of qualified and unqualified state machine ARNs:</p>
         * <ul> <li> <p>The following qualified state machine ARN refers to a
         * <i>Distributed Map state</i> with a label <code>mapStateLabel</code> in a state
         * machine named <code>myStateMachine</code>.</p> <p>
         * <code>arn:partition:states:region:account-id:stateMachine:myStateMachine/mapStateLabel</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * <i>Distributed Map state</i>, the request fails with
         * <code>ValidationException</code>.</p>  </li> <li> <p>The following
         * unqualified state machine ARN refers to a state machine named
         * <code>myStateMachine</code>.</p> <p>
         * <code>arn:partition:states:region:account-id:stateMachine:myStateMachine</code>
         * </p> </li> </ul> <p>This API action also deletes all <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">versions</a>
         * and <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">aliases</a>
         * associated with a state machine.</p>  <p>For <code>EXPRESS</code> state
         * machines, the deletion happens eventually (usually in less than a minute).
         * Running executions may emit logs after <code>DeleteStateMachine</code> API is
         * called.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStateMachineOutcome DeleteStateMachine(const Model::DeleteStateMachineRequest& request) const;

        /**
         * A Callable wrapper for DeleteStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStateMachineRequestT = Model::DeleteStateMachineRequest>
        Model::DeleteStateMachineOutcomeCallable DeleteStateMachineCallable(const DeleteStateMachineRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DeleteStateMachine, request);
        }

        /**
         * An Async wrapper for DeleteStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStateMachineRequestT = Model::DeleteStateMachineRequest>
        void DeleteStateMachineAsync(const DeleteStateMachineRequestT& request, const DeleteStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DeleteStateMachine, request, handler, context);
        }

        /**
         * <p>Deletes a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>.</p>
         * <p>After you delete a state machine alias, you can't use it to start executions.
         * When you delete a state machine alias, Step Functions doesn't delete the state
         * machine versions that alias references.</p> <p> <b>Related operations:</b> </p>
         * <ul> <li> <p> <a>CreateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DescribeStateMachineAlias</a> </p> </li> <li> <p>
         * <a>ListStateMachineAliases</a> </p> </li> <li> <p>
         * <a>UpdateStateMachineAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachineAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStateMachineAliasOutcome DeleteStateMachineAlias(const Model::DeleteStateMachineAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteStateMachineAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStateMachineAliasRequestT = Model::DeleteStateMachineAliasRequest>
        Model::DeleteStateMachineAliasOutcomeCallable DeleteStateMachineAliasCallable(const DeleteStateMachineAliasRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DeleteStateMachineAlias, request);
        }

        /**
         * An Async wrapper for DeleteStateMachineAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStateMachineAliasRequestT = Model::DeleteStateMachineAliasRequest>
        void DeleteStateMachineAliasAsync(const DeleteStateMachineAliasRequestT& request, const DeleteStateMachineAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DeleteStateMachineAlias, request, handler, context);
        }

        /**
         * <p>Deletes a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>.
         * After you delete a version, you can't call <a>StartExecution</a> using that
         * version's ARN or use the version with a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>.</p>
         *  <p>Deleting a state machine version won't terminate its in-progress
         * executions.</p>   <p>You can't delete a state machine version
         * currently referenced by one or more aliases. Before you delete a version, you
         * must either delete the aliases or update them to point to another state machine
         * version.</p>  <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>PublishStateMachineVersion</a> </p> </li> <li> <p>
         * <a>ListStateMachineVersions</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DeleteStateMachineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStateMachineVersionOutcome DeleteStateMachineVersion(const Model::DeleteStateMachineVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteStateMachineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStateMachineVersionRequestT = Model::DeleteStateMachineVersionRequest>
        Model::DeleteStateMachineVersionOutcomeCallable DeleteStateMachineVersionCallable(const DeleteStateMachineVersionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DeleteStateMachineVersion, request);
        }

        /**
         * An Async wrapper for DeleteStateMachineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStateMachineVersionRequestT = Model::DeleteStateMachineVersionRequest>
        void DeleteStateMachineVersionAsync(const DeleteStateMachineVersionRequestT& request, const DeleteStateMachineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DeleteStateMachineVersion, request, handler, context);
        }

        /**
         * <p>Describes an activity.</p>  <p>This operation is eventually consistent.
         * The results are best effort and may not reflect very recent updates and
         * changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeActivity">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeActivityOutcome DescribeActivity(const Model::DescribeActivityRequest& request) const;

        /**
         * A Callable wrapper for DescribeActivity that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeActivityRequestT = Model::DescribeActivityRequest>
        Model::DescribeActivityOutcomeCallable DescribeActivityCallable(const DescribeActivityRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeActivity, request);
        }

        /**
         * An Async wrapper for DescribeActivity that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeActivityRequestT = Model::DescribeActivityRequest>
        void DescribeActivityAsync(const DescribeActivityRequestT& request, const DescribeActivityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeActivity, request, handler, context);
        }

        /**
         * <p>Provides information about a state machine execution, such as the state
         * machine associated with the execution, the execution input and output, and
         * relevant execution metadata. If you've <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-executions.html">redriven</a>
         * an execution, you can use this API action to return information about the
         * redrives of that execution. In addition, you can use this API action to return
         * the Map Run Amazon Resource Name (ARN) if the execution was dispatched by a Map
         * Run.</p> <p>If you specify a version or alias ARN when you call the
         * <a>StartExecution</a> API action, <code>DescribeExecution</code> returns that
         * ARN.</p>  <p>This operation is eventually consistent. The results are best
         * effort and may not reflect very recent updates and changes.</p> 
         * <p>Executions of an <code>EXPRESS</code> state machine aren't supported by
         * <code>DescribeExecution</code> unless a Map Run dispatched them.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeExecutionOutcome DescribeExecution(const Model::DescribeExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
        Model::DescribeExecutionOutcomeCallable DescribeExecutionCallable(const DescribeExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeExecution, request);
        }

        /**
         * An Async wrapper for DescribeExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeExecutionRequestT = Model::DescribeExecutionRequest>
        void DescribeExecutionAsync(const DescribeExecutionRequestT& request, const DescribeExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeExecution, request, handler, context);
        }

        /**
         * <p>Provides information about a Map Run's configuration, progress, and results.
         * If you've <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-map-run.html">redriven</a>
         * a Map Run, this API action also returns information about the redrives of that
         * Map Run. For more information, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-examine-map-run.html">Examining
         * Map Run</a> in the <i>Step Functions Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeMapRun">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMapRunOutcome DescribeMapRun(const Model::DescribeMapRunRequest& request) const;

        /**
         * A Callable wrapper for DescribeMapRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeMapRunRequestT = Model::DescribeMapRunRequest>
        Model::DescribeMapRunOutcomeCallable DescribeMapRunCallable(const DescribeMapRunRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeMapRun, request);
        }

        /**
         * An Async wrapper for DescribeMapRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMapRunRequestT = Model::DescribeMapRunRequest>
        void DescribeMapRunAsync(const DescribeMapRunRequestT& request, const DescribeMapRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeMapRun, request, handler, context);
        }

        /**
         * <p>Provides information about a state machine's definition, its IAM role Amazon
         * Resource Name (ARN), and configuration.</p> <p>A qualified state machine ARN can
         * either refer to a <i>Distributed Map state</i> defined within a state machine, a
         * version ARN, or an alias ARN.</p> <p>The following are some examples of
         * qualified and unqualified state machine ARNs:</p> <ul> <li> <p>The following
         * qualified state machine ARN refers to a <i>Distributed Map state</i> with a
         * label <code>mapStateLabel</code> in a state machine named
         * <code>myStateMachine</code>.</p> <p>
         * <code>arn:partition:states:region:account-id:stateMachine:myStateMachine/mapStateLabel</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * <i>Distributed Map state</i>, the request fails with
         * <code>ValidationException</code>.</p>  </li> <li> <p>The following
         * qualified state machine ARN refers to an alias named <code>PROD</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine:PROD&gt;</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * version ARN or an alias ARN, the request starts execution for that version or
         * alias.</p>  </li> <li> <p>The following unqualified state machine ARN
         * refers to a state machine named <code>myStateMachine</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine&gt;</code>
         * </p> </li> </ul> <p>This API action returns the details for a state machine
         * version if the <code>stateMachineArn</code> you specify is a state machine
         * version ARN.</p>  <p>This operation is eventually consistent. The results
         * are best effort and may not reflect very recent updates and changes.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineOutcome DescribeStateMachine(const Model::DescribeStateMachineRequest& request) const;

        /**
         * A Callable wrapper for DescribeStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStateMachineRequestT = Model::DescribeStateMachineRequest>
        Model::DescribeStateMachineOutcomeCallable DescribeStateMachineCallable(const DescribeStateMachineRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeStateMachine, request);
        }

        /**
         * An Async wrapper for DescribeStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStateMachineRequestT = Model::DescribeStateMachineRequest>
        void DescribeStateMachineAsync(const DescribeStateMachineRequestT& request, const DescribeStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeStateMachine, request, handler, context);
        }

        /**
         * <p>Returns details about a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p> <a>CreateStateMachineAlias</a>
         * </p> </li> <li> <p> <a>ListStateMachineAliases</a> </p> </li> <li> <p>
         * <a>UpdateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DeleteStateMachineAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineAliasOutcome DescribeStateMachineAlias(const Model::DescribeStateMachineAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeStateMachineAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStateMachineAliasRequestT = Model::DescribeStateMachineAliasRequest>
        Model::DescribeStateMachineAliasOutcomeCallable DescribeStateMachineAliasCallable(const DescribeStateMachineAliasRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeStateMachineAlias, request);
        }

        /**
         * An Async wrapper for DescribeStateMachineAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStateMachineAliasRequestT = Model::DescribeStateMachineAliasRequest>
        void DescribeStateMachineAliasAsync(const DescribeStateMachineAliasRequestT& request, const DescribeStateMachineAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeStateMachineAlias, request, handler, context);
        }

        /**
         * <p>Provides information about a state machine's definition, its execution role
         * ARN, and configuration. If a Map Run dispatched the execution, this action
         * returns the Map Run Amazon Resource Name (ARN) in the response. The state
         * machine returned is the state machine associated with the Map Run.</p> 
         * <p>This operation is eventually consistent. The results are best effort and may
         * not reflect very recent updates and changes.</p>  <p>This API action is
         * not supported by <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/DescribeStateMachineForExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStateMachineForExecutionOutcome DescribeStateMachineForExecution(const Model::DescribeStateMachineForExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeStateMachineForExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeStateMachineForExecutionRequestT = Model::DescribeStateMachineForExecutionRequest>
        Model::DescribeStateMachineForExecutionOutcomeCallable DescribeStateMachineForExecutionCallable(const DescribeStateMachineForExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::DescribeStateMachineForExecution, request);
        }

        /**
         * An Async wrapper for DescribeStateMachineForExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStateMachineForExecutionRequestT = Model::DescribeStateMachineForExecutionRequest>
        void DescribeStateMachineForExecutionAsync(const DescribeStateMachineForExecutionRequestT& request, const DescribeStateMachineForExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::DescribeStateMachineForExecution, request, handler, context);
        }

        /**
         * <p>Used by workers to retrieve a task (with the specified activity ARN) which
         * has been scheduled for execution by a running state machine. This initiates a
         * long poll, where the service holds the HTTP connection open and responds as soon
         * as a task becomes available (i.e. an execution of a task of this type is
         * needed.) The maximum time the service holds on to the request before responding
         * is 60 seconds. If no task is available within 60 seconds, the poll returns a
         * <code>taskToken</code> with a null string.</p>  <p>This API action isn't
         * logged in CloudTrail.</p>   <p>Workers should set their client
         * side socket timeout to at least 65 seconds (5 seconds higher than the maximum
         * time the service may hold the poll request).</p> <p>Polling with
         * <code>GetActivityTask</code> can cause latency in some implementations. See <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/bp-activity-pollers.html">Avoid
         * Latency When Polling for Activity Tasks</a> in the Step Functions Developer
         * Guide.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetActivityTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActivityTaskOutcome GetActivityTask(const Model::GetActivityTaskRequest& request) const;

        /**
         * A Callable wrapper for GetActivityTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetActivityTaskRequestT = Model::GetActivityTaskRequest>
        Model::GetActivityTaskOutcomeCallable GetActivityTaskCallable(const GetActivityTaskRequestT& request) const
        {
            return SubmitCallable(&SFNClient::GetActivityTask, request);
        }

        /**
         * An Async wrapper for GetActivityTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetActivityTaskRequestT = Model::GetActivityTaskRequest>
        void GetActivityTaskAsync(const GetActivityTaskRequestT& request, const GetActivityTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::GetActivityTask, request, handler, context);
        }

        /**
         * <p>Returns the history of the specified execution as a list of events. By
         * default, the results are returned in ascending order of the
         * <code>timeStamp</code> of the events. Use the <code>reverseOrder</code>
         * parameter to get the latest events first.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p> <p>This API action is not
         * supported by <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/GetExecutionHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExecutionHistoryOutcome GetExecutionHistory(const Model::GetExecutionHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetExecutionHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExecutionHistoryRequestT = Model::GetExecutionHistoryRequest>
        Model::GetExecutionHistoryOutcomeCallable GetExecutionHistoryCallable(const GetExecutionHistoryRequestT& request) const
        {
            return SubmitCallable(&SFNClient::GetExecutionHistory, request);
        }

        /**
         * An Async wrapper for GetExecutionHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExecutionHistoryRequestT = Model::GetExecutionHistoryRequest>
        void GetExecutionHistoryAsync(const GetExecutionHistoryRequestT& request, const GetExecutionHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::GetExecutionHistory, request, handler, context);
        }

        /**
         * <p>Lists the existing activities.</p> <p>If <code>nextToken</code> is returned,
         * there are more results available. The value of <code>nextToken</code> is a
         * unique pagination token for each page. Make the call again using the returned
         * token to retrieve the next page. Keep all other arguments unchanged. Each
         * pagination token expires after 24 hours. Using an expired pagination token will
         * return an <i>HTTP 400 InvalidToken</i> error.</p>  <p>This operation is
         * eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListActivities">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActivitiesOutcome ListActivities(const Model::ListActivitiesRequest& request) const;

        /**
         * A Callable wrapper for ListActivities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListActivitiesRequestT = Model::ListActivitiesRequest>
        Model::ListActivitiesOutcomeCallable ListActivitiesCallable(const ListActivitiesRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListActivities, request);
        }

        /**
         * An Async wrapper for ListActivities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActivitiesRequestT = Model::ListActivitiesRequest>
        void ListActivitiesAsync(const ListActivitiesRequestT& request, const ListActivitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListActivities, request, handler, context);
        }

        /**
         * <p>Lists all executions of a state machine or a Map Run. You can list all
         * executions related to a state machine by specifying a state machine Amazon
         * Resource Name (ARN), or those related to a Map Run by specifying a Map Run ARN.
         * Using this API action, you can also list all <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-executions.html">redriven</a>
         * executions.</p> <p>You can also provide a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>
         * ARN or <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>
         * ARN to list the executions associated with a specific alias or version.</p>
         * <p>Results are sorted by time, with the most recent execution first.</p> <p>If
         * <code>nextToken</code> is returned, there are more results available. The value
         * of <code>nextToken</code> is a unique pagination token for each page. Make the
         * call again using the returned token to retrieve the next page. Keep all other
         * arguments unchanged. Each pagination token expires after 24 hours. Using an
         * expired pagination token will return an <i>HTTP 400 InvalidToken</i> error.</p>
         *  <p>This operation is eventually consistent. The results are best effort
         * and may not reflect very recent updates and changes.</p>  <p>This API
         * action is not supported by <code>EXPRESS</code> state machines.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListExecutionsOutcome ListExecutions(const Model::ListExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        Model::ListExecutionsOutcomeCallable ListExecutionsCallable(const ListExecutionsRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListExecutions, request);
        }

        /**
         * An Async wrapper for ListExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListExecutionsRequestT = Model::ListExecutionsRequest>
        void ListExecutionsAsync(const ListExecutionsRequestT& request, const ListExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListExecutions, request, handler, context);
        }

        /**
         * <p>Lists all Map Runs that were started by a given state machine execution. Use
         * this API action to obtain Map Run ARNs, and then call
         * <code>DescribeMapRun</code> to obtain more information, if needed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListMapRuns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMapRunsOutcome ListMapRuns(const Model::ListMapRunsRequest& request) const;

        /**
         * A Callable wrapper for ListMapRuns that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMapRunsRequestT = Model::ListMapRunsRequest>
        Model::ListMapRunsOutcomeCallable ListMapRunsCallable(const ListMapRunsRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListMapRuns, request);
        }

        /**
         * An Async wrapper for ListMapRuns that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMapRunsRequestT = Model::ListMapRunsRequest>
        void ListMapRunsAsync(const ListMapRunsRequestT& request, const ListMapRunsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListMapRuns, request, handler, context);
        }

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">aliases</a>
         * for a specified state machine ARN. Results are sorted by time, with the most
         * recently created aliases listed first. </p> <p>To list aliases that reference a
         * state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>,
         * you can specify the version ARN in the <code>stateMachineArn</code>
         * parameter.</p> <p>If <code>nextToken</code> is returned, there are more results
         * available. The value of <code>nextToken</code> is a unique pagination token for
         * each page. Make the call again using the returned token to retrieve the next
         * page. Keep all other arguments unchanged. Each pagination token expires after 24
         * hours. Using an expired pagination token will return an <i>HTTP 400
         * InvalidToken</i> error.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DescribeStateMachineAlias</a> </p> </li> <li> <p>
         * <a>UpdateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DeleteStateMachineAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachineAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStateMachineAliasesOutcome ListStateMachineAliases(const Model::ListStateMachineAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListStateMachineAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStateMachineAliasesRequestT = Model::ListStateMachineAliasesRequest>
        Model::ListStateMachineAliasesOutcomeCallable ListStateMachineAliasesCallable(const ListStateMachineAliasesRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListStateMachineAliases, request);
        }

        /**
         * An Async wrapper for ListStateMachineAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStateMachineAliasesRequestT = Model::ListStateMachineAliasesRequest>
        void ListStateMachineAliasesAsync(const ListStateMachineAliasesRequestT& request, const ListStateMachineAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListStateMachineAliases, request, handler, context);
        }

        /**
         * <p>Lists <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">versions</a>
         * for the specified state machine Amazon Resource Name (ARN).</p> <p>The results
         * are sorted in descending order of the version creation time.</p> <p>If
         * <code>nextToken</code> is returned, there are more results available. The value
         * of <code>nextToken</code> is a unique pagination token for each page. Make the
         * call again using the returned token to retrieve the next page. Keep all other
         * arguments unchanged. Each pagination token expires after 24 hours. Using an
         * expired pagination token will return an <i>HTTP 400 InvalidToken</i> error.</p>
         * <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>PublishStateMachineVersion</a> </p> </li> <li> <p>
         * <a>DeleteStateMachineVersion</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachineVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStateMachineVersionsOutcome ListStateMachineVersions(const Model::ListStateMachineVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListStateMachineVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStateMachineVersionsRequestT = Model::ListStateMachineVersionsRequest>
        Model::ListStateMachineVersionsOutcomeCallable ListStateMachineVersionsCallable(const ListStateMachineVersionsRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListStateMachineVersions, request);
        }

        /**
         * An Async wrapper for ListStateMachineVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStateMachineVersionsRequestT = Model::ListStateMachineVersionsRequest>
        void ListStateMachineVersionsAsync(const ListStateMachineVersionsRequestT& request, const ListStateMachineVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListStateMachineVersions, request, handler, context);
        }

        /**
         * <p>Lists the existing state machines.</p> <p>If <code>nextToken</code> is
         * returned, there are more results available. The value of <code>nextToken</code>
         * is a unique pagination token for each page. Make the call again using the
         * returned token to retrieve the next page. Keep all other arguments unchanged.
         * Each pagination token expires after 24 hours. Using an expired pagination token
         * will return an <i>HTTP 400 InvalidToken</i> error.</p>  <p>This operation
         * is eventually consistent. The results are best effort and may not reflect very
         * recent updates and changes.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListStateMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStateMachinesOutcome ListStateMachines(const Model::ListStateMachinesRequest& request) const;

        /**
         * A Callable wrapper for ListStateMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStateMachinesRequestT = Model::ListStateMachinesRequest>
        Model::ListStateMachinesOutcomeCallable ListStateMachinesCallable(const ListStateMachinesRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListStateMachines, request);
        }

        /**
         * An Async wrapper for ListStateMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStateMachinesRequestT = Model::ListStateMachinesRequest>
        void ListStateMachinesAsync(const ListStateMachinesRequestT& request, const ListStateMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListStateMachines, request, handler, context);
        }

        /**
         * <p>List tags for a given resource.</p> <p>Tags may only contain Unicode letters,
         * digits, white space, or these symbols: <code>_ . : / = + -
         * @</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SFNClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>
         * from the current revision of a state machine. Use versions to create immutable
         * snapshots of your state machine. You can start executions from versions either
         * directly or with an alias. To create an alias, use
         * <a>CreateStateMachineAlias</a>.</p> <p>You can publish up to 1000 versions for
         * each state machine. You must manually delete unused versions using the
         * <a>DeleteStateMachineVersion</a> API action.</p> <p>
         * <code>PublishStateMachineVersion</code> is an idempotent API. It doesn't create
         * a duplicate state machine version if it already exists for the current revision.
         * Step Functions bases <code>PublishStateMachineVersion</code>'s idempotency check
         * on the <code>stateMachineArn</code>, <code>name</code>, and
         * <code>revisionId</code> parameters. Requests with the same parameters return a
         * successful idempotent response. If you don't specify a <code>revisionId</code>,
         * Step Functions checks for a previously published version of the state machine's
         * current revision.</p> <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>DeleteStateMachineVersion</a> </p> </li> <li> <p>
         * <a>ListStateMachineVersions</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/PublishStateMachineVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::PublishStateMachineVersionOutcome PublishStateMachineVersion(const Model::PublishStateMachineVersionRequest& request) const;

        /**
         * A Callable wrapper for PublishStateMachineVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PublishStateMachineVersionRequestT = Model::PublishStateMachineVersionRequest>
        Model::PublishStateMachineVersionOutcomeCallable PublishStateMachineVersionCallable(const PublishStateMachineVersionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::PublishStateMachineVersion, request);
        }

        /**
         * An Async wrapper for PublishStateMachineVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PublishStateMachineVersionRequestT = Model::PublishStateMachineVersionRequest>
        void PublishStateMachineVersionAsync(const PublishStateMachineVersionRequestT& request, const PublishStateMachineVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::PublishStateMachineVersion, request, handler, context);
        }

        /**
         * <p>Restarts unsuccessful executions of Standard workflows that didn't complete
         * successfully in the last 14 days. These include failed, aborted, or timed out
         * executions. When you <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-executions.html">redrive</a>
         * an execution, it continues the failed execution from the unsuccessful step and
         * uses the same input. Step Functions preserves the results and execution history
         * of the successful steps, and doesn't rerun these steps when you redrive an
         * execution. Redriven executions use the same state machine definition and
         * execution ARN as the original execution attempt.</p> <p>For workflows that
         * include an <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-map-state.html">Inline
         * Map</a> or <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-parallel-state.html">Parallel</a>
         * state, <code>RedriveExecution</code> API action reschedules and redrives only
         * the iterations and branches that failed or aborted.</p> <p>To redrive a workflow
         * that includes a Distributed Map state whose Map Run failed, you must redrive the
         * <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/use-dist-map-orchestrate-large-scale-parallel-workloads.html#dist-map-orchestrate-parallel-workloads-key-terms">parent
         * workflow</a>. The parent workflow redrives all the unsuccessful states,
         * including a failed Map Run. If a Map Run was not started in the original
         * execution attempt, the redriven parent workflow starts the Map Run.</p> 
         * <p>This API action is not supported by <code>EXPRESS</code> state machines.</p>
         * <p>However, you can restart the unsuccessful executions of Express child
         * workflows in a Distributed Map by redriving its Map Run. When you redrive a Map
         * Run, the Express child workflows are rerun using the <a>StartExecution</a> API
         * action. For more information, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/redrive-map-run.html">Redriving
         * Map Runs</a>.</p>  <p>You can redrive executions if your original
         * execution meets the following conditions:</p> <ul> <li> <p>The execution status
         * isn't <code>SUCCEEDED</code>.</p> </li> <li> <p>Your workflow execution has not
         * exceeded the redrivable period of 14 days. Redrivable period refers to the time
         * during which you can redrive a given execution. This period starts from the day
         * a state machine completes its execution.</p> </li> <li> <p>The workflow
         * execution has not exceeded the maximum open time of one year. For more
         * information about state machine quotas, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/limits-overview.html#service-limits-state-machine-executions">Quotas
         * related to state machine executions</a>.</p> </li> <li> <p>The execution event
         * history count is less than 24,999. Redriven executions append their event
         * history to the existing event history. Make sure your workflow execution
         * contains less than 24,999 events to accommodate the
         * <code>ExecutionRedriven</code> history event and at least one other history
         * event.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/RedriveExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::RedriveExecutionOutcome RedriveExecution(const Model::RedriveExecutionRequest& request) const;

        /**
         * A Callable wrapper for RedriveExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RedriveExecutionRequestT = Model::RedriveExecutionRequest>
        Model::RedriveExecutionOutcomeCallable RedriveExecutionCallable(const RedriveExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::RedriveExecution, request);
        }

        /**
         * An Async wrapper for RedriveExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RedriveExecutionRequestT = Model::RedriveExecutionRequest>
        void RedriveExecutionAsync(const RedriveExecutionRequestT& request, const RedriveExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::RedriveExecution, request, handler, context);
        }

        /**
         * <p>Used by activity workers, Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern, and optionally Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-sync">job
         * run</a> pattern to report that the task identified by the <code>taskToken</code>
         * failed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskFailure">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskFailureOutcome SendTaskFailure(const Model::SendTaskFailureRequest& request) const;

        /**
         * A Callable wrapper for SendTaskFailure that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTaskFailureRequestT = Model::SendTaskFailureRequest>
        Model::SendTaskFailureOutcomeCallable SendTaskFailureCallable(const SendTaskFailureRequestT& request) const
        {
            return SubmitCallable(&SFNClient::SendTaskFailure, request);
        }

        /**
         * An Async wrapper for SendTaskFailure that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTaskFailureRequestT = Model::SendTaskFailureRequest>
        void SendTaskFailureAsync(const SendTaskFailureRequestT& request, const SendTaskFailureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::SendTaskFailure, request, handler, context);
        }

        /**
         * <p>Used by activity workers and Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern, and optionally Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-sync">job
         * run</a> pattern to report to Step Functions that the task represented by the
         * specified <code>taskToken</code> is still making progress. This action resets
         * the <code>Heartbeat</code> clock. The <code>Heartbeat</code> threshold is
         * specified in the state machine's Amazon States Language definition
         * (<code>HeartbeatSeconds</code>). This action does not in itself create an event
         * in the execution history. However, if the task times out, the execution history
         * contains an <code>ActivityTimedOut</code> entry for activities, or a
         * <code>TaskTimedOut</code> entry for tasks using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-sync">job
         * run</a> or <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern.</p>  <p>The <code>Timeout</code> of a task, defined in the state
         * machine's Amazon States Language definition, is its maximum allowed duration,
         * regardless of the number of <a>SendTaskHeartbeat</a> requests received. Use
         * <code>HeartbeatSeconds</code> to configure the timeout interval for
         * heartbeats.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskHeartbeatOutcome SendTaskHeartbeat(const Model::SendTaskHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for SendTaskHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTaskHeartbeatRequestT = Model::SendTaskHeartbeatRequest>
        Model::SendTaskHeartbeatOutcomeCallable SendTaskHeartbeatCallable(const SendTaskHeartbeatRequestT& request) const
        {
            return SubmitCallable(&SFNClient::SendTaskHeartbeat, request);
        }

        /**
         * An Async wrapper for SendTaskHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTaskHeartbeatRequestT = Model::SendTaskHeartbeatRequest>
        void SendTaskHeartbeatAsync(const SendTaskHeartbeatRequestT& request, const SendTaskHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::SendTaskHeartbeat, request, handler, context);
        }

        /**
         * <p>Used by activity workers, Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-wait-token">callback</a>
         * pattern, and optionally Task states using the <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html#connect-sync">job
         * run</a> pattern to report that the task identified by the <code>taskToken</code>
         * completed successfully.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/SendTaskSuccess">AWS
         * API Reference</a></p>
         */
        virtual Model::SendTaskSuccessOutcome SendTaskSuccess(const Model::SendTaskSuccessRequest& request) const;

        /**
         * A Callable wrapper for SendTaskSuccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendTaskSuccessRequestT = Model::SendTaskSuccessRequest>
        Model::SendTaskSuccessOutcomeCallable SendTaskSuccessCallable(const SendTaskSuccessRequestT& request) const
        {
            return SubmitCallable(&SFNClient::SendTaskSuccess, request);
        }

        /**
         * An Async wrapper for SendTaskSuccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendTaskSuccessRequestT = Model::SendTaskSuccessRequest>
        void SendTaskSuccessAsync(const SendTaskSuccessRequestT& request, const SendTaskSuccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::SendTaskSuccess, request, handler, context);
        }

        /**
         * <p>Starts a state machine execution.</p> <p>A qualified state machine ARN can
         * either refer to a <i>Distributed Map state</i> defined within a state machine, a
         * version ARN, or an alias ARN.</p> <p>The following are some examples of
         * qualified and unqualified state machine ARNs:</p> <ul> <li> <p>The following
         * qualified state machine ARN refers to a <i>Distributed Map state</i> with a
         * label <code>mapStateLabel</code> in a state machine named
         * <code>myStateMachine</code>.</p> <p>
         * <code>arn:partition:states:region:account-id:stateMachine:myStateMachine/mapStateLabel</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * <i>Distributed Map state</i>, the request fails with
         * <code>ValidationException</code>.</p>  </li> <li> <p>The following
         * qualified state machine ARN refers to an alias named <code>PROD</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine:PROD&gt;</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * version ARN or an alias ARN, the request starts execution for that version or
         * alias.</p>  </li> <li> <p>The following unqualified state machine ARN
         * refers to a state machine named <code>myStateMachine</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine&gt;</code>
         * </p> </li> </ul> <p>If you start an execution with an unqualified state machine
         * ARN, Step Functions uses the latest revision of the state machine for the
         * execution.</p> <p>To start executions of a state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>,
         * call <code>StartExecution</code> and provide the version ARN or the ARN of an <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>
         * that points to the version.</p>  <p> <code>StartExecution</code> is
         * idempotent for <code>STANDARD</code> workflows. For a <code>STANDARD</code>
         * workflow, if you call <code>StartExecution</code> with the same name and input
         * as a running execution, the call succeeds and return the same response as the
         * original request. If the execution is closed or if the input is different, it
         * returns a <code>400 ExecutionAlreadyExists</code> error. You can reuse names
         * after 90 days. </p> <p> <code>StartExecution</code> isn't idempotent for
         * <code>EXPRESS</code> workflows. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartExecutionOutcome StartExecution(const Model::StartExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartExecutionRequestT = Model::StartExecutionRequest>
        Model::StartExecutionOutcomeCallable StartExecutionCallable(const StartExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::StartExecution, request);
        }

        /**
         * An Async wrapper for StartExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartExecutionRequestT = Model::StartExecutionRequest>
        void StartExecutionAsync(const StartExecutionRequestT& request, const StartExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::StartExecution, request, handler, context);
        }

        /**
         * <p>Starts a Synchronous Express state machine execution.
         * <code>StartSyncExecution</code> is not available for <code>STANDARD</code>
         * workflows.</p>  <p> <code>StartSyncExecution</code> will return a
         * <code>200 OK</code> response, even if your execution fails, because the status
         * code in the API response doesn't reflect function errors. Error codes are
         * reserved for errors that prevent your execution from running, such as
         * permissions errors, limit errors, or issues with your state machine code and
         * configuration. </p>   <p>This API action isn't logged in
         * CloudTrail.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StartSyncExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSyncExecutionOutcome StartSyncExecution(const Model::StartSyncExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartSyncExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSyncExecutionRequestT = Model::StartSyncExecutionRequest>
        Model::StartSyncExecutionOutcomeCallable StartSyncExecutionCallable(const StartSyncExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::StartSyncExecution, request);
        }

        /**
         * An Async wrapper for StartSyncExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSyncExecutionRequestT = Model::StartSyncExecutionRequest>
        void StartSyncExecutionAsync(const StartSyncExecutionRequestT& request, const StartSyncExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::StartSyncExecution, request, handler, context);
        }

        /**
         * <p>Stops an execution.</p> <p>This API action is not supported by
         * <code>EXPRESS</code> state machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/StopExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StopExecutionOutcome StopExecution(const Model::StopExecutionRequest& request) const;

        /**
         * A Callable wrapper for StopExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopExecutionRequestT = Model::StopExecutionRequest>
        Model::StopExecutionOutcomeCallable StopExecutionCallable(const StopExecutionRequestT& request) const
        {
            return SubmitCallable(&SFNClient::StopExecution, request);
        }

        /**
         * An Async wrapper for StopExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopExecutionRequestT = Model::StopExecutionRequest>
        void StopExecutionAsync(const StopExecutionRequestT& request, const StopExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::StopExecution, request, handler, context);
        }

        /**
         * <p>Add a tag to a Step Functions resource.</p> <p>An array of key-value pairs.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Amazon Web Services Billing and Cost
         * Management User Guide</i>, and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_iam-tags.html">Controlling
         * Access Using IAM Tags</a>.</p> <p>Tags may only contain Unicode letters, digits,
         * white space, or these symbols: <code>_ . : / = + - @</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SFNClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::TagResource, request, handler, context);
        }

        /**
         * <p>Accepts the definition of a single state and executes it. You can test a
         * state without creating a state machine or updating an existing state machine.
         * Using this API, you can test the following:</p> <ul> <li> <p>A state's <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-input-output-dataflow">input
         * and output processing</a> data flow</p> </li> <li> <p>An <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-services.html">Amazon
         * Web Services service integration</a> request and response</p> </li> <li> <p>An
         * <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-third-party-apis.html">HTTP
         * Task</a> request and response</p> </li> </ul> <p>You can call this API on only
         * one state at a time. The states that you can test include the following:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-task-state.html#task-types">All
         * Task types</a> except <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-activities.html">Activity</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-pass-state.html">Pass</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-wait-state.html">Wait</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-choice-state.html">Choice</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-succeed-state.html">Succeed</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-fail-state.html">Fail</a>
         * </p> </li> </ul> <p>The <code>TestState</code> API assumes an IAM role which
         * must contain the required IAM permissions for the resources your state is
         * accessing. For information about the permissions a state might need, see <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/test-state-isolation.html#test-state-permissions">IAM
         * permissions to test a state</a>.</p> <p>The <code>TestState</code> API can run
         * for up to five minutes. If the execution of a state exceeds this duration, it
         * fails with the <code>States.Timeout</code> error.</p> <p> <code>TestState</code>
         * doesn't support <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-activities.html">Activity
         * tasks</a>, <code>.sync</code> or <code>.waitForTaskToken</code> <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/connect-to-resource.html">service
         * integration patterns</a>, <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-parallel-state.html">Parallel</a>,
         * or <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/amazon-states-language-map-state.html">Map</a>
         * states.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TestState">AWS
         * API Reference</a></p>
         */
        virtual Model::TestStateOutcome TestState(const Model::TestStateRequest& request) const;

        /**
         * A Callable wrapper for TestState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestStateRequestT = Model::TestStateRequest>
        Model::TestStateOutcomeCallable TestStateCallable(const TestStateRequestT& request) const
        {
            return SubmitCallable(&SFNClient::TestState, request);
        }

        /**
         * An Async wrapper for TestState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestStateRequestT = Model::TestStateRequest>
        void TestStateAsync(const TestStateRequestT& request, const TestStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::TestState, request, handler, context);
        }

        /**
         * <p>Remove a tag from a Step Functions resource</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SFNClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an in-progress Map Run's configuration to include changes to the
         * settings that control maximum concurrency and Map Run failure.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateMapRun">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMapRunOutcome UpdateMapRun(const Model::UpdateMapRunRequest& request) const;

        /**
         * A Callable wrapper for UpdateMapRun that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateMapRunRequestT = Model::UpdateMapRunRequest>
        Model::UpdateMapRunOutcomeCallable UpdateMapRunCallable(const UpdateMapRunRequestT& request) const
        {
            return SubmitCallable(&SFNClient::UpdateMapRun, request);
        }

        /**
         * An Async wrapper for UpdateMapRun that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMapRunRequestT = Model::UpdateMapRunRequest>
        void UpdateMapRunAsync(const UpdateMapRunRequestT& request, const UpdateMapRunResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::UpdateMapRun, request, handler, context);
        }

        /**
         * <p>Updates an existing state machine by modifying its <code>definition</code>,
         * <code>roleArn</code>, or <code>loggingConfiguration</code>. Running executions
         * will continue to use the previous <code>definition</code> and
         * <code>roleArn</code>. You must include at least one of <code>definition</code>
         * or <code>roleArn</code> or you will receive a
         * <code>MissingRequiredParameter</code> error.</p> <p>A qualified state machine
         * ARN refers to a <i>Distributed Map state</i> defined within a state machine. For
         * example, the qualified state machine ARN
         * <code>arn:partition:states:region:account-id:stateMachine:stateMachineName/mapStateLabel</code>
         * refers to a <i>Distributed Map state</i> with a label <code>mapStateLabel</code>
         * in the state machine named <code>stateMachineName</code>.</p> <p>A qualified
         * state machine ARN can either refer to a <i>Distributed Map state</i> defined
         * within a state machine, a version ARN, or an alias ARN.</p> <p>The following are
         * some examples of qualified and unqualified state machine ARNs:</p> <ul> <li>
         * <p>The following qualified state machine ARN refers to a <i>Distributed Map
         * state</i> with a label <code>mapStateLabel</code> in a state machine named
         * <code>myStateMachine</code>.</p> <p>
         * <code>arn:partition:states:region:account-id:stateMachine:myStateMachine/mapStateLabel</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * <i>Distributed Map state</i>, the request fails with
         * <code>ValidationException</code>.</p>  </li> <li> <p>The following
         * qualified state machine ARN refers to an alias named <code>PROD</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine:PROD&gt;</code>
         * </p>  <p>If you provide a qualified state machine ARN that refers to a
         * version ARN or an alias ARN, the request starts execution for that version or
         * alias.</p>  </li> <li> <p>The following unqualified state machine ARN
         * refers to a state machine named <code>myStateMachine</code>.</p> <p>
         * <code>arn:&lt;partition&gt;:states:&lt;region&gt;:&lt;account-id&gt;:stateMachine:&lt;myStateMachine&gt;</code>
         * </p> </li> </ul> <p>After you update your state machine, you can set the
         * <code>publish</code> parameter to <code>true</code> in the same action to
         * publish a new <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-version.html">version</a>.
         * This way, you can opt-in to strict versioning of your state machine.</p> 
         * <p>Step Functions assigns monotonically increasing integers for state machine
         * versions, starting at version number 1.</p>   <p>All
         * <code>StartExecution</code> calls within a few seconds use the updated
         * <code>definition</code> and <code>roleArn</code>. Executions started immediately
         * after you call <code>UpdateStateMachine</code> may use the previous state
         * machine <code>definition</code> and <code>roleArn</code>. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStateMachineOutcome UpdateStateMachine(const Model::UpdateStateMachineRequest& request) const;

        /**
         * A Callable wrapper for UpdateStateMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStateMachineRequestT = Model::UpdateStateMachineRequest>
        Model::UpdateStateMachineOutcomeCallable UpdateStateMachineCallable(const UpdateStateMachineRequestT& request) const
        {
            return SubmitCallable(&SFNClient::UpdateStateMachine, request);
        }

        /**
         * An Async wrapper for UpdateStateMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStateMachineRequestT = Model::UpdateStateMachineRequest>
        void UpdateStateMachineAsync(const UpdateStateMachineRequestT& request, const UpdateStateMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::UpdateStateMachine, request, handler, context);
        }

        /**
         * <p>Updates the configuration of an existing state machine <a
         * href="https://docs.aws.amazon.com/step-functions/latest/dg/concepts-state-machine-alias.html">alias</a>
         * by modifying its <code>description</code> or
         * <code>routingConfiguration</code>.</p> <p>You must specify at least one of the
         * <code>description</code> or <code>routingConfiguration</code> parameters to
         * update a state machine alias.</p>  <p>
         * <code>UpdateStateMachineAlias</code> is an idempotent API. Step Functions bases
         * the idempotency check on the <code>stateMachineAliasArn</code>,
         * <code>description</code>, and <code>routingConfiguration</code> parameters.
         * Requests with the same parameters return an idempotent response.</p> 
         *  <p>This operation is eventually consistent. All <a>StartExecution</a>
         * requests made within a few seconds use the latest alias configuration.
         * Executions started immediately after calling
         * <code>UpdateStateMachineAlias</code> may use the previous routing
         * configuration.</p>  <p> <b>Related operations:</b> </p> <ul> <li> <p>
         * <a>CreateStateMachineAlias</a> </p> </li> <li> <p>
         * <a>DescribeStateMachineAlias</a> </p> </li> <li> <p>
         * <a>ListStateMachineAliases</a> </p> </li> <li> <p>
         * <a>DeleteStateMachineAlias</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/UpdateStateMachineAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStateMachineAliasOutcome UpdateStateMachineAlias(const Model::UpdateStateMachineAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateStateMachineAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateStateMachineAliasRequestT = Model::UpdateStateMachineAliasRequest>
        Model::UpdateStateMachineAliasOutcomeCallable UpdateStateMachineAliasCallable(const UpdateStateMachineAliasRequestT& request) const
        {
            return SubmitCallable(&SFNClient::UpdateStateMachineAlias, request);
        }

        /**
         * An Async wrapper for UpdateStateMachineAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStateMachineAliasRequestT = Model::UpdateStateMachineAliasRequest>
        void UpdateStateMachineAliasAsync(const UpdateStateMachineAliasRequestT& request, const UpdateStateMachineAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SFNClient::UpdateStateMachineAlias, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SFNEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SFNClient>;
      void init(const SFNClientConfiguration& clientConfiguration);

      SFNClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SFNEndpointProviderBase> m_endpointProvider;
  };

} // namespace SFN
} // namespace Aws
