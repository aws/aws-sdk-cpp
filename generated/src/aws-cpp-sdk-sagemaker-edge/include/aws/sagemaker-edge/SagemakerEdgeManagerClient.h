﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-edge/SagemakerEdgeManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/sagemaker-edge/SagemakerEdgeManagerErrorMarshaller.h>

namespace Aws
{
namespace SagemakerEdgeManager
{
  AWS_SAGEMAKEREDGEMANAGER_API extern const char SERVICE_NAME[];
  /**
   * <p>SageMaker Edge Manager dataplane service for communicating with active
   * agents.</p>
   */
  class AWS_SAGEMAKEREDGEMANAGER_API SagemakerEdgeManagerClient : smithy::client::AwsSmithyClientT<Aws::SagemakerEdgeManager::SERVICE_NAME,
      Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      SagemakerEdgeManagerEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::SagemakerEdgeManagerErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<SagemakerEdgeManagerClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Sagemaker Edge"; }

      typedef SagemakerEdgeManagerClientConfiguration ClientConfigurationType;
      typedef SagemakerEdgeManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration(),
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SagemakerEdgeManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration& clientConfiguration = Aws::SagemakerEdgeManager::SagemakerEdgeManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SagemakerEdgeManagerClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SagemakerEdgeManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SagemakerEdgeManagerClient();

        /**
         * <p>Use to get the active deployments from a device.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeploymentsOutcome GetDeployments(const Model::GetDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        Model::GetDeploymentsOutcomeCallable GetDeploymentsCallable(const GetDeploymentsRequestT& request) const
        {
            return SubmitCallable(&SagemakerEdgeManagerClient::GetDeployments, request);
        }

        /**
         * An Async wrapper for GetDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeploymentsRequestT = Model::GetDeploymentsRequest>
        void GetDeploymentsAsync(const GetDeploymentsRequestT& request, const GetDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SagemakerEdgeManagerClient::GetDeployments, request, handler, context);
        }

        /**
         * <p>Use to check if a device is registered with SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/GetDeviceRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceRegistrationOutcome GetDeviceRegistration(const Model::GetDeviceRegistrationRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceRegistrationRequestT = Model::GetDeviceRegistrationRequest>
        Model::GetDeviceRegistrationOutcomeCallable GetDeviceRegistrationCallable(const GetDeviceRegistrationRequestT& request) const
        {
            return SubmitCallable(&SagemakerEdgeManagerClient::GetDeviceRegistration, request);
        }

        /**
         * An Async wrapper for GetDeviceRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceRegistrationRequestT = Model::GetDeviceRegistrationRequest>
        void GetDeviceRegistrationAsync(const GetDeviceRegistrationRequestT& request, const GetDeviceRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SagemakerEdgeManagerClient::GetDeviceRegistration, request, handler, context);
        }

        /**
         * <p>Use to get the current status of devices registered on SageMaker Edge
         * Manager.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-edge-2020-09-23/SendHeartbeat">AWS
         * API Reference</a></p>
         */
        virtual Model::SendHeartbeatOutcome SendHeartbeat(const Model::SendHeartbeatRequest& request) const;

        /**
         * A Callable wrapper for SendHeartbeat that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendHeartbeatRequestT = Model::SendHeartbeatRequest>
        Model::SendHeartbeatOutcomeCallable SendHeartbeatCallable(const SendHeartbeatRequestT& request) const
        {
            return SubmitCallable(&SagemakerEdgeManagerClient::SendHeartbeat, request);
        }

        /**
         * An Async wrapper for SendHeartbeat that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendHeartbeatRequestT = Model::SendHeartbeatRequest>
        void SendHeartbeatAsync(const SendHeartbeatRequestT& request, const SendHeartbeatResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SagemakerEdgeManagerClient::SendHeartbeat, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SagemakerEdgeManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SagemakerEdgeManagerClient>;

  };

} // namespace SagemakerEdgeManager
} // namespace Aws
