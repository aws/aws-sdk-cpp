/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/panorama/PanoramaServiceClientModel.h>

namespace Aws
{
namespace Panorama
{
  /**
   * <p><fullname>AWS Panorama</fullname> <p> <b>Overview</b> </p> <p>This is the
   * <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
   * href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What
   * is AWS Panorama?</a> in the <i>AWS Panorama Developer Guide</i>.</p></p>
   */
  class AWS_PANORAMA_API PanoramaClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PanoramaClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PanoramaClientConfiguration ClientConfigurationType;
      typedef PanoramaEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration(),
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Auth::AWSCredentials& credentials,
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PanoramaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       std::shared_ptr<PanoramaEndpointProviderBase> endpointProvider = nullptr,
                       const Aws::Panorama::PanoramaClientConfiguration& clientConfiguration = Aws::Panorama::PanoramaClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PanoramaClient(const Aws::Auth::AWSCredentials& credentials,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PanoramaClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                       const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PanoramaClient();

        /**
         * <p>Creates an application instance and deploys it to a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationInstanceOutcome CreateApplicationInstance(const Model::CreateApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationInstanceRequestT = Model::CreateApplicationInstanceRequest>
        Model::CreateApplicationInstanceOutcomeCallable CreateApplicationInstanceCallable(const CreateApplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::CreateApplicationInstance, request);
        }

        /**
         * An Async wrapper for CreateApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationInstanceRequestT = Model::CreateApplicationInstanceRequest>
        void CreateApplicationInstanceAsync(const CreateApplicationInstanceRequestT& request, const CreateApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::CreateApplicationInstance, request, handler, context);
        }

        /**
         * <p>Creates a job to run on a device. A job can update a device's software or
         * reboot it.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateJobForDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobForDevicesOutcome CreateJobForDevices(const Model::CreateJobForDevicesRequest& request) const;

        /**
         * A Callable wrapper for CreateJobForDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateJobForDevicesRequestT = Model::CreateJobForDevicesRequest>
        Model::CreateJobForDevicesOutcomeCallable CreateJobForDevicesCallable(const CreateJobForDevicesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::CreateJobForDevices, request);
        }

        /**
         * An Async wrapper for CreateJobForDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobForDevicesRequestT = Model::CreateJobForDevicesRequest>
        void CreateJobForDevicesAsync(const CreateJobForDevicesRequestT& request, const CreateJobForDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::CreateJobForDevices, request, handler, context);
        }

        /**
         * <p>Creates a camera stream node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreateNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodeFromTemplateJobOutcome CreateNodeFromTemplateJob(const Model::CreateNodeFromTemplateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateNodeFromTemplateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNodeFromTemplateJobRequestT = Model::CreateNodeFromTemplateJobRequest>
        Model::CreateNodeFromTemplateJobOutcomeCallable CreateNodeFromTemplateJobCallable(const CreateNodeFromTemplateJobRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::CreateNodeFromTemplateJob, request);
        }

        /**
         * An Async wrapper for CreateNodeFromTemplateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNodeFromTemplateJobRequestT = Model::CreateNodeFromTemplateJobRequest>
        void CreateNodeFromTemplateJobAsync(const CreateNodeFromTemplateJobRequestT& request, const CreateNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::CreateNodeFromTemplateJob, request, handler, context);
        }

        /**
         * <p>Creates a package and storage location in an Amazon S3 access
         * point.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        Model::CreatePackageOutcomeCallable CreatePackageCallable(const CreatePackageRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::CreatePackage, request);
        }

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        void CreatePackageAsync(const CreatePackageRequestT& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::CreatePackage, request, handler, context);
        }

        /**
         * <p>Imports a node package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/CreatePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageImportJobOutcome CreatePackageImportJob(const Model::CreatePackageImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreatePackageImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageImportJobRequestT = Model::CreatePackageImportJobRequest>
        Model::CreatePackageImportJobOutcomeCallable CreatePackageImportJobCallable(const CreatePackageImportJobRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::CreatePackageImportJob, request);
        }

        /**
         * An Async wrapper for CreatePackageImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageImportJobRequestT = Model::CreatePackageImportJobRequest>
        void CreatePackageImportJobAsync(const CreatePackageImportJobRequestT& request, const CreatePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::CreatePackageImportJob, request, handler, context);
        }

        /**
         * <p>Deletes a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeleteDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest& request) const;

        /**
         * A Callable wrapper for DeleteDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        Model::DeleteDeviceOutcomeCallable DeleteDeviceCallable(const DeleteDeviceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DeleteDevice, request);
        }

        /**
         * An Async wrapper for DeleteDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeviceRequestT = Model::DeleteDeviceRequest>
        void DeleteDeviceAsync(const DeleteDeviceRequestT& request, const DeleteDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DeleteDevice, request, handler, context);
        }

        /**
         * <p>Deletes a package.</p>  <p>To delete a package, you need permission to
         * call <code>s3:DeleteObject</code> in addition to permissions for the AWS
         * Panorama API.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        Model::DeletePackageOutcomeCallable DeletePackageCallable(const DeletePackageRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DeletePackage, request);
        }

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        void DeletePackageAsync(const DeletePackageRequestT& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DeletePackage, request, handler, context);
        }

        /**
         * <p>Deregisters a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DeregisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterPackageVersionOutcome DeregisterPackageVersion(const Model::DeregisterPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DeregisterPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterPackageVersionRequestT = Model::DeregisterPackageVersionRequest>
        Model::DeregisterPackageVersionOutcomeCallable DeregisterPackageVersionCallable(const DeregisterPackageVersionRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DeregisterPackageVersion, request);
        }

        /**
         * An Async wrapper for DeregisterPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterPackageVersionRequestT = Model::DeregisterPackageVersionRequest>
        void DeregisterPackageVersionAsync(const DeregisterPackageVersionRequestT& request, const DeregisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DeregisterPackageVersion, request, handler, context);
        }

        /**
         * <p>Returns information about an application instance on a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceOutcome DescribeApplicationInstance(const Model::DescribeApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationInstanceRequestT = Model::DescribeApplicationInstanceRequest>
        Model::DescribeApplicationInstanceOutcomeCallable DescribeApplicationInstanceCallable(const DescribeApplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeApplicationInstance, request);
        }

        /**
         * An Async wrapper for DescribeApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationInstanceRequestT = Model::DescribeApplicationInstanceRequest>
        void DescribeApplicationInstanceAsync(const DescribeApplicationInstanceRequestT& request, const DescribeApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeApplicationInstance, request, handler, context);
        }

        /**
         * <p>Returns information about an application instance's configuration
         * manifest.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeApplicationInstanceDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationInstanceDetailsOutcome DescribeApplicationInstanceDetails(const Model::DescribeApplicationInstanceDetailsRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplicationInstanceDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationInstanceDetailsRequestT = Model::DescribeApplicationInstanceDetailsRequest>
        Model::DescribeApplicationInstanceDetailsOutcomeCallable DescribeApplicationInstanceDetailsCallable(const DescribeApplicationInstanceDetailsRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeApplicationInstanceDetails, request);
        }

        /**
         * An Async wrapper for DescribeApplicationInstanceDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationInstanceDetailsRequestT = Model::DescribeApplicationInstanceDetailsRequest>
        void DescribeApplicationInstanceDetailsAsync(const DescribeApplicationInstanceDetailsRequestT& request, const DescribeApplicationInstanceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeApplicationInstanceDetails, request, handler, context);
        }

        /**
         * <p>Returns information about a device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest& request) const;

        /**
         * A Callable wrapper for DescribeDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        Model::DescribeDeviceOutcomeCallable DescribeDeviceCallable(const DescribeDeviceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeDevice, request);
        }

        /**
         * An Async wrapper for DescribeDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeviceRequestT = Model::DescribeDeviceRequest>
        void DescribeDeviceAsync(const DescribeDeviceRequestT& request, const DescribeDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeDevice, request, handler, context);
        }

        /**
         * <p>Returns information about a device job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeDeviceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeviceJobOutcome DescribeDeviceJob(const Model::DescribeDeviceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeviceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeviceJobRequestT = Model::DescribeDeviceJobRequest>
        Model::DescribeDeviceJobOutcomeCallable DescribeDeviceJobCallable(const DescribeDeviceJobRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeDeviceJob, request);
        }

        /**
         * An Async wrapper for DescribeDeviceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeviceJobRequestT = Model::DescribeDeviceJobRequest>
        void DescribeDeviceJobAsync(const DescribeDeviceJobRequestT& request, const DescribeDeviceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeDeviceJob, request, handler, context);
        }

        /**
         * <p>Returns information about a node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeOutcome DescribeNode(const Model::DescribeNodeRequest& request) const;

        /**
         * A Callable wrapper for DescribeNode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNodeRequestT = Model::DescribeNodeRequest>
        Model::DescribeNodeOutcomeCallable DescribeNodeCallable(const DescribeNodeRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeNode, request);
        }

        /**
         * An Async wrapper for DescribeNode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNodeRequestT = Model::DescribeNodeRequest>
        void DescribeNodeAsync(const DescribeNodeRequestT& request, const DescribeNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeNode, request, handler, context);
        }

        /**
         * <p>Returns information about a job to create a camera stream node.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribeNodeFromTemplateJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodeFromTemplateJobOutcome DescribeNodeFromTemplateJob(const Model::DescribeNodeFromTemplateJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeNodeFromTemplateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNodeFromTemplateJobRequestT = Model::DescribeNodeFromTemplateJobRequest>
        Model::DescribeNodeFromTemplateJobOutcomeCallable DescribeNodeFromTemplateJobCallable(const DescribeNodeFromTemplateJobRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribeNodeFromTemplateJob, request);
        }

        /**
         * An Async wrapper for DescribeNodeFromTemplateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNodeFromTemplateJobRequestT = Model::DescribeNodeFromTemplateJobRequest>
        void DescribeNodeFromTemplateJobAsync(const DescribeNodeFromTemplateJobRequestT& request, const DescribeNodeFromTemplateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribeNodeFromTemplateJob, request, handler, context);
        }

        /**
         * <p>Returns information about a package.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageOutcome DescribePackage(const Model::DescribePackageRequest& request) const;

        /**
         * A Callable wrapper for DescribePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackageRequestT = Model::DescribePackageRequest>
        Model::DescribePackageOutcomeCallable DescribePackageCallable(const DescribePackageRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribePackage, request);
        }

        /**
         * An Async wrapper for DescribePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackageRequestT = Model::DescribePackageRequest>
        void DescribePackageAsync(const DescribePackageRequestT& request, const DescribePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribePackage, request, handler, context);
        }

        /**
         * <p>Returns information about a package import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageImportJobOutcome DescribePackageImportJob(const Model::DescribePackageImportJobRequest& request) const;

        /**
         * A Callable wrapper for DescribePackageImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackageImportJobRequestT = Model::DescribePackageImportJobRequest>
        Model::DescribePackageImportJobOutcomeCallable DescribePackageImportJobCallable(const DescribePackageImportJobRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribePackageImportJob, request);
        }

        /**
         * An Async wrapper for DescribePackageImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackageImportJobRequestT = Model::DescribePackageImportJobRequest>
        void DescribePackageImportJobAsync(const DescribePackageImportJobRequestT& request, const DescribePackageImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribePackageImportJob, request, handler, context);
        }

        /**
         * <p>Returns information about a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/DescribePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePackageVersionOutcome DescribePackageVersion(const Model::DescribePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePackageVersionRequestT = Model::DescribePackageVersionRequest>
        Model::DescribePackageVersionOutcomeCallable DescribePackageVersionCallable(const DescribePackageVersionRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::DescribePackageVersion, request);
        }

        /**
         * An Async wrapper for DescribePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePackageVersionRequestT = Model::DescribePackageVersionRequest>
        void DescribePackageVersionAsync(const DescribePackageVersionRequestT& request, const DescribePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::DescribePackageVersion, request, handler, context);
        }

        /**
         * <p>Returns a list of application instance dependencies.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceDependencies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceDependenciesOutcome ListApplicationInstanceDependencies(const Model::ListApplicationInstanceDependenciesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstanceDependencies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationInstanceDependenciesRequestT = Model::ListApplicationInstanceDependenciesRequest>
        Model::ListApplicationInstanceDependenciesOutcomeCallable ListApplicationInstanceDependenciesCallable(const ListApplicationInstanceDependenciesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListApplicationInstanceDependencies, request);
        }

        /**
         * An Async wrapper for ListApplicationInstanceDependencies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationInstanceDependenciesRequestT = Model::ListApplicationInstanceDependenciesRequest>
        void ListApplicationInstanceDependenciesAsync(const ListApplicationInstanceDependenciesRequestT& request, const ListApplicationInstanceDependenciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListApplicationInstanceDependencies, request, handler, context);
        }

        /**
         * <p>Returns a list of application node instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstanceNodeInstancesOutcome ListApplicationInstanceNodeInstances(const Model::ListApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstanceNodeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationInstanceNodeInstancesRequestT = Model::ListApplicationInstanceNodeInstancesRequest>
        Model::ListApplicationInstanceNodeInstancesOutcomeCallable ListApplicationInstanceNodeInstancesCallable(const ListApplicationInstanceNodeInstancesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListApplicationInstanceNodeInstances, request);
        }

        /**
         * An Async wrapper for ListApplicationInstanceNodeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationInstanceNodeInstancesRequestT = Model::ListApplicationInstanceNodeInstancesRequest>
        void ListApplicationInstanceNodeInstancesAsync(const ListApplicationInstanceNodeInstancesRequestT& request, const ListApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListApplicationInstanceNodeInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of application instances.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListApplicationInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationInstancesOutcome ListApplicationInstances(const Model::ListApplicationInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListApplicationInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationInstancesRequestT = Model::ListApplicationInstancesRequest>
        Model::ListApplicationInstancesOutcomeCallable ListApplicationInstancesCallable(const ListApplicationInstancesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListApplicationInstances, request);
        }

        /**
         * An Async wrapper for ListApplicationInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationInstancesRequestT = Model::ListApplicationInstancesRequest>
        void ListApplicationInstancesAsync(const ListApplicationInstancesRequestT& request, const ListApplicationInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListApplicationInstances, request, handler, context);
        }

        /**
         * <p>Returns a list of devices.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesOutcome ListDevices(const Model::ListDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        Model::ListDevicesOutcomeCallable ListDevicesCallable(const ListDevicesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListDevices, request);
        }

        /**
         * An Async wrapper for ListDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesRequestT = Model::ListDevicesRequest>
        void ListDevicesAsync(const ListDevicesRequestT& request, const ListDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListDevices, request, handler, context);
        }

        /**
         * <p>Returns a list of jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListDevicesJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDevicesJobsOutcome ListDevicesJobs(const Model::ListDevicesJobsRequest& request) const;

        /**
         * A Callable wrapper for ListDevicesJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDevicesJobsRequestT = Model::ListDevicesJobsRequest>
        Model::ListDevicesJobsOutcomeCallable ListDevicesJobsCallable(const ListDevicesJobsRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListDevicesJobs, request);
        }

        /**
         * An Async wrapper for ListDevicesJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDevicesJobsRequestT = Model::ListDevicesJobsRequest>
        void ListDevicesJobsAsync(const ListDevicesJobsRequestT& request, const ListDevicesJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListDevicesJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of camera stream node jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodeFromTemplateJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodeFromTemplateJobsOutcome ListNodeFromTemplateJobs(const Model::ListNodeFromTemplateJobsRequest& request) const;

        /**
         * A Callable wrapper for ListNodeFromTemplateJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNodeFromTemplateJobsRequestT = Model::ListNodeFromTemplateJobsRequest>
        Model::ListNodeFromTemplateJobsOutcomeCallable ListNodeFromTemplateJobsCallable(const ListNodeFromTemplateJobsRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListNodeFromTemplateJobs, request);
        }

        /**
         * An Async wrapper for ListNodeFromTemplateJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNodeFromTemplateJobsRequestT = Model::ListNodeFromTemplateJobsRequest>
        void ListNodeFromTemplateJobsAsync(const ListNodeFromTemplateJobsRequestT& request, const ListNodeFromTemplateJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListNodeFromTemplateJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodesOutcome ListNodes(const Model::ListNodesRequest& request) const;

        /**
         * A Callable wrapper for ListNodes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        Model::ListNodesOutcomeCallable ListNodesCallable(const ListNodesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListNodes, request);
        }

        /**
         * An Async wrapper for ListNodes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNodesRequestT = Model::ListNodesRequest>
        void ListNodesAsync(const ListNodesRequestT& request, const ListNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListNodes, request, handler, context);
        }

        /**
         * <p>Returns a list of package import jobs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackageImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageImportJobsOutcome ListPackageImportJobs(const Model::ListPackageImportJobsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageImportJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackageImportJobsRequestT = Model::ListPackageImportJobsRequest>
        Model::ListPackageImportJobsOutcomeCallable ListPackageImportJobsCallable(const ListPackageImportJobsRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListPackageImportJobs, request);
        }

        /**
         * An Async wrapper for ListPackageImportJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackageImportJobsRequestT = Model::ListPackageImportJobsRequest>
        void ListPackageImportJobsAsync(const ListPackageImportJobsRequestT& request, const ListPackageImportJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListPackageImportJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        Model::ListPackagesOutcomeCallable ListPackagesCallable(const ListPackagesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListPackages, request);
        }

        /**
         * An Async wrapper for ListPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        void ListPackagesAsync(const ListPackagesRequestT& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListPackages, request, handler, context);
        }

        /**
         * <p>Returns a list of tags for a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates a device and returns a configuration archive. The configuration
         * archive is a ZIP file that contains a provisioning certificate that is valid for
         * 5 minutes. Name the configuration archive
         * <code>certificates-omni_<i>device-name</i>.zip</code> and transfer it to the
         * device within 5 minutes. Use the included USB storage device and connect it to
         * the USB 3.0 port next to the HDMI output.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ProvisionDevice">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionDeviceOutcome ProvisionDevice(const Model::ProvisionDeviceRequest& request) const;

        /**
         * A Callable wrapper for ProvisionDevice that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ProvisionDeviceRequestT = Model::ProvisionDeviceRequest>
        Model::ProvisionDeviceOutcomeCallable ProvisionDeviceCallable(const ProvisionDeviceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::ProvisionDevice, request);
        }

        /**
         * An Async wrapper for ProvisionDevice that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ProvisionDeviceRequestT = Model::ProvisionDeviceRequest>
        void ProvisionDeviceAsync(const ProvisionDeviceRequestT& request, const ProvisionDeviceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::ProvisionDevice, request, handler, context);
        }

        /**
         * <p>Registers a package version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RegisterPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterPackageVersionOutcome RegisterPackageVersion(const Model::RegisterPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for RegisterPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterPackageVersionRequestT = Model::RegisterPackageVersionRequest>
        Model::RegisterPackageVersionOutcomeCallable RegisterPackageVersionCallable(const RegisterPackageVersionRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::RegisterPackageVersion, request);
        }

        /**
         * An Async wrapper for RegisterPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterPackageVersionRequestT = Model::RegisterPackageVersionRequest>
        void RegisterPackageVersionAsync(const RegisterPackageVersionRequestT& request, const RegisterPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::RegisterPackageVersion, request, handler, context);
        }

        /**
         * <p>Removes an application instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/RemoveApplicationInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveApplicationInstanceOutcome RemoveApplicationInstance(const Model::RemoveApplicationInstanceRequest& request) const;

        /**
         * A Callable wrapper for RemoveApplicationInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveApplicationInstanceRequestT = Model::RemoveApplicationInstanceRequest>
        Model::RemoveApplicationInstanceOutcomeCallable RemoveApplicationInstanceCallable(const RemoveApplicationInstanceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::RemoveApplicationInstance, request);
        }

        /**
         * An Async wrapper for RemoveApplicationInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveApplicationInstanceRequestT = Model::RemoveApplicationInstanceRequest>
        void RemoveApplicationInstanceAsync(const RemoveApplicationInstanceRequestT& request, const RemoveApplicationInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::RemoveApplicationInstance, request, handler, context);
        }

        /**
         * <p>Signal camera nodes to stop or resume.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/SignalApplicationInstanceNodeInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::SignalApplicationInstanceNodeInstancesOutcome SignalApplicationInstanceNodeInstances(const Model::SignalApplicationInstanceNodeInstancesRequest& request) const;

        /**
         * A Callable wrapper for SignalApplicationInstanceNodeInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SignalApplicationInstanceNodeInstancesRequestT = Model::SignalApplicationInstanceNodeInstancesRequest>
        Model::SignalApplicationInstanceNodeInstancesOutcomeCallable SignalApplicationInstanceNodeInstancesCallable(const SignalApplicationInstanceNodeInstancesRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::SignalApplicationInstanceNodeInstances, request);
        }

        /**
         * An Async wrapper for SignalApplicationInstanceNodeInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SignalApplicationInstanceNodeInstancesRequestT = Model::SignalApplicationInstanceNodeInstancesRequest>
        void SignalApplicationInstanceNodeInstancesAsync(const SignalApplicationInstanceNodeInstancesRequestT& request, const SignalApplicationInstanceNodeInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::SignalApplicationInstanceNodeInstances, request, handler, context);
        }

        /**
         * <p>Tags a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates a device's metadata.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/UpdateDeviceMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDeviceMetadataOutcome UpdateDeviceMetadata(const Model::UpdateDeviceMetadataRequest& request) const;

        /**
         * A Callable wrapper for UpdateDeviceMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDeviceMetadataRequestT = Model::UpdateDeviceMetadataRequest>
        Model::UpdateDeviceMetadataOutcomeCallable UpdateDeviceMetadataCallable(const UpdateDeviceMetadataRequestT& request) const
        {
            return SubmitCallable(&PanoramaClient::UpdateDeviceMetadata, request);
        }

        /**
         * An Async wrapper for UpdateDeviceMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDeviceMetadataRequestT = Model::UpdateDeviceMetadataRequest>
        void UpdateDeviceMetadataAsync(const UpdateDeviceMetadataRequestT& request, const UpdateDeviceMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PanoramaClient::UpdateDeviceMetadata, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PanoramaEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PanoramaClient>;
      void init(const PanoramaClientConfiguration& clientConfiguration);

      PanoramaClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PanoramaEndpointProviderBase> m_endpointProvider;
  };

} // namespace Panorama
} // namespace Aws
