/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhub-config/MigrationHubConfigServiceClientModel.h>

namespace Aws
{
namespace MigrationHubConfig
{
  /**
   * <p>The AWS Migration Hub home region APIs are available specifically for working
   * with your Migration Hub home region. You can use these APIs to determine a home
   * region, as well as to create and work with controls that describe the home
   * region.</p> <ul> <li> <p>You must make API calls for write actions (create,
   * notify, associate, disassociate, import, or put) while in your home region, or a
   * <code>HomeRegionNotSetException</code> error is returned.</p> </li> <li> <p>API
   * calls for read actions (list, describe, stop, and delete) are permitted outside
   * of your home region.</p> </li> <li> <p>If you call a write API outside the home
   * region, an <code>InvalidInputException</code> is returned.</p> </li> <li> <p>You
   * can call <code>GetHomeRegion</code> action to obtain the account's Migration Hub
   * home region.</p> </li> </ul> <p>For specific API usage, see the sections that
   * follow in this AWS Migration Hub Home Region API reference. </p>
   */
  class AWS_MIGRATIONHUBCONFIG_API MigrationHubConfigClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubConfigClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MigrationHubConfigClientConfiguration ClientConfigurationType;
      typedef MigrationHubConfigEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration(),
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<MigrationHubConfigEndpointProviderBase> endpointProvider = nullptr,
                                 const Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration& clientConfiguration = Aws::MigrationHubConfig::MigrationHubConfigClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubConfigClient(const Aws::Auth::AWSCredentials& credentials,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubConfigClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                 const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubConfigClient();

        /**
         * <p>This API sets up the home region for the calling account only.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/CreateHomeRegionControl">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHomeRegionControlOutcome CreateHomeRegionControl(const Model::CreateHomeRegionControlRequest& request) const;

        /**
         * A Callable wrapper for CreateHomeRegionControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateHomeRegionControlRequestT = Model::CreateHomeRegionControlRequest>
        Model::CreateHomeRegionControlOutcomeCallable CreateHomeRegionControlCallable(const CreateHomeRegionControlRequestT& request) const
        {
            return SubmitCallable(&MigrationHubConfigClient::CreateHomeRegionControl, request);
        }

        /**
         * An Async wrapper for CreateHomeRegionControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateHomeRegionControlRequestT = Model::CreateHomeRegionControlRequest>
        void CreateHomeRegionControlAsync(const CreateHomeRegionControlRequestT& request, const CreateHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubConfigClient::CreateHomeRegionControl, request, handler, context);
        }

        /**
         * <p>This operation deletes the home region configuration for the calling account.
         * The operation does not delete discovery or migration tracking data in the home
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DeleteHomeRegionControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHomeRegionControlOutcome DeleteHomeRegionControl(const Model::DeleteHomeRegionControlRequest& request) const;

        /**
         * A Callable wrapper for DeleteHomeRegionControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHomeRegionControlRequestT = Model::DeleteHomeRegionControlRequest>
        Model::DeleteHomeRegionControlOutcomeCallable DeleteHomeRegionControlCallable(const DeleteHomeRegionControlRequestT& request) const
        {
            return SubmitCallable(&MigrationHubConfigClient::DeleteHomeRegionControl, request);
        }

        /**
         * An Async wrapper for DeleteHomeRegionControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHomeRegionControlRequestT = Model::DeleteHomeRegionControlRequest>
        void DeleteHomeRegionControlAsync(const DeleteHomeRegionControlRequestT& request, const DeleteHomeRegionControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubConfigClient::DeleteHomeRegionControl, request, handler, context);
        }

        /**
         * <p>This API permits filtering on the <code>ControlId</code> and
         * <code>HomeRegion</code> fields.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/DescribeHomeRegionControls">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHomeRegionControlsOutcome DescribeHomeRegionControls(const Model::DescribeHomeRegionControlsRequest& request) const;

        /**
         * A Callable wrapper for DescribeHomeRegionControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeHomeRegionControlsRequestT = Model::DescribeHomeRegionControlsRequest>
        Model::DescribeHomeRegionControlsOutcomeCallable DescribeHomeRegionControlsCallable(const DescribeHomeRegionControlsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubConfigClient::DescribeHomeRegionControls, request);
        }

        /**
         * An Async wrapper for DescribeHomeRegionControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeHomeRegionControlsRequestT = Model::DescribeHomeRegionControlsRequest>
        void DescribeHomeRegionControlsAsync(const DescribeHomeRegionControlsRequestT& request, const DescribeHomeRegionControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubConfigClient::DescribeHomeRegionControls, request, handler, context);
        }

        /**
         * <p>Returns the calling account’s home region, if configured. This API is used by
         * other AWS services to determine the regional endpoint for calling AWS
         * Application Discovery Service and Migration Hub. You must call
         * <code>GetHomeRegion</code> at least once before you call any other AWS
         * Application Discovery Service and AWS Migration Hub APIs, to obtain the
         * account's Migration Hub home region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/GetHomeRegion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHomeRegionOutcome GetHomeRegion(const Model::GetHomeRegionRequest& request) const;

        /**
         * A Callable wrapper for GetHomeRegion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHomeRegionRequestT = Model::GetHomeRegionRequest>
        Model::GetHomeRegionOutcomeCallable GetHomeRegionCallable(const GetHomeRegionRequestT& request) const
        {
            return SubmitCallable(&MigrationHubConfigClient::GetHomeRegion, request);
        }

        /**
         * An Async wrapper for GetHomeRegion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHomeRegionRequestT = Model::GetHomeRegionRequest>
        void GetHomeRegionAsync(const GetHomeRegionRequestT& request, const GetHomeRegionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubConfigClient::GetHomeRegion, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubConfigEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubConfigClient>;
      void init(const MigrationHubConfigClientConfiguration& clientConfiguration);

      MigrationHubConfigClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubConfigEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubConfig
} // namespace Aws
