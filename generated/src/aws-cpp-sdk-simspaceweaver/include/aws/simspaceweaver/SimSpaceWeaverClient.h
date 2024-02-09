/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/simspaceweaver/SimSpaceWeaverServiceClientModel.h>

namespace Aws
{
namespace SimSpaceWeaver
{
  /**
   * <p>SimSpace Weaver (SimSpace Weaver) is a service that you can use to build and
   * run large-scale spatial simulations in the Amazon Web Services Cloud. For
   * example, you can create crowd simulations, large real-world environments, and
   * immersive and interactive experiences. For more information about SimSpace
   * Weaver, see the <i> <a
   * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/">SimSpace
   * Weaver User Guide</a> </i>.</p> <p>This API reference describes the API
   * operations and data types that you can use to communicate directly with SimSpace
   * Weaver.</p> <p>SimSpace Weaver also provides the SimSpace Weaver app SDK, which
   * you use for app development. The SimSpace Weaver app SDK API reference is
   * included in the SimSpace Weaver app SDK documentation. This documentation is
   * part of the SimSpace Weaver app SDK distributable package.</p>
   */
  class AWS_SIMSPACEWEAVER_API SimSpaceWeaverClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SimSpaceWeaverClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SimSpaceWeaverClientConfiguration ClientConfigurationType;
      typedef SimSpaceWeaverEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration(),
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimSpaceWeaverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SimSpaceWeaverEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration& clientConfiguration = Aws::SimSpaceWeaver::SimSpaceWeaverClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SimSpaceWeaverClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SimSpaceWeaverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SimSpaceWeaverClient();

        /**
         * <p>Creates a snapshot of the specified simulation. A snapshot is a file that
         * contains simulation state data at a specific time. The state data saved in a
         * snapshot includes entity data from the State Fabric, the simulation
         * configuration specified in the schema, and the clock tick number. You can use
         * the snapshot to initialize a new simulation. For more information about
         * snapshots, see <a
         * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/working-with_snapshots.html">Snapshots</a>
         * in the <i>SimSpace Weaver User Guide</i>. </p> <p>You specify a
         * <code>Destination</code> when you create a snapshot. The
         * <code>Destination</code> is the name of an Amazon S3 bucket and an optional
         * <code>ObjectKeyPrefix</code>. The <code>ObjectKeyPrefix</code> is usually the
         * name of a folder in the bucket. SimSpace Weaver creates a <code>snapshot</code>
         * folder inside the <code>Destination</code> and places the snapshot file
         * there.</p> <p>The snapshot file is an Amazon S3 object. It has an object key
         * with the form: <code>
         * <i>object-key-prefix</i>/snapshot/<i>simulation-name</i>-<i>YYMMdd</i>-<i>HHmm</i>-<i>ss</i>.zip</code>,
         * where: </p> <ul> <li> <p> <code> <i>YY</i> </code> is the 2-digit year</p> </li>
         * <li> <p> <code> <i>MM</i> </code> is the 2-digit month</p> </li> <li> <p> <code>
         * <i>dd</i> </code> is the 2-digit day of the month</p> </li> <li> <p> <code>
         * <i>HH</i> </code> is the 2-digit hour (24-hour clock)</p> </li> <li> <p> <code>
         * <i>mm</i> </code> is the 2-digit minutes</p> </li> <li> <p> <code> <i>ss</i>
         * </code> is the 2-digit seconds</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/CreateSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSnapshotOutcome CreateSnapshot(const Model::CreateSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        Model::CreateSnapshotOutcomeCallable CreateSnapshotCallable(const CreateSnapshotRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::CreateSnapshot, request);
        }

        /**
         * An Async wrapper for CreateSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSnapshotRequestT = Model::CreateSnapshotRequest>
        void CreateSnapshotAsync(const CreateSnapshotRequestT& request, const CreateSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::CreateSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes the instance of the given custom app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DeleteApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAppOutcome DeleteApp(const Model::DeleteAppRequest& request) const;

        /**
         * A Callable wrapper for DeleteApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        Model::DeleteAppOutcomeCallable DeleteAppCallable(const DeleteAppRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::DeleteApp, request);
        }

        /**
         * An Async wrapper for DeleteApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAppRequestT = Model::DeleteAppRequest>
        void DeleteAppAsync(const DeleteAppRequestT& request, const DeleteAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::DeleteApp, request, handler, context);
        }

        /**
         * <p>Deletes all SimSpace Weaver resources assigned to the given simulation.</p>
         *  <p>Your simulation uses resources in other Amazon Web Services. This API
         * operation doesn't delete resources in other Amazon Web Services.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DeleteSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSimulationOutcome DeleteSimulation(const Model::DeleteSimulationRequest& request) const;

        /**
         * A Callable wrapper for DeleteSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSimulationRequestT = Model::DeleteSimulationRequest>
        Model::DeleteSimulationOutcomeCallable DeleteSimulationCallable(const DeleteSimulationRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::DeleteSimulation, request);
        }

        /**
         * An Async wrapper for DeleteSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSimulationRequestT = Model::DeleteSimulationRequest>
        void DeleteSimulationAsync(const DeleteSimulationRequestT& request, const DeleteSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::DeleteSimulation, request, handler, context);
        }

        /**
         * <p>Returns the state of the given custom app.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DescribeApp">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAppOutcome DescribeApp(const Model::DescribeAppRequest& request) const;

        /**
         * A Callable wrapper for DescribeApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        Model::DescribeAppOutcomeCallable DescribeAppCallable(const DescribeAppRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::DescribeApp, request);
        }

        /**
         * An Async wrapper for DescribeApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAppRequestT = Model::DescribeAppRequest>
        void DescribeAppAsync(const DescribeAppRequestT& request, const DescribeAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::DescribeApp, request, handler, context);
        }

        /**
         * <p>Returns the current state of the given simulation.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/DescribeSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSimulationOutcome DescribeSimulation(const Model::DescribeSimulationRequest& request) const;

        /**
         * A Callable wrapper for DescribeSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSimulationRequestT = Model::DescribeSimulationRequest>
        Model::DescribeSimulationOutcomeCallable DescribeSimulationCallable(const DescribeSimulationRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::DescribeSimulation, request);
        }

        /**
         * An Async wrapper for DescribeSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSimulationRequestT = Model::DescribeSimulationRequest>
        void DescribeSimulationAsync(const DescribeSimulationRequestT& request, const DescribeSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::DescribeSimulation, request, handler, context);
        }

        /**
         * <p>Lists all custom apps or service apps for the given simulation and
         * domain.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListApps">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAppsOutcome ListApps(const Model::ListAppsRequest& request) const;

        /**
         * A Callable wrapper for ListApps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        Model::ListAppsOutcomeCallable ListAppsCallable(const ListAppsRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::ListApps, request);
        }

        /**
         * An Async wrapper for ListApps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAppsRequestT = Model::ListAppsRequest>
        void ListAppsAsync(const ListAppsRequestT& request, const ListAppsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::ListApps, request, handler, context);
        }

        /**
         * <p>Lists the SimSpace Weaver simulations in the Amazon Web Services account used
         * to make the API call.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListSimulations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSimulationsOutcome ListSimulations(const Model::ListSimulationsRequest& request) const;

        /**
         * A Callable wrapper for ListSimulations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSimulationsRequestT = Model::ListSimulationsRequest>
        Model::ListSimulationsOutcomeCallable ListSimulationsCallable(const ListSimulationsRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::ListSimulations, request);
        }

        /**
         * An Async wrapper for ListSimulations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSimulationsRequestT = Model::ListSimulationsRequest>
        void ListSimulationsAsync(const ListSimulationsRequestT& request, const ListSimulationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::ListSimulations, request, handler, context);
        }

        /**
         * <p>Lists all tags on a SimSpace Weaver resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Starts a custom app with the configuration specified in the simulation
         * schema.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartApp">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAppOutcome StartApp(const Model::StartAppRequest& request) const;

        /**
         * A Callable wrapper for StartApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAppRequestT = Model::StartAppRequest>
        Model::StartAppOutcomeCallable StartAppCallable(const StartAppRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StartApp, request);
        }

        /**
         * An Async wrapper for StartApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAppRequestT = Model::StartAppRequest>
        void StartAppAsync(const StartAppRequestT& request, const StartAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StartApp, request, handler, context);
        }

        /**
         * <p>Starts the simulation clock.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartClock">AWS
         * API Reference</a></p>
         */
        virtual Model::StartClockOutcome StartClock(const Model::StartClockRequest& request) const;

        /**
         * A Callable wrapper for StartClock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartClockRequestT = Model::StartClockRequest>
        Model::StartClockOutcomeCallable StartClockCallable(const StartClockRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StartClock, request);
        }

        /**
         * An Async wrapper for StartClock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartClockRequestT = Model::StartClockRequest>
        void StartClockAsync(const StartClockRequestT& request, const StartClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StartClock, request, handler, context);
        }

        /**
         * <p>Starts a simulation with the given name. You must choose to start your
         * simulation from a schema or from a snapshot. For more information about the
         * schema, see the <a
         * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/schema-reference.html">schema
         * reference</a> in the <i>SimSpace Weaver User Guide</i>. For more information
         * about snapshots, see <a
         * href="https://docs.aws.amazon.com/simspaceweaver/latest/userguide/working-with_snapshots.html">Snapshots</a>
         * in the <i>SimSpace Weaver User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StartSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSimulationOutcome StartSimulation(const Model::StartSimulationRequest& request) const;

        /**
         * A Callable wrapper for StartSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSimulationRequestT = Model::StartSimulationRequest>
        Model::StartSimulationOutcomeCallable StartSimulationCallable(const StartSimulationRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StartSimulation, request);
        }

        /**
         * An Async wrapper for StartSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSimulationRequestT = Model::StartSimulationRequest>
        void StartSimulationAsync(const StartSimulationRequestT& request, const StartSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StartSimulation, request, handler, context);
        }

        /**
         * <p>Stops the given custom app and shuts down all of its allocated compute
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopApp">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAppOutcome StopApp(const Model::StopAppRequest& request) const;

        /**
         * A Callable wrapper for StopApp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopAppRequestT = Model::StopAppRequest>
        Model::StopAppOutcomeCallable StopAppCallable(const StopAppRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StopApp, request);
        }

        /**
         * An Async wrapper for StopApp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopAppRequestT = Model::StopAppRequest>
        void StopAppAsync(const StopAppRequestT& request, const StopAppResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StopApp, request, handler, context);
        }

        /**
         * <p>Stops the simulation clock.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopClock">AWS
         * API Reference</a></p>
         */
        virtual Model::StopClockOutcome StopClock(const Model::StopClockRequest& request) const;

        /**
         * A Callable wrapper for StopClock that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopClockRequestT = Model::StopClockRequest>
        Model::StopClockOutcomeCallable StopClockCallable(const StopClockRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StopClock, request);
        }

        /**
         * An Async wrapper for StopClock that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopClockRequestT = Model::StopClockRequest>
        void StopClockAsync(const StopClockRequestT& request, const StopClockResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StopClock, request, handler, context);
        }

        /**
         * <p>Stops the given simulation.</p>  <p>You can't restart a simulation
         * after you stop it. If you want to restart a simulation, then you must stop it,
         * delete it, and start a new instance of it.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/StopSimulation">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSimulationOutcome StopSimulation(const Model::StopSimulationRequest& request) const;

        /**
         * A Callable wrapper for StopSimulation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSimulationRequestT = Model::StopSimulationRequest>
        Model::StopSimulationOutcomeCallable StopSimulationCallable(const StopSimulationRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::StopSimulation, request);
        }

        /**
         * An Async wrapper for StopSimulation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSimulationRequestT = Model::StopSimulationRequest>
        void StopSimulationAsync(const StopSimulationRequestT& request, const StopSimulationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::StopSimulation, request, handler, context);
        }

        /**
         * <p>Adds tags to a SimSpace Weaver resource. For more information about tags, see
         * <a href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a SimSpace Weaver resource. For more information about
         * tags, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
         * Amazon Web Services resources</a> in the <i>Amazon Web Services General
         * Reference</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SimSpaceWeaverClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SimSpaceWeaverClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SimSpaceWeaverEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SimSpaceWeaverClient>;
      void init(const SimSpaceWeaverClientConfiguration& clientConfiguration);

      SimSpaceWeaverClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SimSpaceWeaverEndpointProviderBase> m_endpointProvider;
  };

} // namespace SimSpaceWeaver
} // namespace Aws
