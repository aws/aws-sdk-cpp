/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/tnb/TnbServiceClientModel.h>

namespace Aws
{
namespace tnb
{
  /**
   * <p> Amazon Web Services Telco Network Builder (TNB) is a network automation
   * service that helps you deploy and manage telecom networks. AWS TNB helps you
   * with the lifecycle management of your telecommunication network functions
   * throughout planning, deployment, and post-deployment activities.</p>
   */
  class AWS_TNB_API TnbClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<TnbClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef TnbClientConfiguration ClientConfigurationType;
      typedef TnbEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TnbClient(const Aws::tnb::TnbClientConfiguration& clientConfiguration = Aws::tnb::TnbClientConfiguration(),
                  std::shared_ptr<TnbEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TnbClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<TnbEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::tnb::TnbClientConfiguration& clientConfiguration = Aws::tnb::TnbClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TnbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<TnbEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::tnb::TnbClientConfiguration& clientConfiguration = Aws::tnb::TnbClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TnbClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        TnbClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        TnbClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~TnbClient();

        /**
         * <p>Cancels a network operation.</p> <p>A network operation is any operation that
         * is done to your network, such as network instance instantiation or
         * termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/CancelSolNetworkOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelSolNetworkOperationOutcome CancelSolNetworkOperation(const Model::CancelSolNetworkOperationRequest& request) const;

        /**
         * A Callable wrapper for CancelSolNetworkOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelSolNetworkOperationRequestT = Model::CancelSolNetworkOperationRequest>
        Model::CancelSolNetworkOperationOutcomeCallable CancelSolNetworkOperationCallable(const CancelSolNetworkOperationRequestT& request) const
        {
            return SubmitCallable(&TnbClient::CancelSolNetworkOperation, request);
        }

        /**
         * An Async wrapper for CancelSolNetworkOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelSolNetworkOperationRequestT = Model::CancelSolNetworkOperationRequest>
        void CancelSolNetworkOperationAsync(const CancelSolNetworkOperationRequestT& request, const CancelSolNetworkOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::CancelSolNetworkOperation, request, handler, context);
        }

        /**
         * <p>Creates a function package.</p> <p>A function package is a .zip file in CSAR
         * (Cloud Service Archive) format that contains a network function (an ETSI
         * standard telecommunication application) and function package descriptor that
         * uses the TOSCA standard to describe how the network functions should run on your
         * network. For more information, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/ug/function-packages.html">Function
         * packages</a> in the <i>Amazon Web Services Telco Network Builder User Guide</i>.
         * </p> <p>Creating a function package is the first step for creating a network in
         * AWS TNB. This request creates an empty container with an ID. The next step is to
         * upload the actual CSAR zip file into that empty container. To upload function
         * package content, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_PutSolFunctionPackageContent.html">PutSolFunctionPackageContent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/CreateSolFunctionPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolFunctionPackageOutcome CreateSolFunctionPackage(const Model::CreateSolFunctionPackageRequest& request) const;

        /**
         * A Callable wrapper for CreateSolFunctionPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSolFunctionPackageRequestT = Model::CreateSolFunctionPackageRequest>
        Model::CreateSolFunctionPackageOutcomeCallable CreateSolFunctionPackageCallable(const CreateSolFunctionPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::CreateSolFunctionPackage, request);
        }

        /**
         * An Async wrapper for CreateSolFunctionPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSolFunctionPackageRequestT = Model::CreateSolFunctionPackageRequest>
        void CreateSolFunctionPackageAsync(const CreateSolFunctionPackageRequestT& request, const CreateSolFunctionPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::CreateSolFunctionPackage, request, handler, context);
        }

        /**
         * <p>Creates a network instance.</p> <p>A network instance is a single network
         * created in Amazon Web Services TNB that can be deployed and on which life-cycle
         * operations (like terminate, update, and delete) can be performed. Creating a
         * network instance is the third step after creating a network package. For more
         * information about network instances, <a
         * href="https://docs.aws.amazon.com/tnb/latest/ug/network-instances.html">Network
         * instances</a> in the <i>Amazon Web Services Telco Network Builder User
         * Guide</i>.</p> <p>Once you create a network instance, you can instantiate it. To
         * instantiate a network, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_InstantiateSolNetworkInstance.html">InstantiateSolNetworkInstance</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/CreateSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolNetworkInstanceOutcome CreateSolNetworkInstance(const Model::CreateSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSolNetworkInstanceRequestT = Model::CreateSolNetworkInstanceRequest>
        Model::CreateSolNetworkInstanceOutcomeCallable CreateSolNetworkInstanceCallable(const CreateSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::CreateSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for CreateSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSolNetworkInstanceRequestT = Model::CreateSolNetworkInstanceRequest>
        void CreateSolNetworkInstanceAsync(const CreateSolNetworkInstanceRequestT& request, const CreateSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::CreateSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Creates a network package.</p> <p>A network package is a .zip file in CSAR
         * (Cloud Service Archive) format defines the function packages you want to deploy
         * and the Amazon Web Services infrastructure you want to deploy them on. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/ug/network-instances.html">Network
         * instances</a> in the <i>Amazon Web Services Telco Network Builder User
         * Guide</i>. </p> <p>A network package consists of a network service descriptor
         * (NSD) file (required) and any additional files (optional), such as scripts
         * specific to your needs. For example, if you have multiple function packages in
         * your network package, you can use the NSD to define which network functions
         * should run in certain VPCs, subnets, or EKS clusters.</p> <p>This request
         * creates an empty network package container with an ID. Once you create a network
         * package, you can upload the network package content using <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_PutSolNetworkPackageContent.html">PutSolNetworkPackageContent</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/CreateSolNetworkPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSolNetworkPackageOutcome CreateSolNetworkPackage(const Model::CreateSolNetworkPackageRequest& request) const;

        /**
         * A Callable wrapper for CreateSolNetworkPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSolNetworkPackageRequestT = Model::CreateSolNetworkPackageRequest>
        Model::CreateSolNetworkPackageOutcomeCallable CreateSolNetworkPackageCallable(const CreateSolNetworkPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::CreateSolNetworkPackage, request);
        }

        /**
         * An Async wrapper for CreateSolNetworkPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSolNetworkPackageRequestT = Model::CreateSolNetworkPackageRequest>
        void CreateSolNetworkPackageAsync(const CreateSolNetworkPackageRequestT& request, const CreateSolNetworkPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::CreateSolNetworkPackage, request, handler, context);
        }

        /**
         * <p>Deletes a function package.</p> <p>A function package is a .zip file in CSAR
         * (Cloud Service Archive) format that contains a network function (an ETSI
         * standard telecommunication application) and function package descriptor that
         * uses the TOSCA standard to describe how the network functions should run on your
         * network.</p> <p>To delete a function package, the package must be in a disabled
         * state. To disable a function package, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_UpdateSolFunctionPackage.html">UpdateSolFunctionPackage</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/DeleteSolFunctionPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSolFunctionPackageOutcome DeleteSolFunctionPackage(const Model::DeleteSolFunctionPackageRequest& request) const;

        /**
         * A Callable wrapper for DeleteSolFunctionPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSolFunctionPackageRequestT = Model::DeleteSolFunctionPackageRequest>
        Model::DeleteSolFunctionPackageOutcomeCallable DeleteSolFunctionPackageCallable(const DeleteSolFunctionPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::DeleteSolFunctionPackage, request);
        }

        /**
         * An Async wrapper for DeleteSolFunctionPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSolFunctionPackageRequestT = Model::DeleteSolFunctionPackageRequest>
        void DeleteSolFunctionPackageAsync(const DeleteSolFunctionPackageRequestT& request, const DeleteSolFunctionPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::DeleteSolFunctionPackage, request, handler, context);
        }

        /**
         * <p>Deletes a network instance.</p> <p>A network instance is a single network
         * created in Amazon Web Services TNB that can be deployed and on which life-cycle
         * operations (like terminate, update, and delete) can be performed.</p> <p>To
         * delete a network instance, the instance must be in a stopped or terminated
         * state. To terminate a network instance, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_TerminateSolNetworkInstance.html">TerminateSolNetworkInstance</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/DeleteSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSolNetworkInstanceOutcome DeleteSolNetworkInstance(const Model::DeleteSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSolNetworkInstanceRequestT = Model::DeleteSolNetworkInstanceRequest>
        Model::DeleteSolNetworkInstanceOutcomeCallable DeleteSolNetworkInstanceCallable(const DeleteSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::DeleteSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for DeleteSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSolNetworkInstanceRequestT = Model::DeleteSolNetworkInstanceRequest>
        void DeleteSolNetworkInstanceAsync(const DeleteSolNetworkInstanceRequestT& request, const DeleteSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::DeleteSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Deletes network package.</p> <p>A network package is a .zip file in CSAR
         * (Cloud Service Archive) format defines the function packages you want to deploy
         * and the Amazon Web Services infrastructure you want to deploy them on.</p> <p>To
         * delete a network package, the package must be in a disable state. To disable a
         * network package, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_UpdateSolNetworkPackage.html">UpdateSolNetworkPackage</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/DeleteSolNetworkPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSolNetworkPackageOutcome DeleteSolNetworkPackage(const Model::DeleteSolNetworkPackageRequest& request) const;

        /**
         * A Callable wrapper for DeleteSolNetworkPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSolNetworkPackageRequestT = Model::DeleteSolNetworkPackageRequest>
        Model::DeleteSolNetworkPackageOutcomeCallable DeleteSolNetworkPackageCallable(const DeleteSolNetworkPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::DeleteSolNetworkPackage, request);
        }

        /**
         * An Async wrapper for DeleteSolNetworkPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSolNetworkPackageRequestT = Model::DeleteSolNetworkPackageRequest>
        void DeleteSolNetworkPackageAsync(const DeleteSolNetworkPackageRequestT& request, const DeleteSolNetworkPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::DeleteSolNetworkPackage, request, handler, context);
        }

        /**
         * <p>Gets the details of a network function instance, including the instantation
         * state and metadata from the function package descriptor in the network function
         * package.</p> <p>A network function instance is a function in a function package
         * .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolFunctionInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolFunctionInstanceOutcome GetSolFunctionInstance(const Model::GetSolFunctionInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetSolFunctionInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolFunctionInstanceRequestT = Model::GetSolFunctionInstanceRequest>
        Model::GetSolFunctionInstanceOutcomeCallable GetSolFunctionInstanceCallable(const GetSolFunctionInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolFunctionInstance, request);
        }

        /**
         * An Async wrapper for GetSolFunctionInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolFunctionInstanceRequestT = Model::GetSolFunctionInstanceRequest>
        void GetSolFunctionInstanceAsync(const GetSolFunctionInstanceRequestT& request, const GetSolFunctionInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolFunctionInstance, request, handler, context);
        }

        /**
         * <p>Gets the details of an individual function package, such as the operational
         * state and whether the package is in use.</p> <p>A function package is a .zip
         * file in CSAR (Cloud Service Archive) format that contains a network function (an
         * ETSI standard telecommunication application) and function package descriptor
         * that uses the TOSCA standard to describe how the network functions should run on
         * your network..</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolFunctionPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolFunctionPackageOutcome GetSolFunctionPackage(const Model::GetSolFunctionPackageRequest& request) const;

        /**
         * A Callable wrapper for GetSolFunctionPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolFunctionPackageRequestT = Model::GetSolFunctionPackageRequest>
        Model::GetSolFunctionPackageOutcomeCallable GetSolFunctionPackageCallable(const GetSolFunctionPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolFunctionPackage, request);
        }

        /**
         * An Async wrapper for GetSolFunctionPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolFunctionPackageRequestT = Model::GetSolFunctionPackageRequest>
        void GetSolFunctionPackageAsync(const GetSolFunctionPackageRequestT& request, const GetSolFunctionPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolFunctionPackage, request, handler, context);
        }

        /**
         * <p>Gets the contents of a function package.</p> <p>A function package is a .zip
         * file in CSAR (Cloud Service Archive) format that contains a network function (an
         * ETSI standard telecommunication application) and function package descriptor
         * that uses the TOSCA standard to describe how the network functions should run on
         * your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolFunctionPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolFunctionPackageContentOutcome GetSolFunctionPackageContent(const Model::GetSolFunctionPackageContentRequest& request) const;

        /**
         * A Callable wrapper for GetSolFunctionPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolFunctionPackageContentRequestT = Model::GetSolFunctionPackageContentRequest>
        Model::GetSolFunctionPackageContentOutcomeCallable GetSolFunctionPackageContentCallable(const GetSolFunctionPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolFunctionPackageContent, request);
        }

        /**
         * An Async wrapper for GetSolFunctionPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolFunctionPackageContentRequestT = Model::GetSolFunctionPackageContentRequest>
        void GetSolFunctionPackageContentAsync(const GetSolFunctionPackageContentRequestT& request, const GetSolFunctionPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolFunctionPackageContent, request, handler, context);
        }

        /**
         * <p>Gets a function package descriptor in a function package.</p> <p>A function
         * package descriptor is a .yaml file in a function package that uses the TOSCA
         * standard to describe how the network function in the function package should run
         * on your network.</p> <p>A function package is a .zip file in CSAR (Cloud Service
         * Archive) format that contains a network function (an ETSI standard
         * telecommunication application) and function package descriptor that uses the
         * TOSCA standard to describe how the network functions should run on your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolFunctionPackageDescriptor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolFunctionPackageDescriptorOutcome GetSolFunctionPackageDescriptor(const Model::GetSolFunctionPackageDescriptorRequest& request) const;

        /**
         * A Callable wrapper for GetSolFunctionPackageDescriptor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolFunctionPackageDescriptorRequestT = Model::GetSolFunctionPackageDescriptorRequest>
        Model::GetSolFunctionPackageDescriptorOutcomeCallable GetSolFunctionPackageDescriptorCallable(const GetSolFunctionPackageDescriptorRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolFunctionPackageDescriptor, request);
        }

        /**
         * An Async wrapper for GetSolFunctionPackageDescriptor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolFunctionPackageDescriptorRequestT = Model::GetSolFunctionPackageDescriptorRequest>
        void GetSolFunctionPackageDescriptorAsync(const GetSolFunctionPackageDescriptorRequestT& request, const GetSolFunctionPackageDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolFunctionPackageDescriptor, request, handler, context);
        }

        /**
         * <p>Gets the details of the network instance.</p> <p>A network instance is a
         * single network created in Amazon Web Services TNB that can be deployed and on
         * which life-cycle operations (like terminate, update, and delete) can be
         * performed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolNetworkInstanceOutcome GetSolNetworkInstance(const Model::GetSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolNetworkInstanceRequestT = Model::GetSolNetworkInstanceRequest>
        Model::GetSolNetworkInstanceOutcomeCallable GetSolNetworkInstanceCallable(const GetSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for GetSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolNetworkInstanceRequestT = Model::GetSolNetworkInstanceRequest>
        void GetSolNetworkInstanceAsync(const GetSolNetworkInstanceRequestT& request, const GetSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Gets the details of a network operation, including the tasks involved in the
         * network operation and the status of the tasks.</p> <p>A network operation is any
         * operation that is done to your network, such as network instance instantiation
         * or termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolNetworkOperationOutcome GetSolNetworkOperation(const Model::GetSolNetworkOperationRequest& request) const;

        /**
         * A Callable wrapper for GetSolNetworkOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolNetworkOperationRequestT = Model::GetSolNetworkOperationRequest>
        Model::GetSolNetworkOperationOutcomeCallable GetSolNetworkOperationCallable(const GetSolNetworkOperationRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolNetworkOperation, request);
        }

        /**
         * An Async wrapper for GetSolNetworkOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolNetworkOperationRequestT = Model::GetSolNetworkOperationRequest>
        void GetSolNetworkOperationAsync(const GetSolNetworkOperationRequestT& request, const GetSolNetworkOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolNetworkOperation, request, handler, context);
        }

        /**
         * <p>Gets the details of a network package.</p> <p>A network package is a .zip
         * file in CSAR (Cloud Service Archive) format defines the function packages you
         * want to deploy and the Amazon Web Services infrastructure you want to deploy
         * them on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolNetworkPackageOutcome GetSolNetworkPackage(const Model::GetSolNetworkPackageRequest& request) const;

        /**
         * A Callable wrapper for GetSolNetworkPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolNetworkPackageRequestT = Model::GetSolNetworkPackageRequest>
        Model::GetSolNetworkPackageOutcomeCallable GetSolNetworkPackageCallable(const GetSolNetworkPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolNetworkPackage, request);
        }

        /**
         * An Async wrapper for GetSolNetworkPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolNetworkPackageRequestT = Model::GetSolNetworkPackageRequest>
        void GetSolNetworkPackageAsync(const GetSolNetworkPackageRequestT& request, const GetSolNetworkPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolNetworkPackage, request, handler, context);
        }

        /**
         * <p>Gets the contents of a network package.</p> <p>A network package is a .zip
         * file in CSAR (Cloud Service Archive) format defines the function packages you
         * want to deploy and the Amazon Web Services infrastructure you want to deploy
         * them on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolNetworkPackageContentOutcome GetSolNetworkPackageContent(const Model::GetSolNetworkPackageContentRequest& request) const;

        /**
         * A Callable wrapper for GetSolNetworkPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolNetworkPackageContentRequestT = Model::GetSolNetworkPackageContentRequest>
        Model::GetSolNetworkPackageContentOutcomeCallable GetSolNetworkPackageContentCallable(const GetSolNetworkPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolNetworkPackageContent, request);
        }

        /**
         * An Async wrapper for GetSolNetworkPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolNetworkPackageContentRequestT = Model::GetSolNetworkPackageContentRequest>
        void GetSolNetworkPackageContentAsync(const GetSolNetworkPackageContentRequestT& request, const GetSolNetworkPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolNetworkPackageContent, request, handler, context);
        }

        /**
         * <p>Gets the content of the network service descriptor.</p> <p>A network service
         * descriptor is a .yaml file in a network package that uses the TOSCA standard to
         * describe the network functions you want to deploy and the Amazon Web Services
         * infrastructure you want to deploy the network functions on.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/GetSolNetworkPackageDescriptor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSolNetworkPackageDescriptorOutcome GetSolNetworkPackageDescriptor(const Model::GetSolNetworkPackageDescriptorRequest& request) const;

        /**
         * A Callable wrapper for GetSolNetworkPackageDescriptor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSolNetworkPackageDescriptorRequestT = Model::GetSolNetworkPackageDescriptorRequest>
        Model::GetSolNetworkPackageDescriptorOutcomeCallable GetSolNetworkPackageDescriptorCallable(const GetSolNetworkPackageDescriptorRequestT& request) const
        {
            return SubmitCallable(&TnbClient::GetSolNetworkPackageDescriptor, request);
        }

        /**
         * An Async wrapper for GetSolNetworkPackageDescriptor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSolNetworkPackageDescriptorRequestT = Model::GetSolNetworkPackageDescriptorRequest>
        void GetSolNetworkPackageDescriptorAsync(const GetSolNetworkPackageDescriptorRequestT& request, const GetSolNetworkPackageDescriptorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::GetSolNetworkPackageDescriptor, request, handler, context);
        }

        /**
         * <p>Instantiates a network instance.</p> <p>A network instance is a single
         * network created in Amazon Web Services TNB that can be deployed and on which
         * life-cycle operations (like terminate, update, and delete) can be performed.</p>
         * <p>Before you can instantiate a network instance, you have to create a network
         * instance. For more information, see <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_CreateSolNetworkInstance.html">CreateSolNetworkInstance</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/InstantiateSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::InstantiateSolNetworkInstanceOutcome InstantiateSolNetworkInstance(const Model::InstantiateSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for InstantiateSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InstantiateSolNetworkInstanceRequestT = Model::InstantiateSolNetworkInstanceRequest>
        Model::InstantiateSolNetworkInstanceOutcomeCallable InstantiateSolNetworkInstanceCallable(const InstantiateSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::InstantiateSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for InstantiateSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InstantiateSolNetworkInstanceRequestT = Model::InstantiateSolNetworkInstanceRequest>
        void InstantiateSolNetworkInstanceAsync(const InstantiateSolNetworkInstanceRequestT& request, const InstantiateSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::InstantiateSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Lists network function instances.</p> <p>A network function instance is a
         * function in a function package .</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolFunctionInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolFunctionInstancesOutcome ListSolFunctionInstances(const Model::ListSolFunctionInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListSolFunctionInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolFunctionInstancesRequestT = Model::ListSolFunctionInstancesRequest>
        Model::ListSolFunctionInstancesOutcomeCallable ListSolFunctionInstancesCallable(const ListSolFunctionInstancesRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListSolFunctionInstances, request);
        }

        /**
         * An Async wrapper for ListSolFunctionInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolFunctionInstancesRequestT = Model::ListSolFunctionInstancesRequest>
        void ListSolFunctionInstancesAsync(const ListSolFunctionInstancesRequestT& request, const ListSolFunctionInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListSolFunctionInstances, request, handler, context);
        }

        /**
         * <p>Lists information about function packages.</p> <p>A function package is a
         * .zip file in CSAR (Cloud Service Archive) format that contains a network
         * function (an ETSI standard telecommunication application) and function package
         * descriptor that uses the TOSCA standard to describe how the network functions
         * should run on your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolFunctionPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolFunctionPackagesOutcome ListSolFunctionPackages(const Model::ListSolFunctionPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListSolFunctionPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolFunctionPackagesRequestT = Model::ListSolFunctionPackagesRequest>
        Model::ListSolFunctionPackagesOutcomeCallable ListSolFunctionPackagesCallable(const ListSolFunctionPackagesRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListSolFunctionPackages, request);
        }

        /**
         * An Async wrapper for ListSolFunctionPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolFunctionPackagesRequestT = Model::ListSolFunctionPackagesRequest>
        void ListSolFunctionPackagesAsync(const ListSolFunctionPackagesRequestT& request, const ListSolFunctionPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListSolFunctionPackages, request, handler, context);
        }

        /**
         * <p>Lists your network instances.</p> <p>A network instance is a single network
         * created in Amazon Web Services TNB that can be deployed and on which life-cycle
         * operations (like terminate, update, and delete) can be performed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolNetworkInstancesOutcome ListSolNetworkInstances(const Model::ListSolNetworkInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListSolNetworkInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolNetworkInstancesRequestT = Model::ListSolNetworkInstancesRequest>
        Model::ListSolNetworkInstancesOutcomeCallable ListSolNetworkInstancesCallable(const ListSolNetworkInstancesRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListSolNetworkInstances, request);
        }

        /**
         * An Async wrapper for ListSolNetworkInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolNetworkInstancesRequestT = Model::ListSolNetworkInstancesRequest>
        void ListSolNetworkInstancesAsync(const ListSolNetworkInstancesRequestT& request, const ListSolNetworkInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListSolNetworkInstances, request, handler, context);
        }

        /**
         * <p>Lists details for a network operation, including when the operation started
         * and the status of the operation.</p> <p>A network operation is any operation
         * that is done to your network, such as network instance instantiation or
         * termination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolNetworkOperationsOutcome ListSolNetworkOperations(const Model::ListSolNetworkOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListSolNetworkOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolNetworkOperationsRequestT = Model::ListSolNetworkOperationsRequest>
        Model::ListSolNetworkOperationsOutcomeCallable ListSolNetworkOperationsCallable(const ListSolNetworkOperationsRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListSolNetworkOperations, request);
        }

        /**
         * An Async wrapper for ListSolNetworkOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolNetworkOperationsRequestT = Model::ListSolNetworkOperationsRequest>
        void ListSolNetworkOperationsAsync(const ListSolNetworkOperationsRequestT& request, const ListSolNetworkOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListSolNetworkOperations, request, handler, context);
        }

        /**
         * <p>Lists network packages.</p> <p>A network package is a .zip file in CSAR
         * (Cloud Service Archive) format defines the function packages you want to deploy
         * and the Amazon Web Services infrastructure you want to deploy them
         * on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSolNetworkPackagesOutcome ListSolNetworkPackages(const Model::ListSolNetworkPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListSolNetworkPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSolNetworkPackagesRequestT = Model::ListSolNetworkPackagesRequest>
        Model::ListSolNetworkPackagesOutcomeCallable ListSolNetworkPackagesCallable(const ListSolNetworkPackagesRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListSolNetworkPackages, request);
        }

        /**
         * An Async wrapper for ListSolNetworkPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSolNetworkPackagesRequestT = Model::ListSolNetworkPackagesRequest>
        void ListSolNetworkPackagesAsync(const ListSolNetworkPackagesRequestT& request, const ListSolNetworkPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListSolNetworkPackages, request, handler, context);
        }

        /**
         * <p>Lists tags for AWS TNB resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Uploads the contents of a function package.</p> <p>A function package is a
         * .zip file in CSAR (Cloud Service Archive) format that contains a network
         * function (an ETSI standard telecommunication application) and function package
         * descriptor that uses the TOSCA standard to describe how the network functions
         * should run on your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/PutSolFunctionPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSolFunctionPackageContentOutcome PutSolFunctionPackageContent(const Model::PutSolFunctionPackageContentRequest& request) const;

        /**
         * A Callable wrapper for PutSolFunctionPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSolFunctionPackageContentRequestT = Model::PutSolFunctionPackageContentRequest>
        Model::PutSolFunctionPackageContentOutcomeCallable PutSolFunctionPackageContentCallable(const PutSolFunctionPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::PutSolFunctionPackageContent, request);
        }

        /**
         * An Async wrapper for PutSolFunctionPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSolFunctionPackageContentRequestT = Model::PutSolFunctionPackageContentRequest>
        void PutSolFunctionPackageContentAsync(const PutSolFunctionPackageContentRequestT& request, const PutSolFunctionPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::PutSolFunctionPackageContent, request, handler, context);
        }

        /**
         * <p>Uploads the contents of a network package.</p> <p>A network package is a .zip
         * file in CSAR (Cloud Service Archive) format defines the function packages you
         * want to deploy and the Amazon Web Services infrastructure you want to deploy
         * them on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/PutSolNetworkPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSolNetworkPackageContentOutcome PutSolNetworkPackageContent(const Model::PutSolNetworkPackageContentRequest& request) const;

        /**
         * A Callable wrapper for PutSolNetworkPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSolNetworkPackageContentRequestT = Model::PutSolNetworkPackageContentRequest>
        Model::PutSolNetworkPackageContentOutcomeCallable PutSolNetworkPackageContentCallable(const PutSolNetworkPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::PutSolNetworkPackageContent, request);
        }

        /**
         * An Async wrapper for PutSolNetworkPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSolNetworkPackageContentRequestT = Model::PutSolNetworkPackageContentRequest>
        void PutSolNetworkPackageContentAsync(const PutSolNetworkPackageContentRequestT& request, const PutSolNetworkPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::PutSolNetworkPackageContent, request, handler, context);
        }

        /**
         * <p>Tags an AWS TNB resource.</p> <p>A tag is a label that you assign to an
         * Amazon Web Services resource. Each tag consists of a key and an optional value.
         * You can use tags to search and filter your resources or track your Amazon Web
         * Services costs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::TagResource, request, handler, context);
        }

        /**
         * <p>Terminates a network instance.</p> <p>A network instance is a single network
         * created in Amazon Web Services TNB that can be deployed and on which life-cycle
         * operations (like terminate, update, and delete) can be performed.</p> <p>You
         * must terminate a network instance before you can delete it.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/TerminateSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateSolNetworkInstanceOutcome TerminateSolNetworkInstance(const Model::TerminateSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for TerminateSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateSolNetworkInstanceRequestT = Model::TerminateSolNetworkInstanceRequest>
        Model::TerminateSolNetworkInstanceOutcomeCallable TerminateSolNetworkInstanceCallable(const TerminateSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::TerminateSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for TerminateSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateSolNetworkInstanceRequestT = Model::TerminateSolNetworkInstanceRequest>
        void TerminateSolNetworkInstanceAsync(const TerminateSolNetworkInstanceRequestT& request, const TerminateSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::TerminateSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Untags an AWS TNB resource.</p> <p>A tag is a label that you assign to an
         * Amazon Web Services resource. Each tag consists of a key and an optional value.
         * You can use tags to search and filter your resources or track your Amazon Web
         * Services costs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the operational state of function package.</p> <p>A function package
         * is a .zip file in CSAR (Cloud Service Archive) format that contains a network
         * function (an ETSI standard telecommunication application) and function package
         * descriptor that uses the TOSCA standard to describe how the network functions
         * should run on your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UpdateSolFunctionPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSolFunctionPackageOutcome UpdateSolFunctionPackage(const Model::UpdateSolFunctionPackageRequest& request) const;

        /**
         * A Callable wrapper for UpdateSolFunctionPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSolFunctionPackageRequestT = Model::UpdateSolFunctionPackageRequest>
        Model::UpdateSolFunctionPackageOutcomeCallable UpdateSolFunctionPackageCallable(const UpdateSolFunctionPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::UpdateSolFunctionPackage, request);
        }

        /**
         * An Async wrapper for UpdateSolFunctionPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSolFunctionPackageRequestT = Model::UpdateSolFunctionPackageRequest>
        void UpdateSolFunctionPackageAsync(const UpdateSolFunctionPackageRequestT& request, const UpdateSolFunctionPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::UpdateSolFunctionPackage, request, handler, context);
        }

        /**
         * <p>Update a network instance.</p> <p>A network instance is a single network
         * created in Amazon Web Services TNB that can be deployed and on which life-cycle
         * operations (like terminate, update, and delete) can be performed.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UpdateSolNetworkInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSolNetworkInstanceOutcome UpdateSolNetworkInstance(const Model::UpdateSolNetworkInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateSolNetworkInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSolNetworkInstanceRequestT = Model::UpdateSolNetworkInstanceRequest>
        Model::UpdateSolNetworkInstanceOutcomeCallable UpdateSolNetworkInstanceCallable(const UpdateSolNetworkInstanceRequestT& request) const
        {
            return SubmitCallable(&TnbClient::UpdateSolNetworkInstance, request);
        }

        /**
         * An Async wrapper for UpdateSolNetworkInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSolNetworkInstanceRequestT = Model::UpdateSolNetworkInstanceRequest>
        void UpdateSolNetworkInstanceAsync(const UpdateSolNetworkInstanceRequestT& request, const UpdateSolNetworkInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::UpdateSolNetworkInstance, request, handler, context);
        }

        /**
         * <p>Updates the operational state of a network package.</p> <p>A network package
         * is a .zip file in CSAR (Cloud Service Archive) format defines the function
         * packages you want to deploy and the Amazon Web Services infrastructure you want
         * to deploy them on.</p> <p>A network service descriptor is a .yaml file in a
         * network package that uses the TOSCA standard to describe the network functions
         * you want to deploy and the Amazon Web Services infrastructure you want to deploy
         * the network functions on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/UpdateSolNetworkPackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSolNetworkPackageOutcome UpdateSolNetworkPackage(const Model::UpdateSolNetworkPackageRequest& request) const;

        /**
         * A Callable wrapper for UpdateSolNetworkPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSolNetworkPackageRequestT = Model::UpdateSolNetworkPackageRequest>
        Model::UpdateSolNetworkPackageOutcomeCallable UpdateSolNetworkPackageCallable(const UpdateSolNetworkPackageRequestT& request) const
        {
            return SubmitCallable(&TnbClient::UpdateSolNetworkPackage, request);
        }

        /**
         * An Async wrapper for UpdateSolNetworkPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSolNetworkPackageRequestT = Model::UpdateSolNetworkPackageRequest>
        void UpdateSolNetworkPackageAsync(const UpdateSolNetworkPackageRequestT& request, const UpdateSolNetworkPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::UpdateSolNetworkPackage, request, handler, context);
        }

        /**
         * <p>Validates function package content. This can be used as a dry run before
         * uploading function package content with <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_PutSolFunctionPackageContent.html">PutSolFunctionPackageContent</a>.</p>
         * <p>A function package is a .zip file in CSAR (Cloud Service Archive) format that
         * contains a network function (an ETSI standard telecommunication application) and
         * function package descriptor that uses the TOSCA standard to describe how the
         * network functions should run on your network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ValidateSolFunctionPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateSolFunctionPackageContentOutcome ValidateSolFunctionPackageContent(const Model::ValidateSolFunctionPackageContentRequest& request) const;

        /**
         * A Callable wrapper for ValidateSolFunctionPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateSolFunctionPackageContentRequestT = Model::ValidateSolFunctionPackageContentRequest>
        Model::ValidateSolFunctionPackageContentOutcomeCallable ValidateSolFunctionPackageContentCallable(const ValidateSolFunctionPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ValidateSolFunctionPackageContent, request);
        }

        /**
         * An Async wrapper for ValidateSolFunctionPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateSolFunctionPackageContentRequestT = Model::ValidateSolFunctionPackageContentRequest>
        void ValidateSolFunctionPackageContentAsync(const ValidateSolFunctionPackageContentRequestT& request, const ValidateSolFunctionPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ValidateSolFunctionPackageContent, request, handler, context);
        }

        /**
         * <p>Validates network package content. This can be used as a dry run before
         * uploading network package content with <a
         * href="https://docs.aws.amazon.com/tnb/latest/APIReference/API_PutSolNetworkPackageContent.html">PutSolNetworkPackageContent</a>.</p>
         * <p>A network package is a .zip file in CSAR (Cloud Service Archive) format
         * defines the function packages you want to deploy and the Amazon Web Services
         * infrastructure you want to deploy them on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ValidateSolNetworkPackageContent">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateSolNetworkPackageContentOutcome ValidateSolNetworkPackageContent(const Model::ValidateSolNetworkPackageContentRequest& request) const;

        /**
         * A Callable wrapper for ValidateSolNetworkPackageContent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateSolNetworkPackageContentRequestT = Model::ValidateSolNetworkPackageContentRequest>
        Model::ValidateSolNetworkPackageContentOutcomeCallable ValidateSolNetworkPackageContentCallable(const ValidateSolNetworkPackageContentRequestT& request) const
        {
            return SubmitCallable(&TnbClient::ValidateSolNetworkPackageContent, request);
        }

        /**
         * An Async wrapper for ValidateSolNetworkPackageContent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateSolNetworkPackageContentRequestT = Model::ValidateSolNetworkPackageContentRequest>
        void ValidateSolNetworkPackageContentAsync(const ValidateSolNetworkPackageContentRequestT& request, const ValidateSolNetworkPackageContentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&TnbClient::ValidateSolNetworkPackageContent, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<TnbEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<TnbClient>;
      void init(const TnbClientConfiguration& clientConfiguration);

      TnbClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<TnbEndpointProviderBase> m_endpointProvider;
  };

} // namespace tnb
} // namespace Aws
