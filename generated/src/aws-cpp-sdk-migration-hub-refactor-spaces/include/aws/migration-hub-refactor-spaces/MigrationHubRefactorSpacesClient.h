/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpaces_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migration-hub-refactor-spaces/MigrationHubRefactorSpacesServiceClientModel.h>

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
  /**
   * <p><fullname>Amazon Web Services Migration Hub Refactor Spaces</fullname>
   * <p>This API reference provides descriptions, syntax, and other details about
   * each of the actions and data types for Amazon Web Services Migration Hub
   * Refactor Spaces (Refactor Spaces). The topic for each action shows the API
   * request parameters and the response. Alternatively, you can use one of the
   * Amazon Web Services SDKs to access an API that is tailored to the programming
   * language or platform that you're using. For more information, see <a
   * href="https://aws.amazon.com/tools/#SDKs">Amazon Web Services SDKs</a>.</p>
   * <p>To share Refactor Spaces environments with other Amazon Web Services accounts
   * or with Organizations and their OUs, use Resource Access Manager's
   * <code>CreateResourceShare</code> API. See <a
   * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a>
   * in the <i>Amazon Web Services RAM API Reference</i>.</p></p>
   */
  class AWS_MIGRATIONHUBREFACTORSPACES_API MigrationHubRefactorSpacesClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubRefactorSpacesClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef MigrationHubRefactorSpacesClientConfiguration ClientConfigurationType;
      typedef MigrationHubRefactorSpacesEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration(),
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = nullptr,
                                         const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubRefactorSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> endpointProvider = nullptr,
                                         const Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration& clientConfiguration = Aws::MigrationHubRefactorSpaces::MigrationHubRefactorSpacesClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubRefactorSpacesClient(const Aws::Auth::AWSCredentials& credentials,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubRefactorSpacesClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubRefactorSpacesClient();

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces application. The
         * account that owns the environment also owns the applications created inside the
         * environment, regardless of the account that creates the application. Refactor
         * Spaces provisions an Amazon API Gateway, API Gateway VPC link, and Network Load
         * Balancer for the application proxy inside your account.</p> <p>In environments
         * created with a <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/APIReference/API_CreateEnvironment.html#migrationhubrefactorspaces-CreateEnvironment-request-NetworkFabricType">CreateEnvironment:NetworkFabricType</a>
         * of <code>NONE</code> you need to configure <a
         * href="https://docs.aws.amazon.com/whitepapers/latest/aws-vpc-connectivity-options/amazon-vpc-to-amazon-vpc-connectivity-options.html">
         * VPC to VPC connectivity</a> between your service VPC and the application proxy
         * VPC to route traffic through the application proxy to a service with a private
         * URL endpoint. For more information, see <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/userguide/getting-started-create-application.html">
         * Create an application</a> in the <i>Refactor Spaces User Guide</i>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::CreateApplication, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces environment. The
         * caller owns the environment resource, and all Refactor Spaces applications,
         * services, and routes created within the environment. They are referred to as the
         * <i>environment owner</i>. The environment owner has cross-account visibility and
         * control of Refactor Spaces resources that are added to the environment by other
         * accounts that the environment is shared with.</p> <p>When creating an
         * environment with a <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/APIReference/API_CreateEnvironment.html#migrationhubrefactorspaces-CreateEnvironment-request-NetworkFabricType">CreateEnvironment:NetworkFabricType</a>
         * of <code>TRANSIT_GATEWAY</code>, Refactor Spaces provisions a transit gateway to
         * enable services in VPCs to communicate directly across accounts. If <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/APIReference/API_CreateEnvironment.html#migrationhubrefactorspaces-CreateEnvironment-request-NetworkFabricType">CreateEnvironment:NetworkFabricType</a>
         * is <code>NONE</code>, Refactor Spaces does not create a transit gateway and you
         * must use your network infrastructure to route traffic to services with private
         * URL endpoints.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces route. The
         * account owner of the service resource is always the environment owner,
         * regardless of which account creates the route. Routes target a service in the
         * application. If an application does not have any routes, then the first route
         * must be created as a <code>DEFAULT</code> <code>RouteType</code>.</p> <p>When
         * created, the default route defaults to an active state so state is not a
         * required input. However, like all other state values the state of the default
         * route can be updated after creation, but only when all other routes are also
         * inactive. Conversely, no route can be active without the default route also
         * being active.</p> <p>When you create a route, Refactor Spaces configures the
         * Amazon API Gateway to send traffic to the target service as follows:</p> <ul>
         * <li> <p> <b>URL Endpoints</b> </p> <p>If the service has a URL endpoint, and the
         * endpoint resolves to a private IP address, Refactor Spaces routes traffic using
         * the API Gateway VPC link. If a service endpoint resolves to a public IP address,
         * Refactor Spaces routes traffic over the public internet. Services can have HTTP
         * or HTTPS URL endpoints. For HTTPS URLs, publicly-signed certificates are
         * supported. Private Certificate Authorities (CAs) are permitted only if the CA's
         * domain is also publicly resolvable. </p> <p>Refactor Spaces automatically
         * resolves the public Domain Name System (DNS) names that are set in
         * <code>CreateService:UrlEndpoint </code>when you create a service. The DNS names
         * resolve when the DNS time-to-live (TTL) expires, or every 60 seconds for TTLs
         * less than 60 seconds. This periodic DNS resolution ensures that the route
         * configuration remains up-to-date. </p> <p/> <p> <b>One-time health check</b>
         * </p> <p>A one-time health check is performed on the service when either the
         * route is updated from inactive to active, or when it is created with an active
         * state. If the health check fails, the route transitions the route state to
         * <code>FAILED</code>, an error code of
         * <code>SERVICE_ENDPOINT_HEALTH_CHECK_FAILURE</code> is provided, and no traffic
         * is sent to the service.</p> <p>For private URLs, a target group is created on
         * the Network Load Balancer and the load balancer target group runs default target
         * health checks. By default, the health check is run against the service endpoint
         * URL. Optionally, the health check can be performed against a different protocol,
         * port, and/or path using the <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/APIReference/API_CreateService.html#migrationhubrefactorspaces-CreateService-request-UrlEndpoint">CreateService:UrlEndpoint</a>
         * parameter. All other health check settings for the load balancer use the default
         * values described in the <a
         * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/target-group-health-checks.html">Health
         * checks for your target groups</a> in the <i>Elastic Load Balancing guide</i>.
         * The health check is considered successful if at least one target within the
         * target group transitions to a healthy state.</p> <p/> </li> <li> <p> <b>Lambda
         * function endpoints</b> </p> <p>If the service has an Lambda function endpoint,
         * then Refactor Spaces configures the Lambda function's resource policy to allow
         * the application's API Gateway to invoke the function.</p> <p>The Lambda function
         * state is checked. If the function is not active, the function configuration is
         * updated so that Lambda resources are provisioned. If the Lambda state is
         * <code>Failed</code>, then the route creation fails. For more information, see
         * the <a
         * href="https://docs.aws.amazon.com/lambda/latest/dg/API_GetFunctionConfiguration.html#SSS-GetFunctionConfiguration-response-State">GetFunctionConfiguration's
         * State response parameter</a> in the <i>Lambda Developer Guide</i>.</p> <p>A
         * check is performed to determine that a Lambda function with the specified ARN
         * exists. If it does not exist, the health check fails. For public URLs, a
         * connection is opened to the public endpoint. If the URL is not reachable, the
         * health check fails. </p> </li> </ul> <p> <b>Environments without a network
         * bridge</b> </p> <p>When you create environments without a network bridge (<a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/APIReference/API_CreateEnvironment.html#migrationhubrefactorspaces-CreateEnvironment-request-NetworkFabricType">CreateEnvironment:NetworkFabricType</a>
         * is <code>NONE)</code> and you use your own networking infrastructure, you need
         * to configure <a
         * href="https://docs.aws.amazon.com/whitepapers/latest/aws-vpc-connectivity-options/amazon-vpc-to-amazon-vpc-connectivity-options.html">VPC
         * to VPC connectivity</a> between your network and the application proxy VPC.
         * Route creation from the application proxy to service endpoints will fail if your
         * network is not configured to connect to the application proxy VPC. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/migrationhub-refactor-spaces/latest/userguide/getting-started-create-role.html">
         * Create a route</a> in the <i>Refactor Spaces User Guide</i>.</p> <p/><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * A Callable wrapper for CreateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        Model::CreateRouteOutcomeCallable CreateRouteCallable(const CreateRouteRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::CreateRoute, request);
        }

        /**
         * An Async wrapper for CreateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRouteRequestT = Model::CreateRouteRequest>
        void CreateRouteAsync(const CreateRouteRequestT& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::CreateRoute, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services Migration Hub Refactor Spaces service. The
         * account owner of the service is always the environment owner, regardless of
         * which account in the environment creates the service. Services have either a URL
         * endpoint in a virtual private cloud (VPC), or a Lambda function endpoint.</p>
         *  <p>If an Amazon Web Services resource is launched in a service VPC,
         * and you want it to be accessible to all of an environment’s services with VPCs
         * and routes, apply the <code>RefactorSpacesSecurityGroup</code> to the resource.
         * Alternatively, to add more cross-account constraints, apply your own security
         * group.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/CreateService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceOutcome CreateService(const Model::CreateServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        Model::CreateServiceOutcomeCallable CreateServiceCallable(const CreateServiceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::CreateService, request);
        }

        /**
         * An Async wrapper for CreateService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceRequestT = Model::CreateServiceRequest>
        void CreateServiceAsync(const CreateServiceRequestT& request, const CreateServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::CreateService, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces application.
         * Before you can delete an application, you must first delete any services or
         * routes within the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteApplication, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces environment.
         * Before you can delete an environment, you must first delete any applications and
         * services within the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes the resource policy set for the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourcePolicyOutcome DeleteResourcePolicy(const Model::DeleteResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        Model::DeleteResourcePolicyOutcomeCallable DeleteResourcePolicyCallable(const DeleteResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteResourcePolicy, request);
        }

        /**
         * An Async wrapper for DeleteResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourcePolicyRequestT = Model::DeleteResourcePolicyRequest>
        void DeleteResourcePolicyAsync(const DeleteResourcePolicyRequestT& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteResourcePolicy, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const DeleteRouteRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteRoute, request);
        }

        /**
         * An Async wrapper for DeleteRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRouteRequestT = Model::DeleteRouteRequest>
        void DeleteRouteAsync(const DeleteRouteRequestT& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteRoute, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/DeleteService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceOutcome DeleteService(const Model::DeleteServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        Model::DeleteServiceOutcomeCallable DeleteServiceCallable(const DeleteServiceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::DeleteService, request);
        }

        /**
         * An Async wrapper for DeleteService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceRequestT = Model::DeleteServiceRequest>
        void DeleteServiceAsync(const DeleteServiceRequestT& request, const DeleteServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::DeleteService, request, handler, context);
        }

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationOutcome GetApplication(const Model::GetApplicationRequest& request) const;

        /**
         * A Callable wrapper for GetApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        Model::GetApplicationOutcomeCallable GetApplicationCallable(const GetApplicationRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::GetApplication, request);
        }

        /**
         * An Async wrapper for GetApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetApplicationRequestT = Model::GetApplicationRequest>
        void GetApplicationAsync(const GetApplicationRequestT& request, const GetApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::GetApplication, request, handler, context);
        }

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>Gets the resource-based permission policy that is set for the given
         * environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourcePolicyOutcome GetResourcePolicy(const Model::GetResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        Model::GetResourcePolicyOutcomeCallable GetResourcePolicyCallable(const GetResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::GetResourcePolicy, request);
        }

        /**
         * An Async wrapper for GetResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourcePolicyRequestT = Model::GetResourcePolicyRequest>
        void GetResourcePolicyAsync(const GetResourcePolicyRequestT& request, const GetResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::GetResourcePolicy, request, handler, context);
        }

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces
         * route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRouteOutcome GetRoute(const Model::GetRouteRequest& request) const;

        /**
         * A Callable wrapper for GetRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRouteRequestT = Model::GetRouteRequest>
        Model::GetRouteOutcomeCallable GetRouteCallable(const GetRouteRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::GetRoute, request);
        }

        /**
         * An Async wrapper for GetRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRouteRequestT = Model::GetRouteRequest>
        void GetRouteAsync(const GetRouteRequestT& request, const GetRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::GetRoute, request, handler, context);
        }

        /**
         * <p>Gets an Amazon Web Services Migration Hub Refactor Spaces service.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/GetService">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServiceOutcome GetService(const Model::GetServiceRequest& request) const;

        /**
         * A Callable wrapper for GetService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        Model::GetServiceOutcomeCallable GetServiceCallable(const GetServiceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::GetService, request);
        }

        /**
         * An Async wrapper for GetService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetServiceRequestT = Model::GetServiceRequest>
        void GetServiceAsync(const GetServiceRequestT& request, const GetServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::GetService, request, handler, context);
        }

        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces applications
         * within an environment. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Lists all Amazon Web Services Migration Hub Refactor Spaces service virtual
         * private clouds (VPCs) that are part of the environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironmentVpcs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentVpcsOutcome ListEnvironmentVpcs(const Model::ListEnvironmentVpcsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentVpcs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentVpcsRequestT = Model::ListEnvironmentVpcsRequest>
        Model::ListEnvironmentVpcsOutcomeCallable ListEnvironmentVpcsCallable(const ListEnvironmentVpcsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListEnvironmentVpcs, request);
        }

        /**
         * An Async wrapper for ListEnvironmentVpcs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentVpcsRequestT = Model::ListEnvironmentVpcsRequest>
        void ListEnvironmentVpcsAsync(const ListEnvironmentVpcsRequestT& request, const ListEnvironmentVpcsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListEnvironmentVpcs, request, handler, context);
        }

        /**
         * <p>Lists Amazon Web Services Migration Hub Refactor Spaces environments owned by
         * a caller account or shared with the caller account. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsRequestT& request, const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces routes within
         * an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;

        /**
         * A Callable wrapper for ListRoutes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRoutesRequestT = Model::ListRoutesRequest>
        Model::ListRoutesOutcomeCallable ListRoutesCallable(const ListRoutesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListRoutes, request);
        }

        /**
         * An Async wrapper for ListRoutes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoutesRequestT = Model::ListRoutesRequest>
        void ListRoutesAsync(const ListRoutesRequestT& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListRoutes, request, handler, context);
        }

        /**
         * <p>Lists all the Amazon Web Services Migration Hub Refactor Spaces services
         * within an application. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListServices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServicesOutcome ListServices(const Model::ListServicesRequest& request) const;

        /**
         * A Callable wrapper for ListServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        Model::ListServicesOutcomeCallable ListServicesCallable(const ListServicesRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListServices, request);
        }

        /**
         * An Async wrapper for ListServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServicesRequestT = Model::ListServicesRequest>
        void ListServicesAsync(const ListServicesRequestT& request, const ListServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListServices, request, handler, context);
        }

        /**
         * <p>Lists the tags of a resource. The caller account must be the same as the
         * resource’s <code>OwnerAccountId</code>. Listing tags in other accounts is not
         * supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Attaches a resource-based permission policy to the Amazon Web Services
         * Migration Hub Refactor Spaces environment. The policy must contain the same
         * actions and condition statements as the
         * <code>arn:aws:ram::aws:permission/AWSRAMDefaultPermissionRefactorSpacesEnvironment</code>
         * permission in Resource Access Manager. The policy must not contain new lines or
         * blank lines. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/PutResourcePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourcePolicyOutcome PutResourcePolicy(const Model::PutResourcePolicyRequest& request) const;

        /**
         * A Callable wrapper for PutResourcePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        Model::PutResourcePolicyOutcomeCallable PutResourcePolicyCallable(const PutResourcePolicyRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::PutResourcePolicy, request);
        }

        /**
         * An Async wrapper for PutResourcePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourcePolicyRequestT = Model::PutResourcePolicyRequest>
        void PutResourcePolicyAsync(const PutResourcePolicyRequestT& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::PutResourcePolicy, request, handler, context);
        }

        /**
         * <p>Removes the tags of a given resource. Tags are metadata which can be used to
         * manage a resource. To tag a resource, the caller account must be the same as the
         * resource’s <code>OwnerAccountId</code>. Tagging resources in other accounts is
         * not supported.</p>  <p>Amazon Web Services Migration Hub Refactor Spaces
         * does not propagate tags to orchestrated resources, such as an environment’s
         * transit gateway.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::TagResource, request, handler, context);
        }

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource. To untag a resource, the caller account must
         * be the same as the resource’s <code>OwnerAccountId</code>. Untagging resources
         * across accounts is not supported. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::UntagResource, request, handler, context);
        }

        /**
         * <p> Updates an Amazon Web Services Migration Hub Refactor Spaces route.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migration-hub-refactor-spaces-2021-10-26/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const UpdateRouteRequestT& request) const
        {
            return SubmitCallable(&MigrationHubRefactorSpacesClient::UpdateRoute, request);
        }

        /**
         * An Async wrapper for UpdateRoute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRouteRequestT = Model::UpdateRouteRequest>
        void UpdateRouteAsync(const UpdateRouteRequestT& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&MigrationHubRefactorSpacesClient::UpdateRoute, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<MigrationHubRefactorSpacesClient>;
      void init(const MigrationHubRefactorSpacesClientConfiguration& clientConfiguration);

      MigrationHubRefactorSpacesClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubRefactorSpacesEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubRefactorSpaces
} // namespace Aws
