/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pricing/Pricing_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/pricing/PricingServiceClientModel.h>

namespace Aws
{
namespace Pricing
{
  /**
   * <p>The Amazon Web Services Price List API is a centralized and convenient way to
   * programmatically query Amazon Web Services for services, products, and pricing
   * information. The Amazon Web Services Price List uses standardized product
   * attributes such as <code>Location</code>, <code>Storage Class</code>, and
   * <code>Operating System</code>, and provides prices at the SKU level. You can use
   * the Amazon Web Services Price List to do the following:</p> <ul> <li> <p>Build
   * cost control and scenario planning tools</p> </li> <li> <p>Reconcile billing
   * data</p> </li> <li> <p>Forecast future spend for budgeting purposes</p> </li>
   * <li> <p>Provide cost benefit analysis that compare your internal workloads with
   * Amazon Web Services</p> </li> </ul> <p>Use <code>GetServices</code> without a
   * service code to retrieve the service codes for all Amazon Web Services, then
   * <code>GetServices</code> with a service code to retrieve the attribute names for
   * that service. After you have the service code and attribute names, you can use
   * <code>GetAttributeValues</code> to see what values are available for an
   * attribute. With the service code and an attribute name and value, you can use
   * <code>GetProducts</code> to find specific products that you're interested in,
   * such as an <code>AmazonEC2</code> instance, with a <code>Provisioned IOPS</code>
   * <code>volumeType</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/price-changes.html">Using
   * the Amazon Web Services Price List API</a> in the <i>Billing User Guide</i>.</p>
   */
  class AWS_PRICING_API PricingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<PricingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef PricingClientConfiguration ClientConfigurationType;
      typedef PricingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration(),
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PricingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<PricingEndpointProviderBase> endpointProvider = nullptr,
                      const Aws::Pricing::PricingClientConfiguration& clientConfiguration = Aws::Pricing::PricingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        PricingClient(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        PricingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~PricingClient();

        /**
         * <p>Returns the metadata for one service or a list of the metadata for all
         * services. Use this without a service code to get the service codes for all
         * services. Use it with a service code, such as <code>AmazonEC2</code>, to get
         * information specific to that service, such as the attribute names available for
         * that service. For example, some of the attribute names available for EC2 are
         * <code>volumeType</code>, <code>maxIopsVolume</code>, <code>operation</code>,
         * <code>locationType</code>, and
         * <code>instanceCapacity10xlarge</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/DescribeServices">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServicesOutcome DescribeServices(const Model::DescribeServicesRequest& request) const;

        /**
         * A Callable wrapper for DescribeServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServicesRequestT = Model::DescribeServicesRequest>
        Model::DescribeServicesOutcomeCallable DescribeServicesCallable(const DescribeServicesRequestT& request) const
        {
            return SubmitCallable(&PricingClient::DescribeServices, request);
        }

        /**
         * An Async wrapper for DescribeServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServicesRequestT = Model::DescribeServicesRequest>
        void DescribeServicesAsync(const DescribeServicesRequestT& request, const DescribeServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PricingClient::DescribeServices, request, handler, context);
        }

        /**
         * <p>Returns a list of attribute values. Attributes are similar to the details in
         * a Price List API offer file. For a list of available attributes, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/reading-an-offer.html#pps-defs">Offer
         * File Definitions</a> in the <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-what-is.html">Billing
         * and Cost Management User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetAttributeValues">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAttributeValuesOutcome GetAttributeValues(const Model::GetAttributeValuesRequest& request) const;

        /**
         * A Callable wrapper for GetAttributeValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAttributeValuesRequestT = Model::GetAttributeValuesRequest>
        Model::GetAttributeValuesOutcomeCallable GetAttributeValuesCallable(const GetAttributeValuesRequestT& request) const
        {
            return SubmitCallable(&PricingClient::GetAttributeValues, request);
        }

        /**
         * An Async wrapper for GetAttributeValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAttributeValuesRequestT = Model::GetAttributeValuesRequest>
        void GetAttributeValuesAsync(const GetAttributeValuesRequestT& request, const GetAttributeValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PricingClient::GetAttributeValues, request, handler, context);
        }

        /**
         * <p> <i> <b>This feature is in preview release and is subject to change. Your use
         * of Amazon Web Services Price List API is subject to the Beta Service
         * Participation terms of the <a
         * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
         * Terms</a> (Section 1.10).</b> </i> </p> <p>This returns the URL that you can
         * retrieve your Price List file from. This URL is based on the
         * <code>PriceListArn</code> and <code>FileFormat</code> that you retrieve from the
         * <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_ListPriceLists.html">ListPriceLists</a>
         * response. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetPriceListFileUrl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPriceListFileUrlOutcome GetPriceListFileUrl(const Model::GetPriceListFileUrlRequest& request) const;

        /**
         * A Callable wrapper for GetPriceListFileUrl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPriceListFileUrlRequestT = Model::GetPriceListFileUrlRequest>
        Model::GetPriceListFileUrlOutcomeCallable GetPriceListFileUrlCallable(const GetPriceListFileUrlRequestT& request) const
        {
            return SubmitCallable(&PricingClient::GetPriceListFileUrl, request);
        }

        /**
         * An Async wrapper for GetPriceListFileUrl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPriceListFileUrlRequestT = Model::GetPriceListFileUrlRequest>
        void GetPriceListFileUrlAsync(const GetPriceListFileUrlRequestT& request, const GetPriceListFileUrlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PricingClient::GetPriceListFileUrl, request, handler, context);
        }

        /**
         * <p>Returns a list of all products that match the filter criteria.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/GetProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProductsOutcome GetProducts(const Model::GetProductsRequest& request) const;

        /**
         * A Callable wrapper for GetProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProductsRequestT = Model::GetProductsRequest>
        Model::GetProductsOutcomeCallable GetProductsCallable(const GetProductsRequestT& request) const
        {
            return SubmitCallable(&PricingClient::GetProducts, request);
        }

        /**
         * An Async wrapper for GetProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProductsRequestT = Model::GetProductsRequest>
        void GetProductsAsync(const GetProductsRequestT& request, const GetProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PricingClient::GetProducts, request, handler, context);
        }

        /**
         * <p> <i> <b>This feature is in preview release and is subject to change. Your use
         * of Amazon Web Services Price List API is subject to the Beta Service
         * Participation terms of the <a
         * href="https://aws.amazon.com/service-terms/">Amazon Web Services Service
         * Terms</a> (Section 1.10).</b> </i> </p> <p>This returns a list of Price List
         * references that the requester if authorized to view, given a
         * <code>ServiceCode</code>, <code>CurrencyCode</code>, and an
         * <code>EffectiveDate</code>. Use without a <code>RegionCode</code> filter to list
         * Price List references from all available Amazon Web Services Regions. Use with a
         * <code>RegionCode</code> filter to get the Price List reference that's specific
         * to a specific Amazon Web Services Region. You can use the
         * <code>PriceListArn</code> from the response to get your preferred Price List
         * files through the <a
         * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_pricing_GetPriceListFileUrl.html">GetPriceListFileUrl</a>
         * API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/pricing-2017-10-15/ListPriceLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPriceListsOutcome ListPriceLists(const Model::ListPriceListsRequest& request) const;

        /**
         * A Callable wrapper for ListPriceLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPriceListsRequestT = Model::ListPriceListsRequest>
        Model::ListPriceListsOutcomeCallable ListPriceListsCallable(const ListPriceListsRequestT& request) const
        {
            return SubmitCallable(&PricingClient::ListPriceLists, request);
        }

        /**
         * An Async wrapper for ListPriceLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPriceListsRequestT = Model::ListPriceListsRequest>
        void ListPriceListsAsync(const ListPriceListsRequestT& request, const ListPriceListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&PricingClient::ListPriceLists, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<PricingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<PricingClient>;
      void init(const PricingClientConfiguration& clientConfiguration);

      PricingClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<PricingEndpointProviderBase> m_endpointProvider;
  };

} // namespace Pricing
} // namespace Aws
