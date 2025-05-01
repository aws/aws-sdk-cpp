/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/verifiedpermissions/VerifiedPermissions_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/verifiedpermissions/VerifiedPermissionsServiceClientModel.h>

namespace Aws
{
namespace VerifiedPermissions
{
  /**
   * <p>Amazon Verified Permissions is a permissions management service from Amazon
   * Web Services. You can use Verified Permissions to manage permissions for your
   * application, and authorize user access based on those permissions. Using
   * Verified Permissions, application developers can grant access based on
   * information about the users, resources, and requested actions. You can also
   * evaluate additional information like group membership, attributes of the
   * resources, and session context, such as time of request and IP addresses.
   * Verified Permissions manages these permissions by letting you create and store
   * authorization policies for your applications, such as consumer-facing web sites
   * and enterprise business systems.</p> <p>Verified Permissions uses Cedar as the
   * policy language to express your permission requirements. Cedar supports both
   * role-based access control (RBAC) and attribute-based access control (ABAC)
   * authorization models.</p> <p>For more information about configuring,
   * administering, and using Amazon Verified Permissions in your applications, see
   * the <a
   * href="https://docs.aws.amazon.com/verifiedpermissions/latest/userguide/">Amazon
   * Verified Permissions User Guide</a>.</p> <p>For more information about the Cedar
   * policy language, see the <a href="https://docs.cedarpolicy.com/">Cedar Policy
   * Language Guide</a>.</p>  <p>When you write Cedar policies that
   * reference principals, resources and actions, you can define the unique
   * identifiers used for each of those elements. We strongly recommend that you
   * follow these best practices:</p> <ul> <li> <p> <b>Use values like universally
   * unique identifiers (UUIDs) for all principal and resource identifiers.</b> </p>
   * <p>For example, if user <code>jane</code> leaves the company, and you later let
   * someone else use the name <code>jane</code>, then that new user automatically
   * gets access to everything granted by policies that still reference
   * <code>User::"jane"</code>. Cedar can’t distinguish between the new user and the
   * old. This applies to both principal and resource identifiers. Always use
   * identifiers that are guaranteed unique and never reused to ensure that you don’t
   * unintentionally grant access because of the presence of an old identifier in a
   * policy.</p> <p>Where you use a UUID for an entity, we recommend that you follow
   * it with the // comment specifier and the ‘friendly’ name of your entity. This
   * helps to make your policies easier to understand. For example: principal ==
   * User::"a1b2c3d4-e5f6-a1b2-c3d4-EXAMPLE11111", // alice</p> </li> <li> <p> <b>Do
   * not include personally identifying, confidential, or sensitive information as
   * part of the unique identifier for your principals or resources.</b> These
   * identifiers are included in log entries shared in CloudTrail trails.</p> </li>
   * </ul>  <p>Several operations return structures that appear similar,
   * but have different purposes. As new functionality is added to the product, the
   * structure used in a parameter of one operation might need to change in a way
   * that wouldn't make sense for the same parameter in a different operation. To
   * help you understand the purpose of each, the following naming convention is used
   * for the structures:</p> <ul> <li> <p>Parameter type structures that end in
   * <code>Detail</code> are used in <code>Get</code> operations.</p> </li> <li>
   * <p>Parameter type structures that end in <code>Item</code> are used in
   * <code>List</code> operations.</p> </li> <li> <p>Parameter type structures that
   * use neither suffix are used in the mutating (create and update) operations.</p>
   * </li> </ul>
   */
  class AWS_VERIFIEDPERMISSIONS_API VerifiedPermissionsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<VerifiedPermissionsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef VerifiedPermissionsClientConfiguration ClientConfigurationType;
      typedef VerifiedPermissionsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VerifiedPermissionsClient(const Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration = Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration(),
                                  std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VerifiedPermissionsClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration = Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VerifiedPermissionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<VerifiedPermissionsEndpointProviderBase> endpointProvider = nullptr,
                                  const Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration& clientConfiguration = Aws::VerifiedPermissions::VerifiedPermissionsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VerifiedPermissionsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        VerifiedPermissionsClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        VerifiedPermissionsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~VerifiedPermissionsClient();

        /**
         * <p>Retrieves information about a group (batch) of policies.</p>  <p>The
         * <code>BatchGetPolicy</code> operation doesn't have its own IAM permission. To
         * authorize this operation for Amazon Web Services principals, include the
         * permission <code>verifiedpermissions:GetPolicy</code> in their IAM policies.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchGetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetPolicyOutcome BatchGetPolicy(const Model::BatchGetPolicyRequest& request) const;

        /**
         * A Callable wrapper for BatchGetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetPolicyRequestT = Model::BatchGetPolicyRequest>
        Model::BatchGetPolicyOutcomeCallable BatchGetPolicyCallable(const BatchGetPolicyRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::BatchGetPolicy, request);
        }

        /**
         * An Async wrapper for BatchGetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetPolicyRequestT = Model::BatchGetPolicyRequest>
        void BatchGetPolicyAsync(const BatchGetPolicyRequestT& request, const BatchGetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::BatchGetPolicy, request, handler, context);
        }

        /**
         * <p>Makes a series of decisions about multiple authorization requests for one
         * principal or resource. Each request contains the equivalent content of an
         * <code>IsAuthorized</code> request: principal, action, resource, and context.
         * Either the <code>principal</code> or the <code>resource</code> parameter must be
         * identical across all requests. For example, Verified Permissions won't evaluate
         * a pair of requests where <code>bob</code> views <code>photo1</code> and
         * <code>alice</code> views <code>photo2</code>. Authorization of <code>bob</code>
         * to view <code>photo1</code> and <code>photo2</code>, or <code>bob</code> and
         * <code>alice</code> to view <code>photo1</code>, are valid batches. </p> <p>The
         * request is evaluated against all policies in the specified policy store that
         * match the entities that you declare. The result of the decisions is a series of
         * <code>Allow</code> or <code>Deny</code> responses, along with the IDs of the
         * policies that produced each decision.</p> <p>The <code>entities</code> of a
         * <code>BatchIsAuthorized</code> API request can contain up to 100 principals and
         * up to 100 resources. The <code>requests</code> of a
         * <code>BatchIsAuthorized</code> API request can contain up to 30 requests.</p>
         *  <p>The <code>BatchIsAuthorized</code> operation doesn't have its own IAM
         * permission. To authorize this operation for Amazon Web Services principals,
         * include the permission <code>verifiedpermissions:IsAuthorized</code> in their
         * IAM policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorized">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchIsAuthorizedOutcome BatchIsAuthorized(const Model::BatchIsAuthorizedRequest& request) const;

        /**
         * A Callable wrapper for BatchIsAuthorized that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchIsAuthorizedRequestT = Model::BatchIsAuthorizedRequest>
        Model::BatchIsAuthorizedOutcomeCallable BatchIsAuthorizedCallable(const BatchIsAuthorizedRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::BatchIsAuthorized, request);
        }

        /**
         * An Async wrapper for BatchIsAuthorized that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchIsAuthorizedRequestT = Model::BatchIsAuthorizedRequest>
        void BatchIsAuthorizedAsync(const BatchIsAuthorizedRequestT& request, const BatchIsAuthorizedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::BatchIsAuthorized, request, handler, context);
        }

        /**
         * <p>Makes a series of decisions about multiple authorization requests for one
         * token. The principal in this request comes from an external identity source in
         * the form of an identity or access token, formatted as a <a
         * href="https://wikipedia.org/wiki/JSON_Web_Token">JSON web token (JWT)</a>. The
         * information in the parameters can also define additional context that Verified
         * Permissions can include in the evaluations.</p> <p>The request is evaluated
         * against all policies in the specified policy store that match the entities that
         * you provide in the entities declaration and in the token. The result of the
         * decisions is a series of <code>Allow</code> or <code>Deny</code> responses,
         * along with the IDs of the policies that produced each decision.</p> <p>The
         * <code>entities</code> of a <code>BatchIsAuthorizedWithToken</code> API request
         * can contain up to 100 resources and up to 99 user groups. The
         * <code>requests</code> of a <code>BatchIsAuthorizedWithToken</code> API request
         * can contain up to 30 requests.</p>  <p>The
         * <code>BatchIsAuthorizedWithToken</code> operation doesn't have its own IAM
         * permission. To authorize this operation for Amazon Web Services principals,
         * include the permission <code>verifiedpermissions:IsAuthorizedWithToken</code> in
         * their IAM policies.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/BatchIsAuthorizedWithToken">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchIsAuthorizedWithTokenOutcome BatchIsAuthorizedWithToken(const Model::BatchIsAuthorizedWithTokenRequest& request) const;

        /**
         * A Callable wrapper for BatchIsAuthorizedWithToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchIsAuthorizedWithTokenRequestT = Model::BatchIsAuthorizedWithTokenRequest>
        Model::BatchIsAuthorizedWithTokenOutcomeCallable BatchIsAuthorizedWithTokenCallable(const BatchIsAuthorizedWithTokenRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::BatchIsAuthorizedWithToken, request);
        }

        /**
         * An Async wrapper for BatchIsAuthorizedWithToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchIsAuthorizedWithTokenRequestT = Model::BatchIsAuthorizedWithTokenRequest>
        void BatchIsAuthorizedWithTokenAsync(const BatchIsAuthorizedWithTokenRequestT& request, const BatchIsAuthorizedWithTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::BatchIsAuthorizedWithToken, request, handler, context);
        }

        /**
         * <p>Adds an identity source to a policy store–an Amazon Cognito user pool or
         * OpenID Connect (OIDC) identity provider (IdP). </p> <p>After you create an
         * identity source, you can use the identities provided by the IdP as proxies for
         * the principal in authorization queries that use the <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>
         * or <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_BatchIsAuthorizedWithToken.html">BatchIsAuthorizedWithToken</a>
         * API operations. These identities take the form of tokens that contain claims
         * about the user, such as IDs, attributes and group memberships. Identity sources
         * provide identity (ID) tokens and access tokens. Verified Permissions derives
         * information about your user and session from token claims. Access tokens provide
         * action <code>context</code> to your policies, and ID tokens provide principal
         * <code>Attributes</code>.</p>  <p>Tokens from an identity source user
         * continue to be usable until they expire. Token revocation and resource deletion
         * have no effect on the validity of a token in your policy store</p> 
         *  <p>To reference a user from this identity source in your Cedar policies,
         * refer to the following syntax examples.</p> <ul> <li> <p>Amazon Cognito user
         * pool: <code>Namespace::[Entity type]::[User pool ID]|[user principal
         * attribute]</code>, for example
         * <code>MyCorp::User::us-east-1_EXAMPLE|a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
         * </li> <li> <p>OpenID Connect (OIDC) provider: <code>Namespace::[Entity
         * type]::[entityIdPrefix]|[user principal attribute]</code>, for example
         * <code>MyCorp::User::MyOIDCProvider|a1b2c3d4-5678-90ab-cdef-EXAMPLE22222</code>.</p>
         * </li> </ul>   <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CreateIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateIdentitySourceOutcome CreateIdentitySource(const Model::CreateIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for CreateIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateIdentitySourceRequestT = Model::CreateIdentitySourceRequest>
        Model::CreateIdentitySourceOutcomeCallable CreateIdentitySourceCallable(const CreateIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::CreateIdentitySource, request);
        }

        /**
         * An Async wrapper for CreateIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateIdentitySourceRequestT = Model::CreateIdentitySourceRequest>
        void CreateIdentitySourceAsync(const CreateIdentitySourceRequestT& request, const CreateIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::CreateIdentitySource, request, handler, context);
        }

        /**
         * <p>Creates a Cedar policy and saves it in the specified policy store. You can
         * create either a static policy or a policy linked to a policy template.</p> <ul>
         * <li> <p>To create a static policy, provide the Cedar policy text in the
         * <code>StaticPolicy</code> section of the <code>PolicyDefinition</code>.</p>
         * </li> <li> <p>To create a policy that is dynamically linked to a policy
         * template, specify the policy template ID and the principal and resource to
         * associate with this policy in the <code>templateLinked</code> section of the
         * <code>PolicyDefinition</code>. If the policy template is ever updated, any
         * policies linked to the policy template automatically use the updated
         * template.</p> </li> </ul>  <p>Creating a policy causes it to be validated
         * against the schema in the policy store. If the policy doesn't pass validation,
         * the operation fails and the policy isn't stored.</p>   <p>Verified
         * Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::CreatePolicy, request);
        }

        /**
         * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::CreatePolicy, request, handler, context);
        }

        /**
         * <p>Creates a policy store. A policy store is a container for policy
         * resources.</p>  <p>Although <a
         * href="https://docs.cedarpolicy.com/schema/schema.html#namespace">Cedar supports
         * multiple namespaces</a>, Verified Permissions currently supports only one
         * namespace per policy store.</p>   <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CreatePolicyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyStoreOutcome CreatePolicyStore(const Model::CreatePolicyStoreRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePolicyStoreRequestT = Model::CreatePolicyStoreRequest>
        Model::CreatePolicyStoreOutcomeCallable CreatePolicyStoreCallable(const CreatePolicyStoreRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::CreatePolicyStore, request);
        }

        /**
         * An Async wrapper for CreatePolicyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyStoreRequestT = Model::CreatePolicyStoreRequest>
        void CreatePolicyStoreAsync(const CreatePolicyStoreRequestT& request, const CreatePolicyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::CreatePolicyStore, request, handler, context);
        }

        /**
         * <p>Creates a policy template. A template can use placeholders for the principal
         * and resource. A template must be instantiated into a policy by associating it
         * with specific principals and resources to use for the placeholders. That
         * instantiated policy can then be considered in authorization decisions. The
         * instantiated policy works identically to any other policy, except that it is
         * dynamically linked to the template. If the template changes, then any policies
         * that are linked to that template are immediately updated as well.</p> 
         * <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/CreatePolicyTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyTemplateOutcome CreatePolicyTemplate(const Model::CreatePolicyTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicyTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePolicyTemplateRequestT = Model::CreatePolicyTemplateRequest>
        Model::CreatePolicyTemplateOutcomeCallable CreatePolicyTemplateCallable(const CreatePolicyTemplateRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::CreatePolicyTemplate, request);
        }

        /**
         * An Async wrapper for CreatePolicyTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyTemplateRequestT = Model::CreatePolicyTemplateRequest>
        void CreatePolicyTemplateAsync(const CreatePolicyTemplateRequestT& request, const CreatePolicyTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::CreatePolicyTemplate, request, handler, context);
        }

        /**
         * <p>Deletes an identity source that references an identity provider (IdP) such as
         * Amazon Cognito. After you delete the identity source, you can no longer use
         * tokens for identities from that identity source to represent principals in
         * authorization queries made using <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_IsAuthorizedWithToken.html">IsAuthorizedWithToken</a>.
         * operations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/DeleteIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteIdentitySourceOutcome DeleteIdentitySource(const Model::DeleteIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteIdentitySourceRequestT = Model::DeleteIdentitySourceRequest>
        Model::DeleteIdentitySourceOutcomeCallable DeleteIdentitySourceCallable(const DeleteIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::DeleteIdentitySource, request);
        }

        /**
         * An Async wrapper for DeleteIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteIdentitySourceRequestT = Model::DeleteIdentitySourceRequest>
        void DeleteIdentitySourceAsync(const DeleteIdentitySourceRequestT& request, const DeleteIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::DeleteIdentitySource, request, handler, context);
        }

        /**
         * <p>Deletes the specified policy from the policy store.</p> <p>This operation is
         * idempotent; if you specify a policy that doesn't exist, the request response
         * returns a successful <code>HTTP 200</code> status code.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::DeletePolicy, request, handler, context);
        }

        /**
         * <p>Deletes the specified policy store.</p> <p>This operation is idempotent. If
         * you specify a policy store that does not exist, the request response will still
         * return a successful HTTP 200 status code.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/DeletePolicyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyStoreOutcome DeletePolicyStore(const Model::DeletePolicyStoreRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyStoreRequestT = Model::DeletePolicyStoreRequest>
        Model::DeletePolicyStoreOutcomeCallable DeletePolicyStoreCallable(const DeletePolicyStoreRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::DeletePolicyStore, request);
        }

        /**
         * An Async wrapper for DeletePolicyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyStoreRequestT = Model::DeletePolicyStoreRequest>
        void DeletePolicyStoreAsync(const DeletePolicyStoreRequestT& request, const DeletePolicyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::DeletePolicyStore, request, handler, context);
        }

        /**
         * <p>Deletes the specified policy template from the policy store.</p> 
         * <p>This operation also deletes any policies that were created from the specified
         * policy template. Those policies are immediately removed from all future API
         * responses, and are asynchronously deleted from the policy store.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/DeletePolicyTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyTemplateOutcome DeletePolicyTemplate(const Model::DeletePolicyTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicyTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePolicyTemplateRequestT = Model::DeletePolicyTemplateRequest>
        Model::DeletePolicyTemplateOutcomeCallable DeletePolicyTemplateCallable(const DeletePolicyTemplateRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::DeletePolicyTemplate, request);
        }

        /**
         * An Async wrapper for DeletePolicyTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyTemplateRequestT = Model::DeletePolicyTemplateRequest>
        void DeletePolicyTemplateAsync(const DeletePolicyTemplateRequestT& request, const DeletePolicyTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::DeletePolicyTemplate, request, handler, context);
        }

        /**
         * <p>Retrieves the details about the specified identity source.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/GetIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIdentitySourceOutcome GetIdentitySource(const Model::GetIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for GetIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetIdentitySourceRequestT = Model::GetIdentitySourceRequest>
        Model::GetIdentitySourceOutcomeCallable GetIdentitySourceCallable(const GetIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::GetIdentitySource, request);
        }

        /**
         * An Async wrapper for GetIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIdentitySourceRequestT = Model::GetIdentitySourceRequest>
        void GetIdentitySourceAsync(const GetIdentitySourceRequestT& request, const GetIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::GetIdentitySource, request, handler, context);
        }

        /**
         * <p>Retrieves information about the specified policy.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/GetPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::GetPolicy, request);
        }

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::GetPolicy, request, handler, context);
        }

        /**
         * <p>Retrieves details about a policy store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/GetPolicyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyStoreOutcome GetPolicyStore(const Model::GetPolicyStoreRequest& request) const;

        /**
         * A Callable wrapper for GetPolicyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyStoreRequestT = Model::GetPolicyStoreRequest>
        Model::GetPolicyStoreOutcomeCallable GetPolicyStoreCallable(const GetPolicyStoreRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::GetPolicyStore, request);
        }

        /**
         * An Async wrapper for GetPolicyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyStoreRequestT = Model::GetPolicyStoreRequest>
        void GetPolicyStoreAsync(const GetPolicyStoreRequestT& request, const GetPolicyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::GetPolicyStore, request, handler, context);
        }

        /**
         * <p>Retrieve the details for the specified policy template in the specified
         * policy store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/GetPolicyTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyTemplateOutcome GetPolicyTemplate(const Model::GetPolicyTemplateRequest& request) const;

        /**
         * A Callable wrapper for GetPolicyTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPolicyTemplateRequestT = Model::GetPolicyTemplateRequest>
        Model::GetPolicyTemplateOutcomeCallable GetPolicyTemplateCallable(const GetPolicyTemplateRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::GetPolicyTemplate, request);
        }

        /**
         * An Async wrapper for GetPolicyTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyTemplateRequestT = Model::GetPolicyTemplateRequest>
        void GetPolicyTemplateAsync(const GetPolicyTemplateRequestT& request, const GetPolicyTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::GetPolicyTemplate, request, handler, context);
        }

        /**
         * <p>Retrieve the details for the specified schema in the specified policy
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/GetSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaOutcome GetSchema(const Model::GetSchemaRequest& request) const;

        /**
         * A Callable wrapper for GetSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        Model::GetSchemaOutcomeCallable GetSchemaCallable(const GetSchemaRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::GetSchema, request);
        }

        /**
         * An Async wrapper for GetSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaRequestT = Model::GetSchemaRequest>
        void GetSchemaAsync(const GetSchemaRequestT& request, const GetSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::GetSchema, request, handler, context);
        }

        /**
         * <p>Makes an authorization decision about a service request described in the
         * parameters. The information in the parameters can also define additional context
         * that Verified Permissions can include in the evaluation. The request is
         * evaluated against all matching policies in the specified policy store. The
         * result of the decision is either <code>Allow</code> or <code>Deny</code>, along
         * with a list of the policies that resulted in the decision.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/IsAuthorized">AWS
         * API Reference</a></p>
         */
        virtual Model::IsAuthorizedOutcome IsAuthorized(const Model::IsAuthorizedRequest& request) const;

        /**
         * A Callable wrapper for IsAuthorized that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IsAuthorizedRequestT = Model::IsAuthorizedRequest>
        Model::IsAuthorizedOutcomeCallable IsAuthorizedCallable(const IsAuthorizedRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::IsAuthorized, request);
        }

        /**
         * An Async wrapper for IsAuthorized that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IsAuthorizedRequestT = Model::IsAuthorizedRequest>
        void IsAuthorizedAsync(const IsAuthorizedRequestT& request, const IsAuthorizedResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::IsAuthorized, request, handler, context);
        }

        /**
         * <p>Makes an authorization decision about a service request described in the
         * parameters. The principal in this request comes from an external identity source
         * in the form of an identity token formatted as a <a
         * href="https://wikipedia.org/wiki/JSON_Web_Token">JSON web token (JWT)</a>. The
         * information in the parameters can also define additional context that Verified
         * Permissions can include in the evaluation. The request is evaluated against all
         * matching policies in the specified policy store. The result of the decision is
         * either <code>Allow</code> or <code>Deny</code>, along with a list of the
         * policies that resulted in the decision.</p> <p>Verified Permissions validates
         * each token that is specified in a request by checking its expiration date and
         * its signature.</p>  <p>Tokens from an identity source user continue
         * to be usable until they expire. Token revocation and resource deletion have no
         * effect on the validity of a token in your policy store</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/IsAuthorizedWithToken">AWS
         * API Reference</a></p>
         */
        virtual Model::IsAuthorizedWithTokenOutcome IsAuthorizedWithToken(const Model::IsAuthorizedWithTokenRequest& request) const;

        /**
         * A Callable wrapper for IsAuthorizedWithToken that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IsAuthorizedWithTokenRequestT = Model::IsAuthorizedWithTokenRequest>
        Model::IsAuthorizedWithTokenOutcomeCallable IsAuthorizedWithTokenCallable(const IsAuthorizedWithTokenRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::IsAuthorizedWithToken, request);
        }

        /**
         * An Async wrapper for IsAuthorizedWithToken that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IsAuthorizedWithTokenRequestT = Model::IsAuthorizedWithTokenRequest>
        void IsAuthorizedWithTokenAsync(const IsAuthorizedWithTokenRequestT& request, const IsAuthorizedWithTokenResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::IsAuthorizedWithToken, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all of the identity sources defined in the
         * specified policy store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ListIdentitySources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentitySourcesOutcome ListIdentitySources(const Model::ListIdentitySourcesRequest& request) const;

        /**
         * A Callable wrapper for ListIdentitySources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentitySourcesRequestT = Model::ListIdentitySourcesRequest>
        Model::ListIdentitySourcesOutcomeCallable ListIdentitySourcesCallable(const ListIdentitySourcesRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::ListIdentitySources, request);
        }

        /**
         * An Async wrapper for ListIdentitySources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentitySourcesRequestT = Model::ListIdentitySourcesRequest>
        void ListIdentitySourcesAsync(const ListIdentitySourcesRequestT& request, const ListIdentitySourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::ListIdentitySources, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all policies stored in the specified policy
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::ListPolicies, request);
        }

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        void ListPoliciesAsync(const ListPoliciesRequestT& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::ListPolicies, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all policy stores in the calling Amazon Web
         * Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ListPolicyStores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyStoresOutcome ListPolicyStores(const Model::ListPolicyStoresRequest& request = {}) const;

        /**
         * A Callable wrapper for ListPolicyStores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyStoresRequestT = Model::ListPolicyStoresRequest>
        Model::ListPolicyStoresOutcomeCallable ListPolicyStoresCallable(const ListPolicyStoresRequestT& request = {}) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::ListPolicyStores, request);
        }

        /**
         * An Async wrapper for ListPolicyStores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyStoresRequestT = Model::ListPolicyStoresRequest>
        void ListPolicyStoresAsync(const ListPolicyStoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListPolicyStoresRequestT& request = {}) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::ListPolicyStores, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of all policy templates in the specified policy
         * store.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ListPolicyTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyTemplatesOutcome ListPolicyTemplates(const Model::ListPolicyTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPolicyTemplatesRequestT = Model::ListPolicyTemplatesRequest>
        Model::ListPolicyTemplatesOutcomeCallable ListPolicyTemplatesCallable(const ListPolicyTemplatesRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::ListPolicyTemplates, request);
        }

        /**
         * An Async wrapper for ListPolicyTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyTemplatesRequestT = Model::ListPolicyTemplatesRequest>
        void ListPolicyTemplatesAsync(const ListPolicyTemplatesRequestT& request, const ListPolicyTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::ListPolicyTemplates, request, handler, context);
        }

        /**
         * <p>Returns the tags associated with the specified Amazon Verified Permissions
         * resource. In Verified Permissions, policy stores can be tagged.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Creates or updates the policy schema in the specified policy store. The
         * schema is used to validate any Cedar policies and policy templates submitted to
         * the policy store. Any changes to the schema validate only policies and templates
         * submitted after the schema change. Existing policies and templates are not
         * re-evaluated against the changed schema. If you later update a policy, then it
         * is evaluated against the new schema at that time.</p>  <p>Verified
         * Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/PutSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::PutSchemaOutcome PutSchema(const Model::PutSchemaRequest& request) const;

        /**
         * A Callable wrapper for PutSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutSchemaRequestT = Model::PutSchemaRequest>
        Model::PutSchemaOutcomeCallable PutSchemaCallable(const PutSchemaRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::PutSchema, request);
        }

        /**
         * An Async wrapper for PutSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutSchemaRequestT = Model::PutSchemaRequest>
        void PutSchemaAsync(const PutSchemaRequestT& request, const PutSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::PutSchema, request, handler, context);
        }

        /**
         * <p>Assigns one or more tags (key-value pairs) to the specified Amazon Verified
         * Permissions resource. Tags can help you organize and categorize your resources.
         * You can also use them to scope user permissions by granting a user permission to
         * access or change only resources with certain tag values. In Verified
         * Permissions, policy stores can be tagged.</p> <p>Tags don't have any semantic
         * meaning to Amazon Web Services and are interpreted strictly as strings of
         * characters.</p> <p>You can use the TagResource action with a resource that
         * already has tags. If you specify a new tag key, this tag is appended to the list
         * of tags associated with the resource. If you specify a tag key that is already
         * associated with the resource, the new tag value that you specify replaces the
         * previous value for that tag.</p> <p>You can associate as many as 50 tags with a
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from the specified Amazon Verified Permissions
         * resource. In Verified Permissions, policy stores can be tagged.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the specified identity source to use a new identity provider (IdP),
         * or to change the mapping of identities from the IdP to a different principal
         * entity type.</p>  <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdateIdentitySource">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIdentitySourceOutcome UpdateIdentitySource(const Model::UpdateIdentitySourceRequest& request) const;

        /**
         * A Callable wrapper for UpdateIdentitySource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateIdentitySourceRequestT = Model::UpdateIdentitySourceRequest>
        Model::UpdateIdentitySourceOutcomeCallable UpdateIdentitySourceCallable(const UpdateIdentitySourceRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::UpdateIdentitySource, request);
        }

        /**
         * An Async wrapper for UpdateIdentitySource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIdentitySourceRequestT = Model::UpdateIdentitySourceRequest>
        void UpdateIdentitySourceAsync(const UpdateIdentitySourceRequestT& request, const UpdateIdentitySourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::UpdateIdentitySource, request, handler, context);
        }

        /**
         * <p>Modifies a Cedar static policy in the specified policy store. You can change
         * only certain elements of the <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyInput.html#amazonverifiedpermissions-UpdatePolicy-request-UpdatePolicyDefinition">UpdatePolicyDefinition</a>
         * parameter. You can directly update only static policies. To change a
         * template-linked policy, you must update the template instead, using <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyTemplate.html">UpdatePolicyTemplate</a>.</p>
         *  <ul> <li> <p>If policy validation is enabled in the policy store, then
         * updating a static policy causes Verified Permissions to validate the policy
         * against the schema in the policy store. If the updated static policy doesn't
         * pass validation, the operation fails and the update isn't stored.</p> </li> <li>
         * <p>When you edit a static policy, you can change only certain elements of a
         * static policy:</p> <ul> <li> <p>The action referenced by the policy. </p> </li>
         * <li> <p>A condition clause, such as when and unless. </p> </li> </ul> <p>You
         * can't change these elements of a static policy: </p> <ul> <li> <p>Changing a
         * policy from a static policy to a template-linked policy. </p> </li> <li>
         * <p>Changing the effect of a static policy from permit or forbid. </p> </li> <li>
         * <p>The principal referenced by a static policy. </p> </li> <li> <p>The resource
         * referenced by a static policy. </p> </li> </ul> </li> <li> <p>To update a
         * template-linked policy, you must update the template instead. </p> </li> </ul>
         *   <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyOutcome UpdatePolicy(const Model::UpdatePolicyRequest& request) const;

        /**
         * A Callable wrapper for UpdatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
        Model::UpdatePolicyOutcomeCallable UpdatePolicyCallable(const UpdatePolicyRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::UpdatePolicy, request);
        }

        /**
         * An Async wrapper for UpdatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePolicyRequestT = Model::UpdatePolicyRequest>
        void UpdatePolicyAsync(const UpdatePolicyRequestT& request, const UpdatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::UpdatePolicy, request, handler, context);
        }

        /**
         * <p>Modifies the validation setting for a policy store.</p>  <p>Verified
         * Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdatePolicyStore">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyStoreOutcome UpdatePolicyStore(const Model::UpdatePolicyStoreRequest& request) const;

        /**
         * A Callable wrapper for UpdatePolicyStore that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePolicyStoreRequestT = Model::UpdatePolicyStoreRequest>
        Model::UpdatePolicyStoreOutcomeCallable UpdatePolicyStoreCallable(const UpdatePolicyStoreRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::UpdatePolicyStore, request);
        }

        /**
         * An Async wrapper for UpdatePolicyStore that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePolicyStoreRequestT = Model::UpdatePolicyStoreRequest>
        void UpdatePolicyStoreAsync(const UpdatePolicyStoreRequestT& request, const UpdatePolicyStoreResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::UpdatePolicyStore, request, handler, context);
        }

        /**
         * <p>Updates the specified policy template. You can update only the description
         * and the some elements of the <a
         * href="https://docs.aws.amazon.com/verifiedpermissions/latest/apireference/API_UpdatePolicyTemplate.html#amazonverifiedpermissions-UpdatePolicyTemplate-request-policyBody">policyBody</a>.
         * </p>  <p>Changes you make to the policy template content are
         * immediately (within the constraints of eventual consistency) reflected in
         * authorization decisions that involve all template-linked policies instantiated
         * from this template.</p>   <p>Verified Permissions is <i> <a
         * href="https://wikipedia.org/wiki/Eventual_consistency">eventually consistent</a>
         * </i>. It can take a few seconds for a new or changed element to propagate
         * through the service and be visible in the results of other Verified Permissions
         * operations.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/verifiedpermissions-2021-12-01/UpdatePolicyTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePolicyTemplateOutcome UpdatePolicyTemplate(const Model::UpdatePolicyTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdatePolicyTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePolicyTemplateRequestT = Model::UpdatePolicyTemplateRequest>
        Model::UpdatePolicyTemplateOutcomeCallable UpdatePolicyTemplateCallable(const UpdatePolicyTemplateRequestT& request) const
        {
            return SubmitCallable(&VerifiedPermissionsClient::UpdatePolicyTemplate, request);
        }

        /**
         * An Async wrapper for UpdatePolicyTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePolicyTemplateRequestT = Model::UpdatePolicyTemplateRequest>
        void UpdatePolicyTemplateAsync(const UpdatePolicyTemplateRequestT& request, const UpdatePolicyTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&VerifiedPermissionsClient::UpdatePolicyTemplate, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<VerifiedPermissionsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<VerifiedPermissionsClient>;
      void init(const VerifiedPermissionsClientConfiguration& clientConfiguration);

      VerifiedPermissionsClientConfiguration m_clientConfiguration;
      std::shared_ptr<VerifiedPermissionsEndpointProviderBase> m_endpointProvider;
  };

} // namespace VerifiedPermissions
} // namespace Aws
