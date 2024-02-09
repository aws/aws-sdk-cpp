/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/s3outposts/S3OutpostsServiceClientModel.h>

namespace Aws
{
namespace S3Outposts
{
  /**
   * <p>Amazon S3 on Outposts provides access to S3 on Outposts operations.</p>
   */
  class AWS_S3OUTPOSTS_API S3OutpostsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<S3OutpostsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef S3OutpostsClientConfiguration ClientConfigurationType;
      typedef S3OutpostsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3OutpostsClient(const Aws::S3Outposts::S3OutpostsClientConfiguration& clientConfiguration = Aws::S3Outposts::S3OutpostsClientConfiguration(),
                         std::shared_ptr<S3OutpostsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<S3OutpostsEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::S3Outposts::S3OutpostsClientConfiguration& clientConfiguration = Aws::S3Outposts::S3OutpostsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<S3OutpostsEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::S3Outposts::S3OutpostsClientConfiguration& clientConfiguration = Aws::S3Outposts::S3OutpostsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3OutpostsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        S3OutpostsClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        S3OutpostsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~S3OutpostsClient();

        /**
         * <p>Creates an endpoint and associates it with the specified Outpost.</p> 
         * <p>It can take up to 5 minutes for this action to finish.</p>  <p/>
         * <p>Related actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_ListEndpoints.html">ListEndpoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/CreateEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEndpointOutcome CreateEndpoint(const Model::CreateEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        Model::CreateEndpointOutcomeCallable CreateEndpointCallable(const CreateEndpointRequestT& request) const
        {
            return SubmitCallable(&S3OutpostsClient::CreateEndpoint, request);
        }

        /**
         * An Async wrapper for CreateEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEndpointRequestT = Model::CreateEndpointRequest>
        void CreateEndpointAsync(const CreateEndpointRequestT& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3OutpostsClient::CreateEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes an endpoint.</p>  <p>It can take up to 5 minutes for this
         * action to finish.</p>  <p/> <p>Related actions include:</p> <ul> <li> <p>
         * <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_ListEndpoints.html">ListEndpoints</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/DeleteEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEndpointOutcome DeleteEndpoint(const Model::DeleteEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        Model::DeleteEndpointOutcomeCallable DeleteEndpointCallable(const DeleteEndpointRequestT& request) const
        {
            return SubmitCallable(&S3OutpostsClient::DeleteEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEndpointRequestT = Model::DeleteEndpointRequest>
        void DeleteEndpointAsync(const DeleteEndpointRequestT& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3OutpostsClient::DeleteEndpoint, request, handler, context);
        }

        /**
         * <p>Lists endpoints associated with the specified Outpost. </p> <p>Related
         * actions include:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/ListEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEndpointsOutcome ListEndpoints(const Model::ListEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        Model::ListEndpointsOutcomeCallable ListEndpointsCallable(const ListEndpointsRequestT& request) const
        {
            return SubmitCallable(&S3OutpostsClient::ListEndpoints, request);
        }

        /**
         * An Async wrapper for ListEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEndpointsRequestT = Model::ListEndpointsRequest>
        void ListEndpointsAsync(const ListEndpointsRequestT& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3OutpostsClient::ListEndpoints, request, handler, context);
        }

        /**
         * <p>Lists the Outposts with S3 on Outposts capacity for your Amazon Web Services
         * account. Includes S3 on Outposts that you have access to as the Outposts owner,
         * or as a shared user from Resource Access Manager (RAM). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/ListOutpostsWithS3">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutpostsWithS3Outcome ListOutpostsWithS3(const Model::ListOutpostsWithS3Request& request) const;

        /**
         * A Callable wrapper for ListOutpostsWithS3 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOutpostsWithS3RequestT = Model::ListOutpostsWithS3Request>
        Model::ListOutpostsWithS3OutcomeCallable ListOutpostsWithS3Callable(const ListOutpostsWithS3RequestT& request) const
        {
            return SubmitCallable(&S3OutpostsClient::ListOutpostsWithS3, request);
        }

        /**
         * An Async wrapper for ListOutpostsWithS3 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOutpostsWithS3RequestT = Model::ListOutpostsWithS3Request>
        void ListOutpostsWithS3Async(const ListOutpostsWithS3RequestT& request, const ListOutpostsWithS3ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3OutpostsClient::ListOutpostsWithS3, request, handler, context);
        }

        /**
         * <p>Lists all endpoints associated with an Outpost that has been shared by Amazon
         * Web Services Resource Access Manager (RAM).</p> <p>Related actions include:</p>
         * <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_CreateEndpoint.html">CreateEndpoint</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/AmazonS3/latest/API/API_s3outposts_DeleteEndpoint.html">DeleteEndpoint</a>
         * </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/s3outposts-2017-07-25/ListSharedEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSharedEndpointsOutcome ListSharedEndpoints(const Model::ListSharedEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListSharedEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSharedEndpointsRequestT = Model::ListSharedEndpointsRequest>
        Model::ListSharedEndpointsOutcomeCallable ListSharedEndpointsCallable(const ListSharedEndpointsRequestT& request) const
        {
            return SubmitCallable(&S3OutpostsClient::ListSharedEndpoints, request);
        }

        /**
         * An Async wrapper for ListSharedEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSharedEndpointsRequestT = Model::ListSharedEndpointsRequest>
        void ListSharedEndpointsAsync(const ListSharedEndpointsRequestT& request, const ListSharedEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&S3OutpostsClient::ListSharedEndpoints, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<S3OutpostsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<S3OutpostsClient>;
      void init(const S3OutpostsClientConfiguration& clientConfiguration);

      S3OutpostsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<S3OutpostsEndpointProviderBase> m_endpointProvider;
  };

} // namespace S3Outposts
} // namespace Aws
