/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/network-security-manager/NetworkSecurityManagerPaginationBase.h>
#include <aws/network-security-manager/NetworkSecurityManagerServiceClientModel.h>
#include <aws/network-security-manager/NetworkSecurityManagerWaiter.h>
#include <aws/network-security-manager/NetworkSecurityManager_EXPORTS.h>

namespace Aws {
namespace NetworkSecurityManager {
/**
 * <p>AWS Network Security Manager helps you centrally configure and deploy network
 * security protections across your organization. Supported protections include AWS
 * WAF and AWS Shield Advanced. This centralized approach reduces the overhead of
 * managing protections individually across accounts and ensures consistent
 * security at scale.</p> <p>You define reusable <i>rules</i> and <i>templates</i>,
 * then combine them into <i>policies</i>. Next, you select the accounts and
 * resources to protect with <i>scopes</i> and roll the protections out with
 * <i>deployments</i>. For example, you can define a set of AWS WAF rules and group
 * them into a policy. Then deploy that policy across all accounts in your
 * organization with a single deployment.</p> <p>This API reference describes the
 * operations and data types for AWS Network Security Manager.</p> <p>For
 * conceptual information, tutorials, and guidance on writing rule configurations,
 * see the <a
 * href="https://docs.aws.amazon.com/network-security-manager/latest/devguide/what-is.html">AWS
 * Network Security Manager Developer Guide</a>. For the default quotas that apply
 * to your account, see <a
 * href="https://docs.aws.amazon.com/network-security-manager/latest/devguide/quotas.html">Quotas</a>.
 * For the service endpoints available in each Region, see <a
 * href="https://docs.aws.amazon.com/general/latest/gr/network-security-manager.html">AWS
 * Network Security Manager endpoints and quotas</a> in the <i>AWS General
 * Reference</i>.</p>
 */
class AWS_NETWORKSECURITYMANAGER_API NetworkSecurityManagerClient
    : public Aws::Client::AWSJsonClient,
      public Aws::Client::ClientWithAsyncTemplateMethods<NetworkSecurityManagerClient>,
      public NetworkSecurityManagerPaginationBase<NetworkSecurityManagerClient>,
      public NetworkSecurityManagerWaiter<NetworkSecurityManagerClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef NetworkSecurityManagerClientConfiguration ClientConfigurationType;
  typedef NetworkSecurityManagerEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NetworkSecurityManagerClient(const Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration =
                                   Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration(),
                               std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NetworkSecurityManagerClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration =
                                   Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NetworkSecurityManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> endpointProvider = nullptr,
                               const Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration& clientConfiguration =
                                   Aws::NetworkSecurityManager::NetworkSecurityManagerClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  NetworkSecurityManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  NetworkSecurityManagerClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  NetworkSecurityManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~NetworkSecurityManagerClient();

  /**
   * <p>Creates a deployment. A deployment applies one or more policies to the
   * accounts and resources selected by a scope. Use <code>isPublished</code> to
   * create the deployment in published (<code>ACTIVE</code>) or draft
   * (<code>DRAFT</code>) state. The response includes coverage information and any
   * warnings about the deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateDeployment">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDeploymentOutcome CreateDeployment(const Model::CreateDeploymentRequest& request) const;

  /**
   * A Callable wrapper for CreateDeployment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
  Model::CreateDeploymentOutcomeCallable CreateDeploymentCallable(const CreateDeploymentRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateDeployment, request);
  }

  /**
   * An Async wrapper for CreateDeployment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateDeploymentRequestT = Model::CreateDeploymentRequest>
  void CreateDeploymentAsync(const CreateDeploymentRequestT& request, const CreateDeploymentResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateDeployment, request, handler, context);
  }

  /**
   * <p>Creates a snapshot of the current published version of the specified
   * deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateDeploymentSnapshot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDeploymentSnapshotOutcome CreateDeploymentSnapshot(const Model::CreateDeploymentSnapshotRequest& request) const;

  /**
   * A Callable wrapper for CreateDeploymentSnapshot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateDeploymentSnapshotRequestT = Model::CreateDeploymentSnapshotRequest>
  Model::CreateDeploymentSnapshotOutcomeCallable CreateDeploymentSnapshotCallable(const CreateDeploymentSnapshotRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateDeploymentSnapshot, request);
  }

  /**
   * An Async wrapper for CreateDeploymentSnapshot that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateDeploymentSnapshotRequestT = Model::CreateDeploymentSnapshotRequest>
  void CreateDeploymentSnapshotAsync(const CreateDeploymentSnapshotRequestT& request,
                                     const CreateDeploymentSnapshotResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateDeploymentSnapshot, request, handler, context);
  }

  /**
   * <p>Creates a policy. A policy combines templates and rules with enforcement
   * settings for a firewall type, such as AWS WAF or AWS Shield Advanced. Use
   * <code>isPublished</code> to create the policy in published (<code>ACTIVE</code>)
   * or draft (<code>DRAFT</code>) state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

  /**
   * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreatePolicy, request);
  }

  /**
   * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreatePolicyRequestT = Model::CreatePolicyRequest>
  void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreatePolicy, request, handler, context);
  }

  /**
   * <p>Creates a snapshot of the current published version of the specified
   * policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreatePolicySnapshot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreatePolicySnapshotOutcome CreatePolicySnapshot(const Model::CreatePolicySnapshotRequest& request) const;

  /**
   * A Callable wrapper for CreatePolicySnapshot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreatePolicySnapshotRequestT = Model::CreatePolicySnapshotRequest>
  Model::CreatePolicySnapshotOutcomeCallable CreatePolicySnapshotCallable(const CreatePolicySnapshotRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreatePolicySnapshot, request);
  }

  /**
   * An Async wrapper for CreatePolicySnapshot that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreatePolicySnapshotRequestT = Model::CreatePolicySnapshotRequest>
  void CreatePolicySnapshotAsync(const CreatePolicySnapshotRequestT& request, const CreatePolicySnapshotResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreatePolicySnapshot, request, handler, context);
  }

  /**
   * <p>Creates a rule. A rule defines a network security configuration to enforce,
   * such as an AWS WAF rule group or configuration data. Use
   * <code>isPublished</code> to create the rule in published (<code>ACTIVE</code>)
   * or draft (<code>DRAFT</code>) state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateRule">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRuleOutcome CreateRule(const Model::CreateRuleRequest& request) const;

  /**
   * A Callable wrapper for CreateRule that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateRuleRequestT = Model::CreateRuleRequest>
  Model::CreateRuleOutcomeCallable CreateRuleCallable(const CreateRuleRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateRule, request);
  }

  /**
   * An Async wrapper for CreateRule that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateRuleRequestT = Model::CreateRuleRequest>
  void CreateRuleAsync(const CreateRuleRequestT& request, const CreateRuleResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateRule, request, handler, context);
  }

  /**
   * <p>Creates a snapshot of the current published version of the specified rule. A
   * snapshot is an immutable, versioned copy that other resources can
   * reference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateRuleSnapshot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateRuleSnapshotOutcome CreateRuleSnapshot(const Model::CreateRuleSnapshotRequest& request) const;

  /**
   * A Callable wrapper for CreateRuleSnapshot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateRuleSnapshotRequestT = Model::CreateRuleSnapshotRequest>
  Model::CreateRuleSnapshotOutcomeCallable CreateRuleSnapshotCallable(const CreateRuleSnapshotRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateRuleSnapshot, request);
  }

  /**
   * An Async wrapper for CreateRuleSnapshot that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateRuleSnapshotRequestT = Model::CreateRuleSnapshotRequest>
  void CreateRuleSnapshotAsync(const CreateRuleSnapshotRequestT& request, const CreateRuleSnapshotResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateRuleSnapshot, request, handler, context);
  }

  /**
   * <p>Creates a scope. A scope selects the accounts and resources that a deployment
   * applies to. Use <code>isPublished</code> to create the scope in published
   * (<code>ACTIVE</code>) or draft (<code>DRAFT</code>) state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateScope">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateScopeOutcome CreateScope(const Model::CreateScopeRequest& request) const;

  /**
   * A Callable wrapper for CreateScope that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateScopeRequestT = Model::CreateScopeRequest>
  Model::CreateScopeOutcomeCallable CreateScopeCallable(const CreateScopeRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateScope, request);
  }

  /**
   * An Async wrapper for CreateScope that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateScopeRequestT = Model::CreateScopeRequest>
  void CreateScopeAsync(const CreateScopeRequestT& request, const CreateScopeResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateScope, request, handler, context);
  }

  /**
   * <p>Creates a snapshot of the current published version of the specified
   * scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateScopeSnapshot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateScopeSnapshotOutcome CreateScopeSnapshot(const Model::CreateScopeSnapshotRequest& request) const;

  /**
   * A Callable wrapper for CreateScopeSnapshot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateScopeSnapshotRequestT = Model::CreateScopeSnapshotRequest>
  Model::CreateScopeSnapshotOutcomeCallable CreateScopeSnapshotCallable(const CreateScopeSnapshotRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateScopeSnapshot, request);
  }

  /**
   * An Async wrapper for CreateScopeSnapshot that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateScopeSnapshotRequestT = Model::CreateScopeSnapshotRequest>
  void CreateScopeSnapshotAsync(const CreateScopeSnapshotRequestT& request, const CreateScopeSnapshotResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateScopeSnapshot, request, handler, context);
  }

  /**
   * <p>Creates a template. A template groups one or more rules to simplify reuse
   * across policies. You can also associate rules with a policy directly, without a
   * template. Use <code>isPublished</code> to create the template in published
   * (<code>ACTIVE</code>) or draft (<code>DRAFT</code>) state.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTemplateOutcome CreateTemplate(const Model::CreateTemplateRequest& request) const;

  /**
   * A Callable wrapper for CreateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateTemplateRequestT = Model::CreateTemplateRequest>
  Model::CreateTemplateOutcomeCallable CreateTemplateCallable(const CreateTemplateRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateTemplate, request);
  }

  /**
   * An Async wrapper for CreateTemplate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateTemplateRequestT = Model::CreateTemplateRequest>
  void CreateTemplateAsync(const CreateTemplateRequestT& request, const CreateTemplateResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateTemplate, request, handler, context);
  }

  /**
   * <p>Creates a snapshot of the current published version of the specified
   * template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/CreateTemplateSnapshot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateTemplateSnapshotOutcome CreateTemplateSnapshot(const Model::CreateTemplateSnapshotRequest& request) const;

  /**
   * A Callable wrapper for CreateTemplateSnapshot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateTemplateSnapshotRequestT = Model::CreateTemplateSnapshotRequest>
  Model::CreateTemplateSnapshotOutcomeCallable CreateTemplateSnapshotCallable(const CreateTemplateSnapshotRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::CreateTemplateSnapshot, request);
  }

  /**
   * An Async wrapper for CreateTemplateSnapshot that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateTemplateSnapshotRequestT = Model::CreateTemplateSnapshotRequest>
  void CreateTemplateSnapshotAsync(const CreateTemplateSnapshotRequestT& request,
                                   const CreateTemplateSnapshotResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::CreateTemplateSnapshot, request, handler, context);
  }

  /**
   * <p>Removes the specified AWS Network Security Manager administrator
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeleteAdminAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteAdminAccountOutcome DeleteAdminAccount(const Model::DeleteAdminAccountRequest& request) const;

  /**
   * A Callable wrapper for DeleteAdminAccount that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteAdminAccountRequestT = Model::DeleteAdminAccountRequest>
  Model::DeleteAdminAccountOutcomeCallable DeleteAdminAccountCallable(const DeleteAdminAccountRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeleteAdminAccount, request);
  }

  /**
   * An Async wrapper for DeleteAdminAccount that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteAdminAccountRequestT = Model::DeleteAdminAccountRequest>
  void DeleteAdminAccountAsync(const DeleteAdminAccountRequestT& request, const DeleteAdminAccountResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeleteAdminAccount, request, handler, context);
  }

  /**
   * <p>Deletes the specified deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeleteDeployment">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDeploymentOutcome DeleteDeployment(const Model::DeleteDeploymentRequest& request) const;

  /**
   * A Callable wrapper for DeleteDeployment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
  Model::DeleteDeploymentOutcomeCallable DeleteDeploymentCallable(const DeleteDeploymentRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeleteDeployment, request);
  }

  /**
   * An Async wrapper for DeleteDeployment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteDeploymentRequestT = Model::DeleteDeploymentRequest>
  void DeleteDeploymentAsync(const DeleteDeploymentRequestT& request, const DeleteDeploymentResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeleteDeployment, request, handler, context);
  }

  /**
   * <p>Deletes the specified policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeletePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

  /**
   * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeletePolicy, request);
  }

  /**
   * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeletePolicyRequestT = Model::DeletePolicyRequest>
  void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeletePolicy, request, handler, context);
  }

  /**
   * <p>Deletes the specified rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeleteRule">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteRuleOutcome DeleteRule(const Model::DeleteRuleRequest& request) const;

  /**
   * A Callable wrapper for DeleteRule that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteRuleRequestT = Model::DeleteRuleRequest>
  Model::DeleteRuleOutcomeCallable DeleteRuleCallable(const DeleteRuleRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeleteRule, request);
  }

  /**
   * An Async wrapper for DeleteRule that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteRuleRequestT = Model::DeleteRuleRequest>
  void DeleteRuleAsync(const DeleteRuleRequestT& request, const DeleteRuleResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeleteRule, request, handler, context);
  }

  /**
   * <p>Deletes the specified scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeleteScope">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteScopeOutcome DeleteScope(const Model::DeleteScopeRequest& request) const;

  /**
   * A Callable wrapper for DeleteScope that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteScopeRequestT = Model::DeleteScopeRequest>
  Model::DeleteScopeOutcomeCallable DeleteScopeCallable(const DeleteScopeRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeleteScope, request);
  }

  /**
   * An Async wrapper for DeleteScope that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteScopeRequestT = Model::DeleteScopeRequest>
  void DeleteScopeAsync(const DeleteScopeRequestT& request, const DeleteScopeResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeleteScope, request, handler, context);
  }

  /**
   * <p>Deletes the specified template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/DeleteTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteTemplateOutcome DeleteTemplate(const Model::DeleteTemplateRequest& request) const;

  /**
   * A Callable wrapper for DeleteTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
  Model::DeleteTemplateOutcomeCallable DeleteTemplateCallable(const DeleteTemplateRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::DeleteTemplate, request);
  }

  /**
   * An Async wrapper for DeleteTemplate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteTemplateRequestT = Model::DeleteTemplateRequest>
  void DeleteTemplateAsync(const DeleteTemplateRequestT& request, const DeleteTemplateResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::DeleteTemplate, request, handler, context);
  }

  /**
   * <p>Generates a rule configuration from a natural-language description. Provide a
   * prompt along with the rule's firewall type and rule type. The service returns a
   * configuration that you can use when you create or update a rule. If you also
   * provide an existing configuration, the service edits that configuration instead
   * of generating a new one.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GenerateRuleConfiguration">AWS
   * API Reference</a></p>
   */
  virtual Model::GenerateRuleConfigurationOutcome GenerateRuleConfiguration(const Model::GenerateRuleConfigurationRequest& request) const;

  /**
   * A Callable wrapper for GenerateRuleConfiguration that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GenerateRuleConfigurationRequestT = Model::GenerateRuleConfigurationRequest>
  Model::GenerateRuleConfigurationOutcomeCallable GenerateRuleConfigurationCallable(
      const GenerateRuleConfigurationRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GenerateRuleConfiguration, request);
  }

  /**
   * An Async wrapper for GenerateRuleConfiguration that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GenerateRuleConfigurationRequestT = Model::GenerateRuleConfigurationRequest>
  void GenerateRuleConfigurationAsync(const GenerateRuleConfigurationRequestT& request,
                                      const GenerateRuleConfigurationResponseReceivedHandler& handler,
                                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GenerateRuleConfiguration, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified AWS Network Security Manager
   * administrator account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetAdminAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::GetAdminAccountOutcome GetAdminAccount(const Model::GetAdminAccountRequest& request) const;

  /**
   * A Callable wrapper for GetAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetAdminAccountRequestT = Model::GetAdminAccountRequest>
  Model::GetAdminAccountOutcomeCallable GetAdminAccountCallable(const GetAdminAccountRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetAdminAccount, request);
  }

  /**
   * An Async wrapper for GetAdminAccount that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetAdminAccountRequestT = Model::GetAdminAccountRequest>
  void GetAdminAccountAsync(const GetAdminAccountRequestT& request, const GetAdminAccountResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetAdminAccount, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified deployment, including coverage
   * information and any warnings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetDeployment">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDeploymentOutcome GetDeployment(const Model::GetDeploymentRequest& request) const;

  /**
   * A Callable wrapper for GetDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetDeploymentRequestT = Model::GetDeploymentRequest>
  Model::GetDeploymentOutcomeCallable GetDeploymentCallable(const GetDeploymentRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetDeployment, request);
  }

  /**
   * An Async wrapper for GetDeployment that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetDeploymentRequestT = Model::GetDeploymentRequest>
  void GetDeploymentAsync(const GetDeploymentRequestT& request, const GetDeploymentResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetDeployment, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetPolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

  /**
   * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetPolicy, request);
  }

  /**
   * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetPolicyRequestT = Model::GetPolicyRequest>
  void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetPolicy, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetRule">AWS
   * API Reference</a></p>
   */
  virtual Model::GetRuleOutcome GetRule(const Model::GetRuleRequest& request) const;

  /**
   * A Callable wrapper for GetRule that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetRuleRequestT = Model::GetRuleRequest>
  Model::GetRuleOutcomeCallable GetRuleCallable(const GetRuleRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetRule, request);
  }

  /**
   * An Async wrapper for GetRule that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetRuleRequestT = Model::GetRuleRequest>
  void GetRuleAsync(const GetRuleRequestT& request, const GetRuleResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetRule, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetScope">AWS
   * API Reference</a></p>
   */
  virtual Model::GetScopeOutcome GetScope(const Model::GetScopeRequest& request) const;

  /**
   * A Callable wrapper for GetScope that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetScopeRequestT = Model::GetScopeRequest>
  Model::GetScopeOutcomeCallable GetScopeCallable(const GetScopeRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetScope, request);
  }

  /**
   * An Async wrapper for GetScope that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetScopeRequestT = Model::GetScopeRequest>
  void GetScopeAsync(const GetScopeRequestT& request, const GetScopeResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetScope, request, handler, context);
  }

  /**
   * <p>Retrieves the details of the specified template.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/GetTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::GetTemplateOutcome GetTemplate(const Model::GetTemplateRequest& request) const;

  /**
   * A Callable wrapper for GetTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetTemplateRequestT = Model::GetTemplateRequest>
  Model::GetTemplateOutcomeCallable GetTemplateCallable(const GetTemplateRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::GetTemplate, request);
  }

  /**
   * An Async wrapper for GetTemplate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetTemplateRequestT = Model::GetTemplateRequest>
  void GetTemplateAsync(const GetTemplateRequestT& request, const GetTemplateResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::GetTemplate, request, handler, context);
  }

  /**
   * <p>Lists the AWS Network Security Manager administrator accounts in the
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListAdminAccounts">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAdminAccountsOutcome ListAdminAccounts(const Model::ListAdminAccountsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAdminAccounts that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListAdminAccountsRequestT = Model::ListAdminAccountsRequest>
  Model::ListAdminAccountsOutcomeCallable ListAdminAccountsCallable(const ListAdminAccountsRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListAdminAccounts, request);
  }

  /**
   * An Async wrapper for ListAdminAccounts that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListAdminAccountsRequestT = Model::ListAdminAccountsRequest>
  void ListAdminAccountsAsync(const ListAdminAccountsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                              const ListAdminAccountsRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListAdminAccounts, request, handler, context);
  }

  /**
   * <p>Lists the aggregated synchronization statuses of resources across the
   * deployments in your administrator account. You can filter the results by
   * synchronization status and page through them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListAggregateResourceSynchronizationStatuses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListAggregateResourceSynchronizationStatusesOutcome ListAggregateResourceSynchronizationStatuses(
      const Model::ListAggregateResourceSynchronizationStatusesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListAggregateResourceSynchronizationStatuses that returns a future to the operation so that it can be executed
   * in parallel to other requests.
   */
  template <typename ListAggregateResourceSynchronizationStatusesRequestT = Model::ListAggregateResourceSynchronizationStatusesRequest>
  Model::ListAggregateResourceSynchronizationStatusesOutcomeCallable ListAggregateResourceSynchronizationStatusesCallable(
      const ListAggregateResourceSynchronizationStatusesRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListAggregateResourceSynchronizationStatuses, request);
  }

  /**
   * An Async wrapper for ListAggregateResourceSynchronizationStatuses that queues the request into a thread executor and triggers
   * associated callback when operation has finished.
   */
  template <typename ListAggregateResourceSynchronizationStatusesRequestT = Model::ListAggregateResourceSynchronizationStatusesRequest>
  void ListAggregateResourceSynchronizationStatusesAsync(const ListAggregateResourceSynchronizationStatusesResponseReceivedHandler& handler,
                                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                                                         const ListAggregateResourceSynchronizationStatusesRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListAggregateResourceSynchronizationStatuses, request, handler, context);
  }

  /**
   * <p>Lists the snapshots of the specified deployment.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListDeploymentSnapshots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDeploymentSnapshotsOutcome ListDeploymentSnapshots(const Model::ListDeploymentSnapshotsRequest& request) const;

  /**
   * A Callable wrapper for ListDeploymentSnapshots that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDeploymentSnapshotsRequestT = Model::ListDeploymentSnapshotsRequest>
  Model::ListDeploymentSnapshotsOutcomeCallable ListDeploymentSnapshotsCallable(const ListDeploymentSnapshotsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListDeploymentSnapshots, request);
  }

  /**
   * An Async wrapper for ListDeploymentSnapshots that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListDeploymentSnapshotsRequestT = Model::ListDeploymentSnapshotsRequest>
  void ListDeploymentSnapshotsAsync(const ListDeploymentSnapshotsRequestT& request,
                                    const ListDeploymentSnapshotsResponseReceivedHandler& handler,
                                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListDeploymentSnapshots, request, handler, context);
  }

  /**
   * <p>Lists the deployments in the account. You can filter the results by status
   * and page through them using <code>maxResults</code> and
   * <code>nextToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListDeployments">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDeploymentsOutcome ListDeployments(const Model::ListDeploymentsRequest& request = {}) const;

  /**
   * A Callable wrapper for ListDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
  Model::ListDeploymentsOutcomeCallable ListDeploymentsCallable(const ListDeploymentsRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListDeployments, request);
  }

  /**
   * An Async wrapper for ListDeployments that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListDeploymentsRequestT = Model::ListDeploymentsRequest>
  void ListDeploymentsAsync(const ListDeploymentsResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                            const ListDeploymentsRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListDeployments, request, handler, context);
  }

  /**
   * <p>Lists the policies in the account. You can filter the results by status and
   * page through them using <code>maxResults</code> and
   * <code>nextToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListPolicies">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListPolicies, request);
  }

  /**
   * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListPoliciesRequestT = Model::ListPoliciesRequest>
  void ListPoliciesAsync(const ListPoliciesResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListPoliciesRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListPolicies, request, handler, context);
  }

  /**
   * <p>Lists the snapshots of the specified policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListPolicySnapshots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListPolicySnapshotsOutcome ListPolicySnapshots(const Model::ListPolicySnapshotsRequest& request) const;

  /**
   * A Callable wrapper for ListPolicySnapshots that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListPolicySnapshotsRequestT = Model::ListPolicySnapshotsRequest>
  Model::ListPolicySnapshotsOutcomeCallable ListPolicySnapshotsCallable(const ListPolicySnapshotsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListPolicySnapshots, request);
  }

  /**
   * An Async wrapper for ListPolicySnapshots that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListPolicySnapshotsRequestT = Model::ListPolicySnapshotsRequest>
  void ListPolicySnapshotsAsync(const ListPolicySnapshotsRequestT& request, const ListPolicySnapshotsResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListPolicySnapshots, request, handler, context);
  }

  /**
   * <p>Lists the resources associated with the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListResourceAssociations">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourceAssociationsOutcome ListResourceAssociations(const Model::ListResourceAssociationsRequest& request) const;

  /**
   * A Callable wrapper for ListResourceAssociations that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListResourceAssociationsRequestT = Model::ListResourceAssociationsRequest>
  Model::ListResourceAssociationsOutcomeCallable ListResourceAssociationsCallable(const ListResourceAssociationsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListResourceAssociations, request);
  }

  /**
   * An Async wrapper for ListResourceAssociations that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListResourceAssociationsRequestT = Model::ListResourceAssociationsRequest>
  void ListResourceAssociationsAsync(const ListResourceAssociationsRequestT& request,
                                     const ListResourceAssociationsResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListResourceAssociations, request, handler, context);
  }

  /**
   * <p>Lists the synchronization statuses of the resources covered by the specified
   * deployment. You can filter the results by synchronization status and page
   * through them.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListResourceSynchronizationStatuses">AWS
   * API Reference</a></p>
   */
  virtual Model::ListResourceSynchronizationStatusesOutcome ListResourceSynchronizationStatuses(
      const Model::ListResourceSynchronizationStatusesRequest& request) const;

  /**
   * A Callable wrapper for ListResourceSynchronizationStatuses that returns a future to the operation so that it can be executed in
   * parallel to other requests.
   */
  template <typename ListResourceSynchronizationStatusesRequestT = Model::ListResourceSynchronizationStatusesRequest>
  Model::ListResourceSynchronizationStatusesOutcomeCallable ListResourceSynchronizationStatusesCallable(
      const ListResourceSynchronizationStatusesRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListResourceSynchronizationStatuses, request);
  }

  /**
   * An Async wrapper for ListResourceSynchronizationStatuses that queues the request into a thread executor and triggers associated
   * callback when operation has finished.
   */
  template <typename ListResourceSynchronizationStatusesRequestT = Model::ListResourceSynchronizationStatusesRequest>
  void ListResourceSynchronizationStatusesAsync(const ListResourceSynchronizationStatusesRequestT& request,
                                                const ListResourceSynchronizationStatusesResponseReceivedHandler& handler,
                                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListResourceSynchronizationStatuses, request, handler, context);
  }

  /**
   * <p>Lists the snapshots of the specified rule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListRuleSnapshots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRuleSnapshotsOutcome ListRuleSnapshots(const Model::ListRuleSnapshotsRequest& request) const;

  /**
   * A Callable wrapper for ListRuleSnapshots that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListRuleSnapshotsRequestT = Model::ListRuleSnapshotsRequest>
  Model::ListRuleSnapshotsOutcomeCallable ListRuleSnapshotsCallable(const ListRuleSnapshotsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListRuleSnapshots, request);
  }

  /**
   * An Async wrapper for ListRuleSnapshots that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListRuleSnapshotsRequestT = Model::ListRuleSnapshotsRequest>
  void ListRuleSnapshotsAsync(const ListRuleSnapshotsRequestT& request, const ListRuleSnapshotsResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListRuleSnapshots, request, handler, context);
  }

  /**
   * <p>Lists the rules in the account. You can filter the results by status and page
   * through them using <code>maxResults</code> and
   * <code>nextToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListRules">AWS
   * API Reference</a></p>
   */
  virtual Model::ListRulesOutcome ListRules(const Model::ListRulesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListRules that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListRulesRequestT = Model::ListRulesRequest>
  Model::ListRulesOutcomeCallable ListRulesCallable(const ListRulesRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListRules, request);
  }

  /**
   * An Async wrapper for ListRules that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListRulesRequestT = Model::ListRulesRequest>
  void ListRulesAsync(const ListRulesResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                      const ListRulesRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListRules, request, handler, context);
  }

  /**
   * <p>Lists the snapshots of the specified scope.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListScopeSnapshots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListScopeSnapshotsOutcome ListScopeSnapshots(const Model::ListScopeSnapshotsRequest& request) const;

  /**
   * A Callable wrapper for ListScopeSnapshots that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListScopeSnapshotsRequestT = Model::ListScopeSnapshotsRequest>
  Model::ListScopeSnapshotsOutcomeCallable ListScopeSnapshotsCallable(const ListScopeSnapshotsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListScopeSnapshots, request);
  }

  /**
   * An Async wrapper for ListScopeSnapshots that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListScopeSnapshotsRequestT = Model::ListScopeSnapshotsRequest>
  void ListScopeSnapshotsAsync(const ListScopeSnapshotsRequestT& request, const ListScopeSnapshotsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListScopeSnapshots, request, handler, context);
  }

  /**
   * <p>Lists the scopes in the account. You can filter the results by status and
   * page through them using <code>maxResults</code> and
   * <code>nextToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListScopes">AWS
   * API Reference</a></p>
   */
  virtual Model::ListScopesOutcome ListScopes(const Model::ListScopesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListScopes that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListScopesRequestT = Model::ListScopesRequest>
  Model::ListScopesOutcomeCallable ListScopesCallable(const ListScopesRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListScopes, request);
  }

  /**
   * An Async wrapper for ListScopes that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListScopesRequestT = Model::ListScopesRequest>
  void ListScopesAsync(const ListScopesResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                       const ListScopesRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListScopes, request, handler, context);
  }

  /**
   * <p>Lists the tags associated with the specified resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListTagsForResource">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

  /**
   * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListTagsForResource, request);
  }

  /**
   * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
  void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListTagsForResource, request, handler, context);
  }

  /**
   * <p>Lists the snapshots of the specified template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListTemplateSnapshots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTemplateSnapshotsOutcome ListTemplateSnapshots(const Model::ListTemplateSnapshotsRequest& request) const;

  /**
   * A Callable wrapper for ListTemplateSnapshots that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListTemplateSnapshotsRequestT = Model::ListTemplateSnapshotsRequest>
  Model::ListTemplateSnapshotsOutcomeCallable ListTemplateSnapshotsCallable(const ListTemplateSnapshotsRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListTemplateSnapshots, request);
  }

  /**
   * An Async wrapper for ListTemplateSnapshots that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListTemplateSnapshotsRequestT = Model::ListTemplateSnapshotsRequest>
  void ListTemplateSnapshotsAsync(const ListTemplateSnapshotsRequestT& request, const ListTemplateSnapshotsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListTemplateSnapshots, request, handler, context);
  }

  /**
   * <p>Lists the templates in the account. You can filter the results by status and
   * page through them using <code>maxResults</code> and
   * <code>nextToken</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/ListTemplates">AWS
   * API Reference</a></p>
   */
  virtual Model::ListTemplatesOutcome ListTemplates(const Model::ListTemplatesRequest& request = {}) const;

  /**
   * A Callable wrapper for ListTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListTemplatesRequestT = Model::ListTemplatesRequest>
  Model::ListTemplatesOutcomeCallable ListTemplatesCallable(const ListTemplatesRequestT& request = {}) const {
    return SubmitCallable(&NetworkSecurityManagerClient::ListTemplates, request);
  }

  /**
   * An Async wrapper for ListTemplates that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListTemplatesRequestT = Model::ListTemplatesRequest>
  void ListTemplatesAsync(const ListTemplatesResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                          const ListTemplatesRequestT& request = {}) const {
    return SubmitAsync(&NetworkSecurityManagerClient::ListTemplates, request, handler, context);
  }

  /**
   * <p>Sets the AWS account that serves as an AWS Network Security Manager
   * administrator account, and optionally configures the scope of resources that the
   * administrator can manage.</p> <p>You can't set an administrator account again
   * immediately after you remove it, or while the service creates its service-linked
   * role. Retry the request after a few minutes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/PutAdminAccount">AWS
   * API Reference</a></p>
   */
  virtual Model::PutAdminAccountOutcome PutAdminAccount(const Model::PutAdminAccountRequest& request) const;

  /**
   * A Callable wrapper for PutAdminAccount that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename PutAdminAccountRequestT = Model::PutAdminAccountRequest>
  Model::PutAdminAccountOutcomeCallable PutAdminAccountCallable(const PutAdminAccountRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::PutAdminAccount, request);
  }

  /**
   * An Async wrapper for PutAdminAccount that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename PutAdminAccountRequestT = Model::PutAdminAccountRequest>
  void PutAdminAccountAsync(const PutAdminAccountRequestT& request, const PutAdminAccountResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::PutAdminAccount, request, handler, context);
  }

  /**
   * <p>Adds or overwrites the specified tags on the given resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/TagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

  /**
   * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::TagResource, request);
  }

  /**
   * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename TagResourceRequestT = Model::TagResourceRequest>
  void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::TagResource, request, handler, context);
  }

  /**
   * <p>Removes the specified tags from the given resource.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UntagResource">AWS
   * API Reference</a></p>
   */
  virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

  /**
   * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UntagResource, request);
  }

  /**
   * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UntagResourceRequestT = Model::UntagResourceRequest>
  void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UntagResource, request, handler, context);
  }

  /**
   * <p>Updates the specified deployment. To prevent conflicting concurrent updates,
   * provide the current <code>updateToken</code>. Use <code>isPublished</code> to
   * publish the update or keep the deployment as a draft.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UpdateDeployment">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDeploymentOutcome UpdateDeployment(const Model::UpdateDeploymentRequest& request) const;

  /**
   * A Callable wrapper for UpdateDeployment that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
  Model::UpdateDeploymentOutcomeCallable UpdateDeploymentCallable(const UpdateDeploymentRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UpdateDeployment, request);
  }

  /**
   * An Async wrapper for UpdateDeployment that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateDeploymentRequestT = Model::UpdateDeploymentRequest>
  void UpdateDeploymentAsync(const UpdateDeploymentRequestT& request, const UpdateDeploymentResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UpdateDeployment, request, handler, context);
  }

  /**
   * <p>Updates the specified policy. To prevent conflicting concurrent updates,
   * provide the current <code>updateToken</code>. Use <code>isPublished</code> to
   * publish the update or keep the policy as a draft.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UpdatePolicy">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

  /**
   * A Callable wrapper for UpdatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const UpdatePolicyRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UpdatePolicy, request);
  }

  /**
   * An Async wrapper for UpdatePolicy that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
  void UpdatePolicyAsync(const UpdatePolicyRequestT& request, const UpdatePolicyResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UpdatePolicy, request, handler, context);
  }

  /**
   * <p>Updates the specified rule. To prevent conflicting concurrent updates,
   * provide the current <code>updateToken</code>. Use <code>isPublished</code> to
   * publish the update or keep the rule as a draft.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UpdateRule">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateRuleOutcome UpdateRule(const Model::UpdateRuleRequest& request) const;

  /**
   * A Callable wrapper for UpdateRule that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateRuleRequestT = Model::UpdateRuleRequest>
  Model::UpdateRuleOutcomeCallable UpdateRuleCallable(const UpdateRuleRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UpdateRule, request);
  }

  /**
   * An Async wrapper for UpdateRule that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateRuleRequestT = Model::UpdateRuleRequest>
  void UpdateRuleAsync(const UpdateRuleRequestT& request, const UpdateRuleResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UpdateRule, request, handler, context);
  }

  /**
   * <p>Updates the specified scope. To prevent conflicting concurrent updates,
   * provide the current <code>updateToken</code>. Use <code>isPublished</code> to
   * publish the update or keep the scope as a draft.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UpdateScope">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateScopeOutcome UpdateScope(const Model::UpdateScopeRequest& request) const;

  /**
   * A Callable wrapper for UpdateScope that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateScopeRequestT = Model::UpdateScopeRequest>
  Model::UpdateScopeOutcomeCallable UpdateScopeCallable(const UpdateScopeRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UpdateScope, request);
  }

  /**
   * An Async wrapper for UpdateScope that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateScopeRequestT = Model::UpdateScopeRequest>
  void UpdateScopeAsync(const UpdateScopeRequestT& request, const UpdateScopeResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UpdateScope, request, handler, context);
  }

  /**
   * <p>Updates the specified template. To prevent conflicting concurrent updates,
   * provide the current <code>updateToken</code>. Use <code>isPublished</code> to
   * publish the update or keep the template as a draft.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-security-manager-2025-10-30/UpdateTemplate">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateTemplateOutcome UpdateTemplate(const Model::UpdateTemplateRequest& request) const;

  /**
   * A Callable wrapper for UpdateTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
  Model::UpdateTemplateOutcomeCallable UpdateTemplateCallable(const UpdateTemplateRequestT& request) const {
    return SubmitCallable(&NetworkSecurityManagerClient::UpdateTemplate, request);
  }

  /**
   * An Async wrapper for UpdateTemplate that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateTemplateRequestT = Model::UpdateTemplateRequest>
  void UpdateTemplateAsync(const UpdateTemplateRequestT& request, const UpdateTemplateResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&NetworkSecurityManagerClient::UpdateTemplate, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<NetworkSecurityManagerEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<NetworkSecurityManagerClient>;
  void init(const NetworkSecurityManagerClientConfiguration& clientConfiguration);

  typedef Aws::Utils::Outcome<Aws::AmazonWebServiceResult<RESPONSE>, NetworkSecurityManagerError> InvokeOperationOutcome;

  InvokeOperationOutcome InvokeServiceOperation(const AmazonWebServiceRequest& request,
                                                const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
                                                Aws::Http::HttpMethod httpMethod) const;

  NetworkSecurityManagerClientConfiguration m_clientConfiguration;
  std::shared_ptr<NetworkSecurityManagerEndpointProviderBase> m_endpointProvider;
};

}  // namespace NetworkSecurityManager
}  // namespace Aws
