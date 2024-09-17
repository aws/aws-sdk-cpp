/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pca-connector-scep/PcaConnectorScepServiceClientModel.h>

namespace Aws
{
namespace PcaConnectorScep
{
  /**
   * <p>Connector for SCEP creates a connector between Amazon Web Services Private CA
   * and your SCEP-enabled clients and devices. For more information, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep.html">Connector
   * for SCEP</a> in the <i>Amazon Web Services Private CA User Guide</i>.</p>
   */
  class AWS_PCACONNECTORSCEP_API PcaConnectorScepClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PcaConnectorScepClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PcaConnectorScepClientConfiguration ClientConfigurationType;
      typedef PcaConnectorScepEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorScepClient(const Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration = Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration(),
                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorScepClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration = Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PcaConnectorScepClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<PcaConnectorScepEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration& clientConfiguration = Aws::PcaConnectorScep::PcaConnectorScepClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorScepClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorScepClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PcaConnectorScepClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PcaConnectorScepClient();

        /**
         * <p>For general-purpose connectors. Creates a <i>challenge password</i> for the
         * specified connector. The SCEP protocol uses a challenge password to authenticate
         * a request before issuing a certificate from a certificate authority (CA). Your
         * SCEP clients include the challenge password as part of their certificate request
         * to Connector for SCEP. To retrieve the connector Amazon Resource Names (ARNs)
         * for the connectors in your account, call <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_ListConnectors.html">ListConnectors</a>.</p>
         * <p>To create additional challenge passwords for the connector, call
         * <code>CreateChallenge</code> again. We recommend frequently rotating your
         * challenge passwords.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/CreateChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateChallengeOutcome CreateChallenge(const Model::CreateChallengeRequest& request) const;

        /**
         * A Callable wrapper for CreateChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateChallengeRequestT = Model::CreateChallengeRequest>
        Model::CreateChallengeOutcomeCallable CreateChallengeCallable(const CreateChallengeRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::CreateChallenge, request);
        }

        /**
         * An Async wrapper for CreateChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateChallengeRequestT = Model::CreateChallengeRequest>
        void CreateChallengeAsync(const CreateChallengeRequestT& request, const CreateChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::CreateChallenge, request, handler, context);
        }

        /**
         * <p>Creates a SCEP connector. A SCEP connector links Amazon Web Services Private
         * Certificate Authority to your SCEP-compatible devices and mobile device
         * management (MDM) systems. Before you create a connector, you must complete a set
         * of prerequisites, including creation of a private certificate authority (CA) to
         * use with this connector. For more information, see <a
         * href="https://docs.aws.amazon.com/privateca/latest/userguide/scep-connector.htmlconnector-for-scep-prerequisites.html">Connector
         * for SCEP prerequisites</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const CreateConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::CreateConnector, request);
        }

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        void CreateConnectorAsync(const CreateConnectorRequestT& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::CreateConnector, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_Challenge.html">Challenge</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/DeleteChallenge">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteChallengeOutcome DeleteChallenge(const Model::DeleteChallengeRequest& request) const;

        /**
         * A Callable wrapper for DeleteChallenge that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteChallengeRequestT = Model::DeleteChallengeRequest>
        Model::DeleteChallengeOutcomeCallable DeleteChallengeCallable(const DeleteChallengeRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::DeleteChallenge, request);
        }

        /**
         * An Async wrapper for DeleteChallenge that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteChallengeRequestT = Model::DeleteChallengeRequest>
        void DeleteChallengeAsync(const DeleteChallengeRequestT& request, const DeleteChallengeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::DeleteChallenge, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_Connector.html">Connector</a>.
         * This operation also deletes any challenges associated with the
         * connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const DeleteConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::DeleteConnector, request);
        }

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        void DeleteConnectorAsync(const DeleteConnectorRequestT& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::DeleteConnector, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the specified <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_Challenge.html">Challenge</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/GetChallengeMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChallengeMetadataOutcome GetChallengeMetadata(const Model::GetChallengeMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetChallengeMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChallengeMetadataRequestT = Model::GetChallengeMetadataRequest>
        Model::GetChallengeMetadataOutcomeCallable GetChallengeMetadataCallable(const GetChallengeMetadataRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::GetChallengeMetadata, request);
        }

        /**
         * An Async wrapper for GetChallengeMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChallengeMetadataRequestT = Model::GetChallengeMetadataRequest>
        void GetChallengeMetadataAsync(const GetChallengeMetadataRequestT& request, const GetChallengeMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::GetChallengeMetadata, request, handler, context);
        }

        /**
         * <p>Retrieves the challenge password for the specified <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_Challenge.html">Challenge</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/GetChallengePassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChallengePasswordOutcome GetChallengePassword(const Model::GetChallengePasswordRequest& request) const;

        /**
         * A Callable wrapper for GetChallengePassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetChallengePasswordRequestT = Model::GetChallengePasswordRequest>
        Model::GetChallengePasswordOutcomeCallable GetChallengePasswordCallable(const GetChallengePasswordRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::GetChallengePassword, request);
        }

        /**
         * An Async wrapper for GetChallengePassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetChallengePasswordRequestT = Model::GetChallengePasswordRequest>
        void GetChallengePasswordAsync(const GetChallengePasswordRequestT& request, const GetChallengePasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::GetChallengePassword, request, handler, context);
        }

        /**
         * <p>Retrieves details about the specified <a
         * href="https://docs.aws.amazon.com/C4SCEP_API/pca-connector-scep/latest/APIReference/API_Connector.html">Connector</a>.
         * Calling this action returns important details about the connector, such as the
         * public SCEP URL where your clients can request certificates.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/GetConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorOutcome GetConnector(const Model::GetConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorRequestT = Model::GetConnectorRequest>
        Model::GetConnectorOutcomeCallable GetConnectorCallable(const GetConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::GetConnector, request);
        }

        /**
         * An Async wrapper for GetConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorRequestT = Model::GetConnectorRequest>
        void GetConnectorAsync(const GetConnectorRequestT& request, const GetConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::GetConnector, request, handler, context);
        }

        /**
         * <p>Retrieves the challenge metadata for the specified ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/ListChallengeMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::ListChallengeMetadataOutcome ListChallengeMetadata(const Model::ListChallengeMetadataRequest& request) const;

        /**
         * A Callable wrapper for ListChallengeMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListChallengeMetadataRequestT = Model::ListChallengeMetadataRequest>
        Model::ListChallengeMetadataOutcomeCallable ListChallengeMetadataCallable(const ListChallengeMetadataRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::ListChallengeMetadata, request);
        }

        /**
         * An Async wrapper for ListChallengeMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListChallengeMetadataRequestT = Model::ListChallengeMetadataRequest>
        void ListChallengeMetadataAsync(const ListChallengeMetadataRequestT& request, const ListChallengeMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::ListChallengeMetadata, request, handler, context);
        }

        /**
         * <p>Lists the connectors belonging to your Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request = {}) const
        {
            return SubmitCallable(&PcaConnectorScepClient::ListConnectors, request);
        }

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        void ListConnectorsAsync(const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConnectorsRequestT& request = {}) const
        {
            return SubmitAsync(&PcaConnectorScepClient::ListConnectors, request, handler, context);
        }

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key-value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each
         * Amazon Web Services resource, up to 50 tags for a resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to your resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from your resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-scep-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorScepClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorScepClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PcaConnectorScepEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PcaConnectorScepClient>;
      void init(const PcaConnectorScepClientConfiguration& clientConfiguration);

      PcaConnectorScepClientConfiguration m_clientConfiguration;
      std::shared_ptr<PcaConnectorScepEndpointProviderBase> m_endpointProvider;
  };

} // namespace PcaConnectorScep
} // namespace Aws
