/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/supplychain/SupplyChainServiceClientModel.h>

namespace Aws
{
namespace SupplyChain
{
  /**
   * <p> AWS Supply Chain is a cloud-based application that works with your
   * enterprise resource planning (ERP) and supply chain management systems. Using
   * AWS Supply Chain, you can connect and extract your inventory, supply, and demand
   * related data from existing ERP or supply chain systems into a single data model.
   * </p> <p>The AWS Supply Chain API supports configuration data import for Supply
   * Planning.</p> <p> All AWS Supply chain API operations are Amazon-authenticated
   * and certificate-signed. They not only require the use of the AWS SDK, but also
   * allow for the exclusive use of AWS Identity and Access Management users and
   * roles to help facilitate access, trust, and permission policies. </p>
   */
  class AWS_SUPPLYCHAIN_API SupplyChainClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SupplyChainClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SupplyChainClientConfiguration ClientConfigurationType;
      typedef SupplyChainEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration(),
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Auth::AWSCredentials& credentials,
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupplyChainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          std::shared_ptr<SupplyChainEndpointProviderBase> endpointProvider = nullptr,
                          const Aws::SupplyChain::SupplyChainClientConfiguration& clientConfiguration = Aws::SupplyChain::SupplyChainClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SupplyChainClient(const Aws::Auth::AWSCredentials& credentials,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SupplyChainClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                          const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SupplyChainClient();

        /**
         * <p>CreateBillOfMaterialsImportJob creates an import job for the Product Bill Of
         * Materials (BOM) entity. For information on the product_bom entity, see the AWS
         * Supply Chain User Guide.</p> <p>The CSV file must be located in an Amazon S3
         * location accessible to AWS Supply Chain. It is recommended to use the same
         * Amazon S3 bucket created during your AWS Supply Chain instance
         * creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/CreateBillOfMaterialsImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillOfMaterialsImportJobOutcome CreateBillOfMaterialsImportJob(const Model::CreateBillOfMaterialsImportJobRequest& request) const;

        /**
         * A Callable wrapper for CreateBillOfMaterialsImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBillOfMaterialsImportJobRequestT = Model::CreateBillOfMaterialsImportJobRequest>
        Model::CreateBillOfMaterialsImportJobOutcomeCallable CreateBillOfMaterialsImportJobCallable(const CreateBillOfMaterialsImportJobRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::CreateBillOfMaterialsImportJob, request);
        }

        /**
         * An Async wrapper for CreateBillOfMaterialsImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBillOfMaterialsImportJobRequestT = Model::CreateBillOfMaterialsImportJobRequest>
        void CreateBillOfMaterialsImportJobAsync(const CreateBillOfMaterialsImportJobRequestT& request, const CreateBillOfMaterialsImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::CreateBillOfMaterialsImportJob, request, handler, context);
        }

        /**
         * <p>Get status and details of a BillOfMaterialsImportJob.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/GetBillOfMaterialsImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBillOfMaterialsImportJobOutcome GetBillOfMaterialsImportJob(const Model::GetBillOfMaterialsImportJobRequest& request) const;

        /**
         * A Callable wrapper for GetBillOfMaterialsImportJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBillOfMaterialsImportJobRequestT = Model::GetBillOfMaterialsImportJobRequest>
        Model::GetBillOfMaterialsImportJobOutcomeCallable GetBillOfMaterialsImportJobCallable(const GetBillOfMaterialsImportJobRequestT& request) const
        {
            return SubmitCallable(&SupplyChainClient::GetBillOfMaterialsImportJob, request);
        }

        /**
         * An Async wrapper for GetBillOfMaterialsImportJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBillOfMaterialsImportJobRequestT = Model::GetBillOfMaterialsImportJobRequest>
        void GetBillOfMaterialsImportJobAsync(const GetBillOfMaterialsImportJobRequestT& request, const GetBillOfMaterialsImportJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SupplyChainClient::GetBillOfMaterialsImportJob, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SupplyChainEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SupplyChainClient>;
      void init(const SupplyChainClientConfiguration& clientConfiguration);

      SupplyChainClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<SupplyChainEndpointProviderBase> m_endpointProvider;
  };

} // namespace SupplyChain
} // namespace Aws
