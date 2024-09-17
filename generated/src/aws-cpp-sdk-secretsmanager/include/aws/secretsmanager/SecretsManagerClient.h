/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/secretsmanager/SecretsManager_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/secretsmanager/SecretsManagerServiceClientModel.h>

namespace Aws
{
namespace SecretsManager
{
  /**
   * <fullname>Amazon Web Services Secrets Manager</fullname> <p>Amazon Web Services
   * Secrets Manager provides a service to enable you to store, manage, and retrieve,
   * secrets.</p> <p>This guide provides descriptions of the Secrets Manager API. For
   * more information about using this service, see the <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/introduction.html">Amazon
   * Web Services Secrets Manager User Guide</a>.</p> <p> <b>API Version</b> </p>
   * <p>This version of the Secrets Manager API Reference documents the Secrets
   * Manager API version 2017-10-17.</p> <p>For a list of endpoints, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/asm_access.html#endpoints">Amazon
   * Web Services Secrets Manager endpoints</a>.</p> <p> <b>Support and Feedback for
   * Amazon Web Services Secrets Manager</b> </p> <p>We welcome your feedback. Send
   * your comments to <a
   * href="mailto:awssecretsmanager-feedback@amazon.com">awssecretsmanager-feedback@amazon.com</a>,
   * or post your feedback and questions in the <a
   * href="http://forums.aws.amazon.com/forum.jspa?forumID=296">Amazon Web Services
   * Secrets Manager Discussion Forum</a>. For more information about the Amazon Web
   * Services Discussion Forums, see <a
   * href="http://forums.aws.amazon.com/help.jspa">Forums Help</a>.</p> <p>
   * <b>Logging API Requests</b> </p> <p>Amazon Web Services Secrets Manager supports
   * Amazon Web Services CloudTrail, a service that records Amazon Web Services API
   * calls for your Amazon Web Services account and delivers log files to an Amazon
   * S3 bucket. By using information that's collected by Amazon Web Services
   * CloudTrail, you can determine the requests successfully made to Secrets Manager,
   * who made the request, when it was made, and so on. For more about Amazon Web
   * Services Secrets Manager and support for Amazon Web Services CloudTrail, see <a
   * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring.html#monitoring_cloudtrail">Logging
   * Amazon Web Services Secrets Manager Events with Amazon Web Services
   * CloudTrail</a> in the <i>Amazon Web Services Secrets Manager User Guide</i>. To
   * learn more about CloudTrail, including enabling it and find your log files, see
   * the <a
   * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/what_is_cloud_trail_top_level.html">Amazon
   * Web Services CloudTrail User Guide</a>.</p>
   */
  class AWS_SECRETSMANAGER_API SecretsManagerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<SecretsManagerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef SecretsManagerClientConfiguration ClientConfigurationType;
      typedef SecretsManagerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::SecretsManager::SecretsManagerClientConfiguration& clientConfiguration = Aws::SecretsManager::SecretsManagerClientConfiguration(),
                             std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::SecretsManager::SecretsManagerClientConfiguration& clientConfiguration = Aws::SecretsManager::SecretsManagerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecretsManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<SecretsManagerEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::SecretsManager::SecretsManagerClientConfiguration& clientConfiguration = Aws::SecretsManager::SecretsManagerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        SecretsManagerClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        SecretsManagerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~SecretsManagerClient();

        /**
         * <p>Retrieves the contents of the encrypted fields <code>SecretString</code> or
         * <code>SecretBinary</code> for up to 20 secrets. To retrieve a single secret,
         * call <a>GetSecretValue</a>. </p> <p>To choose which secrets to retrieve, you can
         * specify a list of secrets by name or ARN, or you can use filters. If Secrets
         * Manager encounters errors such as <code>AccessDeniedException</code> while
         * attempting to retrieve any of the secrets, you can see the errors in
         * <code>Errors</code> in the response.</p> <p>Secrets Manager generates CloudTrail
         * <code>GetSecretValue</code> log entries for each secret you request when you
         * call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:BatchGetSecretValue</code>, and you must have
         * <code>secretsmanager:GetSecretValue</code> for each secret. If you use filters,
         * you must also have <code>secretsmanager:ListSecrets</code>. If the secrets are
         * encrypted using customer-managed keys instead of the Amazon Web Services managed
         * key <code>aws/secretsmanager</code>, then you also need <code>kms:Decrypt</code>
         * permissions for the keys. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/BatchGetSecretValue">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetSecretValueOutcome BatchGetSecretValue(const Model::BatchGetSecretValueRequest& request = {}) const;

        /**
         * A Callable wrapper for BatchGetSecretValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetSecretValueRequestT = Model::BatchGetSecretValueRequest>
        Model::BatchGetSecretValueOutcomeCallable BatchGetSecretValueCallable(const BatchGetSecretValueRequestT& request = {}) const
        {
            return SubmitCallable(&SecretsManagerClient::BatchGetSecretValue, request);
        }

        /**
         * An Async wrapper for BatchGetSecretValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetSecretValueRequestT = Model::BatchGetSecretValueRequest>
        void BatchGetSecretValueAsync(const BatchGetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const BatchGetSecretValueRequestT& request = {}) const
        {
            return SubmitAsync(&SecretsManagerClient::BatchGetSecretValue, request, handler, context);
        }

        /**
         * <p>Turns off automatic rotation, and if a rotation is currently in progress,
         * cancels the rotation.</p> <p>If you cancel a rotation in progress, it can leave
         * the <code>VersionStage</code> labels in an unexpected state. You might need to
         * remove the staging label <code>AWSPENDING</code> from the partially created
         * version. You also need to determine whether to roll back to the previous version
         * of the secret by moving the staging label <code>AWSCURRENT</code> to the version
         * that has <code>AWSPENDING</code>. To determine which version has a specific
         * staging label, call <a>ListSecretVersionIds</a>. Then use
         * <a>UpdateSecretVersionStage</a> to change staging labels. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotate-secrets_how.html">How
         * rotation works</a>.</p> <p>To turn on automatic rotation again, call
         * <a>RotateSecret</a>.</p> <p>Secrets Manager generates a CloudTrail log entry
         * when you call this action. Do not include sensitive information in request
         * parameters because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:CancelRotateSecret</code>. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CancelRotateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelRotateSecretOutcome CancelRotateSecret(const Model::CancelRotateSecretRequest& request) const;

        /**
         * A Callable wrapper for CancelRotateSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CancelRotateSecretRequestT = Model::CancelRotateSecretRequest>
        Model::CancelRotateSecretOutcomeCallable CancelRotateSecretCallable(const CancelRotateSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::CancelRotateSecret, request);
        }

        /**
         * An Async wrapper for CancelRotateSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelRotateSecretRequestT = Model::CancelRotateSecretRequest>
        void CancelRotateSecretAsync(const CancelRotateSecretRequestT& request, const CancelRotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::CancelRotateSecret, request, handler, context);
        }

        /**
         * <p>Creates a new secret. A <i>secret</i> can be a password, a set of credentials
         * such as a user name and password, an OAuth token, or other secret information
         * that you store in an encrypted form in Secrets Manager. The secret also includes
         * the connection information to access a database or other service, which Secrets
         * Manager doesn't encrypt. A secret in Secrets Manager consists of both the
         * protected secret data and the important information needed to manage the
         * secret.</p> <p>For secrets that use <i>managed rotation</i>, you need to create
         * the secret through the managing service. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
         * Manager secrets managed by other Amazon Web Services services</a>. </p> <p>For
         * information about creating a secret in the console, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/manage_create-basic-secret.html">Create
         * a secret</a>.</p> <p>To create a secret, you can provide the secret value to be
         * encrypted in either the <code>SecretString</code> parameter or the
         * <code>SecretBinary</code> parameter, but not both. If you include
         * <code>SecretString</code> or <code>SecretBinary</code> then Secrets Manager
         * creates an initial secret version and automatically attaches the staging label
         * <code>AWSCURRENT</code> to it.</p> <p>For database credentials you want to
         * rotate, for Secrets Manager to be able to rotate the secret, you must make sure
         * the JSON you store in the <code>SecretString</code> matches the <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_secret_json_structure.html">JSON
         * structure of a database secret</a>.</p> <p>If you don't specify an KMS
         * encryption key, Secrets Manager uses the Amazon Web Services managed key
         * <code>aws/secretsmanager</code>. If this key doesn't already exist in your
         * account, then Secrets Manager creates it for you automatically. All users and
         * roles in the Amazon Web Services account automatically have access to use
         * <code>aws/secretsmanager</code>. Creating <code>aws/secretsmanager</code> can
         * result in a one-time significant delay in returning the result.</p> <p>If the
         * secret is in a different Amazon Web Services account from the credentials
         * calling the API, then you can't use <code>aws/secretsmanager</code> to encrypt
         * the secret, and you must create and use a customer managed KMS key. </p>
         * <p>Secrets Manager generates a CloudTrail log entry when you call this action.
         * Do not include sensitive information in request parameters except
         * <code>SecretBinary</code> or <code>SecretString</code> because it might be
         * logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:CreateSecret</code>. If you include tags in the
         * secret, you also need <code>secretsmanager:TagResource</code>. To add replica
         * Regions, you must also have
         * <code>secretsmanager:ReplicateSecretToRegions</code>. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p> <p>To encrypt the secret with a
         * KMS key other than <code>aws/secretsmanager</code>, you need
         * <code>kms:GenerateDataKey</code> and <code>kms:Decrypt</code> permission to the
         * key. </p>  <p>When you enter commands in a command shell, there is a
         * risk of the command history being accessed or utilities having access to your
         * command parameters. This is a concern if the command includes the value of a
         * secret. Learn how to <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/security_cli-exposure-risks.html">Mitigate
         * the risks of using command-line tools to store Secrets Manager secrets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/CreateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecretOutcome CreateSecret(const Model::CreateSecretRequest& request) const;

        /**
         * A Callable wrapper for CreateSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateSecretRequestT = Model::CreateSecretRequest>
        Model::CreateSecretOutcomeCallable CreateSecretCallable(const CreateSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::CreateSecret, request);
        }

        /**
         * An Async wrapper for CreateSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecretRequestT = Model::CreateSecretRequest>
        void CreateSecretAsync(const CreateSecretRequestT& request, const CreateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::CreateSecret, request, handler, context);
        }

        /**
         * <p>Deletes the resource-based permission policy attached to the secret. To
         * attach a policy to a secret, use <a>PutResourcePolicy</a>.</p> <p>Secrets
         * Manager generates a CloudTrail log entry when you call this action. Do not
         * include sensitive information in request parameters because it might be logged.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:DeleteResourcePolicy</code>. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes a secret and all of its versions. You can specify a recovery window
         * during which you can restore the secret. The minimum recovery window is 7 days.
         * The default recovery window is 30 days. Secrets Manager attaches a
         * <code>DeletionDate</code> stamp to the secret that specifies the end of the
         * recovery window. At the end of the recovery window, Secrets Manager deletes the
         * secret permanently.</p> <p>You can't delete a primary secret that is replicated
         * to other Regions. You must first delete the replicas using
         * <a>RemoveRegionsFromReplication</a>, and then delete the primary secret. When
         * you delete a replica, it is deleted immediately.</p> <p>You can't directly
         * delete a version of a secret. Instead, you remove all staging labels from the
         * version using <a>UpdateSecretVersionStage</a>. This marks the version as
         * deprecated, and then Secrets Manager can automatically delete the version in the
         * background.</p> <p>To determine whether an application still uses a secret, you
         * can create an Amazon CloudWatch alarm to alert you to any attempts to access a
         * secret during the recovery window. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/monitoring_cloudwatch_deleted-secrets.html">
         * Monitor secrets scheduled for deletion</a>.</p> <p>Secrets Manager performs the
         * permanent secret deletion at the end of the waiting period as a background task
         * with low priority. There is no guarantee of a specific time after the recovery
         * window for the permanent delete to occur.</p> <p>At any time before recovery
         * window ends, you can use <a>RestoreSecret</a> to remove the
         * <code>DeletionDate</code> and cancel the deletion of the secret.</p> <p>When a
         * secret is scheduled for deletion, you cannot retrieve the secret value. You must
         * first cancel the deletion with <a>RestoreSecret</a> and then you can retrieve
         * the secret.</p> <p>Secrets Manager generates a CloudTrail log entry when you
         * call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:DeleteSecret</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DeleteSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecretOutcome DeleteSecret(const Model::DeleteSecretRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteSecretRequestT = Model::DeleteSecretRequest>
        Model::DeleteSecretOutcomeCallable DeleteSecretCallable(const DeleteSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::DeleteSecret, request);
        }

        /**
         * An Async wrapper for DeleteSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecretRequestT = Model::DeleteSecretRequest>
        void DeleteSecretAsync(const DeleteSecretRequestT& request, const DeleteSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::DeleteSecret, request, handler, context);
        }

        /**
         * <p>Retrieves the details of a secret. It does not include the encrypted secret
         * value. Secrets Manager only returns fields that have a value in the response.
         * </p> <p>Secrets Manager generates a CloudTrail log entry when you call this
         * action. Do not include sensitive information in request parameters because it
         * might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:DescribeSecret</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/DescribeSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecretOutcome DescribeSecret(const Model::DescribeSecretRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSecretRequestT = Model::DescribeSecretRequest>
        Model::DescribeSecretOutcomeCallable DescribeSecretCallable(const DescribeSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::DescribeSecret, request);
        }

        /**
         * An Async wrapper for DescribeSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecretRequestT = Model::DescribeSecretRequest>
        void DescribeSecretAsync(const DescribeSecretRequestT& request, const DescribeSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::DescribeSecret, request, handler, context);
        }

        /**
         * <p>Generates a random password. We recommend that you specify the maximum length
         * and include every character type that the system you are generating a password
         * for can support. By default, Secrets Manager uses uppercase and lowercase
         * letters, numbers, and the following characters in passwords:
         * <code>!\"#$%&amp;'()*+,-./:;&lt;=&gt;?@[\\]^_`{|}~</code> </p> <p>Secrets
         * Manager generates a CloudTrail log entry when you call this action.</p> <p>
         * <b>Required permissions: </b> <code>secretsmanager:GetRandomPassword</code>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetRandomPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRandomPasswordOutcome GetRandomPassword(const Model::GetRandomPasswordRequest& request = {}) const;

        /**
         * A Callable wrapper for GetRandomPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRandomPasswordRequestT = Model::GetRandomPasswordRequest>
        Model::GetRandomPasswordOutcomeCallable GetRandomPasswordCallable(const GetRandomPasswordRequestT& request = {}) const
        {
            return SubmitCallable(&SecretsManagerClient::GetRandomPassword, request);
        }

        /**
         * An Async wrapper for GetRandomPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRandomPasswordRequestT = Model::GetRandomPasswordRequest>
        void GetRandomPasswordAsync(const GetRandomPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetRandomPasswordRequestT& request = {}) const
        {
            return SubmitAsync(&SecretsManagerClient::GetRandomPassword, request, handler, context);
        }

        /**
         * <p>Retrieves the JSON text of the resource-based policy document attached to the
         * secret. For more information about permissions policies attached to a secret,
         * see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-policies.html">Permissions
         * policies attached to a secret</a>.</p> <p>Secrets Manager generates a CloudTrail
         * log entry when you call this action. Do not include sensitive information in
         * request parameters because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:GetResourcePolicy</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Retrieves the contents of the encrypted fields <code>SecretString</code> or
         * <code>SecretBinary</code> from the specified version of a secret, whichever
         * contains content.</p> <p>To retrieve the values for a group of secrets, call
         * <a>BatchGetSecretValue</a>.</p> <p>We recommend that you cache your secret
         * values by using client-side caching. Caching secrets improves speed and reduces
         * your costs. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieving-secrets.html">Cache
         * secrets for your applications</a>.</p> <p>To retrieve the previous version of a
         * secret, use <code>VersionStage</code> and specify AWSPREVIOUS. To revert to the
         * previous version of a secret, call <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/secretsmanager/update-secret-version-stage.html">UpdateSecretVersionStage</a>.</p>
         * <p>Secrets Manager generates a CloudTrail log entry when you call this action.
         * Do not include sensitive information in request parameters because it might be
         * logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:GetSecretValue</code>. If the secret is encrypted
         * using a customer-managed key instead of the Amazon Web Services managed key
         * <code>aws/secretsmanager</code>, then you also need <code>kms:Decrypt</code>
         * permissions for that key. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/GetSecretValue">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSecretValueOutcome GetSecretValue(const Model::GetSecretValueRequest& request) const;

        /**
         * A Callable wrapper for GetSecretValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSecretValueRequestT = Model::GetSecretValueRequest>
        Model::GetSecretValueOutcomeCallable GetSecretValueCallable(const GetSecretValueRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::GetSecretValue, request);
        }

        /**
         * An Async wrapper for GetSecretValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSecretValueRequestT = Model::GetSecretValueRequest>
        void GetSecretValueAsync(const GetSecretValueRequestT& request, const GetSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::GetSecretValue, request, handler, context);
        }

        /**
         * <p>Lists the versions of a secret. Secrets Manager uses staging labels to
         * indicate the different versions of a secret. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/getting-started.html#term_version">
         * Secrets Manager concepts: Versions</a>.</p> <p>To list the secrets in the
         * account, use <a>ListSecrets</a>.</p> <p>Secrets Manager generates a CloudTrail
         * log entry when you call this action. Do not include sensitive information in
         * request parameters because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:ListSecretVersionIds</code>. For more information, see
         * <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecretVersionIds">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecretVersionIdsOutcome ListSecretVersionIds(const Model::ListSecretVersionIdsRequest& request) const;

        /**
         * A Callable wrapper for ListSecretVersionIds that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecretVersionIdsRequestT = Model::ListSecretVersionIdsRequest>
        Model::ListSecretVersionIdsOutcomeCallable ListSecretVersionIdsCallable(const ListSecretVersionIdsRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::ListSecretVersionIds, request);
        }

        /**
         * An Async wrapper for ListSecretVersionIds that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecretVersionIdsRequestT = Model::ListSecretVersionIdsRequest>
        void ListSecretVersionIdsAsync(const ListSecretVersionIdsRequestT& request, const ListSecretVersionIdsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::ListSecretVersionIds, request, handler, context);
        }

        /**
         * <p>Lists the secrets that are stored by Secrets Manager in the Amazon Web
         * Services account, not including secrets that are marked for deletion. To see
         * secrets marked for deletion, use the Secrets Manager console.</p> <p>All Secrets
         * Manager operations are eventually consistent. ListSecrets might not reflect
         * changes from the last five minutes. You can get more recent information for a
         * specific secret by calling <a>DescribeSecret</a>.</p> <p>To list the versions of
         * a secret, use <a>ListSecretVersionIds</a>.</p> <p>To retrieve the values for the
         * secrets, call <a>BatchGetSecretValue</a> or <a>GetSecretValue</a>.</p> <p>For
         * information about finding secrets in the console, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/manage_search-secret.html">Find
         * secrets in Secrets Manager</a>.</p> <p>Secrets Manager generates a CloudTrail
         * log entry when you call this action. Do not include sensitive information in
         * request parameters because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:ListSecrets</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ListSecrets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecretsOutcome ListSecrets(const Model::ListSecretsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListSecrets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSecretsRequestT = Model::ListSecretsRequest>
        Model::ListSecretsOutcomeCallable ListSecretsCallable(const ListSecretsRequestT& request = {}) const
        {
            return SubmitCallable(&SecretsManagerClient::ListSecrets, request);
        }

        /**
         * An Async wrapper for ListSecrets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecretsRequestT = Model::ListSecretsRequest>
        void ListSecretsAsync(const ListSecretsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListSecretsRequestT& request = {}) const
        {
            return SubmitAsync(&SecretsManagerClient::ListSecrets, request, handler, context);
        }

        /**
         * <p>Attaches a resource-based permission policy to a secret. A resource-based
         * policy is optional. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control for Secrets Manager</a> </p> <p>For information about
         * attaching a policy in the console, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access_resource-based-policies.html">Attach
         * a permissions policy to a secret</a>.</p> <p>Secrets Manager generates a
         * CloudTrail log entry when you call this action. Do not include sensitive
         * information in request parameters because it might be logged. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:PutResourcePolicy</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Creates a new version with a new encrypted secret value and attaches it to
         * the secret. The version can contain a new <code>SecretString</code> value or a
         * new <code>SecretBinary</code> value. </p> <p>We recommend you avoid calling
         * <code>PutSecretValue</code> at a sustained rate of more than once every 10
         * minutes. When you update the secret value, Secrets Manager creates a new version
         * of the secret. Secrets Manager removes outdated versions when there are more
         * than 100, but it does not remove versions created less than 24 hours ago. If you
         * call <code>PutSecretValue</code> more than once every 10 minutes, you create
         * more versions than Secrets Manager removes, and you will reach the quota for
         * secret versions.</p> <p>You can specify the staging labels to attach to the new
         * version in <code>VersionStages</code>. If you don't include
         * <code>VersionStages</code>, then Secrets Manager automatically moves the staging
         * label <code>AWSCURRENT</code> to this version. If this operation creates the
         * first version for the secret, then Secrets Manager automatically attaches the
         * staging label <code>AWSCURRENT</code> to it. If this operation moves the staging
         * label <code>AWSCURRENT</code> from another version to this version, then Secrets
         * Manager also automatically moves the staging label <code>AWSPREVIOUS</code> to
         * the version that <code>AWSCURRENT</code> was removed from.</p> <p>This operation
         * is idempotent. If you call this operation with a <code>ClientRequestToken</code>
         * that matches an existing version's VersionId, and you specify the same secret
         * data, the operation succeeds but does nothing. However, if the secret data is
         * different, then the operation fails because you can't modify an existing
         * version; you can only create new ones.</p> <p>Secrets Manager generates a
         * CloudTrail log entry when you call this action. Do not include sensitive
         * information in request parameters except <code>SecretBinary</code>,
         * <code>SecretString</code>, or <code>RotationToken</code> because it might be
         * logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:PutSecretValue</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p>  <p>When you enter
         * commands in a command shell, there is a risk of the command history being
         * accessed or utilities having access to your command parameters. This is a
         * concern if the command includes the value of a secret. Learn how to <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/security_cli-exposure-risks.html">Mitigate
         * the risks of using command-line tools to store Secrets Manager secrets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/PutSecretValue">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSecretValueOutcome PutSecretValue(const Model::PutSecretValueRequest& request) const;

        /**
         * A Callable wrapper for PutSecretValue that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSecretValueRequestT = Model::PutSecretValueRequest>
        Model::PutSecretValueOutcomeCallable PutSecretValueCallable(const PutSecretValueRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::PutSecretValue, request);
        }

        /**
         * An Async wrapper for PutSecretValue that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSecretValueRequestT = Model::PutSecretValueRequest>
        void PutSecretValueAsync(const PutSecretValueRequestT& request, const PutSecretValueResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::PutSecretValue, request, handler, context);
        }

        /**
         * <p>For a secret that is replicated to other Regions, deletes the secret replicas
         * from the Regions you specify.</p> <p>Secrets Manager generates a CloudTrail log
         * entry when you call this action. Do not include sensitive information in request
         * parameters because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:RemoveRegionsFromReplication</code>. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RemoveRegionsFromReplication">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveRegionsFromReplicationOutcome RemoveRegionsFromReplication(const Model::RemoveRegionsFromReplicationRequest& request) const;

        /**
         * A Callable wrapper for RemoveRegionsFromReplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveRegionsFromReplicationRequestT = Model::RemoveRegionsFromReplicationRequest>
        Model::RemoveRegionsFromReplicationOutcomeCallable RemoveRegionsFromReplicationCallable(const RemoveRegionsFromReplicationRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::RemoveRegionsFromReplication, request);
        }

        /**
         * An Async wrapper for RemoveRegionsFromReplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveRegionsFromReplicationRequestT = Model::RemoveRegionsFromReplicationRequest>
        void RemoveRegionsFromReplicationAsync(const RemoveRegionsFromReplicationRequestT& request, const RemoveRegionsFromReplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::RemoveRegionsFromReplication, request, handler, context);
        }

        /**
         * <p>Replicates the secret to a new Regions. See <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/create-manage-multi-region-secrets.html">Multi-Region
         * secrets</a>.</p> <p>Secrets Manager generates a CloudTrail log entry when you
         * call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:ReplicateSecretToRegions</code>. If the primary secret
         * is encrypted with a KMS key other than <code>aws/secretsmanager</code>, you also
         * need <code>kms:Decrypt</code> permission to the key. To encrypt the replicated
         * secret with a KMS key other than <code>aws/secretsmanager</code>, you need
         * <code>kms:GenerateDataKey</code> and <code>kms:Encrypt</code> to the key. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ReplicateSecretToRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplicateSecretToRegionsOutcome ReplicateSecretToRegions(const Model::ReplicateSecretToRegionsRequest& request) const;

        /**
         * A Callable wrapper for ReplicateSecretToRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReplicateSecretToRegionsRequestT = Model::ReplicateSecretToRegionsRequest>
        Model::ReplicateSecretToRegionsOutcomeCallable ReplicateSecretToRegionsCallable(const ReplicateSecretToRegionsRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::ReplicateSecretToRegions, request);
        }

        /**
         * An Async wrapper for ReplicateSecretToRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReplicateSecretToRegionsRequestT = Model::ReplicateSecretToRegionsRequest>
        void ReplicateSecretToRegionsAsync(const ReplicateSecretToRegionsRequestT& request, const ReplicateSecretToRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::ReplicateSecretToRegions, request, handler, context);
        }

        /**
         * <p>Cancels the scheduled deletion of a secret by removing the
         * <code>DeletedDate</code> time stamp. You can access a secret again after it has
         * been restored.</p> <p>Secrets Manager generates a CloudTrail log entry when you
         * call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:RestoreSecret</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RestoreSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::RestoreSecretOutcome RestoreSecret(const Model::RestoreSecretRequest& request) const;

        /**
         * A Callable wrapper for RestoreSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RestoreSecretRequestT = Model::RestoreSecretRequest>
        Model::RestoreSecretOutcomeCallable RestoreSecretCallable(const RestoreSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::RestoreSecret, request);
        }

        /**
         * An Async wrapper for RestoreSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RestoreSecretRequestT = Model::RestoreSecretRequest>
        void RestoreSecretAsync(const RestoreSecretRequestT& request, const RestoreSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::RestoreSecret, request, handler, context);
        }

        /**
         * <p>Configures and starts the asynchronous process of rotating the secret. For
         * information about rotation, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets.html">Rotate
         * secrets</a> in the <i>Secrets Manager User Guide</i>. If you include the
         * configuration parameters, the operation sets the values for the secret and then
         * immediately starts a rotation. If you don't include the configuration
         * parameters, the operation starts a rotation with the values already stored in
         * the secret. </p> <p>When rotation is successful, the <code>AWSPENDING</code>
         * staging label might be attached to the same version as the
         * <code>AWSCURRENT</code> version, or it might not be attached to any version. If
         * the <code>AWSPENDING</code> staging label is present but not attached to the
         * same version as <code>AWSCURRENT</code>, then any later invocation of
         * <code>RotateSecret</code> assumes that a previous rotation request is still in
         * progress and returns an error. When rotation is unsuccessful, the
         * <code>AWSPENDING</code> staging label might be attached to an empty secret
         * version. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/troubleshoot_rotation.html">Troubleshoot
         * rotation</a> in the <i>Secrets Manager User Guide</i>.</p> <p>Secrets Manager
         * generates a CloudTrail log entry when you call this action. Do not include
         * sensitive information in request parameters because it might be logged. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:RotateSecret</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. You also need
         * <code>lambda:InvokeFunction</code> permissions on the rotation function. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/rotating-secrets-required-permissions-function.html">
         * Permissions for rotation</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/RotateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::RotateSecretOutcome RotateSecret(const Model::RotateSecretRequest& request) const;

        /**
         * A Callable wrapper for RotateSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RotateSecretRequestT = Model::RotateSecretRequest>
        Model::RotateSecretOutcomeCallable RotateSecretCallable(const RotateSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::RotateSecret, request);
        }

        /**
         * An Async wrapper for RotateSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RotateSecretRequestT = Model::RotateSecretRequest>
        void RotateSecretAsync(const RotateSecretRequestT& request, const RotateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::RotateSecret, request, handler, context);
        }

        /**
         * <p>Removes the link between the replica secret and the primary secret and
         * promotes the replica to a primary secret in the replica Region.</p> <p>You must
         * call this operation from the Region in which you want to promote the replica to
         * a primary secret.</p> <p>Secrets Manager generates a CloudTrail log entry when
         * you call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:StopReplicationToReplica</code>. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/StopReplicationToReplica">AWS
         * API Reference</a></p>
         */
        virtual Model::StopReplicationToReplicaOutcome StopReplicationToReplica(const Model::StopReplicationToReplicaRequest& request) const;

        /**
         * A Callable wrapper for StopReplicationToReplica that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopReplicationToReplicaRequestT = Model::StopReplicationToReplicaRequest>
        Model::StopReplicationToReplicaOutcomeCallable StopReplicationToReplicaCallable(const StopReplicationToReplicaRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::StopReplicationToReplica, request);
        }

        /**
         * An Async wrapper for StopReplicationToReplica that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopReplicationToReplicaRequestT = Model::StopReplicationToReplicaRequest>
        void StopReplicationToReplicaAsync(const StopReplicationToReplicaRequestT& request, const StopReplicationToReplicaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::StopReplicationToReplica, request, handler, context);
        }

        /**
         * <p>Attaches tags to a secret. Tags consist of a key name and a value. Tags are
         * part of the secret's metadata. They are not associated with specific versions of
         * the secret. This operation appends tags to the existing list of tags.</p> <p>For
         * tag quotas and naming restrictions, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/arg.html#taged-reference-quotas">Service
         * quotas for Tagging</a> in the <i>Amazon Web Services General Reference
         * guide</i>.</p>  <p>If you use tags as part of your security strategy,
         * then adding or removing a tag can change permissions. If successfully completing
         * this operation would result in you losing your permissions for this secret, then
         * the operation is blocked and returns an Access Denied error.</p> 
         * <p>Secrets Manager generates a CloudTrail log entry when you call this action.
         * Do not include sensitive information in request parameters because it might be
         * logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:TagResource</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes specific tags from a secret.</p> <p>This operation is idempotent. If
         * a requested tag is not attached to the secret, no error is returned and the
         * secret metadata is unchanged.</p>  <p>If you use tags as part of your
         * security strategy, then removing a tag can change permissions. If successfully
         * completing this operation would result in you losing your permissions for this
         * secret, then the operation is blocked and returns an Access Denied error.</p>
         *  <p>Secrets Manager generates a CloudTrail log entry when you call
         * this action. Do not include sensitive information in request parameters because
         * it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:UntagResource</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Modifies the details of a secret, including metadata and the secret value. To
         * change the secret value, you can also use <a>PutSecretValue</a>.</p> <p>To
         * change the rotation configuration of a secret, use <a>RotateSecret</a>
         * instead.</p> <p>To change a secret so that it is managed by another service, you
         * need to recreate the secret in that service. See <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/service-linked-secrets.html">Secrets
         * Manager secrets managed by other Amazon Web Services services</a>.</p> <p>We
         * recommend you avoid calling <code>UpdateSecret</code> at a sustained rate of
         * more than once every 10 minutes. When you call <code>UpdateSecret</code> to
         * update the secret value, Secrets Manager creates a new version of the secret.
         * Secrets Manager removes outdated versions when there are more than 100, but it
         * does not remove versions created less than 24 hours ago. If you update the
         * secret value more than once every 10 minutes, you create more versions than
         * Secrets Manager removes, and you will reach the quota for secret versions.</p>
         * <p>If you include <code>SecretString</code> or <code>SecretBinary</code> to
         * create a new secret version, Secrets Manager automatically moves the staging
         * label <code>AWSCURRENT</code> to the new version. Then it attaches the label
         * <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code> was removed
         * from.</p> <p>If you call this operation with a <code>ClientRequestToken</code>
         * that matches an existing version's <code>VersionId</code>, the operation results
         * in an error. You can't modify an existing version, you can only create a new
         * version. To remove a version, remove all staging labels from it. See
         * <a>UpdateSecretVersionStage</a>.</p> <p>Secrets Manager generates a CloudTrail
         * log entry when you call this action. Do not include sensitive information in
         * request parameters except <code>SecretBinary</code> or <code>SecretString</code>
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:UpdateSecret</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. If you use a customer managed key,
         * you must also have <code>kms:GenerateDataKey</code>, <code>kms:Encrypt</code>,
         * and <code>kms:Decrypt</code> permissions on the key. If you change the KMS key
         * and you don't have <code>kms:Encrypt</code> permission to the new key, Secrets
         * Manager does not re-encrypt existing secret versions with the new key. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/security-encryption.html">
         * Secret encryption and decryption</a>.</p>  <p>When you enter commands
         * in a command shell, there is a risk of the command history being accessed or
         * utilities having access to your command parameters. This is a concern if the
         * command includes the value of a secret. Learn how to <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/security_cli-exposure-risks.html">Mitigate
         * the risks of using command-line tools to store Secrets Manager secrets</a>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecret">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecretOutcome UpdateSecret(const Model::UpdateSecretRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecret that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecretRequestT = Model::UpdateSecretRequest>
        Model::UpdateSecretOutcomeCallable UpdateSecretCallable(const UpdateSecretRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::UpdateSecret, request);
        }

        /**
         * An Async wrapper for UpdateSecret that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecretRequestT = Model::UpdateSecretRequest>
        void UpdateSecretAsync(const UpdateSecretRequestT& request, const UpdateSecretResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::UpdateSecret, request, handler, context);
        }

        /**
         * <p>Modifies the staging labels attached to a version of a secret. Secrets
         * Manager uses staging labels to track a version as it progresses through the
         * secret rotation process. Each staging label can be attached to only one version
         * at a time. To add a staging label to a version when it is already attached to
         * another version, Secrets Manager first removes it from the other version first
         * and then attaches it to this one. For more information about versions and
         * staging labels, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/getting-started.html#term_version">Concepts:
         * Version</a>. </p> <p>The staging labels that you specify in the
         * <code>VersionStage</code> parameter are added to the existing list of staging
         * labels for the version. </p> <p>You can move the <code>AWSCURRENT</code> staging
         * label to this version by including it in this call.</p>  <p>Whenever you
         * move <code>AWSCURRENT</code>, Secrets Manager automatically moves the label
         * <code>AWSPREVIOUS</code> to the version that <code>AWSCURRENT</code> was removed
         * from.</p>  <p>If this action results in the last label being removed from
         * a version, then the version is considered to be 'deprecated' and can be deleted
         * by Secrets Manager.</p> <p>Secrets Manager generates a CloudTrail log entry when
         * you call this action. Do not include sensitive information in request parameters
         * because it might be logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:UpdateSecretVersionStage</code>. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/UpdateSecretVersionStage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecretVersionStageOutcome UpdateSecretVersionStage(const Model::UpdateSecretVersionStageRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecretVersionStage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateSecretVersionStageRequestT = Model::UpdateSecretVersionStageRequest>
        Model::UpdateSecretVersionStageOutcomeCallable UpdateSecretVersionStageCallable(const UpdateSecretVersionStageRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::UpdateSecretVersionStage, request);
        }

        /**
         * An Async wrapper for UpdateSecretVersionStage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecretVersionStageRequestT = Model::UpdateSecretVersionStageRequest>
        void UpdateSecretVersionStageAsync(const UpdateSecretVersionStageRequestT& request, const UpdateSecretVersionStageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::UpdateSecretVersionStage, request, handler, context);
        }

        /**
         * <p>Validates that a resource policy does not grant a wide range of principals
         * access to your secret. A resource-based policy is optional for secrets.</p>
         * <p>The API performs three checks when validating the policy:</p> <ul> <li>
         * <p>Sends a call to <a
         * href="https://aws.amazon.com/blogs/security/protect-sensitive-data-in-the-cloud-with-automated-reasoning-zelkova/">Zelkova</a>,
         * an automated reasoning engine, to ensure your resource policy does not allow
         * broad access to your secret, for example policies that use a wildcard for the
         * principal.</p> </li> <li> <p>Checks for correct syntax in a policy.</p> </li>
         * <li> <p>Verifies the policy does not lock out a caller.</p> </li> </ul>
         * <p>Secrets Manager generates a CloudTrail log entry when you call this action.
         * Do not include sensitive information in request parameters because it might be
         * logged. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/retrieve-ct-entries.html">Logging
         * Secrets Manager events with CloudTrail</a>.</p> <p> <b>Required permissions:
         * </b> <code>secretsmanager:ValidateResourcePolicy</code> and
         * <code>secretsmanager:PutResourcePolicy</code>. For more information, see <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/reference_iam-permissions.html#reference_iam-permissions_actions">
         * IAM policy actions for Secrets Manager</a> and <a
         * href="https://docs.aws.amazon.com/secretsmanager/latest/userguide/auth-and-access.html">Authentication
         * and access control in Secrets Manager</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/secretsmanager-2017-10-17/ValidateResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateResourcePolicyOutcome ValidateResourcePolicy(const Model::ValidateResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for ValidateResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ValidateResourcePolicyRequestT = Model::ValidateResourcePolicyRequest>
        Model::ValidateResourcePolicyOutcomeCallable ValidateResourcePolicyCallable(const ValidateResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&SecretsManagerClient::ValidateResourcePolicy, request);
        }

        /**
         * An Async wrapper for ValidateResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateResourcePolicyRequestT = Model::ValidateResourcePolicyRequest>
        void ValidateResourcePolicyAsync(const ValidateResourcePolicyRequestT& request, const ValidateResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&SecretsManagerClient::ValidateResourcePolicy, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<SecretsManagerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<SecretsManagerClient>;
      void init(const SecretsManagerClientConfiguration& clientConfiguration);

      SecretsManagerClientConfiguration m_clientConfiguration;
      std::shared_ptr<SecretsManagerEndpointProviderBase> m_endpointProvider;
  };

} // namespace SecretsManager
} // namespace Aws
