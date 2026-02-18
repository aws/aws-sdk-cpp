/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/route53globalresolver/Route53GlobalResolverPaginationBase.h>
#include <aws/route53globalresolver/Route53GlobalResolverServiceClientModel.h>
#include <aws/route53globalresolver/Route53GlobalResolver_EXPORTS.h>

namespace Aws {
namespace Route53GlobalResolver {
/**
 * <p> Amazon Route 53 Global Resolver is a global, internet-accessible DNS
 * resolver that enables customers to resolve and forward traffic for both public
 * and private domains while ensuring security and authenticity of queries over the
 * internet. Route 53 Global Resolver supports DNS-over-port 53 (Do53),
 * DNS-over-TLS (DoT), and DNS-over-HTTPS (DoH) protocols through global anycast IP
 * addresses. </p>
 */
class AWS_ROUTE53GLOBALRESOLVER_API Route53GlobalResolverClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<Route53GlobalResolverClient>,
      public Route53GlobalResolverPaginationBase<Route53GlobalResolverClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef Route53GlobalResolverClientConfiguration ClientConfigurationType;
  typedef Route53GlobalResolverEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  Route53GlobalResolverClient(const Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration =
                                  Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration(),
                              std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  Route53GlobalResolverClient(const Aws::Auth::AWSCredentials& credentials,
                              std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration =
                                  Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  Route53GlobalResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              std::shared_ptr<Route53GlobalResolverEndpointProviderBase> endpointProvider = nullptr,
                              const Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration& clientConfiguration =
                                  Aws::Route53GlobalResolver::Route53GlobalResolverClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  Route53GlobalResolverClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  Route53GlobalResolverClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  Route53GlobalResolverClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~Route53GlobalResolverClient();

  /**
   * <p>Associates a Route 53 private hosted zone with a Route 53 Global Resolver
   * resource. This allows the resolver to resolve DNS queries for the private hosted
   * zone from anywhere globally.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/AssociateHostedZone">AWS
   * API Reference</a></p>
   */
  virtual Model::AssociateHostedZoneOutcome AssociateHostedZone(const Model::AssociateHostedZoneRequest& request) const;

  /**
   * A Callable wrapper for AssociateHostedZone that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename AssociateHostedZoneRequestT = Model::AssociateHostedZoneRequest>
  Model::AssociateHostedZoneOutcomeCallable AssociateHostedZoneCallable(const AssociateHostedZoneRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::AssociateHostedZone, request);
  }

  /**
   * An Async wrapper for AssociateHostedZone that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename AssociateHostedZoneRequestT = Model::AssociateHostedZoneRequest>
  void AssociateHostedZoneAsync(const AssociateHostedZoneRequestT& request, const AssociateHostedZoneResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::AssociateHostedZone, request, handler, context);
  }

  /**
   * <p>Creates multiple DNS firewall rules in a single operation. This is more
   * efficient than creating rules individually when you need to set up multiple
   * rules at once.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchCreateFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchCreateFirewallRuleOutcome BatchCreateFirewallRule(const Model::BatchCreateFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for BatchCreateFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchCreateFirewallRuleRequestT = Model::BatchCreateFirewallRuleRequest>
  Model::BatchCreateFirewallRuleOutcomeCallable BatchCreateFirewallRuleCallable(const BatchCreateFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::BatchCreateFirewallRule, request);
  }

  /**
   * An Async wrapper for BatchCreateFirewallRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchCreateFirewallRuleRequestT = Model::BatchCreateFirewallRuleRequest>
  void BatchCreateFirewallRuleAsync(const BatchCreateFirewallRuleRequestT& request,
                                    const BatchCreateFirewallRuleResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::BatchCreateFirewallRule, request, handler, context);
  }

  /**
   * <p>Deletes multiple DNS firewall rules in a single operation. This is more
   * efficient than deleting rules individually.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchDeleteFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteFirewallRuleOutcome BatchDeleteFirewallRule(const Model::BatchDeleteFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchDeleteFirewallRuleRequestT = Model::BatchDeleteFirewallRuleRequest>
  Model::BatchDeleteFirewallRuleOutcomeCallable BatchDeleteFirewallRuleCallable(const BatchDeleteFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::BatchDeleteFirewallRule, request);
  }

  /**
   * An Async wrapper for BatchDeleteFirewallRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchDeleteFirewallRuleRequestT = Model::BatchDeleteFirewallRuleRequest>
  void BatchDeleteFirewallRuleAsync(const BatchDeleteFirewallRuleRequestT& request,
                                    const BatchDeleteFirewallRuleResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::BatchDeleteFirewallRule, request, handler, context);
  }

  /**
   * <p>Updates multiple DNS firewall rules in a single operation. This is more
   * efficient than updating rules individually.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/BatchUpdateFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchUpdateFirewallRuleOutcome BatchUpdateFirewallRule(const Model::BatchUpdateFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for BatchUpdateFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchUpdateFirewallRuleRequestT = Model::BatchUpdateFirewallRuleRequest>
  Model::BatchUpdateFirewallRuleOutcomeCallable BatchUpdateFirewallRuleCallable(const BatchUpdateFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::BatchUpdateFirewallRule, request);
  }

  /**
   * An Async wrapper for BatchUpdateFirewallRule that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchUpdateFirewallRuleRequestT = Model::BatchUpdateFirewallRuleRequest>
  void BatchUpdateFirewallRuleAsync(const BatchUpdateFirewallRuleRequestT& request,
                                    const BatchUpdateFirewallRuleResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::BatchUpdateFirewallRule, request, handler, context);
  }

  /**
   * <p>Creates an access source for a DNS view. Access sources define IP addresses
   * or CIDR ranges that are allowed to send DNS queries to the Route 53 Global
   * Resolver, along with the permitted DNS protocols.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateAccessSource">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessSourceOutcome CreateAccessSource(const Model::CreateAccessSourceRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessSourceRequestT = Model::CreateAccessSourceRequest>
  Model::CreateAccessSourceOutcomeCallable CreateAccessSourceCallable(const CreateAccessSourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateAccessSource, request);
  }

  /**
   * An Async wrapper for CreateAccessSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessSourceRequestT = Model::CreateAccessSourceRequest>
  void CreateAccessSourceAsync(const CreateAccessSourceRequestT& request, const CreateAccessSourceResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateAccessSource, request, handler, context);
  }

  /**
   * <p>Creates an access token for a DNS view. Access tokens provide token-based
   * authentication for DNS-over-HTTPS (DoH) and DNS-over-TLS (DoT) connections to
   * the Route 53 Global Resolver.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateAccessToken">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateAccessTokenOutcome CreateAccessToken(const Model::CreateAccessTokenRequest& request) const;

  /**
   * A Callable wrapper for CreateAccessToken that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateAccessTokenRequestT = Model::CreateAccessTokenRequest>
  Model::CreateAccessTokenOutcomeCallable CreateAccessTokenCallable(const CreateAccessTokenRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateAccessToken, request);
  }

  /**
   * An Async wrapper for CreateAccessToken that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateAccessTokenRequestT = Model::CreateAccessTokenRequest>
  void CreateAccessTokenAsync(const CreateAccessTokenRequestT& request, const CreateAccessTokenResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateAccessToken, request, handler, context);
  }

  /**
   * <p>Creates a DNS view within a Route 53 Global Resolver. A DNS view models end
   * users, user groups, networks, and devices, and serves as a parent resource that
   * holds configurations controlling access, authorization, DNS firewall rules, and
   * forwarding rules.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDNSViewOutcome CreateDNSView(const Model::CreateDNSViewRequest& request) const;

  /**
   * A Callable wrapper for CreateDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateDNSViewRequestT = Model::CreateDNSViewRequest>
  Model::CreateDNSViewOutcomeCallable CreateDNSViewCallable(const CreateDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateDNSView, request);
  }

  /**
   * An Async wrapper for CreateDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateDNSViewRequestT = Model::CreateDNSViewRequest>
  void CreateDNSViewAsync(const CreateDNSViewRequestT& request, const CreateDNSViewResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateDNSView, request, handler, context);
  }

  /**
   * <p>Creates a firewall domain list. Domain lists are reusable sets of domain
   * specifications that you use in DNS firewall rules to allow, block, or alert on
   * DNS queries to specific domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateFirewallDomainList">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFirewallDomainListOutcome CreateFirewallDomainList(const Model::CreateFirewallDomainListRequest& request) const;

  /**
   * A Callable wrapper for CreateFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateFirewallDomainListRequestT = Model::CreateFirewallDomainListRequest>
  Model::CreateFirewallDomainListOutcomeCallable CreateFirewallDomainListCallable(const CreateFirewallDomainListRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateFirewallDomainList, request);
  }

  /**
   * An Async wrapper for CreateFirewallDomainList that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateFirewallDomainListRequestT = Model::CreateFirewallDomainListRequest>
  void CreateFirewallDomainListAsync(const CreateFirewallDomainListRequestT& request,
                                     const CreateFirewallDomainListResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateFirewallDomainList, request, handler, context);
  }

  /**
   * <p>Creates a DNS firewall rule. Firewall rules define actions (ALLOW, BLOCK, or
   * ALERT) to take on DNS queries that match specified domain lists, managed domain
   * lists, or advanced threat protections.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateFirewallRuleOutcome CreateFirewallRule(const Model::CreateFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for CreateFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateFirewallRuleRequestT = Model::CreateFirewallRuleRequest>
  Model::CreateFirewallRuleOutcomeCallable CreateFirewallRuleCallable(const CreateFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateFirewallRule, request);
  }

  /**
   * An Async wrapper for CreateFirewallRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateFirewallRuleRequestT = Model::CreateFirewallRuleRequest>
  void CreateFirewallRuleAsync(const CreateFirewallRuleRequestT& request, const CreateFirewallRuleResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateFirewallRule, request, handler, context);
  }

  /**
   * <p>Creates a new Route 53 Global Resolver instance. A Route 53 Global Resolver
   * is a global, internet-accessible DNS resolver that provides secure DNS
   * resolution for both public and private domains through global anycast IP
   * addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/CreateGlobalResolver">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateGlobalResolverOutcome CreateGlobalResolver(const Model::CreateGlobalResolverRequest& request) const;

  /**
   * A Callable wrapper for CreateGlobalResolver that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateGlobalResolverRequestT = Model::CreateGlobalResolverRequest>
  Model::CreateGlobalResolverOutcomeCallable CreateGlobalResolverCallable(const CreateGlobalResolverRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::CreateGlobalResolver, request);
  }

  /**
   * An Async wrapper for CreateGlobalResolver that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateGlobalResolverRequestT = Model::CreateGlobalResolverRequest>
  void CreateGlobalResolverAsync(const CreateGlobalResolverRequestT& request, const CreateGlobalResolverResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::CreateGlobalResolver, request, handler, context);
  }

  /**
   * <p>Deletes an access source. This operation cannot be undone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteAccessSource">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessSourceOutcome DeleteAccessSource(const Model::DeleteAccessSourceRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessSourceRequestT = Model::DeleteAccessSourceRequest>
  Model::DeleteAccessSourceOutcomeCallable DeleteAccessSourceCallable(const DeleteAccessSourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteAccessSource, request);
  }

  /**
   * An Async wrapper for DeleteAccessSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessSourceRequestT = Model::DeleteAccessSourceRequest>
  void DeleteAccessSourceAsync(const DeleteAccessSourceRequestT& request, const DeleteAccessSourceResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteAccessSource, request, handler, context);
  }

  /**
   * <p>Deletes an access token. This operation cannot be undone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteAccessToken">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAccessTokenOutcome DeleteAccessToken(const Model::DeleteAccessTokenRequest& request) const;

  /**
   * A Callable wrapper for DeleteAccessToken that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAccessTokenRequestT = Model::DeleteAccessTokenRequest>
  Model::DeleteAccessTokenOutcomeCallable DeleteAccessTokenCallable(const DeleteAccessTokenRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteAccessToken, request);
  }

  /**
   * An Async wrapper for DeleteAccessToken that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAccessTokenRequestT = Model::DeleteAccessTokenRequest>
  void DeleteAccessTokenAsync(const DeleteAccessTokenRequestT& request, const DeleteAccessTokenResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteAccessToken, request, handler, context);
  }

  /**
   * <p>Deletes a DNS view. This operation cannot be undone.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDNSViewOutcome DeleteDNSView(const Model::DeleteDNSViewRequest& request) const;

  /**
   * A Callable wrapper for DeleteDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteDNSViewRequestT = Model::DeleteDNSViewRequest>
  Model::DeleteDNSViewOutcomeCallable DeleteDNSViewCallable(const DeleteDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteDNSView, request);
  }

  /**
   * An Async wrapper for DeleteDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteDNSViewRequestT = Model::DeleteDNSViewRequest>
  void DeleteDNSViewAsync(const DeleteDNSViewRequestT& request, const DeleteDNSViewResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteDNSView, request, handler, context);
  }

  /**
   * <p>Deletes a firewall domain list. This operation cannot be
   * undone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteFirewallDomainList">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFirewallDomainListOutcome DeleteFirewallDomainList(const Model::DeleteFirewallDomainListRequest& request) const;

  /**
   * A Callable wrapper for DeleteFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFirewallDomainListRequestT = Model::DeleteFirewallDomainListRequest>
  Model::DeleteFirewallDomainListOutcomeCallable DeleteFirewallDomainListCallable(const DeleteFirewallDomainListRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteFirewallDomainList, request);
  }

  /**
   * An Async wrapper for DeleteFirewallDomainList that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteFirewallDomainListRequestT = Model::DeleteFirewallDomainListRequest>
  void DeleteFirewallDomainListAsync(const DeleteFirewallDomainListRequestT& request,
                                     const DeleteFirewallDomainListResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteFirewallDomainList, request, handler, context);
  }

  /**
   * <p>Deletes a DNS firewall rule. This operation cannot be undone.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteFirewallRuleOutcome DeleteFirewallRule(const Model::DeleteFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for DeleteFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteFirewallRuleRequestT = Model::DeleteFirewallRuleRequest>
  Model::DeleteFirewallRuleOutcomeCallable DeleteFirewallRuleCallable(const DeleteFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteFirewallRule, request);
  }

  /**
   * An Async wrapper for DeleteFirewallRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteFirewallRuleRequestT = Model::DeleteFirewallRuleRequest>
  void DeleteFirewallRuleAsync(const DeleteFirewallRuleRequestT& request, const DeleteFirewallRuleResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteFirewallRule, request, handler, context);
  }

  /**
   * <p>Deletes a Route 53 Global Resolver instance. This operation cannot be undone.
   * All associated DNS views, access sources, tokens, and firewall rules are also
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DeleteGlobalResolver">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteGlobalResolverOutcome DeleteGlobalResolver(const Model::DeleteGlobalResolverRequest& request) const;

  /**
   * A Callable wrapper for DeleteGlobalResolver that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteGlobalResolverRequestT = Model::DeleteGlobalResolverRequest>
  Model::DeleteGlobalResolverOutcomeCallable DeleteGlobalResolverCallable(const DeleteGlobalResolverRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DeleteGlobalResolver, request);
  }

  /**
   * An Async wrapper for DeleteGlobalResolver that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteGlobalResolverRequestT = Model::DeleteGlobalResolverRequest>
  void DeleteGlobalResolverAsync(const DeleteGlobalResolverRequestT& request, const DeleteGlobalResolverResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DeleteGlobalResolver, request, handler, context);
  }

  /**
   * <p>Disables a DNS view, preventing it from serving DNS queries.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DisableDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::DisableDNSViewOutcome DisableDNSView(const Model::DisableDNSViewRequest& request) const;

  /**
   * A Callable wrapper for DisableDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DisableDNSViewRequestT = Model::DisableDNSViewRequest>
  Model::DisableDNSViewOutcomeCallable DisableDNSViewCallable(const DisableDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DisableDNSView, request);
  }

  /**
   * An Async wrapper for DisableDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DisableDNSViewRequestT = Model::DisableDNSViewRequest>
  void DisableDNSViewAsync(const DisableDNSViewRequestT& request, const DisableDNSViewResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DisableDNSView, request, handler, context);
  }

  /**
   * <p>Disassociates a Route 53 private hosted zone from a Route 53 Global Resolver
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/DisassociateHostedZone">AWS
   * API Reference</a></p>
   */
  virtual Model::DisassociateHostedZoneOutcome DisassociateHostedZone(const Model::DisassociateHostedZoneRequest& request) const;

  /**
   * A Callable wrapper for DisassociateHostedZone that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DisassociateHostedZoneRequestT = Model::DisassociateHostedZoneRequest>
  Model::DisassociateHostedZoneOutcomeCallable DisassociateHostedZoneCallable(const DisassociateHostedZoneRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::DisassociateHostedZone, request);
  }

  /**
   * An Async wrapper for DisassociateHostedZone that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DisassociateHostedZoneRequestT = Model::DisassociateHostedZoneRequest>
  void DisassociateHostedZoneAsync(const DisassociateHostedZoneRequestT& request,
                                   const DisassociateHostedZoneResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::DisassociateHostedZone, request, handler, context);
  }

  /**
   * <p>Enables a disabled DNS view, allowing it to serve DNS queries
   * again.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/EnableDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::EnableDNSViewOutcome EnableDNSView(const Model::EnableDNSViewRequest& request) const;

  /**
   * A Callable wrapper for EnableDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename EnableDNSViewRequestT = Model::EnableDNSViewRequest>
  Model::EnableDNSViewOutcomeCallable EnableDNSViewCallable(const EnableDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::EnableDNSView, request);
  }

  /**
   * An Async wrapper for EnableDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename EnableDNSViewRequestT = Model::EnableDNSViewRequest>
  void EnableDNSViewAsync(const EnableDNSViewRequestT& request, const EnableDNSViewResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::EnableDNSView, request, handler, context);
  }

  /**
   * <p>Retrieves information about an access source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetAccessSource">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccessSourceOutcome GetAccessSource(const Model::GetAccessSourceRequest& request) const;

  /**
   * A Callable wrapper for GetAccessSource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAccessSourceRequestT = Model::GetAccessSourceRequest>
  Model::GetAccessSourceOutcomeCallable GetAccessSourceCallable(const GetAccessSourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetAccessSource, request);
  }

  /**
   * An Async wrapper for GetAccessSource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAccessSourceRequestT = Model::GetAccessSourceRequest>
  void GetAccessSourceAsync(const GetAccessSourceRequestT& request, const GetAccessSourceResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetAccessSource, request, handler, context);
  }

  /**
   * <p>Retrieves information about an access token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetAccessToken">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAccessTokenOutcome GetAccessToken(const Model::GetAccessTokenRequest& request) const;

  /**
   * A Callable wrapper for GetAccessToken that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAccessTokenRequestT = Model::GetAccessTokenRequest>
  Model::GetAccessTokenOutcomeCallable GetAccessTokenCallable(const GetAccessTokenRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetAccessToken, request);
  }

  /**
   * An Async wrapper for GetAccessToken that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAccessTokenRequestT = Model::GetAccessTokenRequest>
  void GetAccessTokenAsync(const GetAccessTokenRequestT& request, const GetAccessTokenResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetAccessToken, request, handler, context);
  }

  /**
   * <p>Retrieves information about a DNS view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDNSViewOutcome GetDNSView(const Model::GetDNSViewRequest& request) const;

  /**
   * A Callable wrapper for GetDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDNSViewRequestT = Model::GetDNSViewRequest>
  Model::GetDNSViewOutcomeCallable GetDNSViewCallable(const GetDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetDNSView, request);
  }

  /**
   * An Async wrapper for GetDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDNSViewRequestT = Model::GetDNSViewRequest>
  void GetDNSViewAsync(const GetDNSViewRequestT& request, const GetDNSViewResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetDNSView, request, handler, context);
  }

  /**
   * <p>Retrieves information about a firewall domain list.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetFirewallDomainList">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFirewallDomainListOutcome GetFirewallDomainList(const Model::GetFirewallDomainListRequest& request) const;

  /**
   * A Callable wrapper for GetFirewallDomainList that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetFirewallDomainListRequestT = Model::GetFirewallDomainListRequest>
  Model::GetFirewallDomainListOutcomeCallable GetFirewallDomainListCallable(const GetFirewallDomainListRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetFirewallDomainList, request);
  }

  /**
   * An Async wrapper for GetFirewallDomainList that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetFirewallDomainListRequestT = Model::GetFirewallDomainListRequest>
  void GetFirewallDomainListAsync(const GetFirewallDomainListRequestT& request, const GetFirewallDomainListResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetFirewallDomainList, request, handler, context);
  }

  /**
   * <p>Retrieves information about a DNS firewall rule.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::GetFirewallRuleOutcome GetFirewallRule(const Model::GetFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for GetFirewallRule that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetFirewallRuleRequestT = Model::GetFirewallRuleRequest>
  Model::GetFirewallRuleOutcomeCallable GetFirewallRuleCallable(const GetFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetFirewallRule, request);
  }

  /**
   * An Async wrapper for GetFirewallRule that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetFirewallRuleRequestT = Model::GetFirewallRuleRequest>
  void GetFirewallRuleAsync(const GetFirewallRuleRequestT& request, const GetFirewallRuleResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetFirewallRule, request, handler, context);
  }

  /**
   * <p>Retrieves information about a Route 53 Global Resolver
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetGlobalResolver">AWS
   * API Reference</a></p>
   */
  virtual Model::GetGlobalResolverOutcome GetGlobalResolver(const Model::GetGlobalResolverRequest& request) const;

  /**
   * A Callable wrapper for GetGlobalResolver that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetGlobalResolverRequestT = Model::GetGlobalResolverRequest>
  Model::GetGlobalResolverOutcomeCallable GetGlobalResolverCallable(const GetGlobalResolverRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetGlobalResolver, request);
  }

  /**
   * An Async wrapper for GetGlobalResolver that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetGlobalResolverRequestT = Model::GetGlobalResolverRequest>
  void GetGlobalResolverAsync(const GetGlobalResolverRequestT& request, const GetGlobalResolverResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetGlobalResolver, request, handler, context);
  }

  /**
   * <p>Retrieves information about a hosted zone association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetHostedZoneAssociation">AWS
   * API Reference</a></p>
   */
  virtual Model::GetHostedZoneAssociationOutcome GetHostedZoneAssociation(const Model::GetHostedZoneAssociationRequest& request) const;

  /**
   * A Callable wrapper for GetHostedZoneAssociation that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetHostedZoneAssociationRequestT = Model::GetHostedZoneAssociationRequest>
  Model::GetHostedZoneAssociationOutcomeCallable GetHostedZoneAssociationCallable(const GetHostedZoneAssociationRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetHostedZoneAssociation, request);
  }

  /**
   * An Async wrapper for GetHostedZoneAssociation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetHostedZoneAssociationRequestT = Model::GetHostedZoneAssociationRequest>
  void GetHostedZoneAssociationAsync(const GetHostedZoneAssociationRequestT& request,
                                     const GetHostedZoneAssociationResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetHostedZoneAssociation, request, handler, context);
  }

  /**
   * <p>Retrieves information about an AWS-managed firewall domain list. Managed
   * domain lists contain domains associated with malicious activity, content
   * categories, or specific threats.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/GetManagedFirewallDomainList">AWS
   * API Reference</a></p>
   */
  virtual Model::GetManagedFirewallDomainListOutcome GetManagedFirewallDomainList(
      const Model::GetManagedFirewallDomainListRequest& request) const;

  /**
   * A Callable wrapper for GetManagedFirewallDomainList that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename GetManagedFirewallDomainListRequestT = Model::GetManagedFirewallDomainListRequest>
  Model::GetManagedFirewallDomainListOutcomeCallable GetManagedFirewallDomainListCallable(
      const GetManagedFirewallDomainListRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::GetManagedFirewallDomainList, request);
  }

  /**
   * An Async wrapper for GetManagedFirewallDomainList that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetManagedFirewallDomainListRequestT = Model::GetManagedFirewallDomainListRequest>
  void GetManagedFirewallDomainListAsync(const GetManagedFirewallDomainListRequestT& request,
                                         const GetManagedFirewallDomainListResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::GetManagedFirewallDomainList, request, handler, context);
  }

  /**
   * <p>Imports a list of domains from an Amazon S3 file into a firewall domain list.
   * The file should contain one domain per line.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ImportFirewallDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::ImportFirewallDomainsOutcome ImportFirewallDomains(const Model::ImportFirewallDomainsRequest& request) const;

  /**
   * A Callable wrapper for ImportFirewallDomains that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ImportFirewallDomainsRequestT = Model::ImportFirewallDomainsRequest>
  Model::ImportFirewallDomainsOutcomeCallable ImportFirewallDomainsCallable(const ImportFirewallDomainsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ImportFirewallDomains, request);
  }

  /**
   * An Async wrapper for ImportFirewallDomains that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ImportFirewallDomainsRequestT = Model::ImportFirewallDomainsRequest>
  void ImportFirewallDomainsAsync(const ImportFirewallDomainsRequestT& request, const ImportFirewallDomainsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ImportFirewallDomains, request, handler, context);
  }

  /**
   * <p>Lists all access sources with pagination support.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListAccessSources">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessSourcesOutcome ListAccessSources(const Model::ListAccessSourcesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAccessSources that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessSourcesRequestT = Model::ListAccessSourcesRequest>
  Model::ListAccessSourcesOutcomeCallable ListAccessSourcesCallable(const ListAccessSourcesRequestT& request = {}) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListAccessSources, request);
  }

  /**
   * An Async wrapper for ListAccessSources that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessSourcesRequestT = Model::ListAccessSourcesRequest>
  void ListAccessSourcesAsync(const ListAccessSourcesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListAccessSourcesRequestT& request = {}) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListAccessSources, request, handler, context);
  }

  /**
   * <p>Lists all access tokens for a DNS view with pagination support.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListAccessTokens">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAccessTokensOutcome ListAccessTokens(const Model::ListAccessTokensRequest& request) const;

  /**
   * A Callable wrapper for ListAccessTokens that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAccessTokensRequestT = Model::ListAccessTokensRequest>
  Model::ListAccessTokensOutcomeCallable ListAccessTokensCallable(const ListAccessTokensRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListAccessTokens, request);
  }

  /**
   * An Async wrapper for ListAccessTokens that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAccessTokensRequestT = Model::ListAccessTokensRequest>
  void ListAccessTokensAsync(const ListAccessTokensRequestT& request, const ListAccessTokensResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListAccessTokens, request, handler, context);
  }

  /**
   * <p>Lists all DNS views for a Route 53 Global Resolver with pagination
   * support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListDNSViews">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDNSViewsOutcome ListDNSViews(const Model::ListDNSViewsRequest& request) const;

  /**
   * A Callable wrapper for ListDNSViews that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDNSViewsRequestT = Model::ListDNSViewsRequest>
  Model::ListDNSViewsOutcomeCallable ListDNSViewsCallable(const ListDNSViewsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListDNSViews, request);
  }

  /**
   * An Async wrapper for ListDNSViews that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDNSViewsRequestT = Model::ListDNSViewsRequest>
  void ListDNSViewsAsync(const ListDNSViewsRequestT& request, const ListDNSViewsResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListDNSViews, request, handler, context);
  }

  /**
   * <p>Lists all firewall domain lists for a Route 53 Global Resolver with
   * pagination support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListFirewallDomainLists">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFirewallDomainListsOutcome ListFirewallDomainLists(const Model::ListFirewallDomainListsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListFirewallDomainLists that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFirewallDomainListsRequestT = Model::ListFirewallDomainListsRequest>
  Model::ListFirewallDomainListsOutcomeCallable ListFirewallDomainListsCallable(const ListFirewallDomainListsRequestT& request = {}) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListFirewallDomainLists, request);
  }

  /**
   * An Async wrapper for ListFirewallDomainLists that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListFirewallDomainListsRequestT = Model::ListFirewallDomainListsRequest>
  void ListFirewallDomainListsAsync(const ListFirewallDomainListsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                    const ListFirewallDomainListsRequestT& request = {}) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListFirewallDomainLists, request, handler, context);
  }

  /**
   * <p>Lists all the domains in DNS Firewall domain list you have
   * created.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListFirewallDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFirewallDomainsOutcome ListFirewallDomains(const Model::ListFirewallDomainsRequest& request) const;

  /**
   * A Callable wrapper for ListFirewallDomains that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFirewallDomainsRequestT = Model::ListFirewallDomainsRequest>
  Model::ListFirewallDomainsOutcomeCallable ListFirewallDomainsCallable(const ListFirewallDomainsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListFirewallDomains, request);
  }

  /**
   * An Async wrapper for ListFirewallDomains that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListFirewallDomainsRequestT = Model::ListFirewallDomainsRequest>
  void ListFirewallDomainsAsync(const ListFirewallDomainsRequestT& request, const ListFirewallDomainsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListFirewallDomains, request, handler, context);
  }

  /**
   * <p>Lists all DNS firewall rules for a DNS view with pagination
   * support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListFirewallRules">AWS
   * API Reference</a></p>
   */
  virtual Model::ListFirewallRulesOutcome ListFirewallRules(const Model::ListFirewallRulesRequest& request) const;

  /**
   * A Callable wrapper for ListFirewallRules that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListFirewallRulesRequestT = Model::ListFirewallRulesRequest>
  Model::ListFirewallRulesOutcomeCallable ListFirewallRulesCallable(const ListFirewallRulesRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListFirewallRules, request);
  }

  /**
   * An Async wrapper for ListFirewallRules that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListFirewallRulesRequestT = Model::ListFirewallRulesRequest>
  void ListFirewallRulesAsync(const ListFirewallRulesRequestT& request, const ListFirewallRulesResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListFirewallRules, request, handler, context);
  }

  /**
   * <p>Lists all Route 53 Global Resolver instances in your account with pagination
   * support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListGlobalResolvers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGlobalResolversOutcome ListGlobalResolvers(const Model::ListGlobalResolversRequest& request = {}) const;

  /**
   * A Callable wrapper for ListGlobalResolvers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListGlobalResolversRequestT = Model::ListGlobalResolversRequest>
  Model::ListGlobalResolversOutcomeCallable ListGlobalResolversCallable(const ListGlobalResolversRequestT& request = {}) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListGlobalResolvers, request);
  }

  /**
   * An Async wrapper for ListGlobalResolvers that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListGlobalResolversRequestT = Model::ListGlobalResolversRequest>
  void ListGlobalResolversAsync(const ListGlobalResolversResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                const ListGlobalResolversRequestT& request = {}) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListGlobalResolvers, request, handler, context);
  }

  /**
   * <p>Lists all hosted zone associations for a Route 53 Global Resolver resource
   * with pagination support.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListHostedZoneAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListHostedZoneAssociationsOutcome ListHostedZoneAssociations(
      const Model::ListHostedZoneAssociationsRequest& request) const;

  /**
   * A Callable wrapper for ListHostedZoneAssociations that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListHostedZoneAssociationsRequestT = Model::ListHostedZoneAssociationsRequest>
  Model::ListHostedZoneAssociationsOutcomeCallable ListHostedZoneAssociationsCallable(
      const ListHostedZoneAssociationsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListHostedZoneAssociations, request);
  }

  /**
   * An Async wrapper for ListHostedZoneAssociations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListHostedZoneAssociationsRequestT = Model::ListHostedZoneAssociationsRequest>
  void ListHostedZoneAssociationsAsync(const ListHostedZoneAssociationsRequestT& request,
                                       const ListHostedZoneAssociationsResponseReceivedHandler& handler,
                                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListHostedZoneAssociations, request, handler, context);
  }

  /**
   * <p>Returns a paginated list of the AWS Managed DNS Lists and the categories for
   * DNS Firewall. The categories are either <code>THREAT</code> or
   * <code>CONTENT</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListManagedFirewallDomainLists">AWS
   * API Reference</a></p>
   */
  virtual Model::ListManagedFirewallDomainListsOutcome ListManagedFirewallDomainLists(
      const Model::ListManagedFirewallDomainListsRequest& request) const;

  /**
   * A Callable wrapper for ListManagedFirewallDomainLists that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename ListManagedFirewallDomainListsRequestT = Model::ListManagedFirewallDomainListsRequest>
  Model::ListManagedFirewallDomainListsOutcomeCallable ListManagedFirewallDomainListsCallable(
      const ListManagedFirewallDomainListsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListManagedFirewallDomainLists, request);
  }

  /**
   * An Async wrapper for ListManagedFirewallDomainLists that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename ListManagedFirewallDomainListsRequestT = Model::ListManagedFirewallDomainListsRequest>
  void ListManagedFirewallDomainListsAsync(const ListManagedFirewallDomainListsRequestT& request,
                                           const ListManagedFirewallDomainListsResponseReceivedHandler& handler,
                                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListManagedFirewallDomainLists, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with a Route 53 Global Resolver
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Adds or updates tags for a Route 53 Global Resolver resource. Tags are
   * key-value pairs that help you organize and identify your
   * resources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes tags from a Route 53 Global Resolver resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an access source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateAccessSource">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAccessSourceOutcome UpdateAccessSource(const Model::UpdateAccessSourceRequest& request) const;

  /**
   * A Callable wrapper for UpdateAccessSource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAccessSourceRequestT = Model::UpdateAccessSourceRequest>
  Model::UpdateAccessSourceOutcomeCallable UpdateAccessSourceCallable(const UpdateAccessSourceRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateAccessSource, request);
  }

  /**
   * An Async wrapper for UpdateAccessSource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAccessSourceRequestT = Model::UpdateAccessSourceRequest>
  void UpdateAccessSourceAsync(const UpdateAccessSourceRequestT& request, const UpdateAccessSourceResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateAccessSource, request, handler, context);
  }

  /**
   * <p>Updates the configuration of an access token.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateAccessToken">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateAccessTokenOutcome UpdateAccessToken(const Model::UpdateAccessTokenRequest& request) const;

  /**
   * A Callable wrapper for UpdateAccessToken that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateAccessTokenRequestT = Model::UpdateAccessTokenRequest>
  Model::UpdateAccessTokenOutcomeCallable UpdateAccessTokenCallable(const UpdateAccessTokenRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateAccessToken, request);
  }

  /**
   * An Async wrapper for UpdateAccessToken that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateAccessTokenRequestT = Model::UpdateAccessTokenRequest>
  void UpdateAccessTokenAsync(const UpdateAccessTokenRequestT& request, const UpdateAccessTokenResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateAccessToken, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a DNS view.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateDNSView">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDNSViewOutcome UpdateDNSView(const Model::UpdateDNSViewRequest& request) const;

  /**
   * A Callable wrapper for UpdateDNSView that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateDNSViewRequestT = Model::UpdateDNSViewRequest>
  Model::UpdateDNSViewOutcomeCallable UpdateDNSViewCallable(const UpdateDNSViewRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateDNSView, request);
  }

  /**
   * An Async wrapper for UpdateDNSView that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateDNSViewRequestT = Model::UpdateDNSViewRequest>
  void UpdateDNSViewAsync(const UpdateDNSViewRequestT& request, const UpdateDNSViewResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateDNSView, request, handler, context);
  }

  /**
   * <p>Updates a DNS Firewall domain list from an array of specified
   * domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateFirewallDomains">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFirewallDomainsOutcome UpdateFirewallDomains(const Model::UpdateFirewallDomainsRequest& request) const;

  /**
   * A Callable wrapper for UpdateFirewallDomains that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFirewallDomainsRequestT = Model::UpdateFirewallDomainsRequest>
  Model::UpdateFirewallDomainsOutcomeCallable UpdateFirewallDomainsCallable(const UpdateFirewallDomainsRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateFirewallDomains, request);
  }

  /**
   * An Async wrapper for UpdateFirewallDomains that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateFirewallDomainsRequestT = Model::UpdateFirewallDomainsRequest>
  void UpdateFirewallDomainsAsync(const UpdateFirewallDomainsRequestT& request, const UpdateFirewallDomainsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateFirewallDomains, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a DNS firewall rule.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateFirewallRule">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateFirewallRuleOutcome UpdateFirewallRule(const Model::UpdateFirewallRuleRequest& request) const;

  /**
   * A Callable wrapper for UpdateFirewallRule that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateFirewallRuleRequestT = Model::UpdateFirewallRuleRequest>
  Model::UpdateFirewallRuleOutcomeCallable UpdateFirewallRuleCallable(const UpdateFirewallRuleRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateFirewallRule, request);
  }

  /**
   * An Async wrapper for UpdateFirewallRule that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateFirewallRuleRequestT = Model::UpdateFirewallRuleRequest>
  void UpdateFirewallRuleAsync(const UpdateFirewallRuleRequestT& request, const UpdateFirewallRuleResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateFirewallRule, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a Route 53 Global Resolver instance. You can
   * modify the name, description, and observability region.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateGlobalResolver">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGlobalResolverOutcome UpdateGlobalResolver(const Model::UpdateGlobalResolverRequest& request) const;

  /**
   * A Callable wrapper for UpdateGlobalResolver that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateGlobalResolverRequestT = Model::UpdateGlobalResolverRequest>
  Model::UpdateGlobalResolverOutcomeCallable UpdateGlobalResolverCallable(const UpdateGlobalResolverRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateGlobalResolver, request);
  }

  /**
   * An Async wrapper for UpdateGlobalResolver that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateGlobalResolverRequestT = Model::UpdateGlobalResolverRequest>
  void UpdateGlobalResolverAsync(const UpdateGlobalResolverRequestT& request, const UpdateGlobalResolverResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateGlobalResolver, request, handler, context);
  }

  /**
   * <p>Updates the configuration of a hosted zone association.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53globalresolver-2022-09-27/UpdateHostedZoneAssociation">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateHostedZoneAssociationOutcome UpdateHostedZoneAssociation(
      const Model::UpdateHostedZoneAssociationRequest& request) const;

  /**
   * A Callable wrapper for UpdateHostedZoneAssociation that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename UpdateHostedZoneAssociationRequestT = Model::UpdateHostedZoneAssociationRequest>
  Model::UpdateHostedZoneAssociationOutcomeCallable UpdateHostedZoneAssociationCallable(
      const UpdateHostedZoneAssociationRequestT& request) const {
    return SubmitCallable(&Route53GlobalResolverClient::UpdateHostedZoneAssociation, request);
  }

  /**
   * An Async wrapper for UpdateHostedZoneAssociation that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateHostedZoneAssociationRequestT = Model::UpdateHostedZoneAssociationRequest>
  void UpdateHostedZoneAssociationAsync(const UpdateHostedZoneAssociationRequestT& request,
                                        const UpdateHostedZoneAssociationResponseReceivedHandler& handler,
                                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&Route53GlobalResolverClient::UpdateHostedZoneAssociation, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<Route53GlobalResolverEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53GlobalResolverClient>;
  void init(const Route53GlobalResolverClientConfiguration& clientConfiguration);

  Route53GlobalResolverClientConfiguration m_clientConfiguration;
  std::shared_ptr<Route53GlobalResolverEndpointProviderBase> m_endpointProvider;
};

}  // namespace Route53GlobalResolver
}  // namespace Aws
