/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-guiconnect/SSMGuiConnect_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ssm-guiconnect/SSMGuiConnectServiceClientModel.h>

namespace Aws
{
namespace SSMGuiConnect
{
  /**
   * <p><fullname>AWS Systems Manager GUI Connect</fullname> <p>Systems Manager GUI
   * Connect, a component of Fleet Manager, lets you connect to your Window
   * Server-type Amazon Elastic Compute Cloud (Amazon EC2) instances using the Remote
   * Desktop Protocol (RDP). GUI Connect, which is powered by <a
   * href="https://docs.aws.amazon.com/dcv/latest/adminguide/what-is-dcv.html">Amazon
   * DCV</a>, provides you with secure connectivity to your Windows Server instances
   * directly from the Systems Manager console. You can have up to four simultaneous
   * connections in a single browser window. In the console, GUI Connect is also
   * referred to as Fleet Manager Remote Desktop.</p> <p>This reference is intended
   * to be used with the <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/"> <i>Amazon
   * Web Services Systems Manager User Guide</i> </a>. To get started, see the
   * following user guide topics:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/systems-manager-setting-up.html">Setting
   * up Amazon Web Services Systems Manager</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/systems-manager/latest/userguide/fleet-rdp.html">Connect
   * to a Windows Server managed instance using Remote Desktop</a> </p> </li>
   * </ul></p>
   */
  class AWS_SSMGUICONNECT_API SSMGuiConnectClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SSMGuiConnectClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SSMGuiConnectClientConfiguration ClientConfigurationType;
      typedef SSMGuiConnectEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMGuiConnectClient(const Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration& clientConfiguration = Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration(),
                            std::shared_ptr<SSMGuiConnectEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMGuiConnectClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<SSMGuiConnectEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration& clientConfiguration = Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMGuiConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<SSMGuiConnectEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration& clientConfiguration = Aws::SSMGuiConnect::SSMGuiConnectClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMGuiConnectClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SSMGuiConnectClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SSMGuiConnectClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SSMGuiConnectClient();

        /**
         * <p>Deletes the preferences for recording RDP connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-guiconnect-2021-05-01/DeleteConnectionRecordingPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectionRecordingPreferencesOutcome DeleteConnectionRecordingPreferences(const Model::DeleteConnectionRecordingPreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteConnectionRecordingPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectionRecordingPreferencesRequestT = Model::DeleteConnectionRecordingPreferencesRequest>
        Model::DeleteConnectionRecordingPreferencesOutcomeCallable DeleteConnectionRecordingPreferencesCallable(const DeleteConnectionRecordingPreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&SSMGuiConnectClient::DeleteConnectionRecordingPreferences, request);
        }

        /**
         * An Async wrapper for DeleteConnectionRecordingPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectionRecordingPreferencesRequestT = Model::DeleteConnectionRecordingPreferencesRequest>
        void DeleteConnectionRecordingPreferencesAsync(const DeleteConnectionRecordingPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteConnectionRecordingPreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&SSMGuiConnectClient::DeleteConnectionRecordingPreferences, request, handler, context);
        }

        /**
         * <p>Returns the preferences specified for recording RDP connections in the
         * requesting Amazon Web Services account and Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-guiconnect-2021-05-01/GetConnectionRecordingPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectionRecordingPreferencesOutcome GetConnectionRecordingPreferences(const Model::GetConnectionRecordingPreferencesRequest& request = {}) const;

        /**
         * A Callable wrapper for GetConnectionRecordingPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectionRecordingPreferencesRequestT = Model::GetConnectionRecordingPreferencesRequest>
        Model::GetConnectionRecordingPreferencesOutcomeCallable GetConnectionRecordingPreferencesCallable(const GetConnectionRecordingPreferencesRequestT& request = {}) const
        {
            return SubmitCallable(&SSMGuiConnectClient::GetConnectionRecordingPreferences, request);
        }

        /**
         * An Async wrapper for GetConnectionRecordingPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectionRecordingPreferencesRequestT = Model::GetConnectionRecordingPreferencesRequest>
        void GetConnectionRecordingPreferencesAsync(const GetConnectionRecordingPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetConnectionRecordingPreferencesRequestT& request = {}) const
        {
            return SubmitAsync(&SSMGuiConnectClient::GetConnectionRecordingPreferences, request, handler, context);
        }

        /**
         * <p>Updates the preferences for recording RDP connections.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-guiconnect-2021-05-01/UpdateConnectionRecordingPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectionRecordingPreferencesOutcome UpdateConnectionRecordingPreferences(const Model::UpdateConnectionRecordingPreferencesRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectionRecordingPreferences that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectionRecordingPreferencesRequestT = Model::UpdateConnectionRecordingPreferencesRequest>
        Model::UpdateConnectionRecordingPreferencesOutcomeCallable UpdateConnectionRecordingPreferencesCallable(const UpdateConnectionRecordingPreferencesRequestT& request) const
        {
            return SubmitCallable(&SSMGuiConnectClient::UpdateConnectionRecordingPreferences, request);
        }

        /**
         * An Async wrapper for UpdateConnectionRecordingPreferences that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectionRecordingPreferencesRequestT = Model::UpdateConnectionRecordingPreferencesRequest>
        void UpdateConnectionRecordingPreferencesAsync(const UpdateConnectionRecordingPreferencesRequestT& request, const UpdateConnectionRecordingPreferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SSMGuiConnectClient::UpdateConnectionRecordingPreferences, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SSMGuiConnectEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SSMGuiConnectClient>;
      void init(const SSMGuiConnectClientConfiguration& clientConfiguration);

      SSMGuiConnectClientConfiguration m_clientConfiguration;
      std::shared_ptr<SSMGuiConnectEndpointProviderBase> m_endpointProvider;
  };

} // namespace SSMGuiConnect
} // namespace Aws
