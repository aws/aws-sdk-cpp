/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53resolver/Route53ResolverServiceClientModel.h>

namespace Aws
{
namespace Route53Resolver
{
  /**
   * <p>When you create a VPC using Amazon VPC, you automatically get DNS resolution
   * within the VPC from Route 53 Resolver. By default, Resolver answers DNS queries
   * for VPC domain names such as domain names for EC2 instances or Elastic Load
   * Balancing load balancers. Resolver performs recursive lookups against public
   * name servers for all other domain names.</p> <p>You can also configure DNS
   * resolution between your VPC and your network over a Direct Connect or VPN
   * connection:</p> <p> <b>Forward DNS queries from resolvers on your network to
   * Route 53 Resolver</b> </p> <p>DNS resolvers on your network can forward DNS
   * queries to Resolver in a specified VPC. This allows your DNS resolvers to easily
   * resolve domain names for Amazon Web Services resources such as EC2 instances or
   * records in a Route 53 private hosted zone. For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-network-to-vpc">How
   * DNS Resolvers on Your Network Forward DNS Queries to Route 53 Resolver</a> in
   * the <i>Amazon Route 53 Developer Guide</i>.</p> <p> <b>Conditionally forward
   * queries from a VPC to resolvers on your network</b> </p> <p>You can configure
   * Resolver to forward queries that it receives from EC2 instances in your VPCs to
   * DNS resolvers on your network. To forward selected queries, you create Resolver
   * rules that specify the domain names for the DNS queries that you want to forward
   * (such as example.com), and the IP addresses of the DNS resolvers on your network
   * that you want to forward the queries to. If a query matches multiple rules
   * (example.com, acme.example.com), Resolver chooses the rule with the most
   * specific match (acme.example.com) and forwards the query to the IP addresses
   * that you specified in that rule. For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/resolver.html#resolver-overview-forward-vpc-to-network">How
   * Route 53 Resolver Forwards DNS Queries from Your VPCs to Your Network</a> in the
   * <i>Amazon Route 53 Developer Guide</i>.</p> <p>Like Amazon VPC, Resolver is
   * Regional. In each Region where you have VPCs, you can choose whether to forward
   * queries from your VPCs to your network (outbound queries), from your network to
   * your VPCs (inbound queries), or both.</p>
   */
  class AWS_ROUTE53RESOLVER_API Route53ResolverClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53ResolverClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef Route53ResolverClientConfiguration ClientConfigurationType;
      typedef Route53ResolverEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration(),
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<Route53ResolverEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53Resolver::Route53ResolverClientConfiguration& clientConfiguration = Aws::Route53Resolver::Route53ResolverClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53ResolverClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53ResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53ResolverClient();

        /**
         * <p>Associates a <a>FirewallRuleGroup</a> with a VPC, to provide DNS filtering
         * for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallRuleGroupOutcome AssociateFirewallRuleGroup(const Model::AssociateFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for AssociateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFirewallRuleGroupRequestT = Model::AssociateFirewallRuleGroupRequest>
        Model::AssociateFirewallRuleGroupOutcomeCallable AssociateFirewallRuleGroupCallable(const AssociateFirewallRuleGroupRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::AssociateFirewallRuleGroup, request);
        }

        /**
         * An Async wrapper for AssociateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFirewallRuleGroupRequestT = Model::AssociateFirewallRuleGroupRequest>
        void AssociateFirewallRuleGroupAsync(const AssociateFirewallRuleGroupRequestT& request, const AssociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::AssociateFirewallRuleGroup, request, handler, context);
        }

        /**
         * <p>Adds IP addresses to an inbound or an outbound Resolver endpoint. If you want
         * to add more than one IP address, submit one
         * <code>AssociateResolverEndpointIpAddress</code> request for each IP address.</p>
         * <p>To remove an IP address from an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverEndpointIpAddress.html">DisassociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverEndpointIpAddressOutcome AssociateResolverEndpointIpAddress(const Model::AssociateResolverEndpointIpAddressRequest& request) const;

        /**
         * A Callable wrapper for AssociateResolverEndpointIpAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResolverEndpointIpAddressRequestT = Model::AssociateResolverEndpointIpAddressRequest>
        Model::AssociateResolverEndpointIpAddressOutcomeCallable AssociateResolverEndpointIpAddressCallable(const AssociateResolverEndpointIpAddressRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::AssociateResolverEndpointIpAddress, request);
        }

        /**
         * An Async wrapper for AssociateResolverEndpointIpAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResolverEndpointIpAddressRequestT = Model::AssociateResolverEndpointIpAddressRequest>
        void AssociateResolverEndpointIpAddressAsync(const AssociateResolverEndpointIpAddressRequestT& request, const AssociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::AssociateResolverEndpointIpAddress, request, handler, context);
        }

        /**
         * <p>Associates an Amazon VPC with a specified query logging configuration. Route
         * 53 Resolver logs DNS queries that originate in all of the Amazon VPCs that are
         * associated with a specified query logging configuration. To associate more than
         * one VPC with a configuration, submit one
         * <code>AssociateResolverQueryLogConfig</code> request for each VPC.</p> 
         * <p>The VPCs that you associate with a query logging configuration must be in the
         * same Region as the configuration.</p>  <p>To remove a VPC from a query
         * logging configuration, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverQueryLogConfigOutcome AssociateResolverQueryLogConfig(const Model::AssociateResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for AssociateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResolverQueryLogConfigRequestT = Model::AssociateResolverQueryLogConfigRequest>
        Model::AssociateResolverQueryLogConfigOutcomeCallable AssociateResolverQueryLogConfigCallable(const AssociateResolverQueryLogConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::AssociateResolverQueryLogConfig, request);
        }

        /**
         * An Async wrapper for AssociateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResolverQueryLogConfigRequestT = Model::AssociateResolverQueryLogConfigRequest>
        void AssociateResolverQueryLogConfigAsync(const AssociateResolverQueryLogConfigRequestT& request, const AssociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::AssociateResolverQueryLogConfig, request, handler, context);
        }

        /**
         * <p>Associates a Resolver rule with a VPC. When you associate a rule with a VPC,
         * Resolver forwards all DNS queries for the domain name that is specified in the
         * rule and that originate in the VPC. The queries are forwarded to the IP
         * addresses for the DNS resolvers that are specified in the rule. For more
         * information about rules, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_CreateResolverRule.html">CreateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/AssociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateResolverRuleOutcome AssociateResolverRule(const Model::AssociateResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for AssociateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateResolverRuleRequestT = Model::AssociateResolverRuleRequest>
        Model::AssociateResolverRuleOutcomeCallable AssociateResolverRuleCallable(const AssociateResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::AssociateResolverRule, request);
        }

        /**
         * An Async wrapper for AssociateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateResolverRuleRequestT = Model::AssociateResolverRuleRequest>
        void AssociateResolverRuleAsync(const AssociateResolverRuleRequestT& request, const AssociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::AssociateResolverRule, request, handler, context);
        }

        /**
         * <p>Creates an empty firewall domain list for use in DNS Firewall rules. You can
         * populate the domains for the new list with a file, using
         * <a>ImportFirewallDomains</a>, or with domain strings, using
         * <a>UpdateFirewallDomains</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallDomainListOutcome CreateFirewallDomainList(const Model::CreateFirewallDomainListRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFirewallDomainListRequestT = Model::CreateFirewallDomainListRequest>
        Model::CreateFirewallDomainListOutcomeCallable CreateFirewallDomainListCallable(const CreateFirewallDomainListRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateFirewallDomainList, request);
        }

        /**
         * An Async wrapper for CreateFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFirewallDomainListRequestT = Model::CreateFirewallDomainListRequest>
        void CreateFirewallDomainListAsync(const CreateFirewallDomainListRequestT& request, const CreateFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateFirewallDomainList, request, handler, context);
        }

        /**
         * <p>Creates a single DNS Firewall rule in the specified rule group, using the
         * specified domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleOutcome CreateFirewallRule(const Model::CreateFirewallRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFirewallRuleRequestT = Model::CreateFirewallRuleRequest>
        Model::CreateFirewallRuleOutcomeCallable CreateFirewallRuleCallable(const CreateFirewallRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateFirewallRule, request);
        }

        /**
         * An Async wrapper for CreateFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFirewallRuleRequestT = Model::CreateFirewallRuleRequest>
        void CreateFirewallRuleAsync(const CreateFirewallRuleRequestT& request, const CreateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateFirewallRule, request, handler, context);
        }

        /**
         * <p>Creates an empty DNS Firewall rule group for filtering DNS network traffic in
         * a VPC. You can add rules to the new rule group by calling
         * <a>CreateFirewallRule</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallRuleGroupOutcome CreateFirewallRuleGroup(const Model::CreateFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFirewallRuleGroupRequestT = Model::CreateFirewallRuleGroupRequest>
        Model::CreateFirewallRuleGroupOutcomeCallable CreateFirewallRuleGroupCallable(const CreateFirewallRuleGroupRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateFirewallRuleGroup, request);
        }

        /**
         * An Async wrapper for CreateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFirewallRuleGroupRequestT = Model::CreateFirewallRuleGroupRequest>
        void CreateFirewallRuleGroupAsync(const CreateFirewallRuleGroupRequestT& request, const CreateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateFirewallRuleGroup, request, handler, context);
        }

        /**
         * <p>Creates a Route 53 Resolver on an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateOutpostResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOutpostResolverOutcome CreateOutpostResolver(const Model::CreateOutpostResolverRequest& request) const;

        /**
         * A Callable wrapper for CreateOutpostResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOutpostResolverRequestT = Model::CreateOutpostResolverRequest>
        Model::CreateOutpostResolverOutcomeCallable CreateOutpostResolverCallable(const CreateOutpostResolverRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateOutpostResolver, request);
        }

        /**
         * An Async wrapper for CreateOutpostResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOutpostResolverRequestT = Model::CreateOutpostResolverRequest>
        void CreateOutpostResolverAsync(const CreateOutpostResolverRequestT& request, const CreateOutpostResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateOutpostResolver, request, handler, context);
        }

        /**
         * <p>Creates a Resolver endpoint. There are two types of Resolver endpoints,
         * inbound and outbound:</p> <ul> <li> <p>An <i>inbound Resolver endpoint</i>
         * forwards DNS queries to the DNS service for a VPC from your network.</p> </li>
         * <li> <p>An <i>outbound Resolver endpoint</i> forwards DNS queries from the DNS
         * service for a VPC to your network.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverEndpointOutcome CreateResolverEndpoint(const Model::CreateResolverEndpointRequest& request) const;

        /**
         * A Callable wrapper for CreateResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResolverEndpointRequestT = Model::CreateResolverEndpointRequest>
        Model::CreateResolverEndpointOutcomeCallable CreateResolverEndpointCallable(const CreateResolverEndpointRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateResolverEndpoint, request);
        }

        /**
         * An Async wrapper for CreateResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResolverEndpointRequestT = Model::CreateResolverEndpointRequest>
        void CreateResolverEndpointAsync(const CreateResolverEndpointRequestT& request, const CreateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateResolverEndpoint, request, handler, context);
        }

        /**
         * <p>Creates a Resolver query logging configuration, which defines where you want
         * Resolver to save DNS query logs that originate in your VPCs. Resolver can log
         * queries only for VPCs that are in the same Region as the query logging
         * configuration.</p> <p>To specify which VPCs you want to log queries for, you use
         * <code>AssociateResolverQueryLogConfig</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverQueryLogConfig.html">AssociateResolverQueryLogConfig</a>.
         * </p> <p>You can optionally use Resource Access Manager (RAM) to share a query
         * logging configuration with other Amazon Web Services accounts. The other
         * accounts can then associate VPCs with the configuration. The query logs that
         * Resolver creates for a configuration include all DNS queries that originate in
         * all VPCs that are associated with the configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverQueryLogConfigOutcome CreateResolverQueryLogConfig(const Model::CreateResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResolverQueryLogConfigRequestT = Model::CreateResolverQueryLogConfigRequest>
        Model::CreateResolverQueryLogConfigOutcomeCallable CreateResolverQueryLogConfigCallable(const CreateResolverQueryLogConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateResolverQueryLogConfig, request);
        }

        /**
         * An Async wrapper for CreateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResolverQueryLogConfigRequestT = Model::CreateResolverQueryLogConfigRequest>
        void CreateResolverQueryLogConfigAsync(const CreateResolverQueryLogConfigRequestT& request, const CreateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateResolverQueryLogConfig, request, handler, context);
        }

        /**
         * <p>For DNS queries that originate in your VPCs, specifies which Resolver
         * endpoint the queries pass through, one domain name that you want to forward to
         * your network, and the IP addresses of the DNS resolvers in your
         * network.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/CreateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateResolverRuleOutcome CreateResolverRule(const Model::CreateResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateResolverRuleRequestT = Model::CreateResolverRuleRequest>
        Model::CreateResolverRuleOutcomeCallable CreateResolverRuleCallable(const CreateResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::CreateResolverRule, request);
        }

        /**
         * An Async wrapper for CreateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateResolverRuleRequestT = Model::CreateResolverRuleRequest>
        void CreateResolverRuleAsync(const CreateResolverRuleRequestT& request, const CreateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::CreateResolverRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified domain list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallDomainListOutcome DeleteFirewallDomainList(const Model::DeleteFirewallDomainListRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFirewallDomainListRequestT = Model::DeleteFirewallDomainListRequest>
        Model::DeleteFirewallDomainListOutcomeCallable DeleteFirewallDomainListCallable(const DeleteFirewallDomainListRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteFirewallDomainList, request);
        }

        /**
         * An Async wrapper for DeleteFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFirewallDomainListRequestT = Model::DeleteFirewallDomainListRequest>
        void DeleteFirewallDomainListAsync(const DeleteFirewallDomainListRequestT& request, const DeleteFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteFirewallDomainList, request, handler, context);
        }

        /**
         * <p>Deletes the specified firewall rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleOutcome DeleteFirewallRule(const Model::DeleteFirewallRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFirewallRuleRequestT = Model::DeleteFirewallRuleRequest>
        Model::DeleteFirewallRuleOutcomeCallable DeleteFirewallRuleCallable(const DeleteFirewallRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteFirewallRule, request);
        }

        /**
         * An Async wrapper for DeleteFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFirewallRuleRequestT = Model::DeleteFirewallRuleRequest>
        void DeleteFirewallRuleAsync(const DeleteFirewallRuleRequestT& request, const DeleteFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteFirewallRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallRuleGroupOutcome DeleteFirewallRuleGroup(const Model::DeleteFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFirewallRuleGroupRequestT = Model::DeleteFirewallRuleGroupRequest>
        Model::DeleteFirewallRuleGroupOutcomeCallable DeleteFirewallRuleGroupCallable(const DeleteFirewallRuleGroupRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteFirewallRuleGroup, request);
        }

        /**
         * An Async wrapper for DeleteFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFirewallRuleGroupRequestT = Model::DeleteFirewallRuleGroupRequest>
        void DeleteFirewallRuleGroupAsync(const DeleteFirewallRuleGroupRequestT& request, const DeleteFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteFirewallRuleGroup, request, handler, context);
        }

        /**
         * <p>Deletes a Resolver on the Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteOutpostResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOutpostResolverOutcome DeleteOutpostResolver(const Model::DeleteOutpostResolverRequest& request) const;

        /**
         * A Callable wrapper for DeleteOutpostResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOutpostResolverRequestT = Model::DeleteOutpostResolverRequest>
        Model::DeleteOutpostResolverOutcomeCallable DeleteOutpostResolverCallable(const DeleteOutpostResolverRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteOutpostResolver, request);
        }

        /**
         * An Async wrapper for DeleteOutpostResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOutpostResolverRequestT = Model::DeleteOutpostResolverRequest>
        void DeleteOutpostResolverAsync(const DeleteOutpostResolverRequestT& request, const DeleteOutpostResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteOutpostResolver, request, handler, context);
        }

        /**
         * <p>Deletes a Resolver endpoint. The effect of deleting a Resolver endpoint
         * depends on whether it's an inbound or an outbound Resolver endpoint:</p> <ul>
         * <li> <p> <b>Inbound</b>: DNS queries from your network are no longer routed to
         * the DNS service for the specified VPC.</p> </li> <li> <p> <b>Outbound</b>: DNS
         * queries from a VPC are no longer routed to your network.</p> </li>
         * </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverEndpointOutcome DeleteResolverEndpoint(const Model::DeleteResolverEndpointRequest& request) const;

        /**
         * A Callable wrapper for DeleteResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResolverEndpointRequestT = Model::DeleteResolverEndpointRequest>
        Model::DeleteResolverEndpointOutcomeCallable DeleteResolverEndpointCallable(const DeleteResolverEndpointRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteResolverEndpoint, request);
        }

        /**
         * An Async wrapper for DeleteResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResolverEndpointRequestT = Model::DeleteResolverEndpointRequest>
        void DeleteResolverEndpointAsync(const DeleteResolverEndpointRequestT& request, const DeleteResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteResolverEndpoint, request, handler, context);
        }

        /**
         * <p>Deletes a query logging configuration. When you delete a configuration,
         * Resolver stops logging DNS queries for all of the Amazon VPCs that are
         * associated with the configuration. This also applies if the query logging
         * configuration is shared with other Amazon Web Services accounts, and the other
         * accounts have associated VPCs with the shared configuration.</p> <p>Before you
         * can delete a query logging configuration, you must first disassociate all VPCs
         * from the configuration. See <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverQueryLogConfig.html">DisassociateResolverQueryLogConfig</a>.</p>
         * <p>If you used Resource Access Manager (RAM) to share a query logging
         * configuration with other accounts, you must stop sharing the configuration
         * before you can delete a configuration. The accounts that you shared the
         * configuration with can first disassociate VPCs that they associated with the
         * configuration, but that's not necessary. If you stop sharing the configuration,
         * those VPCs are automatically disassociated from the configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverQueryLogConfigOutcome DeleteResolverQueryLogConfig(const Model::DeleteResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResolverQueryLogConfigRequestT = Model::DeleteResolverQueryLogConfigRequest>
        Model::DeleteResolverQueryLogConfigOutcomeCallable DeleteResolverQueryLogConfigCallable(const DeleteResolverQueryLogConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteResolverQueryLogConfig, request);
        }

        /**
         * An Async wrapper for DeleteResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResolverQueryLogConfigRequestT = Model::DeleteResolverQueryLogConfigRequest>
        void DeleteResolverQueryLogConfigAsync(const DeleteResolverQueryLogConfigRequestT& request, const DeleteResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteResolverQueryLogConfig, request, handler, context);
        }

        /**
         * <p>Deletes a Resolver rule. Before you can delete a Resolver rule, you must
         * disassociate it from all the VPCs that you associated the Resolver rule with.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_DisassociateResolverRule.html">DisassociateResolverRule</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DeleteResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResolverRuleOutcome DeleteResolverRule(const Model::DeleteResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResolverRuleRequestT = Model::DeleteResolverRuleRequest>
        Model::DeleteResolverRuleOutcomeCallable DeleteResolverRuleCallable(const DeleteResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DeleteResolverRule, request);
        }

        /**
         * An Async wrapper for DeleteResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResolverRuleRequestT = Model::DeleteResolverRuleRequest>
        void DeleteResolverRuleAsync(const DeleteResolverRuleRequestT& request, const DeleteResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DeleteResolverRule, request, handler, context);
        }

        /**
         * <p>Disassociates a <a>FirewallRuleGroup</a> from a VPC, to remove DNS filtering
         * from the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateFirewallRuleGroupOutcome DisassociateFirewallRuleGroup(const Model::DisassociateFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for DisassociateFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateFirewallRuleGroupRequestT = Model::DisassociateFirewallRuleGroupRequest>
        Model::DisassociateFirewallRuleGroupOutcomeCallable DisassociateFirewallRuleGroupCallable(const DisassociateFirewallRuleGroupRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DisassociateFirewallRuleGroup, request);
        }

        /**
         * An Async wrapper for DisassociateFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateFirewallRuleGroupRequestT = Model::DisassociateFirewallRuleGroupRequest>
        void DisassociateFirewallRuleGroupAsync(const DisassociateFirewallRuleGroupRequestT& request, const DisassociateFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DisassociateFirewallRuleGroup, request, handler, context);
        }

        /**
         * <p>Removes IP addresses from an inbound or an outbound Resolver endpoint. If you
         * want to remove more than one IP address, submit one
         * <code>DisassociateResolverEndpointIpAddress</code> request for each IP
         * address.</p> <p>To add an IP address to an endpoint, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverEndpointIpAddress.html">AssociateResolverEndpointIpAddress</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverEndpointIpAddress">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverEndpointIpAddressOutcome DisassociateResolverEndpointIpAddress(const Model::DisassociateResolverEndpointIpAddressRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResolverEndpointIpAddress that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResolverEndpointIpAddressRequestT = Model::DisassociateResolverEndpointIpAddressRequest>
        Model::DisassociateResolverEndpointIpAddressOutcomeCallable DisassociateResolverEndpointIpAddressCallable(const DisassociateResolverEndpointIpAddressRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DisassociateResolverEndpointIpAddress, request);
        }

        /**
         * An Async wrapper for DisassociateResolverEndpointIpAddress that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResolverEndpointIpAddressRequestT = Model::DisassociateResolverEndpointIpAddressRequest>
        void DisassociateResolverEndpointIpAddressAsync(const DisassociateResolverEndpointIpAddressRequestT& request, const DisassociateResolverEndpointIpAddressResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DisassociateResolverEndpointIpAddress, request, handler, context);
        }

        /**
         * <p>Disassociates a VPC from a query logging configuration.</p>  <p>Before
         * you can delete a query logging configuration, you must first disassociate all
         * VPCs from the configuration. If you used Resource Access Manager (RAM) to share
         * a query logging configuration with other accounts, VPCs can be disassociated
         * from the configuration in the following ways:</p> <ul> <li> <p>The accounts that
         * you shared the configuration with can disassociate VPCs from the
         * configuration.</p> </li> <li> <p>You can stop sharing the configuration.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverQueryLogConfigOutcome DisassociateResolverQueryLogConfig(const Model::DisassociateResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResolverQueryLogConfigRequestT = Model::DisassociateResolverQueryLogConfigRequest>
        Model::DisassociateResolverQueryLogConfigOutcomeCallable DisassociateResolverQueryLogConfigCallable(const DisassociateResolverQueryLogConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DisassociateResolverQueryLogConfig, request);
        }

        /**
         * An Async wrapper for DisassociateResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResolverQueryLogConfigRequestT = Model::DisassociateResolverQueryLogConfigRequest>
        void DisassociateResolverQueryLogConfigAsync(const DisassociateResolverQueryLogConfigRequestT& request, const DisassociateResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DisassociateResolverQueryLogConfig, request, handler, context);
        }

        /**
         * <p>Removes the association between a specified Resolver rule and a specified
         * VPC.</p>  <p>If you disassociate a Resolver rule from a VPC, Resolver
         * stops forwarding DNS queries for the domain name that you specified in the
         * Resolver rule. </p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/DisassociateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateResolverRuleOutcome DisassociateResolverRule(const Model::DisassociateResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for DisassociateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateResolverRuleRequestT = Model::DisassociateResolverRuleRequest>
        Model::DisassociateResolverRuleOutcomeCallable DisassociateResolverRuleCallable(const DisassociateResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::DisassociateResolverRule, request);
        }

        /**
         * An Async wrapper for DisassociateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateResolverRuleRequestT = Model::DisassociateResolverRuleRequest>
        void DisassociateResolverRuleAsync(const DisassociateResolverRuleRequestT& request, const DisassociateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::DisassociateResolverRule, request, handler, context);
        }

        /**
         * <p>Retrieves the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallConfigOutcome GetFirewallConfig(const Model::GetFirewallConfigRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFirewallConfigRequestT = Model::GetFirewallConfigRequest>
        Model::GetFirewallConfigOutcomeCallable GetFirewallConfigCallable(const GetFirewallConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetFirewallConfig, request);
        }

        /**
         * An Async wrapper for GetFirewallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFirewallConfigRequestT = Model::GetFirewallConfigRequest>
        void GetFirewallConfigAsync(const GetFirewallConfigRequestT& request, const GetFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetFirewallConfig, request, handler, context);
        }

        /**
         * <p>Retrieves the specified firewall domain list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallDomainList">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallDomainListOutcome GetFirewallDomainList(const Model::GetFirewallDomainListRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFirewallDomainListRequestT = Model::GetFirewallDomainListRequest>
        Model::GetFirewallDomainListOutcomeCallable GetFirewallDomainListCallable(const GetFirewallDomainListRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetFirewallDomainList, request);
        }

        /**
         * An Async wrapper for GetFirewallDomainList that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFirewallDomainListRequestT = Model::GetFirewallDomainListRequest>
        void GetFirewallDomainListAsync(const GetFirewallDomainListRequestT& request, const GetFirewallDomainListResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetFirewallDomainList, request, handler, context);
        }

        /**
         * <p>Retrieves the specified firewall rule group. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupOutcome GetFirewallRuleGroup(const Model::GetFirewallRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFirewallRuleGroupRequestT = Model::GetFirewallRuleGroupRequest>
        Model::GetFirewallRuleGroupOutcomeCallable GetFirewallRuleGroupCallable(const GetFirewallRuleGroupRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroup, request);
        }

        /**
         * An Async wrapper for GetFirewallRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFirewallRuleGroupRequestT = Model::GetFirewallRuleGroupRequest>
        void GetFirewallRuleGroupAsync(const GetFirewallRuleGroupRequestT& request, const GetFirewallRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroup, request, handler, context);
        }

        /**
         * <p>Retrieves a firewall rule group association, which enables DNS filtering for
         * a VPC with one rule group. A VPC can have more than one firewall rule group
         * association, and a rule group can be associated with more than one
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupAssociationOutcome GetFirewallRuleGroupAssociation(const Model::GetFirewallRuleGroupAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallRuleGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFirewallRuleGroupAssociationRequestT = Model::GetFirewallRuleGroupAssociationRequest>
        Model::GetFirewallRuleGroupAssociationOutcomeCallable GetFirewallRuleGroupAssociationCallable(const GetFirewallRuleGroupAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroupAssociation, request);
        }

        /**
         * An Async wrapper for GetFirewallRuleGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFirewallRuleGroupAssociationRequestT = Model::GetFirewallRuleGroupAssociationRequest>
        void GetFirewallRuleGroupAssociationAsync(const GetFirewallRuleGroupAssociationRequestT& request, const GetFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroupAssociation, request, handler, context);
        }

        /**
         * <p>Returns the Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the specified rule group. You can use the policy to share the rule
         * group using Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetFirewallRuleGroupPolicyOutcome GetFirewallRuleGroupPolicy(const Model::GetFirewallRuleGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetFirewallRuleGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetFirewallRuleGroupPolicyRequestT = Model::GetFirewallRuleGroupPolicyRequest>
        Model::GetFirewallRuleGroupPolicyOutcomeCallable GetFirewallRuleGroupPolicyCallable(const GetFirewallRuleGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetFirewallRuleGroupPolicy, request);
        }

        /**
         * An Async wrapper for GetFirewallRuleGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetFirewallRuleGroupPolicyRequestT = Model::GetFirewallRuleGroupPolicyRequest>
        void GetFirewallRuleGroupPolicyAsync(const GetFirewallRuleGroupPolicyRequestT& request, const GetFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetFirewallRuleGroupPolicy, request, handler, context);
        }

        /**
         * <p>Gets information about a specified Resolver on the Outpost, such as its
         * instance count and type, name, and the current status of the
         * Resolver.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetOutpostResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOutpostResolverOutcome GetOutpostResolver(const Model::GetOutpostResolverRequest& request) const;

        /**
         * A Callable wrapper for GetOutpostResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOutpostResolverRequestT = Model::GetOutpostResolverRequest>
        Model::GetOutpostResolverOutcomeCallable GetOutpostResolverCallable(const GetOutpostResolverRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetOutpostResolver, request);
        }

        /**
         * An Async wrapper for GetOutpostResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOutpostResolverRequestT = Model::GetOutpostResolverRequest>
        void GetOutpostResolverAsync(const GetOutpostResolverRequestT& request, const GetOutpostResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetOutpostResolver, request, handler, context);
        }

        /**
         * <p>Retrieves the behavior configuration of Route 53 Resolver behavior for a
         * single VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverConfigOutcome GetResolverConfig(const Model::GetResolverConfigRequest& request) const;

        /**
         * A Callable wrapper for GetResolverConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverConfigRequestT = Model::GetResolverConfigRequest>
        Model::GetResolverConfigOutcomeCallable GetResolverConfigCallable(const GetResolverConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverConfig, request);
        }

        /**
         * An Async wrapper for GetResolverConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverConfigRequestT = Model::GetResolverConfigRequest>
        void GetResolverConfigAsync(const GetResolverConfigRequestT& request, const GetResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverConfig, request, handler, context);
        }

        /**
         * <p>Gets DNSSEC validation information for a specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverDnssecConfigOutcome GetResolverDnssecConfig(const Model::GetResolverDnssecConfigRequest& request) const;

        /**
         * A Callable wrapper for GetResolverDnssecConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverDnssecConfigRequestT = Model::GetResolverDnssecConfigRequest>
        Model::GetResolverDnssecConfigOutcomeCallable GetResolverDnssecConfigCallable(const GetResolverDnssecConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverDnssecConfig, request);
        }

        /**
         * An Async wrapper for GetResolverDnssecConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverDnssecConfigRequestT = Model::GetResolverDnssecConfigRequest>
        void GetResolverDnssecConfigAsync(const GetResolverDnssecConfigRequestT& request, const GetResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverDnssecConfig, request, handler, context);
        }

        /**
         * <p>Gets information about a specified Resolver endpoint, such as whether it's an
         * inbound or an outbound Resolver endpoint, and the current status of the
         * endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverEndpointOutcome GetResolverEndpoint(const Model::GetResolverEndpointRequest& request) const;

        /**
         * A Callable wrapper for GetResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverEndpointRequestT = Model::GetResolverEndpointRequest>
        Model::GetResolverEndpointOutcomeCallable GetResolverEndpointCallable(const GetResolverEndpointRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverEndpoint, request);
        }

        /**
         * An Async wrapper for GetResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverEndpointRequestT = Model::GetResolverEndpointRequest>
        void GetResolverEndpointAsync(const GetResolverEndpointRequestT& request, const GetResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverEndpoint, request, handler, context);
        }

        /**
         * <p>Gets information about a specified Resolver query logging configuration, such
         * as the number of VPCs that the configuration is logging queries for and the
         * location that logs are sent to. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigOutcome GetResolverQueryLogConfig(const Model::GetResolverQueryLogConfigRequest& request) const;

        /**
         * A Callable wrapper for GetResolverQueryLogConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverQueryLogConfigRequestT = Model::GetResolverQueryLogConfigRequest>
        Model::GetResolverQueryLogConfigOutcomeCallable GetResolverQueryLogConfigCallable(const GetResolverQueryLogConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfig, request);
        }

        /**
         * An Async wrapper for GetResolverQueryLogConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverQueryLogConfigRequestT = Model::GetResolverQueryLogConfigRequest>
        void GetResolverQueryLogConfigAsync(const GetResolverQueryLogConfigRequestT& request, const GetResolverQueryLogConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfig, request, handler, context);
        }

        /**
         * <p>Gets information about a specified association between a Resolver query
         * logging configuration and an Amazon VPC. When you associate a VPC with a query
         * logging configuration, Resolver logs DNS queries that originate in that
         * VPC.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigAssociationOutcome GetResolverQueryLogConfigAssociation(const Model::GetResolverQueryLogConfigAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetResolverQueryLogConfigAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverQueryLogConfigAssociationRequestT = Model::GetResolverQueryLogConfigAssociationRequest>
        Model::GetResolverQueryLogConfigAssociationOutcomeCallable GetResolverQueryLogConfigAssociationCallable(const GetResolverQueryLogConfigAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfigAssociation, request);
        }

        /**
         * An Async wrapper for GetResolverQueryLogConfigAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverQueryLogConfigAssociationRequestT = Model::GetResolverQueryLogConfigAssociationRequest>
        void GetResolverQueryLogConfigAssociationAsync(const GetResolverQueryLogConfigAssociationRequestT& request, const GetResolverQueryLogConfigAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfigAssociation, request, handler, context);
        }

        /**
         * <p>Gets information about a query logging policy. A query logging policy
         * specifies the Resolver query logging operations and resources that you want to
         * allow another Amazon Web Services account to be able to use.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverQueryLogConfigPolicyOutcome GetResolverQueryLogConfigPolicy(const Model::GetResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResolverQueryLogConfigPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverQueryLogConfigPolicyRequestT = Model::GetResolverQueryLogConfigPolicyRequest>
        Model::GetResolverQueryLogConfigPolicyOutcomeCallable GetResolverQueryLogConfigPolicyCallable(const GetResolverQueryLogConfigPolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverQueryLogConfigPolicy, request);
        }

        /**
         * An Async wrapper for GetResolverQueryLogConfigPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverQueryLogConfigPolicyRequestT = Model::GetResolverQueryLogConfigPolicyRequest>
        void GetResolverQueryLogConfigPolicyAsync(const GetResolverQueryLogConfigPolicyRequestT& request, const GetResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverQueryLogConfigPolicy, request, handler, context);
        }

        /**
         * <p>Gets information about a specified Resolver rule, such as the domain name
         * that the rule forwards DNS queries for and the ID of the outbound Resolver
         * endpoint that the rule is associated with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleOutcome GetResolverRule(const Model::GetResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for GetResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverRuleRequestT = Model::GetResolverRuleRequest>
        Model::GetResolverRuleOutcomeCallable GetResolverRuleCallable(const GetResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverRule, request);
        }

        /**
         * An Async wrapper for GetResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverRuleRequestT = Model::GetResolverRuleRequest>
        void GetResolverRuleAsync(const GetResolverRuleRequestT& request, const GetResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverRule, request, handler, context);
        }

        /**
         * <p>Gets information about an association between a specified Resolver rule and a
         * VPC. You associate a Resolver rule and a VPC using <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_AssociateResolverRule.html">AssociateResolverRule</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRuleAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRuleAssociationOutcome GetResolverRuleAssociation(const Model::GetResolverRuleAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetResolverRuleAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverRuleAssociationRequestT = Model::GetResolverRuleAssociationRequest>
        Model::GetResolverRuleAssociationOutcomeCallable GetResolverRuleAssociationCallable(const GetResolverRuleAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverRuleAssociation, request);
        }

        /**
         * An Async wrapper for GetResolverRuleAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverRuleAssociationRequestT = Model::GetResolverRuleAssociationRequest>
        void GetResolverRuleAssociationAsync(const GetResolverRuleAssociationRequestT& request, const GetResolverRuleAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverRuleAssociation, request, handler, context);
        }

        /**
         * <p>Gets information about the Resolver rule policy for a specified rule. A
         * Resolver rule policy includes the rule that you want to share with another
         * account, the account that you want to share the rule with, and the Resolver
         * operations that you want to allow the account to use. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/GetResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResolverRulePolicyOutcome GetResolverRulePolicy(const Model::GetResolverRulePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResolverRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResolverRulePolicyRequestT = Model::GetResolverRulePolicyRequest>
        Model::GetResolverRulePolicyOutcomeCallable GetResolverRulePolicyCallable(const GetResolverRulePolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::GetResolverRulePolicy, request);
        }

        /**
         * An Async wrapper for GetResolverRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResolverRulePolicyRequestT = Model::GetResolverRulePolicyRequest>
        void GetResolverRulePolicyAsync(const GetResolverRulePolicyRequestT& request, const GetResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::GetResolverRulePolicy, request, handler, context);
        }

        /**
         * <p>Imports domain names from a file into a domain list, for use in a DNS
         * firewall rule group. </p> <p>Each domain specification in your domain list must
         * satisfy the following requirements: </p> <ul> <li> <p>It can optionally start
         * with <code>*</code> (asterisk).</p> </li> <li> <p>With the exception of the
         * optional starting asterisk, it must only contain the following characters:
         * <code>A-Z</code>, <code>a-z</code>, <code>0-9</code>, <code>-</code>
         * (hyphen).</p> </li> <li> <p>It must be from 1-255 characters in length. </p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ImportFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportFirewallDomainsOutcome ImportFirewallDomains(const Model::ImportFirewallDomainsRequest& request) const;

        /**
         * A Callable wrapper for ImportFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportFirewallDomainsRequestT = Model::ImportFirewallDomainsRequest>
        Model::ImportFirewallDomainsOutcomeCallable ImportFirewallDomainsCallable(const ImportFirewallDomainsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ImportFirewallDomains, request);
        }

        /**
         * An Async wrapper for ImportFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportFirewallDomainsRequestT = Model::ImportFirewallDomainsRequest>
        void ImportFirewallDomainsAsync(const ImportFirewallDomainsRequestT& request, const ImportFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ImportFirewallDomains, request, handler, context);
        }

        /**
         * <p>Retrieves the firewall configurations that you have defined. DNS Firewall
         * uses the configurations to manage firewall behavior for your VPCs. </p> <p>A
         * single call might return only a partial list of the configurations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallConfigsOutcome ListFirewallConfigs(const Model::ListFirewallConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallConfigsRequestT = Model::ListFirewallConfigsRequest>
        Model::ListFirewallConfigsOutcomeCallable ListFirewallConfigsCallable(const ListFirewallConfigsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallConfigs, request);
        }

        /**
         * An Async wrapper for ListFirewallConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallConfigsRequestT = Model::ListFirewallConfigsRequest>
        void ListFirewallConfigsAsync(const ListFirewallConfigsRequestT& request, const ListFirewallConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallConfigs, request, handler, context);
        }

        /**
         * <p>Retrieves the firewall domain lists that you have defined. For each firewall
         * domain list, you can retrieve the domains that are defined for a list by calling
         * <a>ListFirewallDomains</a>. </p> <p>A single call to this list operation might
         * return only a partial list of the domain lists. For information, see
         * <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomainLists">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallDomainListsOutcome ListFirewallDomainLists(const Model::ListFirewallDomainListsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallDomainLists that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallDomainListsRequestT = Model::ListFirewallDomainListsRequest>
        Model::ListFirewallDomainListsOutcomeCallable ListFirewallDomainListsCallable(const ListFirewallDomainListsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallDomainLists, request);
        }

        /**
         * An Async wrapper for ListFirewallDomainLists that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallDomainListsRequestT = Model::ListFirewallDomainListsRequest>
        void ListFirewallDomainListsAsync(const ListFirewallDomainListsRequestT& request, const ListFirewallDomainListsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallDomainLists, request, handler, context);
        }

        /**
         * <p>Retrieves the domains that you have defined for the specified firewall domain
         * list. </p> <p>A single call might return only a partial list of the domains. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallDomainsOutcome ListFirewallDomains(const Model::ListFirewallDomainsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallDomainsRequestT = Model::ListFirewallDomainsRequest>
        Model::ListFirewallDomainsOutcomeCallable ListFirewallDomainsCallable(const ListFirewallDomainsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallDomains, request);
        }

        /**
         * An Async wrapper for ListFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallDomainsRequestT = Model::ListFirewallDomainsRequest>
        void ListFirewallDomainsAsync(const ListFirewallDomainsRequestT& request, const ListFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallDomains, request, handler, context);
        }

        /**
         * <p>Retrieves the firewall rule group associations that you have defined. Each
         * association enables DNS filtering for a VPC with one rule group. </p> <p>A
         * single call might return only a partial list of the associations. For
         * information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroupAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRuleGroupAssociationsOutcome ListFirewallRuleGroupAssociations(const Model::ListFirewallRuleGroupAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallRuleGroupAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallRuleGroupAssociationsRequestT = Model::ListFirewallRuleGroupAssociationsRequest>
        Model::ListFirewallRuleGroupAssociationsOutcomeCallable ListFirewallRuleGroupAssociationsCallable(const ListFirewallRuleGroupAssociationsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallRuleGroupAssociations, request);
        }

        /**
         * An Async wrapper for ListFirewallRuleGroupAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallRuleGroupAssociationsRequestT = Model::ListFirewallRuleGroupAssociationsRequest>
        void ListFirewallRuleGroupAssociationsAsync(const ListFirewallRuleGroupAssociationsRequestT& request, const ListFirewallRuleGroupAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallRuleGroupAssociations, request, handler, context);
        }

        /**
         * <p>Retrieves the minimal high-level information for the rule groups that you
         * have defined. </p> <p>A single call might return only a partial list of the rule
         * groups. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRuleGroupsOutcome ListFirewallRuleGroups(const Model::ListFirewallRuleGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallRuleGroupsRequestT = Model::ListFirewallRuleGroupsRequest>
        Model::ListFirewallRuleGroupsOutcomeCallable ListFirewallRuleGroupsCallable(const ListFirewallRuleGroupsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallRuleGroups, request);
        }

        /**
         * An Async wrapper for ListFirewallRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallRuleGroupsRequestT = Model::ListFirewallRuleGroupsRequest>
        void ListFirewallRuleGroupsAsync(const ListFirewallRuleGroupsRequestT& request, const ListFirewallRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallRuleGroups, request, handler, context);
        }

        /**
         * <p>Retrieves the firewall rules that you have defined for the specified firewall
         * rule group. DNS Firewall uses the rules in a rule group to filter DNS network
         * traffic for a VPC. </p> <p>A single call might return only a partial list of the
         * rules. For information, see <code>MaxResults</code>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListFirewallRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallRulesOutcome ListFirewallRules(const Model::ListFirewallRulesRequest& request) const;

        /**
         * A Callable wrapper for ListFirewallRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallRulesRequestT = Model::ListFirewallRulesRequest>
        Model::ListFirewallRulesOutcomeCallable ListFirewallRulesCallable(const ListFirewallRulesRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListFirewallRules, request);
        }

        /**
         * An Async wrapper for ListFirewallRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallRulesRequestT = Model::ListFirewallRulesRequest>
        void ListFirewallRulesAsync(const ListFirewallRulesRequestT& request, const ListFirewallRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListFirewallRules, request, handler, context);
        }

        /**
         * <p>Lists all the Resolvers on Outposts that were created using the current
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListOutpostResolvers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutpostResolversOutcome ListOutpostResolvers(const Model::ListOutpostResolversRequest& request) const;

        /**
         * A Callable wrapper for ListOutpostResolvers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOutpostResolversRequestT = Model::ListOutpostResolversRequest>
        Model::ListOutpostResolversOutcomeCallable ListOutpostResolversCallable(const ListOutpostResolversRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListOutpostResolvers, request);
        }

        /**
         * An Async wrapper for ListOutpostResolvers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOutpostResolversRequestT = Model::ListOutpostResolversRequest>
        void ListOutpostResolversAsync(const ListOutpostResolversRequestT& request, const ListOutpostResolversResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListOutpostResolvers, request, handler, context);
        }

        /**
         * <p>Retrieves the Resolver configurations that you have defined. Route 53
         * Resolver uses the configurations to manage DNS resolution behavior for your
         * VPCs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverConfigsOutcome ListResolverConfigs(const Model::ListResolverConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverConfigsRequestT = Model::ListResolverConfigsRequest>
        Model::ListResolverConfigsOutcomeCallable ListResolverConfigsCallable(const ListResolverConfigsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverConfigs, request);
        }

        /**
         * An Async wrapper for ListResolverConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverConfigsRequestT = Model::ListResolverConfigsRequest>
        void ListResolverConfigsAsync(const ListResolverConfigsRequestT& request, const ListResolverConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverConfigs, request, handler, context);
        }

        /**
         * <p>Lists the configurations for DNSSEC validation that are associated with the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverDnssecConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverDnssecConfigsOutcome ListResolverDnssecConfigs(const Model::ListResolverDnssecConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverDnssecConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverDnssecConfigsRequestT = Model::ListResolverDnssecConfigsRequest>
        Model::ListResolverDnssecConfigsOutcomeCallable ListResolverDnssecConfigsCallable(const ListResolverDnssecConfigsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverDnssecConfigs, request);
        }

        /**
         * An Async wrapper for ListResolverDnssecConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverDnssecConfigsRequestT = Model::ListResolverDnssecConfigsRequest>
        void ListResolverDnssecConfigsAsync(const ListResolverDnssecConfigsRequestT& request, const ListResolverDnssecConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverDnssecConfigs, request, handler, context);
        }

        /**
         * <p>Gets the IP addresses for a specified Resolver endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpointIpAddresses">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointIpAddressesOutcome ListResolverEndpointIpAddresses(const Model::ListResolverEndpointIpAddressesRequest& request) const;

        /**
         * A Callable wrapper for ListResolverEndpointIpAddresses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverEndpointIpAddressesRequestT = Model::ListResolverEndpointIpAddressesRequest>
        Model::ListResolverEndpointIpAddressesOutcomeCallable ListResolverEndpointIpAddressesCallable(const ListResolverEndpointIpAddressesRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverEndpointIpAddresses, request);
        }

        /**
         * An Async wrapper for ListResolverEndpointIpAddresses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverEndpointIpAddressesRequestT = Model::ListResolverEndpointIpAddressesRequest>
        void ListResolverEndpointIpAddressesAsync(const ListResolverEndpointIpAddressesRequestT& request, const ListResolverEndpointIpAddressesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverEndpointIpAddresses, request, handler, context);
        }

        /**
         * <p>Lists all the Resolver endpoints that were created using the current Amazon
         * Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverEndpoints">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverEndpointsOutcome ListResolverEndpoints(const Model::ListResolverEndpointsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverEndpoints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverEndpointsRequestT = Model::ListResolverEndpointsRequest>
        Model::ListResolverEndpointsOutcomeCallable ListResolverEndpointsCallable(const ListResolverEndpointsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverEndpoints, request);
        }

        /**
         * An Async wrapper for ListResolverEndpoints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverEndpointsRequestT = Model::ListResolverEndpointsRequest>
        void ListResolverEndpointsAsync(const ListResolverEndpointsRequestT& request, const ListResolverEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverEndpoints, request, handler, context);
        }

        /**
         * <p>Lists information about associations between Amazon VPCs and query logging
         * configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverQueryLogConfigAssociationsOutcome ListResolverQueryLogConfigAssociations(const Model::ListResolverQueryLogConfigAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverQueryLogConfigAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverQueryLogConfigAssociationsRequestT = Model::ListResolverQueryLogConfigAssociationsRequest>
        Model::ListResolverQueryLogConfigAssociationsOutcomeCallable ListResolverQueryLogConfigAssociationsCallable(const ListResolverQueryLogConfigAssociationsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverQueryLogConfigAssociations, request);
        }

        /**
         * An Async wrapper for ListResolverQueryLogConfigAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverQueryLogConfigAssociationsRequestT = Model::ListResolverQueryLogConfigAssociationsRequest>
        void ListResolverQueryLogConfigAssociationsAsync(const ListResolverQueryLogConfigAssociationsRequestT& request, const ListResolverQueryLogConfigAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverQueryLogConfigAssociations, request, handler, context);
        }

        /**
         * <p>Lists information about the specified query logging configurations. Each
         * configuration defines where you want Resolver to save DNS query logs and
         * specifies the VPCs that you want to log queries for.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverQueryLogConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverQueryLogConfigsOutcome ListResolverQueryLogConfigs(const Model::ListResolverQueryLogConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverQueryLogConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverQueryLogConfigsRequestT = Model::ListResolverQueryLogConfigsRequest>
        Model::ListResolverQueryLogConfigsOutcomeCallable ListResolverQueryLogConfigsCallable(const ListResolverQueryLogConfigsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverQueryLogConfigs, request);
        }

        /**
         * An Async wrapper for ListResolverQueryLogConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverQueryLogConfigsRequestT = Model::ListResolverQueryLogConfigsRequest>
        void ListResolverQueryLogConfigsAsync(const ListResolverQueryLogConfigsRequestT& request, const ListResolverQueryLogConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverQueryLogConfigs, request, handler, context);
        }

        /**
         * <p>Lists the associations that were created between Resolver rules and VPCs
         * using the current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRuleAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRuleAssociationsOutcome ListResolverRuleAssociations(const Model::ListResolverRuleAssociationsRequest& request) const;

        /**
         * A Callable wrapper for ListResolverRuleAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverRuleAssociationsRequestT = Model::ListResolverRuleAssociationsRequest>
        Model::ListResolverRuleAssociationsOutcomeCallable ListResolverRuleAssociationsCallable(const ListResolverRuleAssociationsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverRuleAssociations, request);
        }

        /**
         * An Async wrapper for ListResolverRuleAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverRuleAssociationsRequestT = Model::ListResolverRuleAssociationsRequest>
        void ListResolverRuleAssociationsAsync(const ListResolverRuleAssociationsRequestT& request, const ListResolverRuleAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverRuleAssociations, request, handler, context);
        }

        /**
         * <p>Lists the Resolver rules that were created using the current Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListResolverRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResolverRulesOutcome ListResolverRules(const Model::ListResolverRulesRequest& request) const;

        /**
         * A Callable wrapper for ListResolverRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResolverRulesRequestT = Model::ListResolverRulesRequest>
        Model::ListResolverRulesOutcomeCallable ListResolverRulesCallable(const ListResolverRulesRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListResolverRules, request);
        }

        /**
         * An Async wrapper for ListResolverRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResolverRulesRequestT = Model::ListResolverRulesRequest>
        void ListResolverRulesAsync(const ListResolverRulesRequestT& request, const ListResolverRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListResolverRules, request, handler, context);
        }

        /**
         * <p>Lists the tags that you associated with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Attaches an Identity and Access Management (Amazon Web Services IAM) policy
         * for sharing the rule group. You can use the policy to share the rule group using
         * Resource Access Manager (RAM). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutFirewallRuleGroupPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFirewallRuleGroupPolicyOutcome PutFirewallRuleGroupPolicy(const Model::PutFirewallRuleGroupPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutFirewallRuleGroupPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFirewallRuleGroupPolicyRequestT = Model::PutFirewallRuleGroupPolicyRequest>
        Model::PutFirewallRuleGroupPolicyOutcomeCallable PutFirewallRuleGroupPolicyCallable(const PutFirewallRuleGroupPolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::PutFirewallRuleGroupPolicy, request);
        }

        /**
         * An Async wrapper for PutFirewallRuleGroupPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFirewallRuleGroupPolicyRequestT = Model::PutFirewallRuleGroupPolicyRequest>
        void PutFirewallRuleGroupPolicyAsync(const PutFirewallRuleGroupPolicyRequestT& request, const PutFirewallRuleGroupPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::PutFirewallRuleGroupPolicy, request, handler, context);
        }

        /**
         * <p>Specifies an Amazon Web Services account that you want to share a query
         * logging configuration with, the query logging configuration that you want to
         * share, and the operations that you want the account to be able to perform on the
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverQueryLogConfigPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverQueryLogConfigPolicyOutcome PutResolverQueryLogConfigPolicy(const Model::PutResolverQueryLogConfigPolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResolverQueryLogConfigPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResolverQueryLogConfigPolicyRequestT = Model::PutResolverQueryLogConfigPolicyRequest>
        Model::PutResolverQueryLogConfigPolicyOutcomeCallable PutResolverQueryLogConfigPolicyCallable(const PutResolverQueryLogConfigPolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::PutResolverQueryLogConfigPolicy, request);
        }

        /**
         * An Async wrapper for PutResolverQueryLogConfigPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResolverQueryLogConfigPolicyRequestT = Model::PutResolverQueryLogConfigPolicyRequest>
        void PutResolverQueryLogConfigPolicyAsync(const PutResolverQueryLogConfigPolicyRequestT& request, const PutResolverQueryLogConfigPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::PutResolverQueryLogConfigPolicy, request, handler, context);
        }

        /**
         * <p>Specifies an Amazon Web Services rule that you want to share with another
         * account, the account that you want to share the rule with, and the operations
         * that you want the account to be able to perform on the rule.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/PutResolverRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResolverRulePolicyOutcome PutResolverRulePolicy(const Model::PutResolverRulePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResolverRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResolverRulePolicyRequestT = Model::PutResolverRulePolicyRequest>
        Model::PutResolverRulePolicyOutcomeCallable PutResolverRulePolicyCallable(const PutResolverRulePolicyRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::PutResolverRulePolicy, request);
        }

        /**
         * An Async wrapper for PutResolverRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResolverRulePolicyRequestT = Model::PutResolverRulePolicyRequest>
        void PutResolverRulePolicyAsync(const PutResolverRulePolicyRequestT& request, const PutResolverRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::PutResolverRulePolicy, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to a specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a specified resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the configuration of the firewall behavior provided by DNS Firewall
         * for a single VPC from Amazon Virtual Private Cloud (Amazon VPC). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallConfigOutcome UpdateFirewallConfig(const Model::UpdateFirewallConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallConfigRequestT = Model::UpdateFirewallConfigRequest>
        Model::UpdateFirewallConfigOutcomeCallable UpdateFirewallConfigCallable(const UpdateFirewallConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateFirewallConfig, request);
        }

        /**
         * An Async wrapper for UpdateFirewallConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallConfigRequestT = Model::UpdateFirewallConfigRequest>
        void UpdateFirewallConfigAsync(const UpdateFirewallConfigRequestT& request, const UpdateFirewallConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateFirewallConfig, request, handler, context);
        }

        /**
         * <p>Updates the firewall domain list from an array of domain specifications.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDomainsOutcome UpdateFirewallDomains(const Model::UpdateFirewallDomainsRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallDomainsRequestT = Model::UpdateFirewallDomainsRequest>
        Model::UpdateFirewallDomainsOutcomeCallable UpdateFirewallDomainsCallable(const UpdateFirewallDomainsRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateFirewallDomains, request);
        }

        /**
         * An Async wrapper for UpdateFirewallDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallDomainsRequestT = Model::UpdateFirewallDomainsRequest>
        void UpdateFirewallDomainsAsync(const UpdateFirewallDomainsRequestT& request, const UpdateFirewallDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateFirewallDomains, request, handler, context);
        }

        /**
         * <p>Updates the specified firewall rule. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleOutcome UpdateFirewallRule(const Model::UpdateFirewallRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallRuleRequestT = Model::UpdateFirewallRuleRequest>
        Model::UpdateFirewallRuleOutcomeCallable UpdateFirewallRuleCallable(const UpdateFirewallRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateFirewallRule, request);
        }

        /**
         * An Async wrapper for UpdateFirewallRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallRuleRequestT = Model::UpdateFirewallRuleRequest>
        void UpdateFirewallRuleAsync(const UpdateFirewallRuleRequestT& request, const UpdateFirewallRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateFirewallRule, request, handler, context);
        }

        /**
         * <p>Changes the association of a <a>FirewallRuleGroup</a> with a VPC. The
         * association enables DNS filtering for the VPC. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateFirewallRuleGroupAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallRuleGroupAssociationOutcome UpdateFirewallRuleGroupAssociation(const Model::UpdateFirewallRuleGroupAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallRuleGroupAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallRuleGroupAssociationRequestT = Model::UpdateFirewallRuleGroupAssociationRequest>
        Model::UpdateFirewallRuleGroupAssociationOutcomeCallable UpdateFirewallRuleGroupAssociationCallable(const UpdateFirewallRuleGroupAssociationRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateFirewallRuleGroupAssociation, request);
        }

        /**
         * An Async wrapper for UpdateFirewallRuleGroupAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallRuleGroupAssociationRequestT = Model::UpdateFirewallRuleGroupAssociationRequest>
        void UpdateFirewallRuleGroupAssociationAsync(const UpdateFirewallRuleGroupAssociationRequestT& request, const UpdateFirewallRuleGroupAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateFirewallRuleGroupAssociation, request, handler, context);
        }

        /**
         * <p>You can use <code>UpdateOutpostResolver</code> to update the instance count,
         * type, or name of a Resolver on an Outpost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateOutpostResolver">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOutpostResolverOutcome UpdateOutpostResolver(const Model::UpdateOutpostResolverRequest& request) const;

        /**
         * A Callable wrapper for UpdateOutpostResolver that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOutpostResolverRequestT = Model::UpdateOutpostResolverRequest>
        Model::UpdateOutpostResolverOutcomeCallable UpdateOutpostResolverCallable(const UpdateOutpostResolverRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateOutpostResolver, request);
        }

        /**
         * An Async wrapper for UpdateOutpostResolver that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOutpostResolverRequestT = Model::UpdateOutpostResolverRequest>
        void UpdateOutpostResolverAsync(const UpdateOutpostResolverRequestT& request, const UpdateOutpostResolverResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateOutpostResolver, request, handler, context);
        }

        /**
         * <p>Updates the behavior configuration of Route 53 Resolver behavior for a single
         * VPC from Amazon Virtual Private Cloud.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverConfigOutcome UpdateResolverConfig(const Model::UpdateResolverConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverConfigRequestT = Model::UpdateResolverConfigRequest>
        Model::UpdateResolverConfigOutcomeCallable UpdateResolverConfigCallable(const UpdateResolverConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateResolverConfig, request);
        }

        /**
         * An Async wrapper for UpdateResolverConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverConfigRequestT = Model::UpdateResolverConfigRequest>
        void UpdateResolverConfigAsync(const UpdateResolverConfigRequestT& request, const UpdateResolverConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateResolverConfig, request, handler, context);
        }

        /**
         * <p>Updates an existing DNSSEC validation configuration. If there is no existing
         * DNSSEC validation configuration, one is created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverDnssecConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverDnssecConfigOutcome UpdateResolverDnssecConfig(const Model::UpdateResolverDnssecConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverDnssecConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverDnssecConfigRequestT = Model::UpdateResolverDnssecConfigRequest>
        Model::UpdateResolverDnssecConfigOutcomeCallable UpdateResolverDnssecConfigCallable(const UpdateResolverDnssecConfigRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateResolverDnssecConfig, request);
        }

        /**
         * An Async wrapper for UpdateResolverDnssecConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverDnssecConfigRequestT = Model::UpdateResolverDnssecConfigRequest>
        void UpdateResolverDnssecConfigAsync(const UpdateResolverDnssecConfigRequestT& request, const UpdateResolverDnssecConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateResolverDnssecConfig, request, handler, context);
        }

        /**
         * <p>Updates the name, or endpoint type for an inbound or an outbound Resolver
         * endpoint. You can only update between IPV4 and DUALSTACK, IPV6 endpoint type
         * can't be updated to other type. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverEndpointOutcome UpdateResolverEndpoint(const Model::UpdateResolverEndpointRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverEndpointRequestT = Model::UpdateResolverEndpointRequest>
        Model::UpdateResolverEndpointOutcomeCallable UpdateResolverEndpointCallable(const UpdateResolverEndpointRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateResolverEndpoint, request);
        }

        /**
         * An Async wrapper for UpdateResolverEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverEndpointRequestT = Model::UpdateResolverEndpointRequest>
        void UpdateResolverEndpointAsync(const UpdateResolverEndpointRequestT& request, const UpdateResolverEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateResolverEndpoint, request, handler, context);
        }

        /**
         * <p>Updates settings for a specified Resolver rule. <code>ResolverRuleId</code>
         * is required, and all other parameters are optional. If you don't specify a
         * parameter, it retains its current value.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/UpdateResolverRule">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResolverRuleOutcome UpdateResolverRule(const Model::UpdateResolverRuleRequest& request) const;

        /**
         * A Callable wrapper for UpdateResolverRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResolverRuleRequestT = Model::UpdateResolverRuleRequest>
        Model::UpdateResolverRuleOutcomeCallable UpdateResolverRuleCallable(const UpdateResolverRuleRequestT& request) const
        {
            return SubmitCallable(&Route53ResolverClient::UpdateResolverRule, request);
        }

        /**
         * An Async wrapper for UpdateResolverRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResolverRuleRequestT = Model::UpdateResolverRuleRequest>
        void UpdateResolverRuleAsync(const UpdateResolverRuleRequestT& request, const UpdateResolverRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&Route53ResolverClient::UpdateResolverRule, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<Route53ResolverEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53ResolverClient>;
      void init(const Route53ResolverClientConfiguration& clientConfiguration);

      Route53ResolverClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<Route53ResolverEndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53Resolver
} // namespace Aws
