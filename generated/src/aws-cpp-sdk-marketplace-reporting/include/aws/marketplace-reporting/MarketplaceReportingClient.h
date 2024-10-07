/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-reporting/MarketplaceReporting_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/marketplace-reporting/MarketplaceReportingServiceClientModel.h>

namespace Aws
{
namespace MarketplaceReporting
{
  /**
   * <p>The Amazon Web Services Marketplace <code>GetBuyerDashboard</code> API
   * enables you to get a procurement insights dashboard programmatically. The API
   * gets the agreement and cost analysis dashboards with data for all of the Amazon
   * Web Services accounts in your Amazon Web Services Organization. </p> <p>To use
   * the Amazon Web Services Marketplace Reporting API, you must complete the
   * following prerequisites:</p> <ul> <li> <p>Enable all features for your
   * organization. For more information, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_org_support-all-features.html">Enabling
   * all features for an organization with Organizations</a>, in the <i>Organizations
   * User Guide</i>.</p> </li> <li> <p>Call the service as the Organizations
   * management account or an account registered as a delegated administrator for the
   * procurement insights service.</p> <p>For more information about management
   * accounts, see <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_tutorials_basic.html">Tutorial:
   * Creating and configuring an organization</a> and <a
   * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs-manage_accounts_management.html">Managing
   * the management account with Organizations</a>, both in the <i>Organizations User
   * Guide</i>.</p> <p>For more information about delegated administrators, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/management-delegates.html">Using
   * delegated administrators</a>, in the <i>Amazon Web Services Marketplace Buyer
   * Guide</i>.</p> </li> <li> <p>Create an IAM policy that enables the
   * <code>aws-marketplace:GetBuyerDashboard</code> and
   * <code>organizations:DescribeOrganization</code> permissions. In addition, the
   * management account requires the
   * <code>organizations:EnableAWSServiceAccess</code> and
   * <code>iam:CreateServiceLinkedRole</code> permissions to create. For more
   * information about creating the policy, see <a
   * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/access_policies.html">Policies
   * and permissions in Identity and Access Management</a>, in the <i>IAM User
   * Guide</i>.</p>  <p>Access can be shared only by registering the desired
   * linked account as a delegated administrator. That requires
   * <code>organizations:RegisterDelegatedAdministrator</code>
   * <code>organizations:ListDelegatedAdministrators</code> and
   * <code>organizations:DeregisterDelegatedAdministrator</code> permissions.</p>
   *  </li> <li> <p>Use the Amazon Web Services Marketplace console to create
   * the <code>AWSServiceRoleForProcurementInsightsPolicy</code> service-linked role.
   * The role enables Amazon Web Services Marketplace procurement visibility
   * integration. The management account requires an IAM policy with the
   * <code>organizations:EnableAWSServiceAccess</code> and
   * <code>iam:CreateServiceLinkedRole</code> permissions to create the
   * service-linked role and enable the service access. For more information, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/orgs-access-slr.html">Granting
   * access to Organizations</a> and <a
   * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/buyer-service-linked-role-procurement.html">Service-linked
   * role to share procurement data</a> in the <i>Amazon Web Services Marketplace
   * Buyer Guide</i>.</p> </li> <li> <p>After creating the service-linked role, you
   * must enable trusted access that grants Amazon Web Services Marketplace
   * permission to access data from your Organizations. For more information, see <a
   * href="https://docs.aws.amazon.com/marketplace/latest/buyerguide/orgs-access-slr.html">Granting
   * access to Organizations</a> in the <i>Amazon Web Services Marketplace Buyer
   * Guide</i>.</p> </li> </ul>
   */
  class AWS_MARKETPLACEREPORTING_API MarketplaceReportingClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceReportingClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MarketplaceReportingClientConfiguration ClientConfigurationType;
      typedef MarketplaceReportingEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceReportingClient(const Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration& clientConfiguration = Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration(),
                                   std::shared_ptr<MarketplaceReportingEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceReportingClient(const Aws::Auth::AWSCredentials& credentials,
                                   std::shared_ptr<MarketplaceReportingEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration& clientConfiguration = Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceReportingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   std::shared_ptr<MarketplaceReportingEndpointProviderBase> endpointProvider = nullptr,
                                   const Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration& clientConfiguration = Aws::MarketplaceReporting::MarketplaceReportingClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceReportingClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MarketplaceReportingClient(const Aws::Auth::AWSCredentials& credentials,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MarketplaceReportingClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                   const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MarketplaceReportingClient();

        /**
         * <p>Generates an embedding URL for an Amazon QuickSight dashboard for an
         * anonymous user.</p>  <p>This API is available only to Amazon Web Services
         * Organization management accounts or delegated administrators registered for the
         * procurement insights
         * (<code>procurement-insights.marketplace.amazonaws.com</code>) feature.</p>
         *  <p>The following rules apply to a generated URL:</p> <ul> <li> <p>It
         * contains a temporary bearer token, valid for 5 minutes after it is generated.
         * Once redeemed within that period, it cannot be re-used again.</p> </li> <li>
         * <p>It has a session lifetime of one hour. The 5-minute validity period runs
         * separately from the session lifetime.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-reporting-2018-05-10/GetBuyerDashboard">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBuyerDashboardOutcome GetBuyerDashboard(const Model::GetBuyerDashboardRequest& request) const;

        /**
         * A Callable wrapper for GetBuyerDashboard that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBuyerDashboardRequestT = Model::GetBuyerDashboardRequest>
        Model::GetBuyerDashboardOutcomeCallable GetBuyerDashboardCallable(const GetBuyerDashboardRequestT& request) const
        {
            return SubmitCallable(&MarketplaceReportingClient::GetBuyerDashboard, request);
        }

        /**
         * An Async wrapper for GetBuyerDashboard that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBuyerDashboardRequestT = Model::GetBuyerDashboardRequest>
        void GetBuyerDashboardAsync(const GetBuyerDashboardRequestT& request, const GetBuyerDashboardResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MarketplaceReportingClient::GetBuyerDashboard, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MarketplaceReportingEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MarketplaceReportingClient>;
      void init(const MarketplaceReportingClientConfiguration& clientConfiguration);

      MarketplaceReportingClientConfiguration m_clientConfiguration;
      std::shared_ptr<MarketplaceReportingEndpointProviderBase> m_endpointProvider;
  };

} // namespace MarketplaceReporting
} // namespace Aws
