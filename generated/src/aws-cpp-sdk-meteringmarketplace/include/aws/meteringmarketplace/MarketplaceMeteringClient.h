/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/meteringmarketplace/MarketplaceMetering_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/meteringmarketplace/MarketplaceMeteringServiceClientModel.h>

namespace Aws
{
namespace MarketplaceMetering
{
  /**
   * <fullname>Amazon Web Services Marketplace Metering Service</fullname> <p>This
   * reference provides descriptions of the low-level Marketplace Metering Service
   * API.</p> <p>Amazon Web Services Marketplace sellers can use this API to submit
   * usage data for custom usage dimensions.</p> <p>For information about the
   * permissions that you need to use this API, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/userguide/iam-user-policy-for-aws-marketplace-actions.html">Amazon
   * Web Services Marketplace metering and entitlement API permissions</a> in the
   * <i>Amazon Web Services Marketplace Seller Guide.</i> </p> <p> <b>Submitting
   * metering records</b> </p> <p> <i>MeterUsage</i> </p> <ul> <li> <p>Submits the
   * metering record for an Amazon Web Services Marketplace product.</p> </li> <li>
   * <p>Called from: Amazon Elastic Compute Cloud (Amazon EC2) instance or a
   * container running on either Amazon Elastic Kubernetes Service (Amazon EKS) or
   * Amazon Elastic Container Service (Amazon ECS)</p> </li> <li> <p>Supported
   * product types: Amazon Machine Images (AMIs) and containers</p> </li> <li>
   * <p>Vendor-metered tagging: Supported allocation tagging</p> </li> </ul> <p>
   * <i>BatchMeterUsage</i> </p> <ul> <li> <p>Submits the metering record for a set
   * of customers. <code>BatchMeterUsage</code> API calls are captured by CloudTrail.
   * You can use CloudTrail to verify that the software as a subscription (SaaS)
   * metering records that you sent are accurate by searching for records with the
   * <code>eventName</code> of <code>BatchMeterUsage</code>. You can also use
   * CloudTrail to audit records over time. For more information, see the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html">CloudTrail
   * User Guide</a>.</p> </li> <li> <p>Called from: SaaS applications</p> </li> <li>
   * <p>Supported product type: SaaS</p> </li> <li> <p>Vendor-metered tagging:
   * Supports allocation tagging</p> </li> </ul> <p> <b>Accepting new customers</b>
   * </p> <p> <i>ResolveCustomer</i> </p> <ul> <li> <p>Resolves the registration
   * token that the buyer submits through the browser during the registration
   * process. Obtains a <code>CustomerIdentifier</code> along with the
   * <code>CustomerAWSAccountId</code> and <code>ProductCode</code>.</p> </li> <li>
   * <p>Called from: SaaS application during the registration process</p> </li> <li>
   * <p>Supported product type: SaaS</p> </li> <li> <p>Vendor-metered tagging: Not
   * applicable</p> </li> </ul> <p> <b>Entitlement and metering for paid container
   * products</b> </p> <p> <i>RegisteredUsage</i> </p> <ul> <li> <p>Provides software
   * entitlement and metering. Paid container software products sold through Amazon
   * Web Services Marketplace must integrate with the Marketplace Metering Service
   * and call the <code>RegisterUsage</code> operation. Free and Bring Your Own
   * License model (BYOL) products for Amazon ECS or Amazon EKS aren't required to
   * call <code>RegisterUsage</code>. However, you can do so if you want to receive
   * usage data in your seller reports. For more information about using the
   * <code>RegisterUsage</code> operation, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/userguide/container-based-products.html">Container-based
   * products</a>.</p> </li> <li> <p>Called from: Paid container software
   * products</p> </li> <li> <p>Supported product type: Containers</p> </li> <li>
   * <p>Vendor-metered tagging: Not applicable</p> </li> </ul> <p> <b>Entitlement
   * custom metering for container products</b> </p> <ul> <li> <p>MeterUsage API is
   * available in GovCloud Regions but only supports AMI FCP products in GovCloud
   * Regions. Flexible Consumption Pricing (FCP) Container products aren’t supported
   * in GovCloud Regions: us-gov-west-1 and us-gov-east-1. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/marketplace/latest/userguide/container-based-products.html">Container-based
   * products</a>.</p> </li> <li> <p>Custom metering for container products are
   * called using the MeterUsage API. The API is used for FCP AMI and FCP Container
   * product metering.</p> </li> </ul> <p> <b>Custom metering for Amazon EKS is
   * available in 17 Amazon Web Services Regions</b> </p> <ul> <li> <p>The metering
   * service supports Amazon ECS and EKS for Flexible Consumption Pricing (FCP)
   * products using MeterUsage API. Amazon ECS is supported in all Amazon Web
   * Services Regions that MeterUsage API is available except for GovCloud.</p> </li>
   * <li> <p>Amazon EKS is supported in the following: us-east-1, us-east-2,
   * us-west-1, us-west-2, eu-west-1, eu-central-1, eu-west-2, eu-west-3, eu-north-1,
   * ap-east-1, ap-southeast-1, ap-northeast-1, ap-southeast-2, ap-northeast-2,
   * ap-south-1, ca-central-1, sa-east-1.</p>  <p>For questions about adding
   * Amazon Web Services Regions for metering, contact <a
   * href="mailto://aws.amazon.com/marketplace/management/contact-us/">Amazon Web
   * Services Marketplace Seller Operations</a>.</p>  </li> </ul>
   */
  class AWS_MARKETPLACEMETERING_API MarketplaceMeteringClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceMeteringClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MarketplaceMeteringClientConfiguration ClientConfigurationType;
      typedef MarketplaceMeteringEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration = Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration(),
                                  std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration = Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceMeteringClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<MarketplaceMeteringEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration& clientConfiguration = Aws::MarketplaceMetering::MarketplaceMeteringClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceMeteringClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceMeteringClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceMeteringClient();

        /**
         *  <p> The <code>CustomerIdentifier</code> parameter is scheduled for
         * deprecation. Use <code>CustomerAWSAccountID</code> instead.</p> <p>These
         * parameters are mutually exclusive. You can't specify both
         * <code>CustomerIdentifier</code> and <code>CustomerAWSAccountID</code> in the
         * same request. </p>  <p>To post metering records for customers, SaaS
         * applications call <code>BatchMeterUsage</code>, which is used for metering SaaS
         * flexible consumption pricing (FCP). Identical requests are idempotent and can be
         * retried with the same records or a subset of records. Each
         * <code>BatchMeterUsage</code> request is for only one product. If you want to
         * meter usage for multiple products, you must make multiple
         * <code>BatchMeterUsage</code> calls.</p> <p>Usage records should be submitted in
         * quick succession following a recorded event. Usage records aren't accepted 6
         * hours or more after an event.</p> <p> <code>BatchMeterUsage</code> can process
         * up to 25 <code>UsageRecords</code> at a time, and each request must be less than
         * 1 MB in size. Optionally, you can have multiple usage allocations for usage data
         * that's split into buckets according to predefined tags.</p> <p>
         * <code>BatchMeterUsage</code> returns a list of <code>UsageRecordResult</code>
         * objects, which have each <code>UsageRecord</code>. It also returns a list of
         * <code>UnprocessedRecords</code>, which indicate errors on the service side that
         * should be retried.</p> <p>For Amazon Web Services Regions that support
         * <code>BatchMeterUsage</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/metering-regions.html#batchmeterusage-region-support">BatchMeterUsage
         * Region support</a>. </p>  <p>For an example of
         * <code>BatchMeterUsage</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/userguide/saas-code-examples.html#saas-batchmeterusage-example">
         * BatchMeterUsage code example</a> in the <i>Amazon Web Services Marketplace
         * Seller Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/BatchMeterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchMeterUsageOutcome BatchMeterUsage(const Model::BatchMeterUsageRequest& request) const;

        /**
         * A Callable wrapper for BatchMeterUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchMeterUsageRequestT = Model::BatchMeterUsageRequest>
        Model::BatchMeterUsageOutcomeCallable BatchMeterUsageCallable(const BatchMeterUsageRequestT& request) const
        {
            return SubmitCallable(&MarketplaceMeteringClient::BatchMeterUsage, request);
        }

        /**
         * An Async wrapper for BatchMeterUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchMeterUsageRequestT = Model::BatchMeterUsageRequest>
        void BatchMeterUsageAsync(const BatchMeterUsageRequestT& request, const BatchMeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceMeteringClient::BatchMeterUsage, request, handler, context);
        }

        /**
         * <p>API to emit metering records. For identical requests, the API is idempotent
         * and returns the metering record ID. This is used for metering flexible
         * consumption pricing (FCP) Amazon Machine Images (AMI) and container
         * products.</p> <p> <code>MeterUsage</code> is authenticated on the buyer's Amazon
         * Web Services account using credentials from the Amazon EC2 instance, Amazon ECS
         * task, or Amazon EKS pod.</p> <p> <code>MeterUsage</code> can optionally include
         * multiple usage allocations, to provide customers with usage data split into
         * buckets by tags that you define (or allow the customer to define).</p> <p>Usage
         * records are expected to be submitted as quickly as possible after the event that
         * is being recorded, and are not accepted more than 6 hours after the event.</p>
         * <p>For Amazon Web Services Regions that support <code>MeterUsage</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/metering-regions.html#meterusage-region-support-ec2">MeterUsage
         * Region support for Amazon EC2</a> and <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/metering-regions.html#meterusage-region-support-ecs-eks">MeterUsage
         * Region support for Amazon ECS and Amazon EKS</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/MeterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::MeterUsageOutcome MeterUsage(const Model::MeterUsageRequest& request) const;

        /**
         * A Callable wrapper for MeterUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename MeterUsageRequestT = Model::MeterUsageRequest>
        Model::MeterUsageOutcomeCallable MeterUsageCallable(const MeterUsageRequestT& request) const
        {
            return SubmitCallable(&MarketplaceMeteringClient::MeterUsage, request);
        }

        /**
         * An Async wrapper for MeterUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename MeterUsageRequestT = Model::MeterUsageRequest>
        void MeterUsageAsync(const MeterUsageRequestT& request, const MeterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceMeteringClient::MeterUsage, request, handler, context);
        }

        /**
         * <p>Paid container software products sold through Amazon Web Services Marketplace
         * must integrate with the Amazon Web Services Marketplace Metering Service and
         * call the <code>RegisterUsage</code> operation for software entitlement and
         * metering. Free and BYOL products for Amazon ECS or Amazon EKS aren't required to
         * call <code>RegisterUsage</code>, but you may choose to do so if you would like
         * to receive usage data in your seller reports. The sections below explain the
         * behavior of <code>RegisterUsage</code>. <code>RegisterUsage</code> performs two
         * primary functions: metering and entitlement.</p> <ul> <li> <p>
         * <i>Entitlement</i>: <code>RegisterUsage</code> allows you to verify that the
         * customer running your paid software is subscribed to your product on Amazon Web
         * Services Marketplace, enabling you to guard against unauthorized use. Your
         * container image that integrates with <code>RegisterUsage</code> is only required
         * to guard against unauthorized use at container startup, as such a
         * <code>CustomerNotSubscribedException</code> or
         * <code>PlatformNotSupportedException</code> will only be thrown on the initial
         * call to <code>RegisterUsage</code>. Subsequent calls from the same Amazon ECS
         * task instance (e.g. task-id) or Amazon EKS pod will not throw a
         * <code>CustomerNotSubscribedException</code>, even if the customer unsubscribes
         * while the Amazon ECS task or Amazon EKS pod is still running.</p> </li> <li> <p>
         * <i>Metering</i>: <code>RegisterUsage</code> meters software use per ECS task,
         * per hour, or per pod for Amazon EKS with usage prorated to the second. A minimum
         * of 1 minute of usage applies to tasks that are short lived. For example, if a
         * customer has a 10 node Amazon ECS or Amazon EKS cluster and a service configured
         * as a Daemon Set, then Amazon ECS or Amazon EKS will launch a task on all 10
         * cluster nodes and the customer will be charged for 10 tasks. Software metering
         * is handled by the Amazon Web Services Marketplace metering control plane—your
         * software is not required to perform metering-specific actions other than to call
         * <code>RegisterUsage</code> to commence metering. The Amazon Web Services
         * Marketplace metering control plane will also bill customers for running ECS
         * tasks and Amazon EKS pods, regardless of the customer's subscription state,
         * which removes the need for your software to run entitlement checks at runtime.
         * For containers, <code>RegisterUsage</code> should be called immediately at
         * launch. If you don’t register the container within the first 6 hours of the
         * launch, Amazon Web Services Marketplace Metering Service doesn’t provide any
         * metering guarantees for previous months. Metering will continue, however, for
         * the current month forward until the container ends. <code>RegisterUsage</code>
         * is for metering paid hourly container products.</p> <p>For Amazon Web Services
         * Regions that support <code>RegisterUsage</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/metering-regions.html#registerusage-region-support">RegisterUsage
         * Region support</a>. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/RegisterUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterUsageOutcome RegisterUsage(const Model::RegisterUsageRequest& request) const;

        /**
         * A Callable wrapper for RegisterUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterUsageRequestT = Model::RegisterUsageRequest>
        Model::RegisterUsageOutcomeCallable RegisterUsageCallable(const RegisterUsageRequestT& request) const
        {
            return SubmitCallable(&MarketplaceMeteringClient::RegisterUsage, request);
        }

        /**
         * An Async wrapper for RegisterUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterUsageRequestT = Model::RegisterUsageRequest>
        void RegisterUsageAsync(const RegisterUsageRequestT& request, const RegisterUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceMeteringClient::RegisterUsage, request, handler, context);
        }

        /**
         * <p> <code>ResolveCustomer</code> is called by a SaaS application during the
         * registration process. When a buyer visits your website during the registration
         * process, the buyer submits a registration token through their browser. The
         * registration token is resolved through this API to obtain a
         * <code>CustomerIdentifier</code> along with the <code>CustomerAWSAccountId</code>
         * and <code>ProductCode</code>.</p>  <p>To successfully resolve the token,
         * the API must be called from the account that was used to publish the SaaS
         * application. For an example of using <code>ResolveCustomer</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/userguide/saas-code-examples.html#saas-resolvecustomer-example">
         * ResolveCustomer code example</a> in the <i>Amazon Web Services Marketplace
         * Seller Guide</i>.</p>  <p>Permission is required for this operation. Your
         * IAM role or user performing this operation requires a policy to allow the
         * <code>aws-marketplace:ResolveCustomer</code> action. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsmarketplacemeteringservice.html">Actions,
         * resources, and condition keys for Amazon Web Services Marketplace Metering
         * Service</a> in the <i>Service Authorization Reference</i>.</p> <p>For Amazon Web
         * Services Regions that support <code>ResolveCustomer</code>, see <a
         * href="https://docs.aws.amazon.com/marketplace/latest/APIReference/metering-regions.html#resolvecustomer-region-support">ResolveCustomer
         * Region support</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/meteringmarketplace-2016-01-14/ResolveCustomer">AWS
         * API Reference</a></p>
         */
        virtual Model::ResolveCustomerOutcome ResolveCustomer(const Model::ResolveCustomerRequest& request) const;

        /**
         * A Callable wrapper for ResolveCustomer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResolveCustomerRequestT = Model::ResolveCustomerRequest>
        Model::ResolveCustomerOutcomeCallable ResolveCustomerCallable(const ResolveCustomerRequestT& request) const
        {
            return SubmitCallable(&MarketplaceMeteringClient::ResolveCustomer, request);
        }

        /**
         * An Async wrapper for ResolveCustomer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResolveCustomerRequestT = Model::ResolveCustomerRequest>
        void ResolveCustomerAsync(const ResolveCustomerRequestT& request, const ResolveCustomerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceMeteringClient::ResolveCustomer, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceMeteringEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceMeteringClient>;
      void init(const MarketplaceMeteringClientConfiguration& clientConfiguration);

      MarketplaceMeteringClientConfiguration m_clientConfiguration;
      std::shared_ptr<MarketplaceMeteringEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceMetering
} // namespace Aws
