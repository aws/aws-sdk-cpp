/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-firewall/NetworkFirewallServiceClientModel.h>

namespace Aws
{
namespace NetworkFirewall
{
  /**
   * <p>This is the API Reference for Network Firewall. This guide is for developers
   * who need detailed information about the Network Firewall API actions, data
   * types, and errors. </p> <p>The REST API requires you to handle connection
   * details, such as calculating signatures, handling request retries, and error
   * handling. For general information about using the Amazon Web Services REST APIs,
   * see <a href="https://docs.aws.amazon.com/general/latest/gr/aws-apis.html">Amazon
   * Web Services APIs</a>. </p> <p>To view the complete list of Amazon Web Services
   * Regions where Network Firewall is available, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/network-firewall.html">Service
   * endpoints and quotas</a> in the <i>Amazon Web Services General Reference</i>.
   * </p> <p>To access Network Firewall using the IPv4 REST API endpoint:
   * <code>https://network-firewall.&lt;region&gt;.amazonaws.com </code> </p> <p>To
   * access Network Firewall using the Dualstack (IPv4 and IPv6) REST API endpoint:
   * <code>https://network-firewall.&lt;region&gt;.aws.api </code> </p>
   * <p>Alternatively, you can use one of the Amazon Web Services SDKs to access an
   * API that's tailored to the programming language or platform that you're using.
   * For more information, see <a href="http://aws.amazon.com/tools/#SDKs">Amazon Web
   * Services SDKs</a>.</p> <p>For descriptions of Network Firewall features,
   * including and step-by-step instructions on how to use them through the Network
   * Firewall console, see the <a
   * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/">Network
   * Firewall Developer Guide</a>.</p> <p>Network Firewall is a stateful, managed,
   * network firewall and intrusion detection and prevention service for Amazon
   * Virtual Private Cloud (Amazon VPC). With Network Firewall, you can filter
   * traffic at the perimeter of your VPC. This includes filtering traffic going to
   * and coming from an internet gateway, NAT gateway, or over VPN or Direct Connect.
   * Network Firewall uses rules that are compatible with Suricata, a free, open
   * source network analysis and threat detection engine. Network Firewall supports
   * Suricata version 7.0.3. For information about Suricata, see the <a
   * href="https://suricata.io/">Suricata website</a> and the <a
   * href="https://suricata.readthedocs.io/en/suricata-7.0.3/">Suricata User
   * Guide</a>. </p> <p>You can use Network Firewall to monitor and protect your VPC
   * traffic in a number of ways. The following are just a few examples: </p> <ul>
   * <li> <p>Allow domains or IP addresses for known Amazon Web Services service
   * endpoints, such as Amazon S3, and block all other forms of traffic.</p> </li>
   * <li> <p>Use custom lists of known bad domains to limit the types of domain names
   * that your applications can access.</p> </li> <li> <p>Perform deep packet
   * inspection on traffic entering or leaving your VPC.</p> </li> <li> <p>Use
   * stateful protocol detection to filter protocols like HTTPS, regardless of the
   * port used.</p> </li> </ul> <p>To enable Network Firewall for your VPCs, you
   * perform steps in both Amazon VPC and in Network Firewall. For information about
   * using Amazon VPC, see <a
   * href="https://docs.aws.amazon.com/vpc/latest/userguide/">Amazon VPC User
   * Guide</a>.</p> <p>To start using Network Firewall, do the following: </p> <ol>
   * <li> <p>(Optional) If you don't already have a VPC that you want to protect,
   * create it in Amazon VPC. </p> </li> <li> <p>In Amazon VPC, in each Availability
   * Zone where you want to have a firewall endpoint, create a subnet for the sole
   * use of Network Firewall. </p> </li> <li> <p>In Network Firewall, define the
   * firewall behavior as follows: </p> <ol> <li> <p>Create stateless and stateful
   * rule groups, to define the components of the network traffic filtering behavior
   * that you want your firewall to have. </p> </li> <li> <p>Create a firewall policy
   * that uses your rule groups and specifies additional default traffic filtering
   * behavior. </p> </li> </ol> </li> <li> <p>In Network Firewall, create a firewall
   * and specify your new firewall policy and VPC subnets. Network Firewall creates a
   * firewall endpoint in each subnet that you specify, with the behavior that's
   * defined in the firewall policy.</p> </li> <li> <p>In Amazon VPC, use ingress
   * routing enhancements to route traffic through the new firewall endpoints.</p>
   * </li> </ol> <p>After your firewall is established, you can add firewall
   * endpoints for new Availability Zones by following the prior steps for the Amazon
   * VPC setup and firewall subnet definitions. You can also add endpoints to
   * Availability Zones that you're using in the firewall, either for the same VPC or
   * for another VPC, by following the prior steps for the Amazon VPC setup, and
   * defining the new VPC subnets as VPC endpoint associations. </p>
   */
  class AWS_NETWORKFIREWALL_API NetworkFirewallClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<NetworkFirewallClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef NetworkFirewallClientConfiguration ClientConfigurationType;
      typedef NetworkFirewallEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration(),
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFirewallClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<NetworkFirewallEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::NetworkFirewall::NetworkFirewallClientConfiguration& clientConfiguration = Aws::NetworkFirewall::NetworkFirewallClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        NetworkFirewallClient(const Aws::Auth::AWSCredentials& credentials,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        NetworkFirewallClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~NetworkFirewallClient();

        /**
         * <p>Accepts a transit gateway attachment request for Network Firewall. When you
         * accept the attachment request, Network Firewall creates the necessary routing
         * components to enable traffic flow between the transit gateway and firewall
         * endpoints.</p> <p>You must accept a transit gateway attachment to complete the
         * creation of a transit gateway-attached firewall, unless auto-accept is enabled
         * on the transit gateway. After acceptance, use <a>DescribeFirewall</a> to verify
         * the firewall status.</p> <p>To reject an attachment instead of accepting it, use
         * <a>RejectNetworkFirewallTransitGatewayAttachment</a>.</p>  <p>It can take
         * several minutes for the attachment acceptance to complete and the firewall to
         * become available.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AcceptNetworkFirewallTransitGatewayAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptNetworkFirewallTransitGatewayAttachmentOutcome AcceptNetworkFirewallTransitGatewayAttachment(const Model::AcceptNetworkFirewallTransitGatewayAttachmentRequest& request) const;

        /**
         * A Callable wrapper for AcceptNetworkFirewallTransitGatewayAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptNetworkFirewallTransitGatewayAttachmentRequestT = Model::AcceptNetworkFirewallTransitGatewayAttachmentRequest>
        Model::AcceptNetworkFirewallTransitGatewayAttachmentOutcomeCallable AcceptNetworkFirewallTransitGatewayAttachmentCallable(const AcceptNetworkFirewallTransitGatewayAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::AcceptNetworkFirewallTransitGatewayAttachment, request);
        }

        /**
         * An Async wrapper for AcceptNetworkFirewallTransitGatewayAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptNetworkFirewallTransitGatewayAttachmentRequestT = Model::AcceptNetworkFirewallTransitGatewayAttachmentRequest>
        void AcceptNetworkFirewallTransitGatewayAttachmentAsync(const AcceptNetworkFirewallTransitGatewayAttachmentRequestT& request, const AcceptNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::AcceptNetworkFirewallTransitGatewayAttachment, request, handler, context);
        }

        /**
         * <p>Associates the specified Availability Zones with a transit gateway-attached
         * firewall. For each Availability Zone, Network Firewall creates a firewall
         * endpoint to process traffic. You can specify one or more Availability Zones
         * where you want to deploy the firewall.</p> <p>After adding Availability Zones,
         * you must update your transit gateway route tables to direct traffic through the
         * new firewall endpoints. Use <a>DescribeFirewall</a> to monitor the status of the
         * new endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateAvailabilityZones">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateAvailabilityZonesOutcome AssociateAvailabilityZones(const Model::AssociateAvailabilityZonesRequest& request) const;

        /**
         * A Callable wrapper for AssociateAvailabilityZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateAvailabilityZonesRequestT = Model::AssociateAvailabilityZonesRequest>
        Model::AssociateAvailabilityZonesOutcomeCallable AssociateAvailabilityZonesCallable(const AssociateAvailabilityZonesRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::AssociateAvailabilityZones, request);
        }

        /**
         * An Async wrapper for AssociateAvailabilityZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateAvailabilityZonesRequestT = Model::AssociateAvailabilityZonesRequest>
        void AssociateAvailabilityZonesAsync(const AssociateAvailabilityZonesRequestT& request, const AssociateAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::AssociateAvailabilityZones, request, handler, context);
        }

        /**
         * <p>Associates a <a>FirewallPolicy</a> to a <a>Firewall</a>. </p> <p>A firewall
         * policy defines how to monitor and manage your VPC network traffic, using a
         * collection of inspection rule groups and other settings. Each firewall requires
         * one firewall policy association, and you can use the same firewall policy for
         * multiple firewalls. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateFirewallPolicyOutcome AssociateFirewallPolicy(const Model::AssociateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for AssociateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateFirewallPolicyRequestT = Model::AssociateFirewallPolicyRequest>
        Model::AssociateFirewallPolicyOutcomeCallable AssociateFirewallPolicyCallable(const AssociateFirewallPolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::AssociateFirewallPolicy, request);
        }

        /**
         * An Async wrapper for AssociateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateFirewallPolicyRequestT = Model::AssociateFirewallPolicyRequest>
        void AssociateFirewallPolicyAsync(const AssociateFirewallPolicyRequestT& request, const AssociateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::AssociateFirewallPolicy, request, handler, context);
        }

        /**
         * <p>Associates the specified subnets in the Amazon VPC to the firewall. You can
         * specify one subnet for each of the Availability Zones that the VPC spans. </p>
         * <p>This request creates an Network Firewall firewall endpoint in each of the
         * subnets. To enable the firewall's protections, you must also modify the VPC's
         * route tables for each subnet's Availability Zone, to redirect the traffic that's
         * coming into and going out of the zone through the firewall endpoint.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/AssociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateSubnetsOutcome AssociateSubnets(const Model::AssociateSubnetsRequest& request) const;

        /**
         * A Callable wrapper for AssociateSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateSubnetsRequestT = Model::AssociateSubnetsRequest>
        Model::AssociateSubnetsOutcomeCallable AssociateSubnetsCallable(const AssociateSubnetsRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::AssociateSubnets, request);
        }

        /**
         * An Async wrapper for AssociateSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateSubnetsRequestT = Model::AssociateSubnetsRequest>
        void AssociateSubnetsAsync(const AssociateSubnetsRequestT& request, const AssociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::AssociateSubnets, request, handler, context);
        }

        /**
         * <p>Creates an Network Firewall <a>Firewall</a> and accompanying
         * <a>FirewallStatus</a> for a VPC. </p> <p>The firewall defines the configuration
         * settings for an Network Firewall firewall. The settings that you can define at
         * creation include the firewall policy, the subnets in your VPC to use for the
         * firewall endpoints, and any tags that are attached to the firewall Amazon Web
         * Services resource. </p> <p>After you create a firewall, you can provide
         * additional settings, like the logging configuration. </p> <p>To update the
         * settings for a firewall, you use the operations that apply to the settings
         * themselves, for example <a>UpdateLoggingConfiguration</a>,
         * <a>AssociateSubnets</a>, and <a>UpdateFirewallDeleteProtection</a>. </p> <p>To
         * manage a firewall's tags, use the standard Amazon Web Services resource tagging
         * operations, <a>ListTagsForResource</a>, <a>TagResource</a>, and
         * <a>UntagResource</a>.</p> <p>To retrieve information about firewalls, use
         * <a>ListFirewalls</a> and <a>DescribeFirewall</a>.</p> <p>To generate a report on
         * the last 30 days of traffic monitored by a firewall, use
         * <a>StartAnalysisReport</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallOutcome CreateFirewall(const Model::CreateFirewallRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFirewallRequestT = Model::CreateFirewallRequest>
        Model::CreateFirewallOutcomeCallable CreateFirewallCallable(const CreateFirewallRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::CreateFirewall, request);
        }

        /**
         * An Async wrapper for CreateFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFirewallRequestT = Model::CreateFirewallRequest>
        void CreateFirewallAsync(const CreateFirewallRequestT& request, const CreateFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::CreateFirewall, request, handler, context);
        }

        /**
         * <p>Creates the firewall policy for the firewall according to the specifications.
         * </p> <p>An Network Firewall firewall policy defines the behavior of a firewall,
         * in a collection of stateless and stateful rule groups and other settings. You
         * can use one firewall policy for multiple firewalls. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFirewallPolicyOutcome CreateFirewallPolicy(const Model::CreateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFirewallPolicyRequestT = Model::CreateFirewallPolicyRequest>
        Model::CreateFirewallPolicyOutcomeCallable CreateFirewallPolicyCallable(const CreateFirewallPolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::CreateFirewallPolicy, request);
        }

        /**
         * An Async wrapper for CreateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFirewallPolicyRequestT = Model::CreateFirewallPolicyRequest>
        void CreateFirewallPolicyAsync(const CreateFirewallPolicyRequestT& request, const CreateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::CreateFirewallPolicy, request, handler, context);
        }

        /**
         * <p>Creates the specified stateless or stateful rule group, which includes the
         * rules for network traffic inspection, a capacity setting, and tags. </p> <p>You
         * provide your rule group specification in your request using either
         * <code>RuleGroup</code> or <code>Rules</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRuleGroupOutcome CreateRuleGroup(const Model::CreateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRuleGroupRequestT = Model::CreateRuleGroupRequest>
        Model::CreateRuleGroupOutcomeCallable CreateRuleGroupCallable(const CreateRuleGroupRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::CreateRuleGroup, request);
        }

        /**
         * An Async wrapper for CreateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRuleGroupRequestT = Model::CreateRuleGroupRequest>
        void CreateRuleGroupAsync(const CreateRuleGroupRequestT& request, const CreateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::CreateRuleGroup, request, handler, context);
        }

        /**
         * <p>Creates an Network Firewall TLS inspection configuration. Network Firewall
         * uses TLS inspection configurations to decrypt your firewall's inbound and
         * outbound SSL/TLS traffic. After decryption, Network Firewall inspects the
         * traffic according to your firewall policy's stateful rules, and then re-encrypts
         * it before sending it to its destination. You can enable inspection of your
         * firewall's inbound traffic, outbound traffic, or both. To use TLS inspection
         * with your firewall, you must first import or provision certificates using ACM,
         * create a TLS inspection configuration, add that configuration to a new firewall
         * policy, and then associate that policy with your firewall.</p> <p>To update the
         * settings for a TLS inspection configuration, use
         * <a>UpdateTLSInspectionConfiguration</a>.</p> <p>To manage a TLS inspection
         * configuration's tags, use the standard Amazon Web Services resource tagging
         * operations, <a>ListTagsForResource</a>, <a>TagResource</a>, and
         * <a>UntagResource</a>.</p> <p>To retrieve information about TLS inspection
         * configurations, use <a>ListTLSInspectionConfigurations</a> and
         * <a>DescribeTLSInspectionConfiguration</a>.</p> <p> For more information about
         * TLS inspection configurations, see <a
         * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/tls-inspection.html">Inspecting
         * SSL/TLS traffic with TLS inspection configurations</a> in the <i>Network
         * Firewall Developer Guide</i>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateTLSInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTLSInspectionConfigurationOutcome CreateTLSInspectionConfiguration(const Model::CreateTLSInspectionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateTLSInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTLSInspectionConfigurationRequestT = Model::CreateTLSInspectionConfigurationRequest>
        Model::CreateTLSInspectionConfigurationOutcomeCallable CreateTLSInspectionConfigurationCallable(const CreateTLSInspectionConfigurationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::CreateTLSInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for CreateTLSInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTLSInspectionConfigurationRequestT = Model::CreateTLSInspectionConfigurationRequest>
        void CreateTLSInspectionConfigurationAsync(const CreateTLSInspectionConfigurationRequestT& request, const CreateTLSInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::CreateTLSInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a firewall endpoint for an Network Firewall firewall. This type of
         * firewall endpoint is independent of the firewall endpoints that you specify in
         * the <code>Firewall</code> itself, and you define it in addition to those
         * endpoints after the firewall has been created. You can define a VPC endpoint
         * association using a different VPC than the one you used in the firewall
         * specifications. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/CreateVpcEndpointAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVpcEndpointAssociationOutcome CreateVpcEndpointAssociation(const Model::CreateVpcEndpointAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateVpcEndpointAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateVpcEndpointAssociationRequestT = Model::CreateVpcEndpointAssociationRequest>
        Model::CreateVpcEndpointAssociationOutcomeCallable CreateVpcEndpointAssociationCallable(const CreateVpcEndpointAssociationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::CreateVpcEndpointAssociation, request);
        }

        /**
         * An Async wrapper for CreateVpcEndpointAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateVpcEndpointAssociationRequestT = Model::CreateVpcEndpointAssociationRequest>
        void CreateVpcEndpointAssociationAsync(const CreateVpcEndpointAssociationRequestT& request, const CreateVpcEndpointAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::CreateVpcEndpointAssociation, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>Firewall</a> and its <a>FirewallStatus</a>. This
         * operation requires the firewall's <code>DeleteProtection</code> flag to be
         * <code>FALSE</code>. You can't revert this operation. </p> <p>You can check
         * whether a firewall is in use by reviewing the route tables for the Availability
         * Zones where you have firewall subnet mappings. Retrieve the subnet mappings by
         * calling <a>DescribeFirewall</a>. You define and update the route tables through
         * Amazon VPC. As needed, update the route tables for the zones to remove the
         * firewall endpoints. When the route tables no longer use the firewall endpoints,
         * you can remove the firewall safely.</p> <p>To delete a firewall, remove the
         * delete protection if you need to using <a>UpdateFirewallDeleteProtection</a>,
         * then delete the firewall by calling <a>DeleteFirewall</a>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallOutcome DeleteFirewall(const Model::DeleteFirewallRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFirewallRequestT = Model::DeleteFirewallRequest>
        Model::DeleteFirewallOutcomeCallable DeleteFirewallCallable(const DeleteFirewallRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteFirewall, request);
        }

        /**
         * An Async wrapper for DeleteFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFirewallRequestT = Model::DeleteFirewallRequest>
        void DeleteFirewallAsync(const DeleteFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteFirewallRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteFirewall, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>FirewallPolicy</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFirewallPolicyOutcome DeleteFirewallPolicy(const Model::DeleteFirewallPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFirewallPolicyRequestT = Model::DeleteFirewallPolicyRequest>
        Model::DeleteFirewallPolicyOutcomeCallable DeleteFirewallPolicyCallable(const DeleteFirewallPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteFirewallPolicy, request);
        }

        /**
         * An Async wrapper for DeleteFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFirewallPolicyRequestT = Model::DeleteFirewallPolicyRequest>
        void DeleteFirewallPolicyAsync(const DeleteFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteFirewallPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteFirewallPolicy, request, handler, context);
        }

        /**
         * <p>Deletes a transit gateway attachment from a Network Firewall. Either the
         * firewall owner or the transit gateway owner can delete the attachment.</p>
         *  <p>After you delete a transit gateway attachment, traffic will no
         * longer flow through the firewall endpoints.</p>  <p>After you
         * initiate the delete operation, use <a>DescribeFirewall</a> to monitor the
         * deletion status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteNetworkFirewallTransitGatewayAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNetworkFirewallTransitGatewayAttachmentOutcome DeleteNetworkFirewallTransitGatewayAttachment(const Model::DeleteNetworkFirewallTransitGatewayAttachmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteNetworkFirewallTransitGatewayAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNetworkFirewallTransitGatewayAttachmentRequestT = Model::DeleteNetworkFirewallTransitGatewayAttachmentRequest>
        Model::DeleteNetworkFirewallTransitGatewayAttachmentOutcomeCallable DeleteNetworkFirewallTransitGatewayAttachmentCallable(const DeleteNetworkFirewallTransitGatewayAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteNetworkFirewallTransitGatewayAttachment, request);
        }

        /**
         * An Async wrapper for DeleteNetworkFirewallTransitGatewayAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNetworkFirewallTransitGatewayAttachmentRequestT = Model::DeleteNetworkFirewallTransitGatewayAttachmentRequest>
        void DeleteNetworkFirewallTransitGatewayAttachmentAsync(const DeleteNetworkFirewallTransitGatewayAttachmentRequestT& request, const DeleteNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteNetworkFirewallTransitGatewayAttachment, request, handler, context);
        }

        /**
         * <p>Deletes a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>RuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRuleGroupOutcome DeleteRuleGroup(const Model::DeleteRuleGroupRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRuleGroupRequestT = Model::DeleteRuleGroupRequest>
        Model::DeleteRuleGroupOutcomeCallable DeleteRuleGroupCallable(const DeleteRuleGroupRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteRuleGroup, request);
        }

        /**
         * An Async wrapper for DeleteRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRuleGroupRequestT = Model::DeleteRuleGroupRequest>
        void DeleteRuleGroupAsync(const DeleteRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteRuleGroupRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteRuleGroup, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>TLSInspectionConfiguration</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteTLSInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTLSInspectionConfigurationOutcome DeleteTLSInspectionConfiguration(const Model::DeleteTLSInspectionConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DeleteTLSInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTLSInspectionConfigurationRequestT = Model::DeleteTLSInspectionConfigurationRequest>
        Model::DeleteTLSInspectionConfigurationOutcomeCallable DeleteTLSInspectionConfigurationCallable(const DeleteTLSInspectionConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteTLSInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteTLSInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTLSInspectionConfigurationRequestT = Model::DeleteTLSInspectionConfigurationRequest>
        void DeleteTLSInspectionConfigurationAsync(const DeleteTLSInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DeleteTLSInspectionConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteTLSInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the specified <a>VpcEndpointAssociation</a>.</p> <p>You can check
         * whether an endpoint association is in use by reviewing the route tables for the
         * Availability Zones where you have the endpoint subnet mapping. You can retrieve
         * the subnet mapping by calling <a>DescribeVpcEndpointAssociation</a>. You define
         * and update the route tables through Amazon VPC. As needed, update the route
         * tables for the Availability Zone to remove the firewall endpoint for the
         * association. When the route tables no longer use the firewall endpoint, you can
         * remove the endpoint association safely.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DeleteVpcEndpointAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVpcEndpointAssociationOutcome DeleteVpcEndpointAssociation(const Model::DeleteVpcEndpointAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVpcEndpointAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteVpcEndpointAssociationRequestT = Model::DeleteVpcEndpointAssociationRequest>
        Model::DeleteVpcEndpointAssociationOutcomeCallable DeleteVpcEndpointAssociationCallable(const DeleteVpcEndpointAssociationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DeleteVpcEndpointAssociation, request);
        }

        /**
         * An Async wrapper for DeleteVpcEndpointAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteVpcEndpointAssociationRequestT = Model::DeleteVpcEndpointAssociationRequest>
        void DeleteVpcEndpointAssociationAsync(const DeleteVpcEndpointAssociationRequestT& request, const DeleteVpcEndpointAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DeleteVpcEndpointAssociation, request, handler, context);
        }

        /**
         * <p>Returns the data objects for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewall">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFirewallOutcome DescribeFirewall(const Model::DescribeFirewallRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeFirewall that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFirewallRequestT = Model::DescribeFirewallRequest>
        Model::DescribeFirewallOutcomeCallable DescribeFirewallCallable(const DescribeFirewallRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeFirewall, request);
        }

        /**
         * An Async wrapper for DescribeFirewall that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFirewallRequestT = Model::DescribeFirewallRequest>
        void DescribeFirewallAsync(const DescribeFirewallResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeFirewallRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeFirewall, request, handler, context);
        }

        /**
         * <p>Returns the high-level information about a firewall, including the
         * Availability Zones where the Firewall is currently in use. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewallMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFirewallMetadataOutcome DescribeFirewallMetadata(const Model::DescribeFirewallMetadataRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeFirewallMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFirewallMetadataRequestT = Model::DescribeFirewallMetadataRequest>
        Model::DescribeFirewallMetadataOutcomeCallable DescribeFirewallMetadataCallable(const DescribeFirewallMetadataRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeFirewallMetadata, request);
        }

        /**
         * An Async wrapper for DescribeFirewallMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFirewallMetadataRequestT = Model::DescribeFirewallMetadataRequest>
        void DescribeFirewallMetadataAsync(const DescribeFirewallMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeFirewallMetadataRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeFirewallMetadata, request, handler, context);
        }

        /**
         * <p>Returns the data objects for the specified firewall policy. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFirewallPolicyOutcome DescribeFirewallPolicy(const Model::DescribeFirewallPolicyRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFirewallPolicyRequestT = Model::DescribeFirewallPolicyRequest>
        Model::DescribeFirewallPolicyOutcomeCallable DescribeFirewallPolicyCallable(const DescribeFirewallPolicyRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeFirewallPolicy, request);
        }

        /**
         * An Async wrapper for DescribeFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFirewallPolicyRequestT = Model::DescribeFirewallPolicyRequest>
        void DescribeFirewallPolicyAsync(const DescribeFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeFirewallPolicyRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeFirewallPolicy, request, handler, context);
        }

        /**
         * <p>Returns key information about a specific flow operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeFlowOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFlowOperationOutcome DescribeFlowOperation(const Model::DescribeFlowOperationRequest& request) const;

        /**
         * A Callable wrapper for DescribeFlowOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFlowOperationRequestT = Model::DescribeFlowOperationRequest>
        Model::DescribeFlowOperationOutcomeCallable DescribeFlowOperationCallable(const DescribeFlowOperationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeFlowOperation, request);
        }

        /**
         * An Async wrapper for DescribeFlowOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFlowOperationRequestT = Model::DescribeFlowOperationRequest>
        void DescribeFlowOperationAsync(const DescribeFlowOperationRequestT& request, const DescribeFlowOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeFlowOperation, request, handler, context);
        }

        /**
         * <p>Returns the logging configuration for the specified firewall. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLoggingConfigurationOutcome DescribeLoggingConfiguration(const Model::DescribeLoggingConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        Model::DescribeLoggingConfigurationOutcomeCallable DescribeLoggingConfigurationCallable(const DescribeLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeLoggingConfigurationRequestT = Model::DescribeLoggingConfigurationRequest>
        void DescribeLoggingConfigurationAsync(const DescribeLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Retrieves a resource policy that you created in a <a>PutResourcePolicy</a>
         * request. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourcePolicyOutcome DescribeResourcePolicy(const Model::DescribeResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        Model::DescribeResourcePolicyOutcomeCallable DescribeResourcePolicyCallable(const DescribeResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeResourcePolicy, request);
        }

        /**
         * An Async wrapper for DescribeResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourcePolicyRequestT = Model::DescribeResourcePolicyRequest>
        void DescribeResourcePolicyAsync(const DescribeResourcePolicyRequestT& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeResourcePolicy, request, handler, context);
        }

        /**
         * <p>Returns the data objects for the specified rule group. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupOutcome DescribeRuleGroup(const Model::DescribeRuleGroupRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleGroupRequestT = Model::DescribeRuleGroupRequest>
        Model::DescribeRuleGroupOutcomeCallable DescribeRuleGroupCallable(const DescribeRuleGroupRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeRuleGroup, request);
        }

        /**
         * An Async wrapper for DescribeRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleGroupRequestT = Model::DescribeRuleGroupRequest>
        void DescribeRuleGroupAsync(const DescribeRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRuleGroupRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeRuleGroup, request, handler, context);
        }

        /**
         * <p>High-level information about a rule group, returned by operations like create
         * and describe. You can use the information provided in the metadata to retrieve
         * and manage a rule group. You can retrieve all objects for a rule group by
         * calling <a>DescribeRuleGroup</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroupMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupMetadataOutcome DescribeRuleGroupMetadata(const Model::DescribeRuleGroupMetadataRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRuleGroupMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleGroupMetadataRequestT = Model::DescribeRuleGroupMetadataRequest>
        Model::DescribeRuleGroupMetadataOutcomeCallable DescribeRuleGroupMetadataCallable(const DescribeRuleGroupMetadataRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeRuleGroupMetadata, request);
        }

        /**
         * An Async wrapper for DescribeRuleGroupMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleGroupMetadataRequestT = Model::DescribeRuleGroupMetadataRequest>
        void DescribeRuleGroupMetadataAsync(const DescribeRuleGroupMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRuleGroupMetadataRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeRuleGroupMetadata, request, handler, context);
        }

        /**
         * <p>Returns detailed information for a stateful rule group.</p> <p>For active
         * threat defense Amazon Web Services managed rule groups, this operation provides
         * insight into the protections enabled by the rule group, based on Suricata rule
         * metadata fields. Summaries are available for rule groups you manage and for
         * active threat defense Amazon Web Services managed rule groups.</p> <p>To modify
         * how threat information appears in summaries, use the
         * <code>SummaryConfiguration</code> parameter in
         * <a>UpdateRuleGroup</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeRuleGroupSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRuleGroupSummaryOutcome DescribeRuleGroupSummary(const Model::DescribeRuleGroupSummaryRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeRuleGroupSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRuleGroupSummaryRequestT = Model::DescribeRuleGroupSummaryRequest>
        Model::DescribeRuleGroupSummaryOutcomeCallable DescribeRuleGroupSummaryCallable(const DescribeRuleGroupSummaryRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeRuleGroupSummary, request);
        }

        /**
         * An Async wrapper for DescribeRuleGroupSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRuleGroupSummaryRequestT = Model::DescribeRuleGroupSummaryRequest>
        void DescribeRuleGroupSummaryAsync(const DescribeRuleGroupSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeRuleGroupSummaryRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeRuleGroupSummary, request, handler, context);
        }

        /**
         * <p>Returns the data objects for the specified TLS inspection
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeTLSInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTLSInspectionConfigurationOutcome DescribeTLSInspectionConfiguration(const Model::DescribeTLSInspectionConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for DescribeTLSInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTLSInspectionConfigurationRequestT = Model::DescribeTLSInspectionConfigurationRequest>
        Model::DescribeTLSInspectionConfigurationOutcomeCallable DescribeTLSInspectionConfigurationCallable(const DescribeTLSInspectionConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeTLSInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeTLSInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTLSInspectionConfigurationRequestT = Model::DescribeTLSInspectionConfigurationRequest>
        void DescribeTLSInspectionConfigurationAsync(const DescribeTLSInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const DescribeTLSInspectionConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeTLSInspectionConfiguration, request, handler, context);
        }

        /**
         * <p>Returns the data object for the specified VPC endpoint association.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DescribeVpcEndpointAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVpcEndpointAssociationOutcome DescribeVpcEndpointAssociation(const Model::DescribeVpcEndpointAssociationRequest& request) const;

        /**
         * A Callable wrapper for DescribeVpcEndpointAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeVpcEndpointAssociationRequestT = Model::DescribeVpcEndpointAssociationRequest>
        Model::DescribeVpcEndpointAssociationOutcomeCallable DescribeVpcEndpointAssociationCallable(const DescribeVpcEndpointAssociationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DescribeVpcEndpointAssociation, request);
        }

        /**
         * An Async wrapper for DescribeVpcEndpointAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeVpcEndpointAssociationRequestT = Model::DescribeVpcEndpointAssociationRequest>
        void DescribeVpcEndpointAssociationAsync(const DescribeVpcEndpointAssociationRequestT& request, const DescribeVpcEndpointAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DescribeVpcEndpointAssociation, request, handler, context);
        }

        /**
         * <p>Removes the specified Availability Zone associations from a transit
         * gateway-attached firewall. This removes the firewall endpoints from these
         * Availability Zones and stops traffic filtering in those zones. Before removing
         * an Availability Zone, ensure you've updated your transit gateway route tables to
         * redirect traffic appropriately.</p>  <p>If
         * <code>AvailabilityZoneChangeProtection</code> is enabled, you must first disable
         * it using <a>UpdateAvailabilityZoneChangeProtection</a>.</p>  <p>To verify
         * the status of your Availability Zone changes, use
         * <a>DescribeFirewall</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateAvailabilityZones">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateAvailabilityZonesOutcome DisassociateAvailabilityZones(const Model::DisassociateAvailabilityZonesRequest& request) const;

        /**
         * A Callable wrapper for DisassociateAvailabilityZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateAvailabilityZonesRequestT = Model::DisassociateAvailabilityZonesRequest>
        Model::DisassociateAvailabilityZonesOutcomeCallable DisassociateAvailabilityZonesCallable(const DisassociateAvailabilityZonesRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DisassociateAvailabilityZones, request);
        }

        /**
         * An Async wrapper for DisassociateAvailabilityZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateAvailabilityZonesRequestT = Model::DisassociateAvailabilityZonesRequest>
        void DisassociateAvailabilityZonesAsync(const DisassociateAvailabilityZonesRequestT& request, const DisassociateAvailabilityZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DisassociateAvailabilityZones, request, handler, context);
        }

        /**
         * <p>Removes the specified subnet associations from the firewall. This removes the
         * firewall endpoints from the subnets and removes any network filtering
         * protections that the endpoints were providing. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/DisassociateSubnets">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateSubnetsOutcome DisassociateSubnets(const Model::DisassociateSubnetsRequest& request) const;

        /**
         * A Callable wrapper for DisassociateSubnets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateSubnetsRequestT = Model::DisassociateSubnetsRequest>
        Model::DisassociateSubnetsOutcomeCallable DisassociateSubnetsCallable(const DisassociateSubnetsRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::DisassociateSubnets, request);
        }

        /**
         * An Async wrapper for DisassociateSubnets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateSubnetsRequestT = Model::DisassociateSubnetsRequest>
        void DisassociateSubnetsAsync(const DisassociateSubnetsRequestT& request, const DisassociateSubnetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::DisassociateSubnets, request, handler, context);
        }

        /**
         * <p>The results of a <code>COMPLETED</code> analysis report generated with
         * <a>StartAnalysisReport</a>.</p> <p>For more information, see
         * <a>AnalysisTypeReportResult</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/GetAnalysisReportResults">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAnalysisReportResultsOutcome GetAnalysisReportResults(const Model::GetAnalysisReportResultsRequest& request) const;

        /**
         * A Callable wrapper for GetAnalysisReportResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAnalysisReportResultsRequestT = Model::GetAnalysisReportResultsRequest>
        Model::GetAnalysisReportResultsOutcomeCallable GetAnalysisReportResultsCallable(const GetAnalysisReportResultsRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::GetAnalysisReportResults, request);
        }

        /**
         * An Async wrapper for GetAnalysisReportResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAnalysisReportResultsRequestT = Model::GetAnalysisReportResultsRequest>
        void GetAnalysisReportResultsAsync(const GetAnalysisReportResultsRequestT& request, const GetAnalysisReportResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::GetAnalysisReportResults, request, handler, context);
        }

        /**
         * <p>Returns a list of all traffic analysis reports generated within the last 30
         * days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListAnalysisReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnalysisReportsOutcome ListAnalysisReports(const Model::ListAnalysisReportsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAnalysisReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnalysisReportsRequestT = Model::ListAnalysisReportsRequest>
        Model::ListAnalysisReportsOutcomeCallable ListAnalysisReportsCallable(const ListAnalysisReportsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListAnalysisReports, request);
        }

        /**
         * An Async wrapper for ListAnalysisReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnalysisReportsRequestT = Model::ListAnalysisReportsRequest>
        void ListAnalysisReportsAsync(const ListAnalysisReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAnalysisReportsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListAnalysisReports, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the firewall policies that you have defined.
         * Depending on your setting for max results and the number of firewall policies, a
         * single call might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewallPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallPoliciesOutcome ListFirewallPolicies(const Model::ListFirewallPoliciesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListFirewallPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallPoliciesRequestT = Model::ListFirewallPoliciesRequest>
        Model::ListFirewallPoliciesOutcomeCallable ListFirewallPoliciesCallable(const ListFirewallPoliciesRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListFirewallPolicies, request);
        }

        /**
         * An Async wrapper for ListFirewallPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallPoliciesRequestT = Model::ListFirewallPoliciesRequest>
        void ListFirewallPoliciesAsync(const ListFirewallPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListFirewallPoliciesRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListFirewallPolicies, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the firewalls that you have defined. If you
         * provide VPC identifiers in your request, this returns only the firewalls for
         * those VPCs.</p> <p>Depending on your setting for max results and the number of
         * firewalls, a single call might not return the full list. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFirewalls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFirewallsOutcome ListFirewalls(const Model::ListFirewallsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListFirewalls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFirewallsRequestT = Model::ListFirewallsRequest>
        Model::ListFirewallsOutcomeCallable ListFirewallsCallable(const ListFirewallsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListFirewalls, request);
        }

        /**
         * An Async wrapper for ListFirewalls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFirewallsRequestT = Model::ListFirewallsRequest>
        void ListFirewallsAsync(const ListFirewallsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListFirewallsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListFirewalls, request, handler, context);
        }

        /**
         * <p>Returns the results of a specific flow operation. </p> <p>Flow operations let
         * you manage the flows tracked in the flow table, also known as the firewall
         * table.</p> <p>A flow is network traffic that is monitored by a firewall, either
         * by stateful or stateless rules. For traffic to be considered part of a flow, it
         * must share Destination, DestinationPort, Direction, Protocol, Source, and
         * SourcePort. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFlowOperationResults">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowOperationResultsOutcome ListFlowOperationResults(const Model::ListFlowOperationResultsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowOperationResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowOperationResultsRequestT = Model::ListFlowOperationResultsRequest>
        Model::ListFlowOperationResultsOutcomeCallable ListFlowOperationResultsCallable(const ListFlowOperationResultsRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListFlowOperationResults, request);
        }

        /**
         * An Async wrapper for ListFlowOperationResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowOperationResultsRequestT = Model::ListFlowOperationResultsRequest>
        void ListFlowOperationResultsAsync(const ListFlowOperationResultsRequestT& request, const ListFlowOperationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListFlowOperationResults, request, handler, context);
        }

        /**
         * <p>Returns a list of all flow operations ran in a specific firewall. You can
         * optionally narrow the request scope by specifying the operation type or
         * Availability Zone associated with a firewall's flow operations. </p> <p>Flow
         * operations let you manage the flows tracked in the flow table, also known as the
         * firewall table.</p> <p>A flow is network traffic that is monitored by a
         * firewall, either by stateful or stateless rules. For traffic to be considered
         * part of a flow, it must share Destination, DestinationPort, Direction, Protocol,
         * Source, and SourcePort. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListFlowOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFlowOperationsOutcome ListFlowOperations(const Model::ListFlowOperationsRequest& request) const;

        /**
         * A Callable wrapper for ListFlowOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFlowOperationsRequestT = Model::ListFlowOperationsRequest>
        Model::ListFlowOperationsOutcomeCallable ListFlowOperationsCallable(const ListFlowOperationsRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListFlowOperations, request);
        }

        /**
         * An Async wrapper for ListFlowOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFlowOperationsRequestT = Model::ListFlowOperationsRequest>
        void ListFlowOperationsAsync(const ListFlowOperationsRequestT& request, const ListFlowOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListFlowOperations, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the rule groups that you have defined. Depending
         * on your setting for max results and the number of rule groups, a single call
         * might not return the full list. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListRuleGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRuleGroupsOutcome ListRuleGroups(const Model::ListRuleGroupsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListRuleGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRuleGroupsRequestT = Model::ListRuleGroupsRequest>
        Model::ListRuleGroupsOutcomeCallable ListRuleGroupsCallable(const ListRuleGroupsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListRuleGroups, request);
        }

        /**
         * An Async wrapper for ListRuleGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRuleGroupsRequestT = Model::ListRuleGroupsRequest>
        void ListRuleGroupsAsync(const ListRuleGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListRuleGroupsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListRuleGroups, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the TLS inspection configurations that you have
         * defined. Depending on your setting for max results and the number of TLS
         * inspection configurations, a single call might not return the full
         * list.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTLSInspectionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTLSInspectionConfigurationsOutcome ListTLSInspectionConfigurations(const Model::ListTLSInspectionConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListTLSInspectionConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTLSInspectionConfigurationsRequestT = Model::ListTLSInspectionConfigurationsRequest>
        Model::ListTLSInspectionConfigurationsOutcomeCallable ListTLSInspectionConfigurationsCallable(const ListTLSInspectionConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListTLSInspectionConfigurations, request);
        }

        /**
         * An Async wrapper for ListTLSInspectionConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTLSInspectionConfigurationsRequestT = Model::ListTLSInspectionConfigurationsRequest>
        void ListTLSInspectionConfigurationsAsync(const ListTLSInspectionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListTLSInspectionConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListTLSInspectionConfigurations, request, handler, context);
        }

        /**
         * <p>Retrieves the tags associated with the specified resource. Tags are key:value
         * pairs that you can use to categorize and manage your resources, for purposes
         * like billing. For example, you might set the tag key to "customer" and the value
         * to the customer name or ID. You can specify one or more tags to add to each
         * Amazon Web Services resource, up to 50 tags for a resource.</p> <p>You can tag
         * the Amazon Web Services resources that you manage through Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Retrieves the metadata for the VPC endpoint associations that you have
         * defined. If you specify a fireawll, this returns only the endpoint associations
         * for that firewall. </p> <p>Depending on your setting for max results and the
         * number of associations, a single call might not return the full list.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/ListVpcEndpointAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVpcEndpointAssociationsOutcome ListVpcEndpointAssociations(const Model::ListVpcEndpointAssociationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListVpcEndpointAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVpcEndpointAssociationsRequestT = Model::ListVpcEndpointAssociationsRequest>
        Model::ListVpcEndpointAssociationsOutcomeCallable ListVpcEndpointAssociationsCallable(const ListVpcEndpointAssociationsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::ListVpcEndpointAssociations, request);
        }

        /**
         * An Async wrapper for ListVpcEndpointAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVpcEndpointAssociationsRequestT = Model::ListVpcEndpointAssociationsRequest>
        void ListVpcEndpointAssociationsAsync(const ListVpcEndpointAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListVpcEndpointAssociationsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::ListVpcEndpointAssociations, request, handler, context);
        }

        /**
         * <p>Creates or updates an IAM policy for your rule group, firewall policy, or
         * firewall. Use this to share these resources between accounts. This operation
         * works in conjunction with the Amazon Web Services Resource Access Manager (RAM)
         * service to manage resource sharing for Network Firewall. </p> <p>For information
         * about using sharing with Network Firewall resources, see <a
         * href="https://docs.aws.amazon.com/network-firewall/latest/developerguide/sharing.html">Sharing
         * Network Firewall resources</a> in the <i>Network Firewall Developer
         * Guide</i>.</p> <p>Use this operation to create or update a resource policy for
         * your Network Firewall rule group, firewall policy, or firewall. In the resource
         * policy, you specify the accounts that you want to share the Network Firewall
         * resource with and the operations that you want the accounts to be able to
         * perform. </p> <p>When you add an account in the resource policy, you then run
         * the following Resource Access Manager (RAM) operations to access and accept the
         * shared resource. </p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_GetResourceShareInvitations.html">GetResourceShareInvitations</a>
         * - Returns the Amazon Resource Names (ARNs) of the resource share invitations.
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_AcceptResourceShareInvitation.html">AcceptResourceShareInvitation</a>
         * - Accepts the share invitation for a specified resource share. </p> </li> </ul>
         * <p>For additional information about resource sharing using RAM, see <a
         * href="https://docs.aws.amazon.com/ram/latest/userguide/what-is.html">Resource
         * Access Manager User Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Rejects a transit gateway attachment request for Network Firewall. When you
         * reject the attachment request, Network Firewall cancels the creation of routing
         * components between the transit gateway and firewall endpoints.</p> <p>Only the
         * transit gateway owner can reject the attachment. After rejection, no traffic
         * will flow through the firewall endpoints for this attachment.</p> <p>Use
         * <a>DescribeFirewall</a> to monitor the rejection status. To accept the
         * attachment instead of rejecting it, use
         * <a>AcceptNetworkFirewallTransitGatewayAttachment</a>.</p>  <p>Once
         * rejected, you cannot reverse this action. To establish connectivity, you must
         * create a new transit gateway-attached firewall.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/RejectNetworkFirewallTransitGatewayAttachment">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectNetworkFirewallTransitGatewayAttachmentOutcome RejectNetworkFirewallTransitGatewayAttachment(const Model::RejectNetworkFirewallTransitGatewayAttachmentRequest& request) const;

        /**
         * A Callable wrapper for RejectNetworkFirewallTransitGatewayAttachment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectNetworkFirewallTransitGatewayAttachmentRequestT = Model::RejectNetworkFirewallTransitGatewayAttachmentRequest>
        Model::RejectNetworkFirewallTransitGatewayAttachmentOutcomeCallable RejectNetworkFirewallTransitGatewayAttachmentCallable(const RejectNetworkFirewallTransitGatewayAttachmentRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::RejectNetworkFirewallTransitGatewayAttachment, request);
        }

        /**
         * An Async wrapper for RejectNetworkFirewallTransitGatewayAttachment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectNetworkFirewallTransitGatewayAttachmentRequestT = Model::RejectNetworkFirewallTransitGatewayAttachmentRequest>
        void RejectNetworkFirewallTransitGatewayAttachmentAsync(const RejectNetworkFirewallTransitGatewayAttachmentRequestT& request, const RejectNetworkFirewallTransitGatewayAttachmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::RejectNetworkFirewallTransitGatewayAttachment, request, handler, context);
        }

        /**
         * <p>Generates a traffic analysis report for the timeframe and traffic type you
         * specify.</p> <p>For information on the contents of a traffic analysis report,
         * see <a>AnalysisReport</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StartAnalysisReport">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAnalysisReportOutcome StartAnalysisReport(const Model::StartAnalysisReportRequest& request) const;

        /**
         * A Callable wrapper for StartAnalysisReport that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAnalysisReportRequestT = Model::StartAnalysisReportRequest>
        Model::StartAnalysisReportOutcomeCallable StartAnalysisReportCallable(const StartAnalysisReportRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::StartAnalysisReport, request);
        }

        /**
         * An Async wrapper for StartAnalysisReport that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAnalysisReportRequestT = Model::StartAnalysisReportRequest>
        void StartAnalysisReportAsync(const StartAnalysisReportRequestT& request, const StartAnalysisReportResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::StartAnalysisReport, request, handler, context);
        }

        /**
         * <p>Begins capturing the flows in a firewall, according to the filters you
         * define. Captures are similar, but not identical to snapshots. Capture operations
         * provide visibility into flows that are not closed and are tracked by a
         * firewall's flow table. Unlike snapshots, captures are a time-boxed view. </p>
         * <p>A flow is network traffic that is monitored by a firewall, either by stateful
         * or stateless rules. For traffic to be considered part of a flow, it must share
         * Destination, DestinationPort, Direction, Protocol, Source, and SourcePort. </p>
         *  <p>To avoid encountering operation limits, you should avoid starting
         * captures with broad filters, like wide IP ranges. Instead, we recommend you
         * define more specific criteria with <code>FlowFilters</code>, like narrow IP
         * ranges, ports, or protocols.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StartFlowCapture">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowCaptureOutcome StartFlowCapture(const Model::StartFlowCaptureRequest& request) const;

        /**
         * A Callable wrapper for StartFlowCapture that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlowCaptureRequestT = Model::StartFlowCaptureRequest>
        Model::StartFlowCaptureOutcomeCallable StartFlowCaptureCallable(const StartFlowCaptureRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::StartFlowCapture, request);
        }

        /**
         * An Async wrapper for StartFlowCapture that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlowCaptureRequestT = Model::StartFlowCaptureRequest>
        void StartFlowCaptureAsync(const StartFlowCaptureRequestT& request, const StartFlowCaptureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::StartFlowCapture, request, handler, context);
        }

        /**
         * <p>Begins the flushing of traffic from the firewall, according to the filters
         * you define. When the operation starts, impacted flows are temporarily marked as
         * timed out before the Suricata engine prunes, or flushes, the flows from the
         * firewall table.</p>  <p>While the flush completes, impacted flows are
         * processed as midstream traffic. This may result in a temporary increase in
         * midstream traffic metrics. We recommend that you double check your stream
         * exception policy before you perform a flush operation.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/StartFlowFlush">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFlowFlushOutcome StartFlowFlush(const Model::StartFlowFlushRequest& request) const;

        /**
         * A Callable wrapper for StartFlowFlush that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartFlowFlushRequestT = Model::StartFlowFlushRequest>
        Model::StartFlowFlushOutcomeCallable StartFlowFlushCallable(const StartFlowFlushRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::StartFlowFlush, request);
        }

        /**
         * An Async wrapper for StartFlowFlush that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartFlowFlushRequestT = Model::StartFlowFlushRequest>
        void StartFlowFlushAsync(const StartFlowFlushRequestT& request, const StartFlowFlushResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::StartFlowFlush, request, handler, context);
        }

        /**
         * <p>Adds the specified tags to the specified resource. Tags are key:value pairs
         * that you can use to categorize and manage your resources, for purposes like
         * billing. For example, you might set the tag key to "customer" and the value to
         * the customer name or ID. You can specify one or more tags to add to each Amazon
         * Web Services resource, up to 50 tags for a resource.</p> <p>You can tag the
         * Amazon Web Services resources that you manage through Network Firewall:
         * firewalls, firewall policies, and rule groups. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes the tags with the specified keys from the specified resource. Tags
         * are key:value pairs that you can use to categorize and manage your resources,
         * for purposes like billing. For example, you might set the tag key to "customer"
         * and the value to the customer name or ID. You can specify one or more tags to
         * add to each Amazon Web Services resource, up to 50 tags for a resource.</p>
         * <p>You can manage tags for the Amazon Web Services resources that you manage
         * through Network Firewall: firewalls, firewall policies, and rule groups.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies the <code>AvailabilityZoneChangeProtection</code> setting for a
         * transit gateway-attached firewall. When enabled, this setting prevents
         * accidental changes to the firewall's Availability Zone configuration. This helps
         * protect against disrupting traffic flow in production environments.</p> <p>When
         * enabled, you must disable this protection before using
         * <a>AssociateAvailabilityZones</a> or <a>DisassociateAvailabilityZones</a> to
         * modify the firewall's Availability Zone configuration.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateAvailabilityZoneChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAvailabilityZoneChangeProtectionOutcome UpdateAvailabilityZoneChangeProtection(const Model::UpdateAvailabilityZoneChangeProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAvailabilityZoneChangeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAvailabilityZoneChangeProtectionRequestT = Model::UpdateAvailabilityZoneChangeProtectionRequest>
        Model::UpdateAvailabilityZoneChangeProtectionOutcomeCallable UpdateAvailabilityZoneChangeProtectionCallable(const UpdateAvailabilityZoneChangeProtectionRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateAvailabilityZoneChangeProtection, request);
        }

        /**
         * An Async wrapper for UpdateAvailabilityZoneChangeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAvailabilityZoneChangeProtectionRequestT = Model::UpdateAvailabilityZoneChangeProtectionRequest>
        void UpdateAvailabilityZoneChangeProtectionAsync(const UpdateAvailabilityZoneChangeProtectionRequestT& request, const UpdateAvailabilityZoneChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateAvailabilityZoneChangeProtection, request, handler, context);
        }

        /**
         * <p>Enables specific types of firewall analysis on a specific firewall you
         * define.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallAnalysisSettings">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallAnalysisSettingsOutcome UpdateFirewallAnalysisSettings(const Model::UpdateFirewallAnalysisSettingsRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateFirewallAnalysisSettings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallAnalysisSettingsRequestT = Model::UpdateFirewallAnalysisSettingsRequest>
        Model::UpdateFirewallAnalysisSettingsOutcomeCallable UpdateFirewallAnalysisSettingsCallable(const UpdateFirewallAnalysisSettingsRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallAnalysisSettings, request);
        }

        /**
         * An Async wrapper for UpdateFirewallAnalysisSettings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallAnalysisSettingsRequestT = Model::UpdateFirewallAnalysisSettingsRequest>
        void UpdateFirewallAnalysisSettingsAsync(const UpdateFirewallAnalysisSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateFirewallAnalysisSettingsRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallAnalysisSettings, request, handler, context);
        }

        /**
         * <p>Modifies the flag, <code>DeleteProtection</code>, which indicates whether it
         * is possible to delete the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected against deletion. This setting helps protect against
         * accidentally deleting a firewall that's in use. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDeleteProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDeleteProtectionOutcome UpdateFirewallDeleteProtection(const Model::UpdateFirewallDeleteProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallDeleteProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallDeleteProtectionRequestT = Model::UpdateFirewallDeleteProtectionRequest>
        Model::UpdateFirewallDeleteProtectionOutcomeCallable UpdateFirewallDeleteProtectionCallable(const UpdateFirewallDeleteProtectionRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallDeleteProtection, request);
        }

        /**
         * An Async wrapper for UpdateFirewallDeleteProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallDeleteProtectionRequestT = Model::UpdateFirewallDeleteProtectionRequest>
        void UpdateFirewallDeleteProtectionAsync(const UpdateFirewallDeleteProtectionRequestT& request, const UpdateFirewallDeleteProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallDeleteProtection, request, handler, context);
        }

        /**
         * <p>Modifies the description for the specified firewall. Use the description to
         * help you identify the firewall when you're working with it. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallDescription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallDescriptionOutcome UpdateFirewallDescription(const Model::UpdateFirewallDescriptionRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateFirewallDescription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallDescriptionRequestT = Model::UpdateFirewallDescriptionRequest>
        Model::UpdateFirewallDescriptionOutcomeCallable UpdateFirewallDescriptionCallable(const UpdateFirewallDescriptionRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallDescription, request);
        }

        /**
         * An Async wrapper for UpdateFirewallDescription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallDescriptionRequestT = Model::UpdateFirewallDescriptionRequest>
        void UpdateFirewallDescriptionAsync(const UpdateFirewallDescriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateFirewallDescriptionRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallDescription, request, handler, context);
        }

        /**
         * <p>A complex type that contains settings for encryption of your firewall
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallEncryptionConfigurationOutcome UpdateFirewallEncryptionConfiguration(const Model::UpdateFirewallEncryptionConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateFirewallEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallEncryptionConfigurationRequestT = Model::UpdateFirewallEncryptionConfigurationRequest>
        Model::UpdateFirewallEncryptionConfigurationOutcomeCallable UpdateFirewallEncryptionConfigurationCallable(const UpdateFirewallEncryptionConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallEncryptionConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateFirewallEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallEncryptionConfigurationRequestT = Model::UpdateFirewallEncryptionConfigurationRequest>
        void UpdateFirewallEncryptionConfigurationAsync(const UpdateFirewallEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateFirewallEncryptionConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallEncryptionConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the properties of the specified firewall policy.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyOutcome UpdateFirewallPolicy(const Model::UpdateFirewallPolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallPolicyRequestT = Model::UpdateFirewallPolicyRequest>
        Model::UpdateFirewallPolicyOutcomeCallable UpdateFirewallPolicyCallable(const UpdateFirewallPolicyRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallPolicy, request);
        }

        /**
         * An Async wrapper for UpdateFirewallPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallPolicyRequestT = Model::UpdateFirewallPolicyRequest>
        void UpdateFirewallPolicyAsync(const UpdateFirewallPolicyRequestT& request, const UpdateFirewallPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallPolicy, request, handler, context);
        }

        /**
         * <p>Modifies the flag, <code>ChangeProtection</code>, which indicates whether it
         * is possible to change the firewall. If the flag is set to <code>TRUE</code>, the
         * firewall is protected from changes. This setting helps protect against
         * accidentally changing a firewall that's in use.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateFirewallPolicyChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFirewallPolicyChangeProtectionOutcome UpdateFirewallPolicyChangeProtection(const Model::UpdateFirewallPolicyChangeProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateFirewallPolicyChangeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateFirewallPolicyChangeProtectionRequestT = Model::UpdateFirewallPolicyChangeProtectionRequest>
        Model::UpdateFirewallPolicyChangeProtectionOutcomeCallable UpdateFirewallPolicyChangeProtectionCallable(const UpdateFirewallPolicyChangeProtectionRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateFirewallPolicyChangeProtection, request);
        }

        /**
         * An Async wrapper for UpdateFirewallPolicyChangeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFirewallPolicyChangeProtectionRequestT = Model::UpdateFirewallPolicyChangeProtectionRequest>
        void UpdateFirewallPolicyChangeProtectionAsync(const UpdateFirewallPolicyChangeProtectionRequestT& request, const UpdateFirewallPolicyChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateFirewallPolicyChangeProtection, request, handler, context);
        }

        /**
         * <p>Sets the logging configuration for the specified firewall. </p> <p>To change
         * the logging configuration, retrieve the <a>LoggingConfiguration</a> by calling
         * <a>DescribeLoggingConfiguration</a>, then change it and provide the modified
         * object to this update call. You must change the logging configuration one
         * <a>LogDestinationConfig</a> at a time inside the retrieved
         * <a>LoggingConfiguration</a> object. </p> <p>You can perform only one of the
         * following actions in any call to <code>UpdateLoggingConfiguration</code>: </p>
         * <ul> <li> <p>Create a new log destination object by adding a single
         * <code>LogDestinationConfig</code> array element to
         * <code>LogDestinationConfigs</code>.</p> </li> <li> <p>Delete a log destination
         * object by removing a single <code>LogDestinationConfig</code> array element from
         * <code>LogDestinationConfigs</code>.</p> </li> <li> <p>Change the
         * <code>LogDestination</code> setting in a single
         * <code>LogDestinationConfig</code> array element.</p> </li> </ul> <p>You can't
         * change the <code>LogDestinationType</code> or <code>LogType</code> in a
         * <code>LogDestinationConfig</code>. To change these settings, delete the existing
         * <code>LogDestinationConfig</code> object and create a new one, using two
         * separate calls to this update operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateLoggingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoggingConfigurationOutcome UpdateLoggingConfiguration(const Model::UpdateLoggingConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for UpdateLoggingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        Model::UpdateLoggingConfigurationOutcomeCallable UpdateLoggingConfigurationCallable(const UpdateLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateLoggingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateLoggingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLoggingConfigurationRequestT = Model::UpdateLoggingConfigurationRequest>
        void UpdateLoggingConfigurationAsync(const UpdateLoggingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const UpdateLoggingConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateLoggingConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the rule settings for the specified rule group. You use a rule group
         * by reference in one or more firewall policies. When you modify a rule group, you
         * modify all firewall policies that use the rule group. </p> <p>To update a rule
         * group, first call <a>DescribeRuleGroup</a> to retrieve the current
         * <a>RuleGroup</a> object, update the object as needed, and then provide the
         * updated object to this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateRuleGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRuleGroupOutcome UpdateRuleGroup(const Model::UpdateRuleGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateRuleGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRuleGroupRequestT = Model::UpdateRuleGroupRequest>
        Model::UpdateRuleGroupOutcomeCallable UpdateRuleGroupCallable(const UpdateRuleGroupRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateRuleGroup, request);
        }

        /**
         * An Async wrapper for UpdateRuleGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRuleGroupRequestT = Model::UpdateRuleGroupRequest>
        void UpdateRuleGroupAsync(const UpdateRuleGroupRequestT& request, const UpdateRuleGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateRuleGroup, request, handler, context);
        }

        /**
         * <p/><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateSubnetChangeProtection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSubnetChangeProtectionOutcome UpdateSubnetChangeProtection(const Model::UpdateSubnetChangeProtectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateSubnetChangeProtection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSubnetChangeProtectionRequestT = Model::UpdateSubnetChangeProtectionRequest>
        Model::UpdateSubnetChangeProtectionOutcomeCallable UpdateSubnetChangeProtectionCallable(const UpdateSubnetChangeProtectionRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateSubnetChangeProtection, request);
        }

        /**
         * An Async wrapper for UpdateSubnetChangeProtection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSubnetChangeProtectionRequestT = Model::UpdateSubnetChangeProtectionRequest>
        void UpdateSubnetChangeProtectionAsync(const UpdateSubnetChangeProtectionRequestT& request, const UpdateSubnetChangeProtectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateSubnetChangeProtection, request, handler, context);
        }

        /**
         * <p>Updates the TLS inspection configuration settings for the specified TLS
         * inspection configuration. You use a TLS inspection configuration by referencing
         * it in one or more firewall policies. When you modify a TLS inspection
         * configuration, you modify all firewall policies that use the TLS inspection
         * configuration. </p> <p>To update a TLS inspection configuration, first call
         * <a>DescribeTLSInspectionConfiguration</a> to retrieve the current
         * <a>TLSInspectionConfiguration</a> object, update the object as needed, and then
         * provide the updated object to this call. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/UpdateTLSInspectionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTLSInspectionConfigurationOutcome UpdateTLSInspectionConfiguration(const Model::UpdateTLSInspectionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTLSInspectionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTLSInspectionConfigurationRequestT = Model::UpdateTLSInspectionConfigurationRequest>
        Model::UpdateTLSInspectionConfigurationOutcomeCallable UpdateTLSInspectionConfigurationCallable(const UpdateTLSInspectionConfigurationRequestT& request) const
        {
            return SubmitCallable(&NetworkFirewallClient::UpdateTLSInspectionConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateTLSInspectionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTLSInspectionConfigurationRequestT = Model::UpdateTLSInspectionConfigurationRequest>
        void UpdateTLSInspectionConfigurationAsync(const UpdateTLSInspectionConfigurationRequestT& request, const UpdateTLSInspectionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&NetworkFirewallClient::UpdateTLSInspectionConfiguration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<NetworkFirewallEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkFirewallClient>;
      void init(const NetworkFirewallClientConfiguration& clientConfiguration);

      NetworkFirewallClientConfiguration m_clientConfiguration;
      std::shared_ptr<NetworkFirewallEndpointProviderBase> m_endpointProvider;
  };

} // namespace NetworkFirewall
} // namespace Aws
