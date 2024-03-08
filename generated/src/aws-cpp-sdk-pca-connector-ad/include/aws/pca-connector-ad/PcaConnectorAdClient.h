/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pca-connector-ad/PcaConnectorAdServiceClientModel.h>

namespace Aws
{
namespace PcaConnectorAd
{
  /**
   * <p>Amazon Web Services Private CA Connector for Active Directory creates a
   * connector between Amazon Web Services Private CA and Active Directory (AD) that
   * enables you to provision security certificates for AD signed by a private CA
   * that you own. For more information, see <a
   * href="https://docs.aws.amazon.com/privateca/latest/userguide/ad-connector.html">Amazon
   * Web Services Private CA Connector for Active Directory</a>.</p>
   */
  class AWS_PCACONNECTORAD_API PcaConnectorAdClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PcaConnectorAdClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PcaConnectorAdClientConfiguration ClientConfigurationType;
      typedef PcaConnectorAdEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorAdClient(const Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration = Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration(),
                             std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorAdClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration = Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PcaConnectorAdClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<PcaConnectorAdEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration& clientConfiguration = Aws::PcaConnectorAd::PcaConnectorAdClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorAdClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PcaConnectorAdClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PcaConnectorAdClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PcaConnectorAdClient();

        /**
         * <p>Creates a connector between Amazon Web Services Private CA and an Active
         * Directory. You must specify the private CA, directory ID, and security
         * groups.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CreateConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorOutcome CreateConnector(const Model::CreateConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        Model::CreateConnectorOutcomeCallable CreateConnectorCallable(const CreateConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::CreateConnector, request);
        }

        /**
         * An Async wrapper for CreateConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorRequestT = Model::CreateConnectorRequest>
        void CreateConnectorAsync(const CreateConnectorRequestT& request, const CreateConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::CreateConnector, request, handler, context);
        }

        /**
         * <p>Creates a directory registration that authorizes communication between Amazon
         * Web Services Private CA and an Active Directory</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CreateDirectoryRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDirectoryRegistrationOutcome CreateDirectoryRegistration(const Model::CreateDirectoryRegistrationRequest& request) const;

        /**
         * A Callable wrapper for CreateDirectoryRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDirectoryRegistrationRequestT = Model::CreateDirectoryRegistrationRequest>
        Model::CreateDirectoryRegistrationOutcomeCallable CreateDirectoryRegistrationCallable(const CreateDirectoryRegistrationRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::CreateDirectoryRegistration, request);
        }

        /**
         * An Async wrapper for CreateDirectoryRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDirectoryRegistrationRequestT = Model::CreateDirectoryRegistrationRequest>
        void CreateDirectoryRegistrationAsync(const CreateDirectoryRegistrationRequestT& request, const CreateDirectoryRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::CreateDirectoryRegistration, request, handler, context);
        }

        /**
         * <p>Creates a service principal name (SPN) for the service account in Active
         * Directory. Kerberos authentication uses SPNs to associate a service instance
         * with a service sign-in account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CreateServicePrincipalName">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServicePrincipalNameOutcome CreateServicePrincipalName(const Model::CreateServicePrincipalNameRequest& request) const;

        /**
         * A Callable wrapper for CreateServicePrincipalName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServicePrincipalNameRequestT = Model::CreateServicePrincipalNameRequest>
        Model::CreateServicePrincipalNameOutcomeCallable CreateServicePrincipalNameCallable(const CreateServicePrincipalNameRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::CreateServicePrincipalName, request);
        }

        /**
         * An Async wrapper for CreateServicePrincipalName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServicePrincipalNameRequestT = Model::CreateServicePrincipalNameRequest>
        void CreateServicePrincipalNameAsync(const CreateServicePrincipalNameRequestT& request, const CreateServicePrincipalNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::CreateServicePrincipalName, request, handler, context);
        }

        /**
         * <p>Creates an Active Directory compatible certificate template. The connectors
         * issues certificates using these templates based on the requester’s Active
         * Directory group membership.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CreateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::CreateTemplate, request);
        }

        /**
         * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateRequestT = Model::CreateTemplateRequest>
        void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::CreateTemplate, request, handler, context);
        }

        /**
         * <p>Create a group access control entry. Allow or deny Active Directory groups
         * from enrolling and/or autoenrolling with the template based on the group
         * security identifiers (SIDs).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/CreateTemplateGroupAccessControlEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTemplateGroupAccessControlEntryOutcome CreateTemplateGroupAccessControlEntry(const Model::CreateTemplateGroupAccessControlEntryRequest& request) const;

        /**
         * A Callable wrapper for CreateTemplateGroupAccessControlEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTemplateGroupAccessControlEntryRequestT = Model::CreateTemplateGroupAccessControlEntryRequest>
        Model::CreateTemplateGroupAccessControlEntryOutcomeCallable CreateTemplateGroupAccessControlEntryCallable(const CreateTemplateGroupAccessControlEntryRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::CreateTemplateGroupAccessControlEntry, request);
        }

        /**
         * An Async wrapper for CreateTemplateGroupAccessControlEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTemplateGroupAccessControlEntryRequestT = Model::CreateTemplateGroupAccessControlEntryRequest>
        void CreateTemplateGroupAccessControlEntryAsync(const CreateTemplateGroupAccessControlEntryRequestT& request, const CreateTemplateGroupAccessControlEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::CreateTemplateGroupAccessControlEntry, request, handler, context);
        }

        /**
         * <p>Deletes a connector for Active Directory. You must provide the Amazon
         * Resource Name (ARN) of the connector that you want to delete. You can find the
         * ARN by calling the <a
         * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_ListConnectors">https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_ListConnectors</a>
         * action. Deleting a connector does not deregister your directory with Amazon Web
         * Services Private CA. You can deregister your directory by calling the <a
         * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_DeleteDirectoryRegistration">https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_DeleteDirectoryRegistration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/DeleteConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorOutcome DeleteConnector(const Model::DeleteConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        Model::DeleteConnectorOutcomeCallable DeleteConnectorCallable(const DeleteConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::DeleteConnector, request);
        }

        /**
         * An Async wrapper for DeleteConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorRequestT = Model::DeleteConnectorRequest>
        void DeleteConnectorAsync(const DeleteConnectorRequestT& request, const DeleteConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::DeleteConnector, request, handler, context);
        }

        /**
         * <p>Deletes a directory registration. Deleting a directory registration
         * deauthorizes Amazon Web Services Private CA with the directory. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/DeleteDirectoryRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDirectoryRegistrationOutcome DeleteDirectoryRegistration(const Model::DeleteDirectoryRegistrationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDirectoryRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDirectoryRegistrationRequestT = Model::DeleteDirectoryRegistrationRequest>
        Model::DeleteDirectoryRegistrationOutcomeCallable DeleteDirectoryRegistrationCallable(const DeleteDirectoryRegistrationRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::DeleteDirectoryRegistration, request);
        }

        /**
         * An Async wrapper for DeleteDirectoryRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDirectoryRegistrationRequestT = Model::DeleteDirectoryRegistrationRequest>
        void DeleteDirectoryRegistrationAsync(const DeleteDirectoryRegistrationRequestT& request, const DeleteDirectoryRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::DeleteDirectoryRegistration, request, handler, context);
        }

        /**
         * <p>Deletes the service principal name (SPN) used by a connector to authenticate
         * with your Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/DeleteServicePrincipalName">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServicePrincipalNameOutcome DeleteServicePrincipalName(const Model::DeleteServicePrincipalNameRequest& request) const;

        /**
         * A Callable wrapper for DeleteServicePrincipalName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServicePrincipalNameRequestT = Model::DeleteServicePrincipalNameRequest>
        Model::DeleteServicePrincipalNameOutcomeCallable DeleteServicePrincipalNameCallable(const DeleteServicePrincipalNameRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::DeleteServicePrincipalName, request);
        }

        /**
         * An Async wrapper for DeleteServicePrincipalName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServicePrincipalNameRequestT = Model::DeleteServicePrincipalNameRequest>
        void DeleteServicePrincipalNameAsync(const DeleteServicePrincipalNameRequestT& request, const DeleteServicePrincipalNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::DeleteServicePrincipalName, request, handler, context);
        }

        /**
         * <p>Deletes a template. Certificates issued using the template are still valid
         * until they are revoked or expired.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/DeleteTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::DeleteTemplate, request);
        }

        /**
         * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
        void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::DeleteTemplate, request, handler, context);
        }

        /**
         * <p>Deletes a group access control entry.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/DeleteTemplateGroupAccessControlEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTemplateGroupAccessControlEntryOutcome DeleteTemplateGroupAccessControlEntry(const Model::DeleteTemplateGroupAccessControlEntryRequest& request) const;

        /**
         * A Callable wrapper for DeleteTemplateGroupAccessControlEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTemplateGroupAccessControlEntryRequestT = Model::DeleteTemplateGroupAccessControlEntryRequest>
        Model::DeleteTemplateGroupAccessControlEntryOutcomeCallable DeleteTemplateGroupAccessControlEntryCallable(const DeleteTemplateGroupAccessControlEntryRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::DeleteTemplateGroupAccessControlEntry, request);
        }

        /**
         * An Async wrapper for DeleteTemplateGroupAccessControlEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTemplateGroupAccessControlEntryRequestT = Model::DeleteTemplateGroupAccessControlEntryRequest>
        void DeleteTemplateGroupAccessControlEntryAsync(const DeleteTemplateGroupAccessControlEntryRequestT& request, const DeleteTemplateGroupAccessControlEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::DeleteTemplateGroupAccessControlEntry, request, handler, context);
        }

        /**
         * <p>Lists information about your connector. You specify the connector on input by
         * its ARN (Amazon Resource Name). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GetConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorOutcome GetConnector(const Model::GetConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorRequestT = Model::GetConnectorRequest>
        Model::GetConnectorOutcomeCallable GetConnectorCallable(const GetConnectorRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::GetConnector, request);
        }

        /**
         * An Async wrapper for GetConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorRequestT = Model::GetConnectorRequest>
        void GetConnectorAsync(const GetConnectorRequestT& request, const GetConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::GetConnector, request, handler, context);
        }

        /**
         * <p>A structure that contains information about your directory
         * registration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GetDirectoryRegistration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDirectoryRegistrationOutcome GetDirectoryRegistration(const Model::GetDirectoryRegistrationRequest& request) const;

        /**
         * A Callable wrapper for GetDirectoryRegistration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDirectoryRegistrationRequestT = Model::GetDirectoryRegistrationRequest>
        Model::GetDirectoryRegistrationOutcomeCallable GetDirectoryRegistrationCallable(const GetDirectoryRegistrationRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::GetDirectoryRegistration, request);
        }

        /**
         * An Async wrapper for GetDirectoryRegistration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDirectoryRegistrationRequestT = Model::GetDirectoryRegistrationRequest>
        void GetDirectoryRegistrationAsync(const GetDirectoryRegistrationRequestT& request, const GetDirectoryRegistrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::GetDirectoryRegistration, request, handler, context);
        }

        /**
         * <p>Lists the service principal name that the connector uses to authenticate with
         * Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GetServicePrincipalName">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServicePrincipalNameOutcome GetServicePrincipalName(const Model::GetServicePrincipalNameRequest& request) const;

        /**
         * A Callable wrapper for GetServicePrincipalName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServicePrincipalNameRequestT = Model::GetServicePrincipalNameRequest>
        Model::GetServicePrincipalNameOutcomeCallable GetServicePrincipalNameCallable(const GetServicePrincipalNameRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::GetServicePrincipalName, request);
        }

        /**
         * An Async wrapper for GetServicePrincipalName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServicePrincipalNameRequestT = Model::GetServicePrincipalNameRequest>
        void GetServicePrincipalNameAsync(const GetServicePrincipalNameRequestT& request, const GetServicePrincipalNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::GetServicePrincipalName, request, handler, context);
        }

        /**
         * <p>Retrieves a certificate template that the connector uses to issue
         * certificates from a private CA.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GetTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        Model::GetTemplateOutcomeCallable GetTemplateCallable(const GetTemplateRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::GetTemplate, request);
        }

        /**
         * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateRequestT = Model::GetTemplateRequest>
        void GetTemplateAsync(const GetTemplateRequestT& request, const GetTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::GetTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves the group access control entries for a template.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/GetTemplateGroupAccessControlEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTemplateGroupAccessControlEntryOutcome GetTemplateGroupAccessControlEntry(const Model::GetTemplateGroupAccessControlEntryRequest& request) const;

        /**
         * A Callable wrapper for GetTemplateGroupAccessControlEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetTemplateGroupAccessControlEntryRequestT = Model::GetTemplateGroupAccessControlEntryRequest>
        Model::GetTemplateGroupAccessControlEntryOutcomeCallable GetTemplateGroupAccessControlEntryCallable(const GetTemplateGroupAccessControlEntryRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::GetTemplateGroupAccessControlEntry, request);
        }

        /**
         * An Async wrapper for GetTemplateGroupAccessControlEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTemplateGroupAccessControlEntryRequestT = Model::GetTemplateGroupAccessControlEntryRequest>
        void GetTemplateGroupAccessControlEntryAsync(const GetTemplateGroupAccessControlEntryRequestT& request, const GetTemplateGroupAccessControlEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::GetTemplateGroupAccessControlEntry, request, handler, context);
        }

        /**
         * <p>Lists the connectors that you created by using the <a
         * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector">https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateConnector</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorsOutcome ListConnectors(const Model::ListConnectorsRequest& request) const;

        /**
         * A Callable wrapper for ListConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        Model::ListConnectorsOutcomeCallable ListConnectorsCallable(const ListConnectorsRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListConnectors, request);
        }

        /**
         * An Async wrapper for ListConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorsRequestT = Model::ListConnectorsRequest>
        void ListConnectorsAsync(const ListConnectorsRequestT& request, const ListConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListConnectors, request, handler, context);
        }

        /**
         * <p>Lists the directory registrations that you created by using the <a
         * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration">https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListDirectoryRegistrations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDirectoryRegistrationsOutcome ListDirectoryRegistrations(const Model::ListDirectoryRegistrationsRequest& request) const;

        /**
         * A Callable wrapper for ListDirectoryRegistrations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDirectoryRegistrationsRequestT = Model::ListDirectoryRegistrationsRequest>
        Model::ListDirectoryRegistrationsOutcomeCallable ListDirectoryRegistrationsCallable(const ListDirectoryRegistrationsRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListDirectoryRegistrations, request);
        }

        /**
         * An Async wrapper for ListDirectoryRegistrations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDirectoryRegistrationsRequestT = Model::ListDirectoryRegistrationsRequest>
        void ListDirectoryRegistrationsAsync(const ListDirectoryRegistrationsRequestT& request, const ListDirectoryRegistrationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListDirectoryRegistrations, request, handler, context);
        }

        /**
         * <p>Lists the service principal names that the connector uses to authenticate
         * with Active Directory.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListServicePrincipalNames">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicePrincipalNamesOutcome ListServicePrincipalNames(const Model::ListServicePrincipalNamesRequest& request) const;

        /**
         * A Callable wrapper for ListServicePrincipalNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicePrincipalNamesRequestT = Model::ListServicePrincipalNamesRequest>
        Model::ListServicePrincipalNamesOutcomeCallable ListServicePrincipalNamesCallable(const ListServicePrincipalNamesRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListServicePrincipalNames, request);
        }

        /**
         * An Async wrapper for ListServicePrincipalNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicePrincipalNamesRequestT = Model::ListServicePrincipalNamesRequest>
        void ListServicePrincipalNamesAsync(const ListServicePrincipalNamesRequestT& request, const ListServicePrincipalNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListServicePrincipalNames, request, handler, context);
        }

        /**
         * <p>Lists the tags, if any, that are associated with your resource.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists group access control entries you created. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListTemplateGroupAccessControlEntries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplateGroupAccessControlEntriesOutcome ListTemplateGroupAccessControlEntries(const Model::ListTemplateGroupAccessControlEntriesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplateGroupAccessControlEntries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplateGroupAccessControlEntriesRequestT = Model::ListTemplateGroupAccessControlEntriesRequest>
        Model::ListTemplateGroupAccessControlEntriesOutcomeCallable ListTemplateGroupAccessControlEntriesCallable(const ListTemplateGroupAccessControlEntriesRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListTemplateGroupAccessControlEntries, request);
        }

        /**
         * An Async wrapper for ListTemplateGroupAccessControlEntries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplateGroupAccessControlEntriesRequestT = Model::ListTemplateGroupAccessControlEntriesRequest>
        void ListTemplateGroupAccessControlEntriesAsync(const ListTemplateGroupAccessControlEntriesRequestT& request, const ListTemplateGroupAccessControlEntriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListTemplateGroupAccessControlEntries, request, handler, context);
        }

        /**
         * <p>Lists the templates, if any, that are associated with a
         * connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/ListTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::ListTemplates, request);
        }

        /**
         * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTemplatesRequestT = Model::ListTemplatesRequest>
        void ListTemplatesAsync(const ListTemplatesRequestT& request, const ListTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::ListTemplates, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to your resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from your resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Update template configuration to define the information included in
         * certificates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/UpdateTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::UpdateTemplate, request);
        }

        /**
         * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
        void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::UpdateTemplate, request, handler, context);
        }

        /**
         * <p>Update a group access control entry you created using <a
         * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateTemplateGroupAccessControlEntry.html">CreateTemplateGroupAccessControlEntry</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pca-connector-ad-2018-05-10/UpdateTemplateGroupAccessControlEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTemplateGroupAccessControlEntryOutcome UpdateTemplateGroupAccessControlEntry(const Model::UpdateTemplateGroupAccessControlEntryRequest& request) const;

        /**
         * A Callable wrapper for UpdateTemplateGroupAccessControlEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTemplateGroupAccessControlEntryRequestT = Model::UpdateTemplateGroupAccessControlEntryRequest>
        Model::UpdateTemplateGroupAccessControlEntryOutcomeCallable UpdateTemplateGroupAccessControlEntryCallable(const UpdateTemplateGroupAccessControlEntryRequestT& request) const
        {
            return SubmitCallable(&PcaConnectorAdClient::UpdateTemplateGroupAccessControlEntry, request);
        }

        /**
         * An Async wrapper for UpdateTemplateGroupAccessControlEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTemplateGroupAccessControlEntryRequestT = Model::UpdateTemplateGroupAccessControlEntryRequest>
        void UpdateTemplateGroupAccessControlEntryAsync(const UpdateTemplateGroupAccessControlEntryRequestT& request, const UpdateTemplateGroupAccessControlEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PcaConnectorAdClient::UpdateTemplateGroupAccessControlEntry, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PcaConnectorAdEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PcaConnectorAdClient>;
      void init(const PcaConnectorAdClientConfiguration& clientConfiguration);

      PcaConnectorAdClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PcaConnectorAdEndpointProviderBase> m_endpointProvider;
  };

} // namespace PcaConnectorAd
} // namespace Aws
