/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-entitlement/MarketplaceEntitlementService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/marketplace-entitlement/MarketplaceEntitlementServiceErrorMarshaller.h>

namespace Aws
{
namespace MarketplaceEntitlementService
{
  AWS_MARKETPLACEENTITLEMENTSERVICE_API extern const char SERVICE_NAME[];
  /**
   * <fullname>AWS Marketplace Entitlement Service</fullname> <p>This reference
   * provides descriptions of the AWS Marketplace Entitlement Service API.</p> <p>AWS
   * Marketplace Entitlement Service is used to determine the entitlement of a
   * customer to a given product. An entitlement represents capacity in a product
   * owned by the customer. For example, a customer might own some number of users or
   * seats in an SaaS application or some amount of data capacity in a multi-tenant
   * database.</p> <p> <b>Getting Entitlement Records</b> </p> <ul> <li> <p>
   * <i>GetEntitlements</i>- Gets the entitlements for a Marketplace product.</p>
   * </li> </ul>
   */
  class AWS_MARKETPLACEENTITLEMENTSERVICE_API MarketplaceEntitlementServiceClient : Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceEntitlementServiceClient>,
    smithy::client::AwsSmithyClientT<Aws::MarketplaceEntitlementService::SERVICE_NAME,
      Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      MarketplaceEntitlementServiceEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::MarketplaceEntitlementServiceErrorMarshaller>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Marketplace Entitlement Service"; }

      typedef MarketplaceEntitlementServiceClientConfiguration ClientConfigurationType;
      typedef MarketplaceEntitlementServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration(),
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = nullptr,
                                            const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceEntitlementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase> endpointProvider = nullptr,
                                            const Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration& clientConfiguration = Aws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceEntitlementServiceClient(const Aws::Auth::AWSCredentials& credentials,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceEntitlementServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceEntitlementServiceClient();

        /**
         * <p>GetEntitlements retrieves entitlement values for a given product. The results
         * can be filtered based on customer identifier or product
         * dimensions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/entitlement.marketplace-2017-01-11/GetEntitlements">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEntitlementsOutcome GetEntitlements(const Model::GetEntitlementsRequest& request) const;

        /**
         * A Callable wrapper for GetEntitlements that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEntitlementsRequestT = Model::GetEntitlementsRequest>
        Model::GetEntitlementsOutcomeCallable GetEntitlementsCallable(const GetEntitlementsRequestT& request) const
        {
            return SubmitCallable(&MarketplaceEntitlementServiceClient::GetEntitlements, request);
        }

        /**
         * An Async wrapper for GetEntitlements that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEntitlementsRequestT = Model::GetEntitlementsRequest>
        void GetEntitlementsAsync(const GetEntitlementsRequestT& request, const GetEntitlementsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceEntitlementServiceClient::GetEntitlements, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceEntitlementServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceEntitlementServiceClient>;

  };

} // namespace MarketplaceEntitlementService
} // namespace Aws
