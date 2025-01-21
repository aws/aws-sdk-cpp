/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsServiceClientModel.h>
#include <smithy/client/AwsSmithyClient.h>
#include <smithy/identity/auth/built-in/SigV4AuthSchemeResolver.h>
#include <smithy/identity/auth/built-in/SigV4AuthScheme.h>
#include <smithy/client/serializer/JsonOutcomeSerializer.h>
#include <aws/marketplacecommerceanalytics/MarketplaceCommerceAnalyticsErrorMarshaller.h>

namespace Aws
{
namespace MarketplaceCommerceAnalytics
{
  AWS_MARKETPLACECOMMERCEANALYTICS_API extern const char SERVICE_NAME[];
  /**
   * Provides AWS Marketplace business intelligence data on-demand.
   */
  class AWS_MARKETPLACECOMMERCEANALYTICS_API MarketplaceCommerceAnalyticsClient : smithy::client::AwsSmithyClientT<Aws::MarketplaceCommerceAnalytics::SERVICE_NAME,
      Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration,
      smithy::SigV4AuthSchemeResolver<>,
      Aws::Crt::Variant<smithy::SigV4AuthScheme>,
      MarketplaceCommerceAnalyticsEndpointProviderBase,
      smithy::client::JsonOutcomeSerializer,
      smithy::client::JsonOutcome,
      Aws::Client::MarketplaceCommerceAnalyticsErrorMarshaller>,
    Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCommerceAnalyticsClient>
  {
    public:
      static const char* GetServiceName();
      static const char* GetAllocationTag();
      inline const char* GetServiceClientName() const override { return "Marketplace Commerce Analytics"; }

      typedef MarketplaceCommerceAnalyticsClientConfiguration ClientConfigurationType;
      typedef MarketplaceCommerceAnalyticsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration(),
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = nullptr,
                                           const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCommerceAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase> endpointProvider = nullptr,
                                           const Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration& clientConfiguration = Aws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceCommerceAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceCommerceAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceCommerceAnalyticsClient();

        /**
         * Given a data set type and data set publication date, asynchronously publishes
         * the requested data set to the specified S3 bucket and notifies the specified SNS
         * topic once the data is available. Returns a unique request identifier that can
         * be used to correlate requests with notifications from the SNS topic. Data sets
         * will be published in comma-separated values (CSV) format with the file name
         * {data_set_type}_YYYY-MM-DD.csv. If a file with the same name already exists
         * (e.g. if the same data set is requested twice), the original file will be
         * overwritten by the new file. Requires a Role with an attached permissions policy
         * providing Allow permissions for the following actions: s3:PutObject,
         * s3:GetBucketLocation, sns:GetTopicAttributes, sns:Publish,
         * iam:GetRolePolicy.<p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplacecommerceanalytics-2015-07-01/GenerateDataSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GenerateDataSetOutcome GenerateDataSet(const Model::GenerateDataSetRequest& request) const;

        /**
         * A Callable wrapper for GenerateDataSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GenerateDataSetRequestT = Model::GenerateDataSetRequest>
        Model::GenerateDataSetOutcomeCallable GenerateDataSetCallable(const GenerateDataSetRequestT& request) const
        {
            return SubmitCallable(&MarketplaceCommerceAnalyticsClient::GenerateDataSet, request);
        }

        /**
         * An Async wrapper for GenerateDataSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GenerateDataSetRequestT = Model::GenerateDataSetRequest>
        void GenerateDataSetAsync(const GenerateDataSetRequestT& request, const GenerateDataSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceCommerceAnalyticsClient::GenerateDataSet, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceCommerceAnalyticsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceCommerceAnalyticsClient>;

  };

} // namespace MarketplaceCommerceAnalytics
} // namespace Aws
