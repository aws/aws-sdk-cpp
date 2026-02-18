/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/wickr/WickrPaginationBase.h>
#include <aws/wickr/WickrServiceClientModel.h>
#include <aws/wickr/Wickr_EXPORTS.h>

namespace Aws {
namespace Wickr {
/**
 * <p>Welcome to the <i>Amazon Web Services Wickr API Reference</i>.</p> <p>The
 * Amazon Web Services Wickr application programming interface (API) is designed
 * for administrators to perform key tasks, such as creating and managing Amazon
 * Web Services Wickr, networks, users, security groups, bots and more. This guide
 * provides detailed information about the Amazon Web Services Wickr API, including
 * operations, types, inputs and outputs, and error codes. You can use an Amazon
 * Web Services SDK, the Amazon Web Services Command Line Interface (Amazon Web
 * Services CLI, or the REST API to make API calls for Amazon Web Services Wickr.
 * </p> <p> <i>Using Amazon Web Services SDK</i> </p> <p>The SDK clients
 * authenticate your requests by using access keys that you provide. For more
 * information, see <a
 * href="https://docs.aws.amazon.com/sdkref/latest/guide/access.html">Authentication
 * and access using Amazon Web Services SDKs and tools</a> in the <i>Amazon Web
 * Services SDKs and Tools Reference Guide</i>. </p> <p> <i>Using Amazon Web
 * Services CLI</i> </p> <p>Use your access keys with the Amazon Web Services CLI
 * to make API calls. For more information about setting up the Amazon Web Services
 * CLI, see <a
 * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-chap-getting-started.html">Getting
 * started with the Amazon Web Services CLI</a> in the <i>Amazon Web Services
 * Command Line Interface User Guide for Version 2</i>. </p> <p> <i>Using REST
 * APIs</i> </p> <p>If you use REST to make API calls, you must authenticate your
 * request by providing a signature. Amazon Web Services Wickr supports Signature
 * Version 4. For more information, see <a
 * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_sigv.html">Amazon
 * Web Services Signature Version 4 for API requests</a> in the <i>Amazon Web
 * Services Identity and Access Management User Guide</i>. </p> <p>Access and
 * permissions to the APIs can be controlled by Amazon Web Services Identity and
 * Access Management. The managed policy <a
 * href="https://docs.aws.amazon.com/wickr/latest/adminguide/security-iam-awsmanpol.html#security-iam-awsmanpol-AWSWickrFullAccess">Amazon
 * Web ServicesWickrFullAccess</a> grants full administrative permission to the
 * Amazon Web Services Wickr service APIs. For more information on restricting
 * access to specific operations, see <a
 * href="https://docs.aws.amazon.com/wickr/latest/adminguide/security-iam.html">Identity
 * and access management for Amazon Web Services Wickr </a> in the <i>Amazon Web
 * Services Wickr Administration Guide</i>. </p> <p> <i>Types of Errors</i>:</p>
 * <p>The Amazon Web Services Wickr APIs provide an HTTP interface. HTTP defines
 * ranges of HTTP Status Codes for different types of error responses.</p> <ol>
 * <li> <p>Client errors are indicated by HTTP Status Code class of 4xx</p> </li>
 * <li> <p>Service errors are indicated by HTTP Status Code class of 5xx</p> </li>
 * </ol> <p>In this reference guide, the documentation for each API has an Errors
 * section that includes a brief discussion about HTTP status codes. We recommend
 * looking there as part of your investigation when you get an error.</p>
 */
class AWS_WICKR_API WickrClient : public Aws::Client::AWSJsonClient,
                                  public Aws::Client::ClientWithAsyncTemplateMethods<WickrClient>,
                                  public WickrPaginationBase<WickrClient> {
 public:
  typedef Aws::Client::AWSJsonClient BASECLASS;
  static const char* GetServiceName();
  static const char* GetAllocationTag();

  typedef WickrClientConfiguration ClientConfigurationType;
  typedef WickrEndpointProvider EndpointProviderType;

  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  WickrClient(const Aws::Wickr::WickrClientConfiguration& clientConfiguration = Aws::Wickr::WickrClientConfiguration(),
              std::shared_ptr<WickrEndpointProviderBase> endpointProvider = nullptr);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  WickrClient(const Aws::Auth::AWSCredentials& credentials, std::shared_ptr<WickrEndpointProviderBase> endpointProvider = nullptr,
              const Aws::Wickr::WickrClientConfiguration& clientConfiguration = Aws::Wickr::WickrClientConfiguration());

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  WickrClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
              std::shared_ptr<WickrEndpointProviderBase> endpointProvider = nullptr,
              const Aws::Wickr::WickrClientConfiguration& clientConfiguration = Aws::Wickr::WickrClientConfiguration());

  /* Legacy constructors due deprecation */
  /**
   * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client
   * config is not specified, it will be initialized to default values.
   */
  WickrClient(const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
   * is not specified, it will be initialized to default values.
   */
  WickrClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration);

  /**
   * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
   * the default http client factory will be used
   */
  WickrClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
              const Aws::Client::ClientConfiguration& clientConfiguration);

  /* End of legacy constructors due deprecation */
  virtual ~WickrClient();

  /**
   * <p>Creates multiple users in a specified Wickr network. This operation allows
   * you to provision multiple user accounts simultaneously, optionally specifying
   * security groups, and validation requirements for each user.</p>  <p>
   * <code>codeValidation</code>, <code>inviteCode</code>, and
   * <code>inviteCodeTtl</code> are restricted to networks under preview only.</p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchCreateUser">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchCreateUserOutcome BatchCreateUser(const Model::BatchCreateUserRequest& request) const;

  /**
   * A Callable wrapper for BatchCreateUser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename BatchCreateUserRequestT = Model::BatchCreateUserRequest>
  Model::BatchCreateUserOutcomeCallable BatchCreateUserCallable(const BatchCreateUserRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchCreateUser, request);
  }

  /**
   * An Async wrapper for BatchCreateUser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename BatchCreateUserRequestT = Model::BatchCreateUserRequest>
  void BatchCreateUserAsync(const BatchCreateUserRequestT& request, const BatchCreateUserResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchCreateUser, request, handler, context);
  }

  /**
   * <p>Deletes multiple users from a specified Wickr network. This operation
   * permanently removes user accounts and their associated data from the
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchDeleteUser">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchDeleteUserOutcome BatchDeleteUser(const Model::BatchDeleteUserRequest& request) const;

  /**
   * A Callable wrapper for BatchDeleteUser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename BatchDeleteUserRequestT = Model::BatchDeleteUserRequest>
  Model::BatchDeleteUserOutcomeCallable BatchDeleteUserCallable(const BatchDeleteUserRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchDeleteUser, request);
  }

  /**
   * An Async wrapper for BatchDeleteUser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename BatchDeleteUserRequestT = Model::BatchDeleteUserRequest>
  void BatchDeleteUserAsync(const BatchDeleteUserRequestT& request, const BatchDeleteUserResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchDeleteUser, request, handler, context);
  }

  /**
   * <p>Looks up multiple user usernames from their unique username hashes (unames).
   * This operation allows you to retrieve the email addresses associated with a list
   * of username hashes.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchLookupUserUname">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchLookupUserUnameOutcome BatchLookupUserUname(const Model::BatchLookupUserUnameRequest& request) const;

  /**
   * A Callable wrapper for BatchLookupUserUname that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchLookupUserUnameRequestT = Model::BatchLookupUserUnameRequest>
  Model::BatchLookupUserUnameOutcomeCallable BatchLookupUserUnameCallable(const BatchLookupUserUnameRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchLookupUserUname, request);
  }

  /**
   * An Async wrapper for BatchLookupUserUname that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchLookupUserUnameRequestT = Model::BatchLookupUserUnameRequest>
  void BatchLookupUserUnameAsync(const BatchLookupUserUnameRequestT& request, const BatchLookupUserUnameResponseReceivedHandler& handler,
                                 const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchLookupUserUname, request, handler, context);
  }

  /**
   * <p>Resends invitation codes to multiple users who have pending invitations in a
   * Wickr network. This operation is useful when users haven't accepted their
   * initial invitations or when invitations have expired.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchReinviteUser">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchReinviteUserOutcome BatchReinviteUser(const Model::BatchReinviteUserRequest& request) const;

  /**
   * A Callable wrapper for BatchReinviteUser that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchReinviteUserRequestT = Model::BatchReinviteUserRequest>
  Model::BatchReinviteUserOutcomeCallable BatchReinviteUserCallable(const BatchReinviteUserRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchReinviteUser, request);
  }

  /**
   * An Async wrapper for BatchReinviteUser that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename BatchReinviteUserRequestT = Model::BatchReinviteUserRequest>
  void BatchReinviteUserAsync(const BatchReinviteUserRequestT& request, const BatchReinviteUserResponseReceivedHandler& handler,
                              const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchReinviteUser, request, handler, context);
  }

  /**
   * <p>Resets multiple devices for a specific user in a Wickr network. This
   * operation forces the selected devices to log out and requires users to
   * re-authenticate, which is useful for security purposes or when devices need to
   * be revoked.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchResetDevicesForUser">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchResetDevicesForUserOutcome BatchResetDevicesForUser(const Model::BatchResetDevicesForUserRequest& request) const;

  /**
   * A Callable wrapper for BatchResetDevicesForUser that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename BatchResetDevicesForUserRequestT = Model::BatchResetDevicesForUserRequest>
  Model::BatchResetDevicesForUserOutcomeCallable BatchResetDevicesForUserCallable(const BatchResetDevicesForUserRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchResetDevicesForUser, request);
  }

  /**
   * An Async wrapper for BatchResetDevicesForUser that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchResetDevicesForUserRequestT = Model::BatchResetDevicesForUserRequest>
  void BatchResetDevicesForUserAsync(const BatchResetDevicesForUserRequestT& request,
                                     const BatchResetDevicesForUserResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchResetDevicesForUser, request, handler, context);
  }

  /**
   * <p>Suspends or unsuspends multiple users in a Wickr network. Suspended users
   * cannot access the network until they are unsuspended. This operation is useful
   * for temporarily restricting access without deleting user accounts.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/BatchToggleUserSuspendStatus">AWS
   * API Reference</a></p>
   */
  virtual Model::BatchToggleUserSuspendStatusOutcome BatchToggleUserSuspendStatus(
      const Model::BatchToggleUserSuspendStatusRequest& request) const;

  /**
   * A Callable wrapper for BatchToggleUserSuspendStatus that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename BatchToggleUserSuspendStatusRequestT = Model::BatchToggleUserSuspendStatusRequest>
  Model::BatchToggleUserSuspendStatusOutcomeCallable BatchToggleUserSuspendStatusCallable(
      const BatchToggleUserSuspendStatusRequestT& request) const {
    return SubmitCallable(&WickrClient::BatchToggleUserSuspendStatus, request);
  }

  /**
   * An Async wrapper for BatchToggleUserSuspendStatus that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename BatchToggleUserSuspendStatusRequestT = Model::BatchToggleUserSuspendStatusRequest>
  void BatchToggleUserSuspendStatusAsync(const BatchToggleUserSuspendStatusRequestT& request,
                                         const BatchToggleUserSuspendStatusResponseReceivedHandler& handler,
                                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::BatchToggleUserSuspendStatus, request, handler, context);
  }

  /**
   * <p>Creates a new bot in a specified Wickr network. Bots are automated accounts
   * that can send and receive messages, enabling integration with external systems
   * and automation of tasks.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CreateBot">AWS API
   * Reference</a></p>
   */
  virtual Model::CreateBotOutcome CreateBot(const Model::CreateBotRequest& request) const;

  /**
   * A Callable wrapper for CreateBot that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateBotRequestT = Model::CreateBotRequest>
  Model::CreateBotOutcomeCallable CreateBotCallable(const CreateBotRequestT& request) const {
    return SubmitCallable(&WickrClient::CreateBot, request);
  }

  /**
   * An Async wrapper for CreateBot that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateBotRequestT = Model::CreateBotRequest>
  void CreateBotAsync(const CreateBotRequestT& request, const CreateBotResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::CreateBot, request, handler, context);
  }

  /**
   * <p>Creates a data retention bot in a Wickr network. Data retention bots are
   * specialized bots that handle message archiving and compliance by capturing and
   * storing messages for regulatory or organizational requirements.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CreateDataRetentionBot">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDataRetentionBotOutcome CreateDataRetentionBot(const Model::CreateDataRetentionBotRequest& request) const;

  /**
   * A Callable wrapper for CreateDataRetentionBot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateDataRetentionBotRequestT = Model::CreateDataRetentionBotRequest>
  Model::CreateDataRetentionBotOutcomeCallable CreateDataRetentionBotCallable(const CreateDataRetentionBotRequestT& request) const {
    return SubmitCallable(&WickrClient::CreateDataRetentionBot, request);
  }

  /**
   * An Async wrapper for CreateDataRetentionBot that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename CreateDataRetentionBotRequestT = Model::CreateDataRetentionBotRequest>
  void CreateDataRetentionBotAsync(const CreateDataRetentionBotRequestT& request,
                                   const CreateDataRetentionBotResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::CreateDataRetentionBot, request, handler, context);
  }

  /**
   * <p>Creates a new challenge password for the data retention bot. This password is
   * used for authentication when the bot connects to the network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CreateDataRetentionBotChallenge">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateDataRetentionBotChallengeOutcome CreateDataRetentionBotChallenge(
      const Model::CreateDataRetentionBotChallengeRequest& request) const;

  /**
   * A Callable wrapper for CreateDataRetentionBotChallenge that returns a future to the operation so that it can be executed in parallel to
   * other requests.
   */
  template <typename CreateDataRetentionBotChallengeRequestT = Model::CreateDataRetentionBotChallengeRequest>
  Model::CreateDataRetentionBotChallengeOutcomeCallable CreateDataRetentionBotChallengeCallable(
      const CreateDataRetentionBotChallengeRequestT& request) const {
    return SubmitCallable(&WickrClient::CreateDataRetentionBotChallenge, request);
  }

  /**
   * An Async wrapper for CreateDataRetentionBotChallenge that queues the request into a thread executor and triggers associated callback
   * when operation has finished.
   */
  template <typename CreateDataRetentionBotChallengeRequestT = Model::CreateDataRetentionBotChallengeRequest>
  void CreateDataRetentionBotChallengeAsync(const CreateDataRetentionBotChallengeRequestT& request,
                                            const CreateDataRetentionBotChallengeResponseReceivedHandler& handler,
                                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::CreateDataRetentionBotChallenge, request, handler, context);
  }

  /**
   * <p>Creates a new Wickr network with specified access level and configuration.
   * This operation provisions a new communication network for your
   * organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CreateNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateNetworkOutcome CreateNetwork(const Model::CreateNetworkRequest& request) const;

  /**
   * A Callable wrapper for CreateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename CreateNetworkRequestT = Model::CreateNetworkRequest>
  Model::CreateNetworkOutcomeCallable CreateNetworkCallable(const CreateNetworkRequestT& request) const {
    return SubmitCallable(&WickrClient::CreateNetwork, request);
  }

  /**
   * An Async wrapper for CreateNetwork that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename CreateNetworkRequestT = Model::CreateNetworkRequest>
  void CreateNetworkAsync(const CreateNetworkRequestT& request, const CreateNetworkResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::CreateNetwork, request, handler, context);
  }

  /**
   * <p>Creates a new security group in a Wickr network. Security groups allow you to
   * organize users and control their permissions, features, and security
   * settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/CreateSecurityGroup">AWS
   * API Reference</a></p>
   */
  virtual Model::CreateSecurityGroupOutcome CreateSecurityGroup(const Model::CreateSecurityGroupRequest& request) const;

  /**
   * A Callable wrapper for CreateSecurityGroup that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename CreateSecurityGroupRequestT = Model::CreateSecurityGroupRequest>
  Model::CreateSecurityGroupOutcomeCallable CreateSecurityGroupCallable(const CreateSecurityGroupRequestT& request) const {
    return SubmitCallable(&WickrClient::CreateSecurityGroup, request);
  }

  /**
   * An Async wrapper for CreateSecurityGroup that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename CreateSecurityGroupRequestT = Model::CreateSecurityGroupRequest>
  void CreateSecurityGroupAsync(const CreateSecurityGroupRequestT& request, const CreateSecurityGroupResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::CreateSecurityGroup, request, handler, context);
  }

  /**
   * <p>Deletes a bot from a specified Wickr network. This operation permanently
   * removes the bot account and its associated data from the network.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/DeleteBot">AWS API
   * Reference</a></p>
   */
  virtual Model::DeleteBotOutcome DeleteBot(const Model::DeleteBotRequest& request) const;

  /**
   * A Callable wrapper for DeleteBot that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteBotRequestT = Model::DeleteBotRequest>
  Model::DeleteBotOutcomeCallable DeleteBotCallable(const DeleteBotRequestT& request) const {
    return SubmitCallable(&WickrClient::DeleteBot, request);
  }

  /**
   * An Async wrapper for DeleteBot that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteBotRequestT = Model::DeleteBotRequest>
  void DeleteBotAsync(const DeleteBotRequestT& request, const DeleteBotResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::DeleteBot, request, handler, context);
  }

  /**
   * <p>Deletes the data retention bot from a Wickr network. This operation
   * permanently removes the bot and all its associated data from the
   * database.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/DeleteDataRetentionBot">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteDataRetentionBotOutcome DeleteDataRetentionBot(const Model::DeleteDataRetentionBotRequest& request) const;

  /**
   * A Callable wrapper for DeleteDataRetentionBot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteDataRetentionBotRequestT = Model::DeleteDataRetentionBotRequest>
  Model::DeleteDataRetentionBotOutcomeCallable DeleteDataRetentionBotCallable(const DeleteDataRetentionBotRequestT& request) const {
    return SubmitCallable(&WickrClient::DeleteDataRetentionBot, request);
  }

  /**
   * An Async wrapper for DeleteDataRetentionBot that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename DeleteDataRetentionBotRequestT = Model::DeleteDataRetentionBotRequest>
  void DeleteDataRetentionBotAsync(const DeleteDataRetentionBotRequestT& request,
                                   const DeleteDataRetentionBotResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::DeleteDataRetentionBot, request, handler, context);
  }

  /**
   * <p>Deletes a Wickr network and all its associated resources, including users,
   * bots, security groups, and settings. This operation is permanent and cannot be
   * undone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/DeleteNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteNetworkOutcome DeleteNetwork(const Model::DeleteNetworkRequest& request) const;

  /**
   * A Callable wrapper for DeleteNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
  Model::DeleteNetworkOutcomeCallable DeleteNetworkCallable(const DeleteNetworkRequestT& request) const {
    return SubmitCallable(&WickrClient::DeleteNetwork, request);
  }

  /**
   * An Async wrapper for DeleteNetwork that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename DeleteNetworkRequestT = Model::DeleteNetworkRequest>
  void DeleteNetworkAsync(const DeleteNetworkRequestT& request, const DeleteNetworkResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::DeleteNetwork, request, handler, context);
  }

  /**
   * <p>Deletes a security group from a Wickr network. This operation cannot be
   * performed on the default security group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/DeleteSecurityGroup">AWS
   * API Reference</a></p>
   */
  virtual Model::DeleteSecurityGroupOutcome DeleteSecurityGroup(const Model::DeleteSecurityGroupRequest& request) const;

  /**
   * A Callable wrapper for DeleteSecurityGroup that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename DeleteSecurityGroupRequestT = Model::DeleteSecurityGroupRequest>
  Model::DeleteSecurityGroupOutcomeCallable DeleteSecurityGroupCallable(const DeleteSecurityGroupRequestT& request) const {
    return SubmitCallable(&WickrClient::DeleteSecurityGroup, request);
  }

  /**
   * An Async wrapper for DeleteSecurityGroup that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename DeleteSecurityGroupRequestT = Model::DeleteSecurityGroupRequest>
  void DeleteSecurityGroupAsync(const DeleteSecurityGroupRequestT& request, const DeleteSecurityGroupResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::DeleteSecurityGroup, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific bot in a Wickr network,
   * including its status, group membership, and authentication
   * details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetBot">AWS API
   * Reference</a></p>
   */
  virtual Model::GetBotOutcome GetBot(const Model::GetBotRequest& request) const;

  /**
   * A Callable wrapper for GetBot that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBotRequestT = Model::GetBotRequest>
  Model::GetBotOutcomeCallable GetBotCallable(const GetBotRequestT& request) const {
    return SubmitCallable(&WickrClient::GetBot, request);
  }

  /**
   * An Async wrapper for GetBot that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBotRequestT = Model::GetBotRequest>
  void GetBotAsync(const GetBotRequestT& request, const GetBotResponseReceivedHandler& handler,
                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetBot, request, handler, context);
  }

  /**
   * <p>Retrieves the count of bots in a Wickr network, categorized by their status
   * (pending, active, and total).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetBotsCount">AWS
   * API Reference</a></p>
   */
  virtual Model::GetBotsCountOutcome GetBotsCount(const Model::GetBotsCountRequest& request) const;

  /**
   * A Callable wrapper for GetBotsCount that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetBotsCountRequestT = Model::GetBotsCountRequest>
  Model::GetBotsCountOutcomeCallable GetBotsCountCallable(const GetBotsCountRequestT& request) const {
    return SubmitCallable(&WickrClient::GetBotsCount, request);
  }

  /**
   * An Async wrapper for GetBotsCount that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetBotsCountRequestT = Model::GetBotsCountRequest>
  void GetBotsCountAsync(const GetBotsCountRequestT& request, const GetBotsCountResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetBotsCount, request, handler, context);
  }

  /**
   * <p>Retrieves information about the data retention bot in a Wickr network,
   * including its status and whether the data retention service is
   * enabled.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetDataRetentionBot">AWS
   * API Reference</a></p>
   */
  virtual Model::GetDataRetentionBotOutcome GetDataRetentionBot(const Model::GetDataRetentionBotRequest& request) const;

  /**
   * A Callable wrapper for GetDataRetentionBot that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetDataRetentionBotRequestT = Model::GetDataRetentionBotRequest>
  Model::GetDataRetentionBotOutcomeCallable GetDataRetentionBotCallable(const GetDataRetentionBotRequestT& request) const {
    return SubmitCallable(&WickrClient::GetDataRetentionBot, request);
  }

  /**
   * An Async wrapper for GetDataRetentionBot that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetDataRetentionBotRequestT = Model::GetDataRetentionBotRequest>
  void GetDataRetentionBotAsync(const GetDataRetentionBotRequestT& request, const GetDataRetentionBotResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetDataRetentionBot, request, handler, context);
  }

  /**
   * <p>Retrieves historical guest user count data for a Wickr network, showing the
   * number of guest users per billing period over the past 90 days.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetGuestUserHistoryCount">AWS
   * API Reference</a></p>
   */
  virtual Model::GetGuestUserHistoryCountOutcome GetGuestUserHistoryCount(const Model::GetGuestUserHistoryCountRequest& request) const;

  /**
   * A Callable wrapper for GetGuestUserHistoryCount that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetGuestUserHistoryCountRequestT = Model::GetGuestUserHistoryCountRequest>
  Model::GetGuestUserHistoryCountOutcomeCallable GetGuestUserHistoryCountCallable(const GetGuestUserHistoryCountRequestT& request) const {
    return SubmitCallable(&WickrClient::GetGuestUserHistoryCount, request);
  }

  /**
   * An Async wrapper for GetGuestUserHistoryCount that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename GetGuestUserHistoryCountRequestT = Model::GetGuestUserHistoryCountRequest>
  void GetGuestUserHistoryCountAsync(const GetGuestUserHistoryCountRequestT& request,
                                     const GetGuestUserHistoryCountResponseReceivedHandler& handler,
                                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetGuestUserHistoryCount, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific Wickr network, including its
   * configuration, access level, and status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNetworkOutcome GetNetwork(const Model::GetNetworkRequest& request) const;

  /**
   * A Callable wrapper for GetNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetNetworkRequestT = Model::GetNetworkRequest>
  Model::GetNetworkOutcomeCallable GetNetworkCallable(const GetNetworkRequestT& request) const {
    return SubmitCallable(&WickrClient::GetNetwork, request);
  }

  /**
   * An Async wrapper for GetNetwork that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetNetworkRequestT = Model::GetNetworkRequest>
  void GetNetworkAsync(const GetNetworkRequestT& request, const GetNetworkResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetNetwork, request, handler, context);
  }

  /**
   * <p>Retrieves all network-level settings for a Wickr network, including client
   * metrics, data retention, and other configuration options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetNetworkSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::GetNetworkSettingsOutcome GetNetworkSettings(const Model::GetNetworkSettingsRequest& request) const;

  /**
   * A Callable wrapper for GetNetworkSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetNetworkSettingsRequestT = Model::GetNetworkSettingsRequest>
  Model::GetNetworkSettingsOutcomeCallable GetNetworkSettingsCallable(const GetNetworkSettingsRequestT& request) const {
    return SubmitCallable(&WickrClient::GetNetworkSettings, request);
  }

  /**
   * An Async wrapper for GetNetworkSettings that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetNetworkSettingsRequestT = Model::GetNetworkSettingsRequest>
  void GetNetworkSettingsAsync(const GetNetworkSettingsRequestT& request, const GetNetworkSettingsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetNetworkSettings, request, handler, context);
  }

  /**
   * <p>Retrieves the OpenID Connect (OIDC) configuration for a Wickr network,
   * including SSO settings and optional token information if access token parameters
   * are provided.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetOidcInfo">AWS
   * API Reference</a></p>
   */
  virtual Model::GetOidcInfoOutcome GetOidcInfo(const Model::GetOidcInfoRequest& request) const;

  /**
   * A Callable wrapper for GetOidcInfo that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetOidcInfoRequestT = Model::GetOidcInfoRequest>
  Model::GetOidcInfoOutcomeCallable GetOidcInfoCallable(const GetOidcInfoRequestT& request) const {
    return SubmitCallable(&WickrClient::GetOidcInfo, request);
  }

  /**
   * An Async wrapper for GetOidcInfo that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetOidcInfoRequestT = Model::GetOidcInfoRequest>
  void GetOidcInfoAsync(const GetOidcInfoRequestT& request, const GetOidcInfoResponseReceivedHandler& handler,
                        const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetOidcInfo, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific security group in a Wickr
   * network, including its settings, member counts, and configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetSecurityGroup">AWS
   * API Reference</a></p>
   */
  virtual Model::GetSecurityGroupOutcome GetSecurityGroup(const Model::GetSecurityGroupRequest& request) const;

  /**
   * A Callable wrapper for GetSecurityGroup that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename GetSecurityGroupRequestT = Model::GetSecurityGroupRequest>
  Model::GetSecurityGroupOutcomeCallable GetSecurityGroupCallable(const GetSecurityGroupRequestT& request) const {
    return SubmitCallable(&WickrClient::GetSecurityGroup, request);
  }

  /**
   * An Async wrapper for GetSecurityGroup that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename GetSecurityGroupRequestT = Model::GetSecurityGroupRequest>
  void GetSecurityGroupAsync(const GetSecurityGroupRequestT& request, const GetSecurityGroupResponseReceivedHandler& handler,
                             const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetSecurityGroup, request, handler, context);
  }

  /**
   * <p>Retrieves detailed information about a specific user in a Wickr network,
   * including their profile, status, and activity history.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetUser">AWS
   * API Reference</a></p>
   */
  virtual Model::GetUserOutcome GetUser(const Model::GetUserRequest& request) const;

  /**
   * A Callable wrapper for GetUser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetUserRequestT = Model::GetUserRequest>
  Model::GetUserOutcomeCallable GetUserCallable(const GetUserRequestT& request) const {
    return SubmitCallable(&WickrClient::GetUser, request);
  }

  /**
   * An Async wrapper for GetUser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetUserRequestT = Model::GetUserRequest>
  void GetUserAsync(const GetUserRequestT& request, const GetUserResponseReceivedHandler& handler,
                    const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetUser, request, handler, context);
  }

  /**
   * <p>Retrieves the count of users in a Wickr network, categorized by their status
   * (pending, active, rejected) and showing how many users can still be
   * added.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/GetUsersCount">AWS
   * API Reference</a></p>
   */
  virtual Model::GetUsersCountOutcome GetUsersCount(const Model::GetUsersCountRequest& request) const;

  /**
   * A Callable wrapper for GetUsersCount that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename GetUsersCountRequestT = Model::GetUsersCountRequest>
  Model::GetUsersCountOutcomeCallable GetUsersCountCallable(const GetUsersCountRequestT& request) const {
    return SubmitCallable(&WickrClient::GetUsersCount, request);
  }

  /**
   * An Async wrapper for GetUsersCount that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename GetUsersCountRequestT = Model::GetUsersCountRequest>
  void GetUsersCountAsync(const GetUsersCountRequestT& request, const GetUsersCountResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::GetUsersCount, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of guest users who have been blocked from a Wickr
   * network. You can filter and sort the results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListBlockedGuestUsers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBlockedGuestUsersOutcome ListBlockedGuestUsers(const Model::ListBlockedGuestUsersRequest& request) const;

  /**
   * A Callable wrapper for ListBlockedGuestUsers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListBlockedGuestUsersRequestT = Model::ListBlockedGuestUsersRequest>
  Model::ListBlockedGuestUsersOutcomeCallable ListBlockedGuestUsersCallable(const ListBlockedGuestUsersRequestT& request) const {
    return SubmitCallable(&WickrClient::ListBlockedGuestUsers, request);
  }

  /**
   * An Async wrapper for ListBlockedGuestUsers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListBlockedGuestUsersRequestT = Model::ListBlockedGuestUsersRequest>
  void ListBlockedGuestUsersAsync(const ListBlockedGuestUsersRequestT& request, const ListBlockedGuestUsersResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListBlockedGuestUsers, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of bots in a specified Wickr network. You can
   * filter and sort the results based on various criteria.</p><p><h3>See Also:</h3>
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListBots">AWS
   * API Reference</a></p>
   */
  virtual Model::ListBotsOutcome ListBots(const Model::ListBotsRequest& request) const;

  /**
   * A Callable wrapper for ListBots that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListBotsRequestT = Model::ListBotsRequest>
  Model::ListBotsOutcomeCallable ListBotsCallable(const ListBotsRequestT& request) const {
    return SubmitCallable(&WickrClient::ListBots, request);
  }

  /**
   * An Async wrapper for ListBots that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListBotsRequestT = Model::ListBotsRequest>
  void ListBotsAsync(const ListBotsRequestT& request, const ListBotsResponseReceivedHandler& handler,
                     const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListBots, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of devices associated with a specific user in a
   * Wickr network. This operation returns information about all devices where the
   * user has logged into Wickr.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListDevicesForUser">AWS
   * API Reference</a></p>
   */
  virtual Model::ListDevicesForUserOutcome ListDevicesForUser(const Model::ListDevicesForUserRequest& request) const;

  /**
   * A Callable wrapper for ListDevicesForUser that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListDevicesForUserRequestT = Model::ListDevicesForUserRequest>
  Model::ListDevicesForUserOutcomeCallable ListDevicesForUserCallable(const ListDevicesForUserRequestT& request) const {
    return SubmitCallable(&WickrClient::ListDevicesForUser, request);
  }

  /**
   * An Async wrapper for ListDevicesForUser that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListDevicesForUserRequestT = Model::ListDevicesForUserRequest>
  void ListDevicesForUserAsync(const ListDevicesForUserRequestT& request, const ListDevicesForUserResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListDevicesForUser, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of guest users who have communicated with your
   * Wickr network. Guest users are external users from federated networks who can
   * communicate with network members.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListGuestUsers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListGuestUsersOutcome ListGuestUsers(const Model::ListGuestUsersRequest& request) const;

  /**
   * A Callable wrapper for ListGuestUsers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListGuestUsersRequestT = Model::ListGuestUsersRequest>
  Model::ListGuestUsersOutcomeCallable ListGuestUsersCallable(const ListGuestUsersRequestT& request) const {
    return SubmitCallable(&WickrClient::ListGuestUsers, request);
  }

  /**
   * An Async wrapper for ListGuestUsers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListGuestUsersRequestT = Model::ListGuestUsersRequest>
  void ListGuestUsersAsync(const ListGuestUsersRequestT& request, const ListGuestUsersResponseReceivedHandler& handler,
                           const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListGuestUsers, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of all Wickr networks associated with your Amazon
   * Web Services account. You can sort the results by network ID or
   * name.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListNetworks">AWS
   * API Reference</a></p>
   */
  virtual Model::ListNetworksOutcome ListNetworks(const Model::ListNetworksRequest& request = {}) const;

  /**
   * A Callable wrapper for ListNetworks that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListNetworksRequestT = Model::ListNetworksRequest>
  Model::ListNetworksOutcomeCallable ListNetworksCallable(const ListNetworksRequestT& request = {}) const {
    return SubmitCallable(&WickrClient::ListNetworks, request);
  }

  /**
   * An Async wrapper for ListNetworks that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListNetworksRequestT = Model::ListNetworksRequest>
  void ListNetworksAsync(const ListNetworksResponseReceivedHandler& handler,
                         const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr,
                         const ListNetworksRequestT& request = {}) const {
    return SubmitAsync(&WickrClient::ListNetworks, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of users who belong to a specific security group
   * in a Wickr network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListSecurityGroupUsers">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSecurityGroupUsersOutcome ListSecurityGroupUsers(const Model::ListSecurityGroupUsersRequest& request) const;

  /**
   * A Callable wrapper for ListSecurityGroupUsers that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSecurityGroupUsersRequestT = Model::ListSecurityGroupUsersRequest>
  Model::ListSecurityGroupUsersOutcomeCallable ListSecurityGroupUsersCallable(const ListSecurityGroupUsersRequestT& request) const {
    return SubmitCallable(&WickrClient::ListSecurityGroupUsers, request);
  }

  /**
   * An Async wrapper for ListSecurityGroupUsers that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename ListSecurityGroupUsersRequestT = Model::ListSecurityGroupUsersRequest>
  void ListSecurityGroupUsersAsync(const ListSecurityGroupUsersRequestT& request,
                                   const ListSecurityGroupUsersResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListSecurityGroupUsers, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of security groups in a specified Wickr network.
   * You can sort the results by various criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListSecurityGroups">AWS
   * API Reference</a></p>
   */
  virtual Model::ListSecurityGroupsOutcome ListSecurityGroups(const Model::ListSecurityGroupsRequest& request) const;

  /**
   * A Callable wrapper for ListSecurityGroups that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename ListSecurityGroupsRequestT = Model::ListSecurityGroupsRequest>
  Model::ListSecurityGroupsOutcomeCallable ListSecurityGroupsCallable(const ListSecurityGroupsRequestT& request) const {
    return SubmitCallable(&WickrClient::ListSecurityGroups, request);
  }

  /**
   * An Async wrapper for ListSecurityGroups that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename ListSecurityGroupsRequestT = Model::ListSecurityGroupsRequest>
  void ListSecurityGroupsAsync(const ListSecurityGroupsRequestT& request, const ListSecurityGroupsResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListSecurityGroups, request, handler, context);
  }

  /**
   * <p>Retrieves a paginated list of users in a specified Wickr network. You can
   * filter and sort the results based on various criteria such as name, status, or
   * security group membership.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/ListUsers">AWS API
   * Reference</a></p>
   */
  virtual Model::ListUsersOutcome ListUsers(const Model::ListUsersRequest& request) const;

  /**
   * A Callable wrapper for ListUsers that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename ListUsersRequestT = Model::ListUsersRequest>
  Model::ListUsersOutcomeCallable ListUsersCallable(const ListUsersRequestT& request) const {
    return SubmitCallable(&WickrClient::ListUsers, request);
  }

  /**
   * An Async wrapper for ListUsers that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename ListUsersRequestT = Model::ListUsersRequest>
  void ListUsersAsync(const ListUsersRequestT& request, const ListUsersResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::ListUsers, request, handler, context);
  }

  /**
   * <p>Registers and saves an OpenID Connect (OIDC) configuration for a Wickr
   * network, enabling Single Sign-On (SSO) authentication through an identity
   * provider.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/RegisterOidcConfig">AWS
   * API Reference</a></p>
   */
  virtual Model::RegisterOidcConfigOutcome RegisterOidcConfig(const Model::RegisterOidcConfigRequest& request) const;

  /**
   * A Callable wrapper for RegisterOidcConfig that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RegisterOidcConfigRequestT = Model::RegisterOidcConfigRequest>
  Model::RegisterOidcConfigOutcomeCallable RegisterOidcConfigCallable(const RegisterOidcConfigRequestT& request) const {
    return SubmitCallable(&WickrClient::RegisterOidcConfig, request);
  }

  /**
   * An Async wrapper for RegisterOidcConfig that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename RegisterOidcConfigRequestT = Model::RegisterOidcConfigRequest>
  void RegisterOidcConfigAsync(const RegisterOidcConfigRequestT& request, const RegisterOidcConfigResponseReceivedHandler& handler,
                               const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::RegisterOidcConfig, request, handler, context);
  }

  /**
   * <p>Tests an OpenID Connect (OIDC) configuration for a Wickr network by
   * validating the connection to the identity provider and retrieving its supported
   * capabilities.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/RegisterOidcConfigTest">AWS
   * API Reference</a></p>
   */
  virtual Model::RegisterOidcConfigTestOutcome RegisterOidcConfigTest(const Model::RegisterOidcConfigTestRequest& request) const;

  /**
   * A Callable wrapper for RegisterOidcConfigTest that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename RegisterOidcConfigTestRequestT = Model::RegisterOidcConfigTestRequest>
  Model::RegisterOidcConfigTestOutcomeCallable RegisterOidcConfigTestCallable(const RegisterOidcConfigTestRequestT& request) const {
    return SubmitCallable(&WickrClient::RegisterOidcConfigTest, request);
  }

  /**
   * An Async wrapper for RegisterOidcConfigTest that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename RegisterOidcConfigTestRequestT = Model::RegisterOidcConfigTestRequest>
  void RegisterOidcConfigTestAsync(const RegisterOidcConfigTestRequestT& request,
                                   const RegisterOidcConfigTestResponseReceivedHandler& handler,
                                   const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::RegisterOidcConfigTest, request, handler, context);
  }

  /**
   * <p>Updates the properties of an existing bot in a Wickr network. This operation
   * allows you to modify the bot's display name, security group, password, or
   * suspension status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateBot">AWS API
   * Reference</a></p>
   */
  virtual Model::UpdateBotOutcome UpdateBot(const Model::UpdateBotRequest& request) const;

  /**
   * A Callable wrapper for UpdateBot that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateBotRequestT = Model::UpdateBotRequest>
  Model::UpdateBotOutcomeCallable UpdateBotCallable(const UpdateBotRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateBot, request);
  }

  /**
   * An Async wrapper for UpdateBot that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateBotRequestT = Model::UpdateBotRequest>
  void UpdateBotAsync(const UpdateBotRequestT& request, const UpdateBotResponseReceivedHandler& handler,
                      const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateBot, request, handler, context);
  }

  /**
   * <p>Updates the data retention bot settings, allowing you to enable or disable
   * the data retention service, or acknowledge the public key message.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateDataRetention">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateDataRetentionOutcome UpdateDataRetention(const Model::UpdateDataRetentionRequest& request) const;

  /**
   * A Callable wrapper for UpdateDataRetention that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateDataRetentionRequestT = Model::UpdateDataRetentionRequest>
  Model::UpdateDataRetentionOutcomeCallable UpdateDataRetentionCallable(const UpdateDataRetentionRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateDataRetention, request);
  }

  /**
   * An Async wrapper for UpdateDataRetention that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateDataRetentionRequestT = Model::UpdateDataRetentionRequest>
  void UpdateDataRetentionAsync(const UpdateDataRetentionRequestT& request, const UpdateDataRetentionResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateDataRetention, request, handler, context);
  }

  /**
   * <p>Updates the block status of a guest user in a Wickr network. This operation
   * allows you to block or unblock a guest user from accessing the
   * network.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateGuestUser">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateGuestUserOutcome UpdateGuestUser(const Model::UpdateGuestUserRequest& request) const;

  /**
   * A Callable wrapper for UpdateGuestUser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateGuestUserRequestT = Model::UpdateGuestUserRequest>
  Model::UpdateGuestUserOutcomeCallable UpdateGuestUserCallable(const UpdateGuestUserRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateGuestUser, request);
  }

  /**
   * An Async wrapper for UpdateGuestUser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateGuestUserRequestT = Model::UpdateGuestUserRequest>
  void UpdateGuestUserAsync(const UpdateGuestUserRequestT& request, const UpdateGuestUserResponseReceivedHandler& handler,
                            const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateGuestUser, request, handler, context);
  }

  /**
   * <p>Updates the properties of an existing Wickr network, such as its name or
   * encryption key configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateNetwork">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNetworkOutcome UpdateNetwork(const Model::UpdateNetworkRequest& request) const;

  /**
   * A Callable wrapper for UpdateNetwork that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateNetworkRequestT = Model::UpdateNetworkRequest>
  Model::UpdateNetworkOutcomeCallable UpdateNetworkCallable(const UpdateNetworkRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateNetwork, request);
  }

  /**
   * An Async wrapper for UpdateNetwork that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateNetworkRequestT = Model::UpdateNetworkRequest>
  void UpdateNetworkAsync(const UpdateNetworkRequestT& request, const UpdateNetworkResponseReceivedHandler& handler,
                          const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateNetwork, request, handler, context);
  }

  /**
   * <p>Updates network-level settings for a Wickr network. You can modify settings
   * such as client metrics, data retention, and other network-wide
   * options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateNetworkSettings">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateNetworkSettingsOutcome UpdateNetworkSettings(const Model::UpdateNetworkSettingsRequest& request) const;

  /**
   * A Callable wrapper for UpdateNetworkSettings that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateNetworkSettingsRequestT = Model::UpdateNetworkSettingsRequest>
  Model::UpdateNetworkSettingsOutcomeCallable UpdateNetworkSettingsCallable(const UpdateNetworkSettingsRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateNetworkSettings, request);
  }

  /**
   * An Async wrapper for UpdateNetworkSettings that queues the request into a thread executor and triggers associated callback when
   * operation has finished.
   */
  template <typename UpdateNetworkSettingsRequestT = Model::UpdateNetworkSettingsRequest>
  void UpdateNetworkSettingsAsync(const UpdateNetworkSettingsRequestT& request, const UpdateNetworkSettingsResponseReceivedHandler& handler,
                                  const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateNetworkSettings, request, handler, context);
  }

  /**
   * <p>Updates the properties of an existing security group in a Wickr network, such
   * as its name or settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateSecurityGroup">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateSecurityGroupOutcome UpdateSecurityGroup(const Model::UpdateSecurityGroupRequest& request) const;

  /**
   * A Callable wrapper for UpdateSecurityGroup that returns a future to the operation so that it can be executed in parallel to other
   * requests.
   */
  template <typename UpdateSecurityGroupRequestT = Model::UpdateSecurityGroupRequest>
  Model::UpdateSecurityGroupOutcomeCallable UpdateSecurityGroupCallable(const UpdateSecurityGroupRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateSecurityGroup, request);
  }

  /**
   * An Async wrapper for UpdateSecurityGroup that queues the request into a thread executor and triggers associated callback when operation
   * has finished.
   */
  template <typename UpdateSecurityGroupRequestT = Model::UpdateSecurityGroupRequest>
  void UpdateSecurityGroupAsync(const UpdateSecurityGroupRequestT& request, const UpdateSecurityGroupResponseReceivedHandler& handler,
                                const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateSecurityGroup, request, handler, context);
  }

  /**
   * <p>Updates the properties of an existing user in a Wickr network. This operation
   * allows you to modify the user's name, password, security group membership, and
   * invite code settings.</p>  <p> <code>codeValidation</code>,
   * <code>inviteCode</code>, and <code>inviteCodeTtl</code> are restricted to
   * networks under preview only.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wickr-2024-02-01/UpdateUser">AWS
   * API Reference</a></p>
   */
  virtual Model::UpdateUserOutcome UpdateUser(const Model::UpdateUserRequest& request) const;

  /**
   * A Callable wrapper for UpdateUser that returns a future to the operation so that it can be executed in parallel to other requests.
   */
  template <typename UpdateUserRequestT = Model::UpdateUserRequest>
  Model::UpdateUserOutcomeCallable UpdateUserCallable(const UpdateUserRequestT& request) const {
    return SubmitCallable(&WickrClient::UpdateUser, request);
  }

  /**
   * An Async wrapper for UpdateUser that queues the request into a thread executor and triggers associated callback when operation has
   * finished.
   */
  template <typename UpdateUserRequestT = Model::UpdateUserRequest>
  void UpdateUserAsync(const UpdateUserRequestT& request, const UpdateUserResponseReceivedHandler& handler,
                       const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const {
    return SubmitAsync(&WickrClient::UpdateUser, request, handler, context);
  }

  virtual void OverrideEndpoint(const Aws::String& endpoint);
  virtual std::shared_ptr<WickrEndpointProviderBase>& accessEndpointProvider();

 private:
  friend class Aws::Client::ClientWithAsyncTemplateMethods<WickrClient>;
  void init(const WickrClientConfiguration& clientConfiguration);

  WickrClientConfiguration m_clientConfiguration;
  std::shared_ptr<WickrEndpointProviderBase> m_endpointProvider;
};

}  // namespace Wickr
}  // namespace Aws
