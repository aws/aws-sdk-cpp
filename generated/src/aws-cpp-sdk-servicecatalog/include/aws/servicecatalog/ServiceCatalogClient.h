/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/servicecatalog/ServiceCatalogServiceClientModel.h>

namespace Aws
{
namespace ServiceCatalog
{
  /**
   * <fullname>Service Catalog</fullname> <p> <a
   * href="http://aws.amazon.com/servicecatalog">Service Catalog</a> enables
   * organizations to create and manage catalogs of IT services that are approved for
   * Amazon Web Services. To get the most out of this documentation, you should be
   * familiar with the terminology discussed in <a
   * href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service
   * Catalog Concepts</a>.</p>
   */
  class AWS_SERVICECATALOG_API ServiceCatalogClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ServiceCatalogClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ServiceCatalogClientConfiguration ClientConfigurationType;
      typedef ServiceCatalogEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration(),
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<ServiceCatalogEndpointProviderBase> endpointProvider = nullptr,
                             const Aws::ServiceCatalog::ServiceCatalogClientConfiguration& clientConfiguration = Aws::ServiceCatalog::ServiceCatalogClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ServiceCatalogClient(const Aws::Auth::AWSCredentials& credentials,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ServiceCatalogClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ServiceCatalogClient();

        /**
         * <p>Accepts an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AcceptPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptPortfolioShareOutcome AcceptPortfolioShare(const Model::AcceptPortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for AcceptPortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AcceptPortfolioShareRequestT = Model::AcceptPortfolioShareRequest>
        Model::AcceptPortfolioShareOutcomeCallable AcceptPortfolioShareCallable(const AcceptPortfolioShareRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AcceptPortfolioShare, request);
        }

        /**
         * An Async wrapper for AcceptPortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptPortfolioShareRequestT = Model::AcceptPortfolioShareRequest>
        void AcceptPortfolioShareAsync(const AcceptPortfolioShareRequestT& request, const AcceptPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AcceptPortfolioShare, request, handler, context);
        }

        /**
         * <p>Associates the specified budget with the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateBudgetWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateBudgetWithResourceOutcome AssociateBudgetWithResource(const Model::AssociateBudgetWithResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateBudgetWithResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateBudgetWithResourceRequestT = Model::AssociateBudgetWithResourceRequest>
        Model::AssociateBudgetWithResourceOutcomeCallable AssociateBudgetWithResourceCallable(const AssociateBudgetWithResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AssociateBudgetWithResource, request);
        }

        /**
         * An Async wrapper for AssociateBudgetWithResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateBudgetWithResourceRequestT = Model::AssociateBudgetWithResourceRequest>
        void AssociateBudgetWithResourceAsync(const AssociateBudgetWithResourceRequestT& request, const AssociateBudgetWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AssociateBudgetWithResource, request, handler, context);
        }

        /**
         * <p>Associates the specified principal ARN with the specified portfolio.</p>
         * <p>If you share the portfolio with principal name sharing enabled, the
         * <code>PrincipalARN</code> association is included in the share. </p> <p>The
         * <code>PortfolioID</code>, <code>PrincipalARN</code>, and
         * <code>PrincipalType</code> parameters are required. </p> <p>You can associate a
         * maximum of 10 Principals with a portfolio using <code>PrincipalType</code> as
         * <code>IAM_PATTERN</code>. </p>  <p>When you associate a principal with
         * portfolio, a potential privilege escalation path may occur when that portfolio
         * is then shared with other accounts. For a user in a recipient account who is
         * <i>not</i> an Service Catalog Admin, but still has the ability to create
         * Principals (Users/Groups/Roles), that user could create a role that matches a
         * principal name association for the portfolio. Although this user may not know
         * which principal names are associated through Service Catalog, they may be able
         * to guess the user. If this potential escalation path is a concern, then Service
         * Catalog recommends using <code>PrincipalType</code> as <code>IAM</code>. With
         * this configuration, the <code>PrincipalARN</code> must already exist in the
         * recipient account before it can be associated. </p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociatePrincipalWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociatePrincipalWithPortfolioOutcome AssociatePrincipalWithPortfolio(const Model::AssociatePrincipalWithPortfolioRequest& request) const;

        /**
         * A Callable wrapper for AssociatePrincipalWithPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociatePrincipalWithPortfolioRequestT = Model::AssociatePrincipalWithPortfolioRequest>
        Model::AssociatePrincipalWithPortfolioOutcomeCallable AssociatePrincipalWithPortfolioCallable(const AssociatePrincipalWithPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AssociatePrincipalWithPortfolio, request);
        }

        /**
         * An Async wrapper for AssociatePrincipalWithPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociatePrincipalWithPortfolioRequestT = Model::AssociatePrincipalWithPortfolioRequest>
        void AssociatePrincipalWithPortfolioAsync(const AssociatePrincipalWithPortfolioRequestT& request, const AssociatePrincipalWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AssociatePrincipalWithPortfolio, request, handler, context);
        }

        /**
         * <p>Associates the specified product with the specified portfolio.</p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateProductWithPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateProductWithPortfolioOutcome AssociateProductWithPortfolio(const Model::AssociateProductWithPortfolioRequest& request) const;

        /**
         * A Callable wrapper for AssociateProductWithPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateProductWithPortfolioRequestT = Model::AssociateProductWithPortfolioRequest>
        Model::AssociateProductWithPortfolioOutcomeCallable AssociateProductWithPortfolioCallable(const AssociateProductWithPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AssociateProductWithPortfolio, request);
        }

        /**
         * An Async wrapper for AssociateProductWithPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateProductWithPortfolioRequestT = Model::AssociateProductWithPortfolioRequest>
        void AssociateProductWithPortfolioAsync(const AssociateProductWithPortfolioRequestT& request, const AssociateProductWithPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AssociateProductWithPortfolio, request, handler, context);
        }

        /**
         * <p>Associates a self-service action with a provisioning artifact.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateServiceActionWithProvisioningArtifactOutcome AssociateServiceActionWithProvisioningArtifact(const Model::AssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for AssociateServiceActionWithProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateServiceActionWithProvisioningArtifactRequestT = Model::AssociateServiceActionWithProvisioningArtifactRequest>
        Model::AssociateServiceActionWithProvisioningArtifactOutcomeCallable AssociateServiceActionWithProvisioningArtifactCallable(const AssociateServiceActionWithProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for AssociateServiceActionWithProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateServiceActionWithProvisioningArtifactRequestT = Model::AssociateServiceActionWithProvisioningArtifactRequest>
        void AssociateServiceActionWithProvisioningArtifactAsync(const AssociateServiceActionWithProvisioningArtifactRequestT& request, const AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AssociateServiceActionWithProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Associate the specified TagOption with the specified portfolio or
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/AssociateTagOptionWithResource">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTagOptionWithResourceOutcome AssociateTagOptionWithResource(const Model::AssociateTagOptionWithResourceRequest& request) const;

        /**
         * A Callable wrapper for AssociateTagOptionWithResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateTagOptionWithResourceRequestT = Model::AssociateTagOptionWithResourceRequest>
        Model::AssociateTagOptionWithResourceOutcomeCallable AssociateTagOptionWithResourceCallable(const AssociateTagOptionWithResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::AssociateTagOptionWithResource, request);
        }

        /**
         * An Async wrapper for AssociateTagOptionWithResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTagOptionWithResourceRequestT = Model::AssociateTagOptionWithResourceRequest>
        void AssociateTagOptionWithResourceAsync(const AssociateTagOptionWithResourceRequestT& request, const AssociateTagOptionWithResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::AssociateTagOptionWithResource, request, handler, context);
        }

        /**
         * <p>Associates multiple self-service actions with provisioning
         * artifacts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchAssociateServiceActionWithProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchAssociateServiceActionWithProvisioningArtifactOutcome BatchAssociateServiceActionWithProvisioningArtifact(const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for BatchAssociateServiceActionWithProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchAssociateServiceActionWithProvisioningArtifactRequestT = Model::BatchAssociateServiceActionWithProvisioningArtifactRequest>
        Model::BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable BatchAssociateServiceActionWithProvisioningArtifactCallable(const BatchAssociateServiceActionWithProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for BatchAssociateServiceActionWithProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchAssociateServiceActionWithProvisioningArtifactRequestT = Model::BatchAssociateServiceActionWithProvisioningArtifactRequest>
        void BatchAssociateServiceActionWithProvisioningArtifactAsync(const BatchAssociateServiceActionWithProvisioningArtifactRequestT& request, const BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::BatchAssociateServiceActionWithProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Disassociates a batch of self-service actions from the specified provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/BatchDisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcome BatchDisassociateServiceActionFromProvisioningArtifact(const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for BatchDisassociateServiceActionFromProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchDisassociateServiceActionFromProvisioningArtifactRequestT = Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest>
        Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable BatchDisassociateServiceActionFromProvisioningArtifactCallable(const BatchDisassociateServiceActionFromProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for BatchDisassociateServiceActionFromProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchDisassociateServiceActionFromProvisioningArtifactRequestT = Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest>
        void BatchDisassociateServiceActionFromProvisioningArtifactAsync(const BatchDisassociateServiceActionFromProvisioningArtifactRequestT& request, const BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::BatchDisassociateServiceActionFromProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Copies the specified source product to the specified target product or a new
         * product.</p> <p>You can copy a product to the same account or another account.
         * You can copy a product to the same Region or another Region. If you copy a
         * product to another account, you must first share the product in a portfolio
         * using <a>CreatePortfolioShare</a>.</p> <p>This operation is performed
         * asynchronously. To track the progress of the operation, use
         * <a>DescribeCopyProductStatus</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CopyProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CopyProductOutcome CopyProduct(const Model::CopyProductRequest& request) const;

        /**
         * A Callable wrapper for CopyProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopyProductRequestT = Model::CopyProductRequest>
        Model::CopyProductOutcomeCallable CopyProductCallable(const CopyProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CopyProduct, request);
        }

        /**
         * An Async wrapper for CopyProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopyProductRequestT = Model::CopyProductRequest>
        void CopyProductAsync(const CopyProductRequestT& request, const CopyProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CopyProduct, request, handler, context);
        }

        /**
         * <p>Creates a constraint.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConstraintOutcome CreateConstraint(const Model::CreateConstraintRequest& request) const;

        /**
         * A Callable wrapper for CreateConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConstraintRequestT = Model::CreateConstraintRequest>
        Model::CreateConstraintOutcomeCallable CreateConstraintCallable(const CreateConstraintRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateConstraint, request);
        }

        /**
         * An Async wrapper for CreateConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConstraintRequestT = Model::CreateConstraintRequest>
        void CreateConstraintAsync(const CreateConstraintRequestT& request, const CreateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateConstraint, request, handler, context);
        }

        /**
         * <p>Creates a portfolio.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioOutcome CreatePortfolio(const Model::CreatePortfolioRequest& request) const;

        /**
         * A Callable wrapper for CreatePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePortfolioRequestT = Model::CreatePortfolioRequest>
        Model::CreatePortfolioOutcomeCallable CreatePortfolioCallable(const CreatePortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreatePortfolio, request);
        }

        /**
         * An Async wrapper for CreatePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePortfolioRequestT = Model::CreatePortfolioRequest>
        void CreatePortfolioAsync(const CreatePortfolioRequestT& request, const CreatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreatePortfolio, request, handler, context);
        }

        /**
         * <p>Shares the specified portfolio with the specified account or organization
         * node. Shares to an organization node can only be created by the management
         * account of an organization or by a delegated administrator. You can share
         * portfolios to an organization, an organizational unit, or a specific
         * account.</p> <p>Note that if a delegated admin is de-registered, they can no
         * longer create portfolio shares.</p> <p> <code>AWSOrganizationsAccess</code> must
         * be enabled in order to create a portfolio share to an organization node.</p>
         * <p>You can't share a shared resource, including portfolios that contain a shared
         * product.</p> <p>If the portfolio share with the specified account or
         * organization node already exists, this action will have no effect and will not
         * return an error. To update an existing share, you must use the <code>
         * UpdatePortfolioShare</code> API instead. </p>  <p>When you associate a
         * principal with portfolio, a potential privilege escalation path may occur when
         * that portfolio is then shared with other accounts. For a user in a recipient
         * account who is <i>not</i> an Service Catalog Admin, but still has the ability to
         * create Principals (Users/Groups/Roles), that user could create a role that
         * matches a principal name association for the portfolio. Although this user may
         * not know which principal names are associated through Service Catalog, they may
         * be able to guess the user. If this potential escalation path is a concern, then
         * Service Catalog recommends using <code>PrincipalType</code> as <code>IAM</code>.
         * With this configuration, the <code>PrincipalARN</code> must already exist in the
         * recipient account before it can be associated. </p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePortfolioShareOutcome CreatePortfolioShare(const Model::CreatePortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for CreatePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePortfolioShareRequestT = Model::CreatePortfolioShareRequest>
        Model::CreatePortfolioShareOutcomeCallable CreatePortfolioShareCallable(const CreatePortfolioShareRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreatePortfolioShare, request);
        }

        /**
         * An Async wrapper for CreatePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePortfolioShareRequestT = Model::CreatePortfolioShareRequest>
        void CreatePortfolioShareAsync(const CreatePortfolioShareRequestT& request, const CreatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreatePortfolioShare, request, handler, context);
        }

        /**
         * <p>Creates a product.</p> <p>A delegated admin is authorized to invoke this
         * command.</p> <p>The user or role that performs this operation must have the
         * <code>cloudformation:GetTemplate</code> IAM policy permission. This policy
         * permission is required when using the <code>ImportFromPhysicalId</code> template
         * source in the information data section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProductOutcome CreateProduct(const Model::CreateProductRequest& request) const;

        /**
         * A Callable wrapper for CreateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProductRequestT = Model::CreateProductRequest>
        Model::CreateProductOutcomeCallable CreateProductCallable(const CreateProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateProduct, request);
        }

        /**
         * An Async wrapper for CreateProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProductRequestT = Model::CreateProductRequest>
        void CreateProductAsync(const CreateProductRequestT& request, const CreateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateProduct, request, handler, context);
        }

        /**
         * <p>Creates a plan.</p> <p>A plan includes the list of resources to be created
         * (when provisioning a new product) or modified (when updating a provisioned
         * product) when the plan is executed.</p> <p>You can create one plan for each
         * provisioned product. To create a plan for an existing provisioned product, the
         * product status must be AVAILABLE or TAINTED.</p> <p>To view the resource changes
         * in the change set, use <a>DescribeProvisionedProductPlan</a>. To create or
         * modify the provisioned product, use
         * <a>ExecuteProvisionedProductPlan</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisionedProductPlanOutcome CreateProvisionedProductPlan(const Model::CreateProvisionedProductPlanRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProvisionedProductPlanRequestT = Model::CreateProvisionedProductPlanRequest>
        Model::CreateProvisionedProductPlanOutcomeCallable CreateProvisionedProductPlanCallable(const CreateProvisionedProductPlanRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateProvisionedProductPlan, request);
        }

        /**
         * An Async wrapper for CreateProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisionedProductPlanRequestT = Model::CreateProvisionedProductPlanRequest>
        void CreateProvisionedProductPlanAsync(const CreateProvisionedProductPlanRequestT& request, const CreateProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateProvisionedProductPlan, request, handler, context);
        }

        /**
         * <p>Creates a provisioning artifact (also known as a version) for the specified
         * product.</p> <p>You cannot create a provisioning artifact for a product that was
         * shared with you.</p> <p>The user or role that performs this operation must have
         * the <code>cloudformation:GetTemplate</code> IAM policy permission. This policy
         * permission is required when using the <code>ImportFromPhysicalId</code> template
         * source in the information data section.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningArtifactOutcome CreateProvisioningArtifact(const Model::CreateProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProvisioningArtifactRequestT = Model::CreateProvisioningArtifactRequest>
        Model::CreateProvisioningArtifactOutcomeCallable CreateProvisioningArtifactCallable(const CreateProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for CreateProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisioningArtifactRequestT = Model::CreateProvisioningArtifactRequest>
        void CreateProvisioningArtifactAsync(const CreateProvisioningArtifactRequestT& request, const CreateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Creates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateServiceActionOutcome CreateServiceAction(const Model::CreateServiceActionRequest& request) const;

        /**
         * A Callable wrapper for CreateServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateServiceActionRequestT = Model::CreateServiceActionRequest>
        Model::CreateServiceActionOutcomeCallable CreateServiceActionCallable(const CreateServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateServiceAction, request);
        }

        /**
         * An Async wrapper for CreateServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateServiceActionRequestT = Model::CreateServiceActionRequest>
        void CreateServiceActionAsync(const CreateServiceActionRequestT& request, const CreateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateServiceAction, request, handler, context);
        }

        /**
         * <p>Creates a TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/CreateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTagOptionOutcome CreateTagOption(const Model::CreateTagOptionRequest& request) const;

        /**
         * A Callable wrapper for CreateTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateTagOptionRequestT = Model::CreateTagOptionRequest>
        Model::CreateTagOptionOutcomeCallable CreateTagOptionCallable(const CreateTagOptionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::CreateTagOption, request);
        }

        /**
         * An Async wrapper for CreateTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTagOptionRequestT = Model::CreateTagOptionRequest>
        void CreateTagOptionAsync(const CreateTagOptionRequestT& request, const CreateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::CreateTagOption, request, handler, context);
        }

        /**
         * <p>Deletes the specified constraint.</p> <p>A delegated admin is authorized to
         * invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConstraintOutcome DeleteConstraint(const Model::DeleteConstraintRequest& request) const;

        /**
         * A Callable wrapper for DeleteConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConstraintRequestT = Model::DeleteConstraintRequest>
        Model::DeleteConstraintOutcomeCallable DeleteConstraintCallable(const DeleteConstraintRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteConstraint, request);
        }

        /**
         * An Async wrapper for DeleteConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConstraintRequestT = Model::DeleteConstraintRequest>
        void DeleteConstraintAsync(const DeleteConstraintRequestT& request, const DeleteConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteConstraint, request, handler, context);
        }

        /**
         * <p>Deletes the specified portfolio.</p> <p>You cannot delete a portfolio if it
         * was shared with you or if it has associated products, users, constraints, or
         * shared accounts.</p> <p>A delegated admin is authorized to invoke this
         * command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioOutcome DeletePortfolio(const Model::DeletePortfolioRequest& request) const;

        /**
         * A Callable wrapper for DeletePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePortfolioRequestT = Model::DeletePortfolioRequest>
        Model::DeletePortfolioOutcomeCallable DeletePortfolioCallable(const DeletePortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeletePortfolio, request);
        }

        /**
         * An Async wrapper for DeletePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePortfolioRequestT = Model::DeletePortfolioRequest>
        void DeletePortfolioAsync(const DeletePortfolioRequestT& request, const DeletePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeletePortfolio, request, handler, context);
        }

        /**
         * <p>Stops sharing the specified portfolio with the specified account or
         * organization node. Shares to an organization node can only be deleted by the
         * management account of an organization or by a delegated administrator.</p>
         * <p>Note that if a delegated admin is de-registered, portfolio shares created
         * from that account are removed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeletePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePortfolioShareOutcome DeletePortfolioShare(const Model::DeletePortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for DeletePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePortfolioShareRequestT = Model::DeletePortfolioShareRequest>
        Model::DeletePortfolioShareOutcomeCallable DeletePortfolioShareCallable(const DeletePortfolioShareRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeletePortfolioShare, request);
        }

        /**
         * An Async wrapper for DeletePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePortfolioShareRequestT = Model::DeletePortfolioShareRequest>
        void DeletePortfolioShareAsync(const DeletePortfolioShareRequestT& request, const DeletePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeletePortfolioShare, request, handler, context);
        }

        /**
         * <p>Deletes the specified product.</p> <p>You cannot delete a product if it was
         * shared with you or is associated with a portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest& request) const;

        /**
         * A Callable wrapper for DeleteProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProductRequestT = Model::DeleteProductRequest>
        Model::DeleteProductOutcomeCallable DeleteProductCallable(const DeleteProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteProduct, request);
        }

        /**
         * An Async wrapper for DeleteProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProductRequestT = Model::DeleteProductRequest>
        void DeleteProductAsync(const DeleteProductRequestT& request, const DeleteProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteProduct, request, handler, context);
        }

        /**
         * <p>Deletes the specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisionedProductPlanOutcome DeleteProvisionedProductPlan(const Model::DeleteProvisionedProductPlanRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProvisionedProductPlanRequestT = Model::DeleteProvisionedProductPlanRequest>
        Model::DeleteProvisionedProductPlanOutcomeCallable DeleteProvisionedProductPlanCallable(const DeleteProvisionedProductPlanRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteProvisionedProductPlan, request);
        }

        /**
         * An Async wrapper for DeleteProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisionedProductPlanRequestT = Model::DeleteProvisionedProductPlanRequest>
        void DeleteProvisionedProductPlanAsync(const DeleteProvisionedProductPlanRequestT& request, const DeleteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteProvisionedProductPlan, request, handler, context);
        }

        /**
         * <p>Deletes the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot delete a provisioning artifact associated
         * with a product that was shared with you. You cannot delete the last provisioning
         * artifact for a product, because a product must have at least one provisioning
         * artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningArtifactOutcome DeleteProvisioningArtifact(const Model::DeleteProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProvisioningArtifactRequestT = Model::DeleteProvisioningArtifactRequest>
        Model::DeleteProvisioningArtifactOutcomeCallable DeleteProvisioningArtifactCallable(const DeleteProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for DeleteProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisioningArtifactRequestT = Model::DeleteProvisioningArtifactRequest>
        void DeleteProvisioningArtifactAsync(const DeleteProvisioningArtifactRequestT& request, const DeleteProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Deletes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteServiceActionOutcome DeleteServiceAction(const Model::DeleteServiceActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteServiceActionRequestT = Model::DeleteServiceActionRequest>
        Model::DeleteServiceActionOutcomeCallable DeleteServiceActionCallable(const DeleteServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteServiceAction, request);
        }

        /**
         * An Async wrapper for DeleteServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteServiceActionRequestT = Model::DeleteServiceActionRequest>
        void DeleteServiceActionAsync(const DeleteServiceActionRequestT& request, const DeleteServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteServiceAction, request, handler, context);
        }

        /**
         * <p>Deletes the specified TagOption.</p> <p>You cannot delete a TagOption if it
         * is associated with a product or portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DeleteTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTagOptionOutcome DeleteTagOption(const Model::DeleteTagOptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteTagOptionRequestT = Model::DeleteTagOptionRequest>
        Model::DeleteTagOptionOutcomeCallable DeleteTagOptionCallable(const DeleteTagOptionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DeleteTagOption, request);
        }

        /**
         * An Async wrapper for DeleteTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTagOptionRequestT = Model::DeleteTagOptionRequest>
        void DeleteTagOptionAsync(const DeleteTagOptionRequestT& request, const DeleteTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DeleteTagOption, request, handler, context);
        }

        /**
         * <p>Gets information about the specified constraint.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConstraintOutcome DescribeConstraint(const Model::DescribeConstraintRequest& request) const;

        /**
         * A Callable wrapper for DescribeConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConstraintRequestT = Model::DescribeConstraintRequest>
        Model::DescribeConstraintOutcomeCallable DescribeConstraintCallable(const DescribeConstraintRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeConstraint, request);
        }

        /**
         * An Async wrapper for DescribeConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConstraintRequestT = Model::DescribeConstraintRequest>
        void DescribeConstraintAsync(const DescribeConstraintRequestT& request, const DescribeConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeConstraint, request, handler, context);
        }

        /**
         * <p>Gets the status of the specified copy product operation.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeCopyProductStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCopyProductStatusOutcome DescribeCopyProductStatus(const Model::DescribeCopyProductStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeCopyProductStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCopyProductStatusRequestT = Model::DescribeCopyProductStatusRequest>
        Model::DescribeCopyProductStatusOutcomeCallable DescribeCopyProductStatusCallable(const DescribeCopyProductStatusRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeCopyProductStatus, request);
        }

        /**
         * An Async wrapper for DescribeCopyProductStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCopyProductStatusRequestT = Model::DescribeCopyProductStatusRequest>
        void DescribeCopyProductStatusAsync(const DescribeCopyProductStatusRequestT& request, const DescribeCopyProductStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeCopyProductStatus, request, handler, context);
        }

        /**
         * <p>Gets information about the specified portfolio.</p> <p>A delegated admin is
         * authorized to invoke this command.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioOutcome DescribePortfolio(const Model::DescribePortfolioRequest& request) const;

        /**
         * A Callable wrapper for DescribePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePortfolioRequestT = Model::DescribePortfolioRequest>
        Model::DescribePortfolioOutcomeCallable DescribePortfolioCallable(const DescribePortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribePortfolio, request);
        }

        /**
         * An Async wrapper for DescribePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePortfolioRequestT = Model::DescribePortfolioRequest>
        void DescribePortfolioAsync(const DescribePortfolioRequestT& request, const DescribePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribePortfolio, request, handler, context);
        }

        /**
         * <p>Gets the status of the specified portfolio share operation. This API can only
         * be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShareStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioShareStatusOutcome DescribePortfolioShareStatus(const Model::DescribePortfolioShareStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribePortfolioShareStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePortfolioShareStatusRequestT = Model::DescribePortfolioShareStatusRequest>
        Model::DescribePortfolioShareStatusOutcomeCallable DescribePortfolioShareStatusCallable(const DescribePortfolioShareStatusRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribePortfolioShareStatus, request);
        }

        /**
         * An Async wrapper for DescribePortfolioShareStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePortfolioShareStatusRequestT = Model::DescribePortfolioShareStatusRequest>
        void DescribePortfolioShareStatusAsync(const DescribePortfolioShareStatusRequestT& request, const DescribePortfolioShareStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribePortfolioShareStatus, request, handler, context);
        }

        /**
         * <p>Returns a summary of each of the portfolio shares that were created for the
         * specified portfolio.</p> <p>You can use this API to determine which accounts or
         * organizational nodes this portfolio have been shared, whether the recipient
         * entity has imported the share, and whether TagOptions are included with the
         * share.</p> <p>The <code>PortfolioId</code> and <code>Type</code> parameters are
         * both required.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribePortfolioShares">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePortfolioSharesOutcome DescribePortfolioShares(const Model::DescribePortfolioSharesRequest& request) const;

        /**
         * A Callable wrapper for DescribePortfolioShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePortfolioSharesRequestT = Model::DescribePortfolioSharesRequest>
        Model::DescribePortfolioSharesOutcomeCallable DescribePortfolioSharesCallable(const DescribePortfolioSharesRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribePortfolioShares, request);
        }

        /**
         * An Async wrapper for DescribePortfolioShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePortfolioSharesRequestT = Model::DescribePortfolioSharesRequest>
        void DescribePortfolioSharesAsync(const DescribePortfolioSharesRequestT& request, const DescribePortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribePortfolioShares, request, handler, context);
        }

        /**
         * <p>Gets information about the specified product.</p>  <p> Running this
         * operation with administrator access results in a failure.
         * <a>DescribeProductAsAdmin</a> should be used instead. </p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest& request) const;

        /**
         * A Callable wrapper for DescribeProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProductRequestT = Model::DescribeProductRequest>
        Model::DescribeProductOutcomeCallable DescribeProductCallable(const DescribeProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProduct, request);
        }

        /**
         * An Async wrapper for DescribeProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProductRequestT = Model::DescribeProductRequest>
        void DescribeProductAsync(const DescribeProductRequestT& request, const DescribeProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProduct, request, handler, context);
        }

        /**
         * <p>Gets information about the specified product. This operation is run with
         * administrator access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductAsAdminOutcome DescribeProductAsAdmin(const Model::DescribeProductAsAdminRequest& request) const;

        /**
         * A Callable wrapper for DescribeProductAsAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProductAsAdminRequestT = Model::DescribeProductAsAdminRequest>
        Model::DescribeProductAsAdminOutcomeCallable DescribeProductAsAdminCallable(const DescribeProductAsAdminRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProductAsAdmin, request);
        }

        /**
         * An Async wrapper for DescribeProductAsAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProductAsAdminRequestT = Model::DescribeProductAsAdminRequest>
        void DescribeProductAsAdminAsync(const DescribeProductAsAdminRequestT& request, const DescribeProductAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProductAsAdmin, request, handler, context);
        }

        /**
         * <p>Gets information about the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProductView">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProductViewOutcome DescribeProductView(const Model::DescribeProductViewRequest& request) const;

        /**
         * A Callable wrapper for DescribeProductView that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProductViewRequestT = Model::DescribeProductViewRequest>
        Model::DescribeProductViewOutcomeCallable DescribeProductViewCallable(const DescribeProductViewRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProductView, request);
        }

        /**
         * An Async wrapper for DescribeProductView that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProductViewRequestT = Model::DescribeProductViewRequest>
        void DescribeProductViewAsync(const DescribeProductViewRequestT& request, const DescribeProductViewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProductView, request, handler, context);
        }

        /**
         * <p>Gets information about the specified provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductOutcome DescribeProvisionedProduct(const Model::DescribeProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProvisionedProductRequestT = Model::DescribeProvisionedProductRequest>
        Model::DescribeProvisionedProductOutcomeCallable DescribeProvisionedProductCallable(const DescribeProvisionedProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProvisionedProduct, request);
        }

        /**
         * An Async wrapper for DescribeProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisionedProductRequestT = Model::DescribeProvisionedProductRequest>
        void DescribeProvisionedProductAsync(const DescribeProvisionedProductRequestT& request, const DescribeProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProvisionedProduct, request, handler, context);
        }

        /**
         * <p>Gets information about the resource changes for the specified
         * plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisionedProductPlanOutcome DescribeProvisionedProductPlan(const Model::DescribeProvisionedProductPlanRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProvisionedProductPlanRequestT = Model::DescribeProvisionedProductPlanRequest>
        Model::DescribeProvisionedProductPlanOutcomeCallable DescribeProvisionedProductPlanCallable(const DescribeProvisionedProductPlanRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProvisionedProductPlan, request);
        }

        /**
         * An Async wrapper for DescribeProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisionedProductPlanRequestT = Model::DescribeProvisionedProductPlanRequest>
        void DescribeProvisionedProductPlanAsync(const DescribeProvisionedProductPlanRequestT& request, const DescribeProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProvisionedProductPlan, request, handler, context);
        }

        /**
         * <p>Gets information about the specified provisioning artifact (also known as a
         * version) for the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningArtifactOutcome DescribeProvisioningArtifact(const Model::DescribeProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProvisioningArtifactRequestT = Model::DescribeProvisioningArtifactRequest>
        Model::DescribeProvisioningArtifactOutcomeCallable DescribeProvisioningArtifactCallable(const DescribeProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for DescribeProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisioningArtifactRequestT = Model::DescribeProvisioningArtifactRequest>
        void DescribeProvisioningArtifactAsync(const DescribeProvisioningArtifactRequestT& request, const DescribeProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Gets information about the configuration required to provision the specified
         * product using the specified provisioning artifact.</p> <p>If the output contains
         * a TagOption key with an empty list of values, there is a TagOption conflict for
         * that key. The end user cannot take action to fix the conflict, and launch is not
         * blocked. In subsequent calls to <a>ProvisionProduct</a>, do not include
         * conflicted TagOption keys as tags, or this causes the error "Parameter
         * validation failed: Missing required parameter in Tags[<i>N</i>]:<i>Value</i>".
         * Tag the provisioned product with the value
         * <code>sc-tagoption-conflict-portfolioId-productId</code>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeProvisioningParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningParametersOutcome DescribeProvisioningParameters(const Model::DescribeProvisioningParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisioningParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeProvisioningParametersRequestT = Model::DescribeProvisioningParametersRequest>
        Model::DescribeProvisioningParametersOutcomeCallable DescribeProvisioningParametersCallable(const DescribeProvisioningParametersRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeProvisioningParameters, request);
        }

        /**
         * An Async wrapper for DescribeProvisioningParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisioningParametersRequestT = Model::DescribeProvisioningParametersRequest>
        void DescribeProvisioningParametersAsync(const DescribeProvisioningParametersRequestT& request, const DescribeProvisioningParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeProvisioningParameters, request, handler, context);
        }

        /**
         * <p>Gets information about the specified request operation.</p> <p>Use this
         * operation after calling a request operation (for example,
         * <a>ProvisionProduct</a>, <a>TerminateProvisionedProduct</a>, or
         * <a>UpdateProvisionedProduct</a>). </p>  <p>If a provisioned product was
         * transferred to a new owner using <a>UpdateProvisionedProductProperties</a>, the
         * new owner will be able to describe all past records for that product. The
         * previous owner will no longer be able to describe the records, but will be able
         * to use <a>ListRecordHistory</a> to see the product's history from when he was
         * the owner.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeRecord">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRecordOutcome DescribeRecord(const Model::DescribeRecordRequest& request) const;

        /**
         * A Callable wrapper for DescribeRecord that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRecordRequestT = Model::DescribeRecordRequest>
        Model::DescribeRecordOutcomeCallable DescribeRecordCallable(const DescribeRecordRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeRecord, request);
        }

        /**
         * An Async wrapper for DescribeRecord that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRecordRequestT = Model::DescribeRecordRequest>
        void DescribeRecordAsync(const DescribeRecordRequestT& request, const DescribeRecordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeRecord, request, handler, context);
        }

        /**
         * <p>Describes a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionOutcome DescribeServiceAction(const Model::DescribeServiceActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceActionRequestT = Model::DescribeServiceActionRequest>
        Model::DescribeServiceActionOutcomeCallable DescribeServiceActionCallable(const DescribeServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeServiceAction, request);
        }

        /**
         * An Async wrapper for DescribeServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceActionRequestT = Model::DescribeServiceActionRequest>
        void DescribeServiceActionAsync(const DescribeServiceActionRequestT& request, const DescribeServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeServiceAction, request, handler, context);
        }

        /**
         * <p>Finds the default parameters for a specific self-service action on a specific
         * provisioned product and returns a map of the results to the user.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeServiceActionExecutionParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceActionExecutionParametersOutcome DescribeServiceActionExecutionParameters(const Model::DescribeServiceActionExecutionParametersRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceActionExecutionParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceActionExecutionParametersRequestT = Model::DescribeServiceActionExecutionParametersRequest>
        Model::DescribeServiceActionExecutionParametersOutcomeCallable DescribeServiceActionExecutionParametersCallable(const DescribeServiceActionExecutionParametersRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeServiceActionExecutionParameters, request);
        }

        /**
         * An Async wrapper for DescribeServiceActionExecutionParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceActionExecutionParametersRequestT = Model::DescribeServiceActionExecutionParametersRequest>
        void DescribeServiceActionExecutionParametersAsync(const DescribeServiceActionExecutionParametersRequestT& request, const DescribeServiceActionExecutionParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeServiceActionExecutionParameters, request, handler, context);
        }

        /**
         * <p>Gets information about the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DescribeTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeTagOptionOutcome DescribeTagOption(const Model::DescribeTagOptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeTagOptionRequestT = Model::DescribeTagOptionRequest>
        Model::DescribeTagOptionOutcomeCallable DescribeTagOptionCallable(const DescribeTagOptionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DescribeTagOption, request);
        }

        /**
         * An Async wrapper for DescribeTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeTagOptionRequestT = Model::DescribeTagOptionRequest>
        void DescribeTagOptionAsync(const DescribeTagOptionRequestT& request, const DescribeTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DescribeTagOption, request, handler, context);
        }

        /**
         * <p>Disable portfolio sharing through the Organizations service. This command
         * will not delete your current shares, but prevents you from creating new shares
         * throughout your organization. Current shares are not kept in sync with your
         * organization structure if the structure changes after calling this API. Only the
         * management account in the organization can call this API.</p> <p>You cannot call
         * this API if there are active delegated administrators in the organization.</p>
         * <p>Note that a delegated administrator is not authorized to invoke
         * <code>DisableAWSOrganizationsAccess</code>.</p>  <p>If you share an
         * Service Catalog portfolio in an organization within Organizations, and then
         * disable Organizations access for Service Catalog, the portfolio access
         * permissions will not sync with the latest changes to the organization structure.
         * Specifically, accounts that you removed from the organization after disabling
         * Service Catalog access will retain access to the previously shared
         * portfolio.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAWSOrganizationsAccessOutcome DisableAWSOrganizationsAccess(const Model::DisableAWSOrganizationsAccessRequest& request) const;

        /**
         * A Callable wrapper for DisableAWSOrganizationsAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableAWSOrganizationsAccessRequestT = Model::DisableAWSOrganizationsAccessRequest>
        Model::DisableAWSOrganizationsAccessOutcomeCallable DisableAWSOrganizationsAccessCallable(const DisableAWSOrganizationsAccessRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisableAWSOrganizationsAccess, request);
        }

        /**
         * An Async wrapper for DisableAWSOrganizationsAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableAWSOrganizationsAccessRequestT = Model::DisableAWSOrganizationsAccessRequest>
        void DisableAWSOrganizationsAccessAsync(const DisableAWSOrganizationsAccessRequestT& request, const DisableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisableAWSOrganizationsAccess, request, handler, context);
        }

        /**
         * <p>Disassociates the specified budget from the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateBudgetFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateBudgetFromResourceOutcome DisassociateBudgetFromResource(const Model::DisassociateBudgetFromResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateBudgetFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateBudgetFromResourceRequestT = Model::DisassociateBudgetFromResourceRequest>
        Model::DisassociateBudgetFromResourceOutcomeCallable DisassociateBudgetFromResourceCallable(const DisassociateBudgetFromResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisassociateBudgetFromResource, request);
        }

        /**
         * An Async wrapper for DisassociateBudgetFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateBudgetFromResourceRequestT = Model::DisassociateBudgetFromResourceRequest>
        void DisassociateBudgetFromResourceAsync(const DisassociateBudgetFromResourceRequestT& request, const DisassociateBudgetFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisassociateBudgetFromResource, request, handler, context);
        }

        /**
         * <p>Disassociates a previously associated principal ARN from a specified
         * portfolio.</p> <p>The <code>PrincipalType</code> and <code>PrincipalARN</code>
         * must match the <code>AssociatePrincipalWithPortfolio</code> call request
         * details. For example, to disassociate an association created with a
         * <code>PrincipalARN</code> of <code>PrincipalType</code> IAM you must use the
         * <code>PrincipalType</code> IAM when calling
         * <code>DisassociatePrincipalFromPortfolio</code>. </p> <p>For portfolios that
         * have been shared with principal name sharing enabled: after disassociating a
         * principal, share recipient accounts will no longer be able to provision products
         * in this portfolio using a role matching the name of the associated principal.
         * </p> <p>For more information, review <a
         * href="https://docs.aws.amazon.com/cli/latest/reference/servicecatalog/associate-principal-with-portfolio.html#options">associate-principal-with-portfolio</a>
         * in the Amazon Web Services CLI Command Reference. </p>  <p>If you
         * disassociate a principal from a portfolio, with PrincipalType as
         * <code>IAM</code>, the same principal will still have access to the portfolio if
         * it matches one of the associated principals of type <code>IAM_PATTERN</code>. To
         * fully remove access for a principal, verify all the associated Principals of
         * type <code>IAM_PATTERN</code>, and then ensure you disassociate any
         * <code>IAM_PATTERN</code> principals that match the principal whose access you
         * are removing.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociatePrincipalFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociatePrincipalFromPortfolioOutcome DisassociatePrincipalFromPortfolio(const Model::DisassociatePrincipalFromPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisassociatePrincipalFromPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociatePrincipalFromPortfolioRequestT = Model::DisassociatePrincipalFromPortfolioRequest>
        Model::DisassociatePrincipalFromPortfolioOutcomeCallable DisassociatePrincipalFromPortfolioCallable(const DisassociatePrincipalFromPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisassociatePrincipalFromPortfolio, request);
        }

        /**
         * An Async wrapper for DisassociatePrincipalFromPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociatePrincipalFromPortfolioRequestT = Model::DisassociatePrincipalFromPortfolioRequest>
        void DisassociatePrincipalFromPortfolioAsync(const DisassociatePrincipalFromPortfolioRequestT& request, const DisassociatePrincipalFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisassociatePrincipalFromPortfolio, request, handler, context);
        }

        /**
         * <p>Disassociates the specified product from the specified portfolio. </p> <p>A
         * delegated admin is authorized to invoke this command.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateProductFromPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateProductFromPortfolioOutcome DisassociateProductFromPortfolio(const Model::DisassociateProductFromPortfolioRequest& request) const;

        /**
         * A Callable wrapper for DisassociateProductFromPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateProductFromPortfolioRequestT = Model::DisassociateProductFromPortfolioRequest>
        Model::DisassociateProductFromPortfolioOutcomeCallable DisassociateProductFromPortfolioCallable(const DisassociateProductFromPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisassociateProductFromPortfolio, request);
        }

        /**
         * An Async wrapper for DisassociateProductFromPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateProductFromPortfolioRequestT = Model::DisassociateProductFromPortfolioRequest>
        void DisassociateProductFromPortfolioAsync(const DisassociateProductFromPortfolioRequestT& request, const DisassociateProductFromPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisassociateProductFromPortfolio, request, handler, context);
        }

        /**
         * <p>Disassociates the specified self-service action association from the
         * specified provisioning artifact.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateServiceActionFromProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateServiceActionFromProvisioningArtifactOutcome DisassociateServiceActionFromProvisioningArtifact(const Model::DisassociateServiceActionFromProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for DisassociateServiceActionFromProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateServiceActionFromProvisioningArtifactRequestT = Model::DisassociateServiceActionFromProvisioningArtifactRequest>
        Model::DisassociateServiceActionFromProvisioningArtifactOutcomeCallable DisassociateServiceActionFromProvisioningArtifactCallable(const DisassociateServiceActionFromProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for DisassociateServiceActionFromProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateServiceActionFromProvisioningArtifactRequestT = Model::DisassociateServiceActionFromProvisioningArtifactRequest>
        void DisassociateServiceActionFromProvisioningArtifactAsync(const DisassociateServiceActionFromProvisioningArtifactRequestT& request, const DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisassociateServiceActionFromProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Disassociates the specified TagOption from the specified
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/DisassociateTagOptionFromResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateTagOptionFromResourceOutcome DisassociateTagOptionFromResource(const Model::DisassociateTagOptionFromResourceRequest& request) const;

        /**
         * A Callable wrapper for DisassociateTagOptionFromResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateTagOptionFromResourceRequestT = Model::DisassociateTagOptionFromResourceRequest>
        Model::DisassociateTagOptionFromResourceOutcomeCallable DisassociateTagOptionFromResourceCallable(const DisassociateTagOptionFromResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::DisassociateTagOptionFromResource, request);
        }

        /**
         * An Async wrapper for DisassociateTagOptionFromResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateTagOptionFromResourceRequestT = Model::DisassociateTagOptionFromResourceRequest>
        void DisassociateTagOptionFromResourceAsync(const DisassociateTagOptionFromResourceRequestT& request, const DisassociateTagOptionFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::DisassociateTagOptionFromResource, request, handler, context);
        }

        /**
         * <p>Enable portfolio sharing feature through Organizations. This API will allow
         * Service Catalog to receive updates on your organization in order to sync your
         * shares with the current structure. This API can only be called by the management
         * account in the organization.</p> <p>When you call this API, Service Catalog
         * calls <code>organizations:EnableAWSServiceAccess</code> on your behalf so that
         * your shares stay in sync with any changes in your Organizations structure.</p>
         * <p>Note that a delegated administrator is not authorized to invoke
         * <code>EnableAWSOrganizationsAccess</code>.</p>  <p>If you have
         * previously disabled Organizations access for Service Catalog, and then enable
         * access again, the portfolio access permissions might not sync with the latest
         * changes to the organization structure. Specifically, accounts that you removed
         * from the organization after disabling Service Catalog access, and before you
         * enabled access again, can retain access to the previously shared portfolio. As a
         * result, an account that has been removed from the organization might still be
         * able to create or manage Amazon Web Services resources when it is no longer
         * authorized to do so. Amazon Web Services is working to resolve this issue.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/EnableAWSOrganizationsAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAWSOrganizationsAccessOutcome EnableAWSOrganizationsAccess(const Model::EnableAWSOrganizationsAccessRequest& request) const;

        /**
         * A Callable wrapper for EnableAWSOrganizationsAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableAWSOrganizationsAccessRequestT = Model::EnableAWSOrganizationsAccessRequest>
        Model::EnableAWSOrganizationsAccessOutcomeCallable EnableAWSOrganizationsAccessCallable(const EnableAWSOrganizationsAccessRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::EnableAWSOrganizationsAccess, request);
        }

        /**
         * An Async wrapper for EnableAWSOrganizationsAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableAWSOrganizationsAccessRequestT = Model::EnableAWSOrganizationsAccessRequest>
        void EnableAWSOrganizationsAccessAsync(const EnableAWSOrganizationsAccessRequestT& request, const EnableAWSOrganizationsAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::EnableAWSOrganizationsAccess, request, handler, context);
        }

        /**
         * <p>Provisions or modifies a product based on the resource changes for the
         * specified plan.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductPlan">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductPlanOutcome ExecuteProvisionedProductPlan(const Model::ExecuteProvisionedProductPlanRequest& request) const;

        /**
         * A Callable wrapper for ExecuteProvisionedProductPlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteProvisionedProductPlanRequestT = Model::ExecuteProvisionedProductPlanRequest>
        Model::ExecuteProvisionedProductPlanOutcomeCallable ExecuteProvisionedProductPlanCallable(const ExecuteProvisionedProductPlanRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ExecuteProvisionedProductPlan, request);
        }

        /**
         * An Async wrapper for ExecuteProvisionedProductPlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteProvisionedProductPlanRequestT = Model::ExecuteProvisionedProductPlanRequest>
        void ExecuteProvisionedProductPlanAsync(const ExecuteProvisionedProductPlanRequestT& request, const ExecuteProvisionedProductPlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ExecuteProvisionedProductPlan, request, handler, context);
        }

        /**
         * <p>Executes a self-service action against a provisioned product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ExecuteProvisionedProductServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ExecuteProvisionedProductServiceActionOutcome ExecuteProvisionedProductServiceAction(const Model::ExecuteProvisionedProductServiceActionRequest& request) const;

        /**
         * A Callable wrapper for ExecuteProvisionedProductServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExecuteProvisionedProductServiceActionRequestT = Model::ExecuteProvisionedProductServiceActionRequest>
        Model::ExecuteProvisionedProductServiceActionOutcomeCallable ExecuteProvisionedProductServiceActionCallable(const ExecuteProvisionedProductServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ExecuteProvisionedProductServiceAction, request);
        }

        /**
         * An Async wrapper for ExecuteProvisionedProductServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExecuteProvisionedProductServiceActionRequestT = Model::ExecuteProvisionedProductServiceActionRequest>
        void ExecuteProvisionedProductServiceActionAsync(const ExecuteProvisionedProductServiceActionRequestT& request, const ExecuteProvisionedProductServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ExecuteProvisionedProductServiceAction, request, handler, context);
        }

        /**
         * <p>Get the Access Status for Organizations portfolio share feature. This API can
         * only be called by the management account in the organization or by a delegated
         * admin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetAWSOrganizationsAccessStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAWSOrganizationsAccessStatusOutcome GetAWSOrganizationsAccessStatus(const Model::GetAWSOrganizationsAccessStatusRequest& request) const;

        /**
         * A Callable wrapper for GetAWSOrganizationsAccessStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAWSOrganizationsAccessStatusRequestT = Model::GetAWSOrganizationsAccessStatusRequest>
        Model::GetAWSOrganizationsAccessStatusOutcomeCallable GetAWSOrganizationsAccessStatusCallable(const GetAWSOrganizationsAccessStatusRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::GetAWSOrganizationsAccessStatus, request);
        }

        /**
         * An Async wrapper for GetAWSOrganizationsAccessStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAWSOrganizationsAccessStatusRequestT = Model::GetAWSOrganizationsAccessStatusRequest>
        void GetAWSOrganizationsAccessStatusAsync(const GetAWSOrganizationsAccessStatusRequestT& request, const GetAWSOrganizationsAccessStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::GetAWSOrganizationsAccessStatus, request, handler, context);
        }

        /**
         * <p>This API takes either a <code>ProvisonedProductId</code> or a
         * <code>ProvisionedProductName</code>, along with a list of one or more output
         * keys, and responds with the key/value pairs of those outputs.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/GetProvisionedProductOutputs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisionedProductOutputsOutcome GetProvisionedProductOutputs(const Model::GetProvisionedProductOutputsRequest& request) const;

        /**
         * A Callable wrapper for GetProvisionedProductOutputs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProvisionedProductOutputsRequestT = Model::GetProvisionedProductOutputsRequest>
        Model::GetProvisionedProductOutputsOutcomeCallable GetProvisionedProductOutputsCallable(const GetProvisionedProductOutputsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::GetProvisionedProductOutputs, request);
        }

        /**
         * An Async wrapper for GetProvisionedProductOutputs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProvisionedProductOutputsRequestT = Model::GetProvisionedProductOutputsRequest>
        void GetProvisionedProductOutputsAsync(const GetProvisionedProductOutputsRequestT& request, const GetProvisionedProductOutputsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::GetProvisionedProductOutputs, request, handler, context);
        }

        /**
         * <p> Requests the import of a resource as an Service Catalog provisioned product
         * that is associated to an Service Catalog product and provisioning artifact. Once
         * imported, all supported governance actions are supported on the provisioned
         * product. </p> <p> Resource import only supports CloudFormation stack ARNs.
         * CloudFormation StackSets, and non-root nested stacks, are not supported. </p>
         * <p> The CloudFormation stack must have one of the following statuses to be
         * imported: <code>CREATE_COMPLETE</code>, <code>UPDATE_COMPLETE</code>,
         * <code>UPDATE_ROLLBACK_COMPLETE</code>, <code>IMPORT_COMPLETE</code>, and
         * <code>IMPORT_ROLLBACK_COMPLETE</code>. </p> <p> Import of the resource requires
         * that the CloudFormation stack template matches the associated Service Catalog
         * product provisioning artifact. </p>  <p> When you import an existing
         * CloudFormation stack into a portfolio, Service Catalog does not apply the
         * product's associated constraints during the import process. Service Catalog
         * applies the constraints after you call <code>UpdateProvisionedProduct</code> for
         * the provisioned product. </p>  <p> The user or role that performs this
         * operation must have the <code>cloudformation:GetTemplate</code> and
         * <code>cloudformation:DescribeStacks</code> IAM policy permissions. </p> <p>You
         * can only import one provisioned product at a time. The product's CloudFormation
         * stack must have the <code>IMPORT_COMPLETE</code> status before you import
         * another. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ImportAsProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportAsProvisionedProductOutcome ImportAsProvisionedProduct(const Model::ImportAsProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for ImportAsProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportAsProvisionedProductRequestT = Model::ImportAsProvisionedProductRequest>
        Model::ImportAsProvisionedProductOutcomeCallable ImportAsProvisionedProductCallable(const ImportAsProvisionedProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ImportAsProvisionedProduct, request);
        }

        /**
         * An Async wrapper for ImportAsProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportAsProvisionedProductRequestT = Model::ImportAsProvisionedProductRequest>
        void ImportAsProvisionedProductAsync(const ImportAsProvisionedProductRequestT& request, const ImportAsProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ImportAsProvisionedProduct, request, handler, context);
        }

        /**
         * <p>Lists all imported portfolios for which account-to-account shares were
         * accepted by this account. By specifying the <code>PortfolioShareType</code>, you
         * can list portfolios for which organizational shares were accepted by this
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListAcceptedPortfolioShares">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAcceptedPortfolioSharesOutcome ListAcceptedPortfolioShares(const Model::ListAcceptedPortfolioSharesRequest& request) const;

        /**
         * A Callable wrapper for ListAcceptedPortfolioShares that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAcceptedPortfolioSharesRequestT = Model::ListAcceptedPortfolioSharesRequest>
        Model::ListAcceptedPortfolioSharesOutcomeCallable ListAcceptedPortfolioSharesCallable(const ListAcceptedPortfolioSharesRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListAcceptedPortfolioShares, request);
        }

        /**
         * An Async wrapper for ListAcceptedPortfolioShares that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAcceptedPortfolioSharesRequestT = Model::ListAcceptedPortfolioSharesRequest>
        void ListAcceptedPortfolioSharesAsync(const ListAcceptedPortfolioSharesRequestT& request, const ListAcceptedPortfolioSharesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListAcceptedPortfolioShares, request, handler, context);
        }

        /**
         * <p>Lists all the budgets associated to the specified resource.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListBudgetsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBudgetsForResourceOutcome ListBudgetsForResource(const Model::ListBudgetsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListBudgetsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBudgetsForResourceRequestT = Model::ListBudgetsForResourceRequest>
        Model::ListBudgetsForResourceOutcomeCallable ListBudgetsForResourceCallable(const ListBudgetsForResourceRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListBudgetsForResource, request);
        }

        /**
         * An Async wrapper for ListBudgetsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBudgetsForResourceRequestT = Model::ListBudgetsForResourceRequest>
        void ListBudgetsForResourceAsync(const ListBudgetsForResourceRequestT& request, const ListBudgetsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListBudgetsForResource, request, handler, context);
        }

        /**
         * <p>Lists the constraints for the specified portfolio and product.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListConstraintsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConstraintsForPortfolioOutcome ListConstraintsForPortfolio(const Model::ListConstraintsForPortfolioRequest& request) const;

        /**
         * A Callable wrapper for ListConstraintsForPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConstraintsForPortfolioRequestT = Model::ListConstraintsForPortfolioRequest>
        Model::ListConstraintsForPortfolioOutcomeCallable ListConstraintsForPortfolioCallable(const ListConstraintsForPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListConstraintsForPortfolio, request);
        }

        /**
         * An Async wrapper for ListConstraintsForPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConstraintsForPortfolioRequestT = Model::ListConstraintsForPortfolioRequest>
        void ListConstraintsForPortfolioAsync(const ListConstraintsForPortfolioRequestT& request, const ListConstraintsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListConstraintsForPortfolio, request, handler, context);
        }

        /**
         * <p> Lists the paths to the specified product. A path describes how the user gets
         * access to a specified product and is necessary when provisioning a product. A
         * path also determines the constraints that are put on a product. A path is
         * dependent on a specific product, porfolio, and principal. </p>  <p> When
         * provisioning a product that's been added to a portfolio, you must grant your
         * user, group, or role access to the portfolio. For more information, see <a
         * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/catalogs_portfolios_users.html">Granting
         * users access</a> in the <i>Service Catalog User Guide</i>. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListLaunchPaths">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLaunchPathsOutcome ListLaunchPaths(const Model::ListLaunchPathsRequest& request) const;

        /**
         * A Callable wrapper for ListLaunchPaths that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLaunchPathsRequestT = Model::ListLaunchPathsRequest>
        Model::ListLaunchPathsOutcomeCallable ListLaunchPathsCallable(const ListLaunchPathsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListLaunchPaths, request);
        }

        /**
         * An Async wrapper for ListLaunchPaths that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLaunchPathsRequestT = Model::ListLaunchPathsRequest>
        void ListLaunchPathsAsync(const ListLaunchPathsRequestT& request, const ListLaunchPathsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListLaunchPaths, request, handler, context);
        }

        /**
         * <p>Lists the organization nodes that have access to the specified portfolio.
         * This API can only be called by the management account in the organization or by
         * a delegated admin.</p> <p>If a delegated admin is de-registered, they can no
         * longer perform this operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListOrganizationPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationPortfolioAccessOutcome ListOrganizationPortfolioAccess(const Model::ListOrganizationPortfolioAccessRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationPortfolioAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationPortfolioAccessRequestT = Model::ListOrganizationPortfolioAccessRequest>
        Model::ListOrganizationPortfolioAccessOutcomeCallable ListOrganizationPortfolioAccessCallable(const ListOrganizationPortfolioAccessRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListOrganizationPortfolioAccess, request);
        }

        /**
         * An Async wrapper for ListOrganizationPortfolioAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationPortfolioAccessRequestT = Model::ListOrganizationPortfolioAccessRequest>
        void ListOrganizationPortfolioAccessAsync(const ListOrganizationPortfolioAccessRequestT& request, const ListOrganizationPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListOrganizationPortfolioAccess, request, handler, context);
        }

        /**
         * <p>Lists the account IDs that have access to the specified portfolio.</p> <p>A
         * delegated admin can list the accounts that have access to the shared portfolio.
         * Note that if a delegated admin is de-registered, they can no longer perform this
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolioAccess">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfolioAccessOutcome ListPortfolioAccess(const Model::ListPortfolioAccessRequest& request) const;

        /**
         * A Callable wrapper for ListPortfolioAccess that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPortfolioAccessRequestT = Model::ListPortfolioAccessRequest>
        Model::ListPortfolioAccessOutcomeCallable ListPortfolioAccessCallable(const ListPortfolioAccessRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListPortfolioAccess, request);
        }

        /**
         * An Async wrapper for ListPortfolioAccess that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPortfolioAccessRequestT = Model::ListPortfolioAccessRequest>
        void ListPortfolioAccessAsync(const ListPortfolioAccessRequestT& request, const ListPortfolioAccessResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListPortfolioAccess, request, handler, context);
        }

        /**
         * <p>Lists all portfolios in the catalog.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfolios">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosOutcome ListPortfolios(const Model::ListPortfoliosRequest& request) const;

        /**
         * A Callable wrapper for ListPortfolios that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPortfoliosRequestT = Model::ListPortfoliosRequest>
        Model::ListPortfoliosOutcomeCallable ListPortfoliosCallable(const ListPortfoliosRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListPortfolios, request);
        }

        /**
         * An Async wrapper for ListPortfolios that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPortfoliosRequestT = Model::ListPortfoliosRequest>
        void ListPortfoliosAsync(const ListPortfoliosRequestT& request, const ListPortfoliosResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListPortfolios, request, handler, context);
        }

        /**
         * <p>Lists all portfolios that the specified product is associated
         * with.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPortfoliosForProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPortfoliosForProductOutcome ListPortfoliosForProduct(const Model::ListPortfoliosForProductRequest& request) const;

        /**
         * A Callable wrapper for ListPortfoliosForProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPortfoliosForProductRequestT = Model::ListPortfoliosForProductRequest>
        Model::ListPortfoliosForProductOutcomeCallable ListPortfoliosForProductCallable(const ListPortfoliosForProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListPortfoliosForProduct, request);
        }

        /**
         * An Async wrapper for ListPortfoliosForProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPortfoliosForProductRequestT = Model::ListPortfoliosForProductRequest>
        void ListPortfoliosForProductAsync(const ListPortfoliosForProductRequestT& request, const ListPortfoliosForProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListPortfoliosForProduct, request, handler, context);
        }

        /**
         * <p>Lists all <code>PrincipalARN</code>s and corresponding
         * <code>PrincipalType</code>s associated with the specified
         * portfolio.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListPrincipalsForPortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalsForPortfolioOutcome ListPrincipalsForPortfolio(const Model::ListPrincipalsForPortfolioRequest& request) const;

        /**
         * A Callable wrapper for ListPrincipalsForPortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPrincipalsForPortfolioRequestT = Model::ListPrincipalsForPortfolioRequest>
        Model::ListPrincipalsForPortfolioOutcomeCallable ListPrincipalsForPortfolioCallable(const ListPrincipalsForPortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListPrincipalsForPortfolio, request);
        }

        /**
         * An Async wrapper for ListPrincipalsForPortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPrincipalsForPortfolioRequestT = Model::ListPrincipalsForPortfolioRequest>
        void ListPrincipalsForPortfolioAsync(const ListPrincipalsForPortfolioRequestT& request, const ListPrincipalsForPortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListPrincipalsForPortfolio, request, handler, context);
        }

        /**
         * <p>Lists the plans for the specified provisioned product or all plans to which
         * the user has access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisionedProductPlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisionedProductPlansOutcome ListProvisionedProductPlans(const Model::ListProvisionedProductPlansRequest& request) const;

        /**
         * A Callable wrapper for ListProvisionedProductPlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisionedProductPlansRequestT = Model::ListProvisionedProductPlansRequest>
        Model::ListProvisionedProductPlansOutcomeCallable ListProvisionedProductPlansCallable(const ListProvisionedProductPlansRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListProvisionedProductPlans, request);
        }

        /**
         * An Async wrapper for ListProvisionedProductPlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisionedProductPlansRequestT = Model::ListProvisionedProductPlansRequest>
        void ListProvisionedProductPlansAsync(const ListProvisionedProductPlansRequestT& request, const ListProvisionedProductPlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListProvisionedProductPlans, request, handler, context);
        }

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifacts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsOutcome ListProvisioningArtifacts(const Model::ListProvisioningArtifactsRequest& request) const;

        /**
         * A Callable wrapper for ListProvisioningArtifacts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisioningArtifactsRequestT = Model::ListProvisioningArtifactsRequest>
        Model::ListProvisioningArtifactsOutcomeCallable ListProvisioningArtifactsCallable(const ListProvisioningArtifactsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListProvisioningArtifacts, request);
        }

        /**
         * An Async wrapper for ListProvisioningArtifacts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisioningArtifactsRequestT = Model::ListProvisioningArtifactsRequest>
        void ListProvisioningArtifactsAsync(const ListProvisioningArtifactsRequestT& request, const ListProvisioningArtifactsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListProvisioningArtifacts, request, handler, context);
        }

        /**
         * <p>Lists all provisioning artifacts (also known as versions) for the specified
         * self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListProvisioningArtifactsForServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningArtifactsForServiceActionOutcome ListProvisioningArtifactsForServiceAction(const Model::ListProvisioningArtifactsForServiceActionRequest& request) const;

        /**
         * A Callable wrapper for ListProvisioningArtifactsForServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisioningArtifactsForServiceActionRequestT = Model::ListProvisioningArtifactsForServiceActionRequest>
        Model::ListProvisioningArtifactsForServiceActionOutcomeCallable ListProvisioningArtifactsForServiceActionCallable(const ListProvisioningArtifactsForServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListProvisioningArtifactsForServiceAction, request);
        }

        /**
         * An Async wrapper for ListProvisioningArtifactsForServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisioningArtifactsForServiceActionRequestT = Model::ListProvisioningArtifactsForServiceActionRequest>
        void ListProvisioningArtifactsForServiceActionAsync(const ListProvisioningArtifactsForServiceActionRequestT& request, const ListProvisioningArtifactsForServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListProvisioningArtifactsForServiceAction, request, handler, context);
        }

        /**
         * <p>Lists the specified requests or all performed requests.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListRecordHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecordHistoryOutcome ListRecordHistory(const Model::ListRecordHistoryRequest& request) const;

        /**
         * A Callable wrapper for ListRecordHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecordHistoryRequestT = Model::ListRecordHistoryRequest>
        Model::ListRecordHistoryOutcomeCallable ListRecordHistoryCallable(const ListRecordHistoryRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListRecordHistory, request);
        }

        /**
         * An Async wrapper for ListRecordHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecordHistoryRequestT = Model::ListRecordHistoryRequest>
        void ListRecordHistoryAsync(const ListRecordHistoryRequestT& request, const ListRecordHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListRecordHistory, request, handler, context);
        }

        /**
         * <p>Lists the resources associated with the specified TagOption.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListResourcesForTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourcesForTagOptionOutcome ListResourcesForTagOption(const Model::ListResourcesForTagOptionRequest& request) const;

        /**
         * A Callable wrapper for ListResourcesForTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourcesForTagOptionRequestT = Model::ListResourcesForTagOptionRequest>
        Model::ListResourcesForTagOptionOutcomeCallable ListResourcesForTagOptionCallable(const ListResourcesForTagOptionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListResourcesForTagOption, request);
        }

        /**
         * An Async wrapper for ListResourcesForTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourcesForTagOptionRequestT = Model::ListResourcesForTagOptionRequest>
        void ListResourcesForTagOptionAsync(const ListResourcesForTagOptionRequestT& request, const ListResourcesForTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListResourcesForTagOption, request, handler, context);
        }

        /**
         * <p>Lists all self-service actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsOutcome ListServiceActions(const Model::ListServiceActionsRequest& request) const;

        /**
         * A Callable wrapper for ListServiceActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceActionsRequestT = Model::ListServiceActionsRequest>
        Model::ListServiceActionsOutcomeCallable ListServiceActionsCallable(const ListServiceActionsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListServiceActions, request);
        }

        /**
         * An Async wrapper for ListServiceActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceActionsRequestT = Model::ListServiceActionsRequest>
        void ListServiceActionsAsync(const ListServiceActionsRequestT& request, const ListServiceActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListServiceActions, request, handler, context);
        }

        /**
         * <p>Returns a paginated list of self-service actions associated with the
         * specified Product ID and Provisioning Artifact ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListServiceActionsForProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServiceActionsForProvisioningArtifactOutcome ListServiceActionsForProvisioningArtifact(const Model::ListServiceActionsForProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for ListServiceActionsForProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListServiceActionsForProvisioningArtifactRequestT = Model::ListServiceActionsForProvisioningArtifactRequest>
        Model::ListServiceActionsForProvisioningArtifactOutcomeCallable ListServiceActionsForProvisioningArtifactCallable(const ListServiceActionsForProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListServiceActionsForProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for ListServiceActionsForProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListServiceActionsForProvisioningArtifactRequestT = Model::ListServiceActionsForProvisioningArtifactRequest>
        void ListServiceActionsForProvisioningArtifactAsync(const ListServiceActionsForProvisioningArtifactRequestT& request, const ListServiceActionsForProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListServiceActionsForProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Returns summary information about stack instances that are associated with
         * the specified <code>CFN_STACKSET</code> type provisioned product. You can filter
         * for stack instances that are associated with a specific Amazon Web Services
         * account name or Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListStackInstancesForProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStackInstancesForProvisionedProductOutcome ListStackInstancesForProvisionedProduct(const Model::ListStackInstancesForProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for ListStackInstancesForProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStackInstancesForProvisionedProductRequestT = Model::ListStackInstancesForProvisionedProductRequest>
        Model::ListStackInstancesForProvisionedProductOutcomeCallable ListStackInstancesForProvisionedProductCallable(const ListStackInstancesForProvisionedProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListStackInstancesForProvisionedProduct, request);
        }

        /**
         * An Async wrapper for ListStackInstancesForProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStackInstancesForProvisionedProductRequestT = Model::ListStackInstancesForProvisionedProductRequest>
        void ListStackInstancesForProvisionedProductAsync(const ListStackInstancesForProvisionedProductRequestT& request, const ListStackInstancesForProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListStackInstancesForProvisionedProduct, request, handler, context);
        }

        /**
         * <p>Lists the specified TagOptions or all TagOptions.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ListTagOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagOptionsOutcome ListTagOptions(const Model::ListTagOptionsRequest& request) const;

        /**
         * A Callable wrapper for ListTagOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagOptionsRequestT = Model::ListTagOptionsRequest>
        Model::ListTagOptionsOutcomeCallable ListTagOptionsCallable(const ListTagOptionsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ListTagOptions, request);
        }

        /**
         * An Async wrapper for ListTagOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagOptionsRequestT = Model::ListTagOptionsRequest>
        void ListTagOptionsAsync(const ListTagOptionsRequestT& request, const ListTagOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ListTagOptions, request, handler, context);
        }

        /**
         * <p> Notifies the result of the provisioning engine execution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/NotifyProvisionProductEngineWorkflowResult">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyProvisionProductEngineWorkflowResultOutcome NotifyProvisionProductEngineWorkflowResult(const Model::NotifyProvisionProductEngineWorkflowResultRequest& request) const;

        /**
         * A Callable wrapper for NotifyProvisionProductEngineWorkflowResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyProvisionProductEngineWorkflowResultRequestT = Model::NotifyProvisionProductEngineWorkflowResultRequest>
        Model::NotifyProvisionProductEngineWorkflowResultOutcomeCallable NotifyProvisionProductEngineWorkflowResultCallable(const NotifyProvisionProductEngineWorkflowResultRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::NotifyProvisionProductEngineWorkflowResult, request);
        }

        /**
         * An Async wrapper for NotifyProvisionProductEngineWorkflowResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyProvisionProductEngineWorkflowResultRequestT = Model::NotifyProvisionProductEngineWorkflowResultRequest>
        void NotifyProvisionProductEngineWorkflowResultAsync(const NotifyProvisionProductEngineWorkflowResultRequestT& request, const NotifyProvisionProductEngineWorkflowResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::NotifyProvisionProductEngineWorkflowResult, request, handler, context);
        }

        /**
         * <p> Notifies the result of the terminate engine execution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/NotifyTerminateProvisionedProductEngineWorkflowResult">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyTerminateProvisionedProductEngineWorkflowResultOutcome NotifyTerminateProvisionedProductEngineWorkflowResult(const Model::NotifyTerminateProvisionedProductEngineWorkflowResultRequest& request) const;

        /**
         * A Callable wrapper for NotifyTerminateProvisionedProductEngineWorkflowResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyTerminateProvisionedProductEngineWorkflowResultRequestT = Model::NotifyTerminateProvisionedProductEngineWorkflowResultRequest>
        Model::NotifyTerminateProvisionedProductEngineWorkflowResultOutcomeCallable NotifyTerminateProvisionedProductEngineWorkflowResultCallable(const NotifyTerminateProvisionedProductEngineWorkflowResultRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::NotifyTerminateProvisionedProductEngineWorkflowResult, request);
        }

        /**
         * An Async wrapper for NotifyTerminateProvisionedProductEngineWorkflowResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyTerminateProvisionedProductEngineWorkflowResultRequestT = Model::NotifyTerminateProvisionedProductEngineWorkflowResultRequest>
        void NotifyTerminateProvisionedProductEngineWorkflowResultAsync(const NotifyTerminateProvisionedProductEngineWorkflowResultRequestT& request, const NotifyTerminateProvisionedProductEngineWorkflowResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::NotifyTerminateProvisionedProductEngineWorkflowResult, request, handler, context);
        }

        /**
         * <p> Notifies the result of the update engine execution. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/NotifyUpdateProvisionedProductEngineWorkflowResult">AWS
         * API Reference</a></p>
         */
        virtual Model::NotifyUpdateProvisionedProductEngineWorkflowResultOutcome NotifyUpdateProvisionedProductEngineWorkflowResult(const Model::NotifyUpdateProvisionedProductEngineWorkflowResultRequest& request) const;

        /**
         * A Callable wrapper for NotifyUpdateProvisionedProductEngineWorkflowResult that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename NotifyUpdateProvisionedProductEngineWorkflowResultRequestT = Model::NotifyUpdateProvisionedProductEngineWorkflowResultRequest>
        Model::NotifyUpdateProvisionedProductEngineWorkflowResultOutcomeCallable NotifyUpdateProvisionedProductEngineWorkflowResultCallable(const NotifyUpdateProvisionedProductEngineWorkflowResultRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::NotifyUpdateProvisionedProductEngineWorkflowResult, request);
        }

        /**
         * An Async wrapper for NotifyUpdateProvisionedProductEngineWorkflowResult that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename NotifyUpdateProvisionedProductEngineWorkflowResultRequestT = Model::NotifyUpdateProvisionedProductEngineWorkflowResultRequest>
        void NotifyUpdateProvisionedProductEngineWorkflowResultAsync(const NotifyUpdateProvisionedProductEngineWorkflowResultRequestT& request, const NotifyUpdateProvisionedProductEngineWorkflowResultResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::NotifyUpdateProvisionedProductEngineWorkflowResult, request, handler, context);
        }

        /**
         * <p> Provisions the specified product. </p> <p> A provisioned product is a
         * resourced instance of a product. For example, provisioning a product that's
         * based on an CloudFormation template launches an CloudFormation stack and its
         * underlying resources. You can check the status of this request using
         * <a>DescribeRecord</a>. </p> <p> If the request contains a tag key with an empty
         * list of values, there's a tag conflict for that key. Don't include conflicted
         * keys as tags, or this will cause the error "Parameter validation failed: Missing
         * required parameter in Tags[<i>N</i>]:<i>Value</i>". </p>  <p> When
         * provisioning a product that's been added to a portfolio, you must grant your
         * user, group, or role access to the portfolio. For more information, see <a
         * href="https://docs.aws.amazon.com/servicecatalog/latest/adminguide/catalogs_portfolios_users.html">Granting
         * users access</a> in the <i>Service Catalog User Guide</i>. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisionProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::ProvisionProductOutcome ProvisionProduct(const Model::ProvisionProductRequest& request) const;

        /**
         * A Callable wrapper for ProvisionProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ProvisionProductRequestT = Model::ProvisionProductRequest>
        Model::ProvisionProductOutcomeCallable ProvisionProductCallable(const ProvisionProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ProvisionProduct, request);
        }

        /**
         * An Async wrapper for ProvisionProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ProvisionProductRequestT = Model::ProvisionProductRequest>
        void ProvisionProductAsync(const ProvisionProductRequestT& request, const ProvisionProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ProvisionProduct, request, handler, context);
        }

        /**
         * <p>Rejects an offer to share the specified portfolio.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/RejectPortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectPortfolioShareOutcome RejectPortfolioShare(const Model::RejectPortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for RejectPortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RejectPortfolioShareRequestT = Model::RejectPortfolioShareRequest>
        Model::RejectPortfolioShareOutcomeCallable RejectPortfolioShareCallable(const RejectPortfolioShareRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::RejectPortfolioShare, request);
        }

        /**
         * An Async wrapper for RejectPortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectPortfolioShareRequestT = Model::RejectPortfolioShareRequest>
        void RejectPortfolioShareAsync(const RejectPortfolioShareRequestT& request, const RejectPortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::RejectPortfolioShare, request, handler, context);
        }

        /**
         * <p>Lists the provisioned products that are available (not terminated).</p> <p>To
         * use additional filtering, see <a>SearchProvisionedProducts</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ScanProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::ScanProvisionedProductsOutcome ScanProvisionedProducts(const Model::ScanProvisionedProductsRequest& request) const;

        /**
         * A Callable wrapper for ScanProvisionedProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ScanProvisionedProductsRequestT = Model::ScanProvisionedProductsRequest>
        Model::ScanProvisionedProductsOutcomeCallable ScanProvisionedProductsCallable(const ScanProvisionedProductsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::ScanProvisionedProducts, request);
        }

        /**
         * An Async wrapper for ScanProvisionedProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ScanProvisionedProductsRequestT = Model::ScanProvisionedProductsRequest>
        void ScanProvisionedProductsAsync(const ScanProvisionedProductsRequestT& request, const ScanProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::ScanProvisionedProducts, request, handler, context);
        }

        /**
         * <p>Gets information about the products to which the caller has
         * access.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsOutcome SearchProducts(const Model::SearchProductsRequest& request) const;

        /**
         * A Callable wrapper for SearchProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchProductsRequestT = Model::SearchProductsRequest>
        Model::SearchProductsOutcomeCallable SearchProductsCallable(const SearchProductsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::SearchProducts, request);
        }

        /**
         * An Async wrapper for SearchProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchProductsRequestT = Model::SearchProductsRequest>
        void SearchProductsAsync(const SearchProductsRequestT& request, const SearchProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::SearchProducts, request, handler, context);
        }

        /**
         * <p>Gets information about the products for the specified portfolio or all
         * products.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProductsAsAdmin">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProductsAsAdminOutcome SearchProductsAsAdmin(const Model::SearchProductsAsAdminRequest& request) const;

        /**
         * A Callable wrapper for SearchProductsAsAdmin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchProductsAsAdminRequestT = Model::SearchProductsAsAdminRequest>
        Model::SearchProductsAsAdminOutcomeCallable SearchProductsAsAdminCallable(const SearchProductsAsAdminRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::SearchProductsAsAdmin, request);
        }

        /**
         * An Async wrapper for SearchProductsAsAdmin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchProductsAsAdminRequestT = Model::SearchProductsAsAdminRequest>
        void SearchProductsAsAdminAsync(const SearchProductsAsAdminRequestT& request, const SearchProductsAsAdminResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::SearchProductsAsAdmin, request, handler, context);
        }

        /**
         * <p>Gets information about the provisioned products that meet the specified
         * criteria.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SearchProvisionedProducts">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchProvisionedProductsOutcome SearchProvisionedProducts(const Model::SearchProvisionedProductsRequest& request) const;

        /**
         * A Callable wrapper for SearchProvisionedProducts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchProvisionedProductsRequestT = Model::SearchProvisionedProductsRequest>
        Model::SearchProvisionedProductsOutcomeCallable SearchProvisionedProductsCallable(const SearchProvisionedProductsRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::SearchProvisionedProducts, request);
        }

        /**
         * An Async wrapper for SearchProvisionedProducts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchProvisionedProductsRequestT = Model::SearchProvisionedProductsRequest>
        void SearchProvisionedProductsAsync(const SearchProvisionedProductsRequestT& request, const SearchProvisionedProductsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::SearchProvisionedProducts, request, handler, context);
        }

        /**
         * <p>Terminates the specified provisioned product.</p> <p>This operation does not
         * delete any records associated with the provisioned product.</p> <p>You can check
         * the status of this request using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/TerminateProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::TerminateProvisionedProductOutcome TerminateProvisionedProduct(const Model::TerminateProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for TerminateProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TerminateProvisionedProductRequestT = Model::TerminateProvisionedProductRequest>
        Model::TerminateProvisionedProductOutcomeCallable TerminateProvisionedProductCallable(const TerminateProvisionedProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::TerminateProvisionedProduct, request);
        }

        /**
         * An Async wrapper for TerminateProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TerminateProvisionedProductRequestT = Model::TerminateProvisionedProductRequest>
        void TerminateProvisionedProductAsync(const TerminateProvisionedProductRequestT& request, const TerminateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::TerminateProvisionedProduct, request, handler, context);
        }

        /**
         * <p>Updates the specified constraint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateConstraint">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConstraintOutcome UpdateConstraint(const Model::UpdateConstraintRequest& request) const;

        /**
         * A Callable wrapper for UpdateConstraint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConstraintRequestT = Model::UpdateConstraintRequest>
        Model::UpdateConstraintOutcomeCallable UpdateConstraintCallable(const UpdateConstraintRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateConstraint, request);
        }

        /**
         * An Async wrapper for UpdateConstraint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConstraintRequestT = Model::UpdateConstraintRequest>
        void UpdateConstraintAsync(const UpdateConstraintRequestT& request, const UpdateConstraintResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateConstraint, request, handler, context);
        }

        /**
         * <p>Updates the specified portfolio.</p> <p>You cannot update a product that was
         * shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolio">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioOutcome UpdatePortfolio(const Model::UpdatePortfolioRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortfolio that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePortfolioRequestT = Model::UpdatePortfolioRequest>
        Model::UpdatePortfolioOutcomeCallable UpdatePortfolioCallable(const UpdatePortfolioRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdatePortfolio, request);
        }

        /**
         * An Async wrapper for UpdatePortfolio that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePortfolioRequestT = Model::UpdatePortfolioRequest>
        void UpdatePortfolioAsync(const UpdatePortfolioRequestT& request, const UpdatePortfolioResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdatePortfolio, request, handler, context);
        }

        /**
         * <p>Updates the specified portfolio share. You can use this API to enable or
         * disable <code>TagOptions</code> sharing or Principal sharing for an existing
         * portfolio share. </p> <p>The portfolio share cannot be updated if the
         * <code>CreatePortfolioShare</code> operation is <code>IN_PROGRESS</code>, as the
         * share is not available to recipient entities. In this case, you must wait for
         * the portfolio share to be completed.</p> <p>You must provide the
         * <code>accountId</code> or organization node in the input, but not both.</p>
         * <p>If the portfolio is shared to both an external account and an organization
         * node, and both shares need to be updated, you must invoke
         * <code>UpdatePortfolioShare</code> separately for each share type. </p> <p>This
         * API cannot be used for removing the portfolio share. You must use
         * <code>DeletePortfolioShare</code> API for that action. </p>  <p>When you
         * associate a principal with portfolio, a potential privilege escalation path may
         * occur when that portfolio is then shared with other accounts. For a user in a
         * recipient account who is <i>not</i> an Service Catalog Admin, but still has the
         * ability to create Principals (Users/Groups/Roles), that user could create a role
         * that matches a principal name association for the portfolio. Although this user
         * may not know which principal names are associated through Service Catalog, they
         * may be able to guess the user. If this potential escalation path is a concern,
         * then Service Catalog recommends using <code>PrincipalType</code> as
         * <code>IAM</code>. With this configuration, the <code>PrincipalARN</code> must
         * already exist in the recipient account before it can be associated. </p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdatePortfolioShare">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePortfolioShareOutcome UpdatePortfolioShare(const Model::UpdatePortfolioShareRequest& request) const;

        /**
         * A Callable wrapper for UpdatePortfolioShare that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePortfolioShareRequestT = Model::UpdatePortfolioShareRequest>
        Model::UpdatePortfolioShareOutcomeCallable UpdatePortfolioShareCallable(const UpdatePortfolioShareRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdatePortfolioShare, request);
        }

        /**
         * An Async wrapper for UpdatePortfolioShare that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePortfolioShareRequestT = Model::UpdatePortfolioShareRequest>
        void UpdatePortfolioShareAsync(const UpdatePortfolioShareRequestT& request, const UpdatePortfolioShareResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdatePortfolioShare, request, handler, context);
        }

        /**
         * <p>Updates the specified product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProductOutcome UpdateProduct(const Model::UpdateProductRequest& request) const;

        /**
         * A Callable wrapper for UpdateProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProductRequestT = Model::UpdateProductRequest>
        Model::UpdateProductOutcomeCallable UpdateProductCallable(const UpdateProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateProduct, request);
        }

        /**
         * An Async wrapper for UpdateProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProductRequestT = Model::UpdateProductRequest>
        void UpdateProductAsync(const UpdateProductRequestT& request, const UpdateProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateProduct, request, handler, context);
        }

        /**
         * <p>Requests updates to the configuration of the specified provisioned
         * product.</p> <p>If there are tags associated with the object, they cannot be
         * updated or added. Depending on the specific updates requested, this operation
         * can update with no interruption, with some interruption, or replace the
         * provisioned product entirely.</p> <p>You can check the status of this request
         * using <a>DescribeRecord</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProduct">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedProductOutcome UpdateProvisionedProduct(const Model::UpdateProvisionedProductRequest& request) const;

        /**
         * A Callable wrapper for UpdateProvisionedProduct that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProvisionedProductRequestT = Model::UpdateProvisionedProductRequest>
        Model::UpdateProvisionedProductOutcomeCallable UpdateProvisionedProductCallable(const UpdateProvisionedProductRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateProvisionedProduct, request);
        }

        /**
         * An Async wrapper for UpdateProvisionedProduct that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProvisionedProductRequestT = Model::UpdateProvisionedProductRequest>
        void UpdateProvisionedProductAsync(const UpdateProvisionedProductRequestT& request, const UpdateProvisionedProductResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateProvisionedProduct, request, handler, context);
        }

        /**
         * <p>Requests updates to the properties of the specified provisioned
         * product.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisionedProductProperties">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisionedProductPropertiesOutcome UpdateProvisionedProductProperties(const Model::UpdateProvisionedProductPropertiesRequest& request) const;

        /**
         * A Callable wrapper for UpdateProvisionedProductProperties that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProvisionedProductPropertiesRequestT = Model::UpdateProvisionedProductPropertiesRequest>
        Model::UpdateProvisionedProductPropertiesOutcomeCallable UpdateProvisionedProductPropertiesCallable(const UpdateProvisionedProductPropertiesRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateProvisionedProductProperties, request);
        }

        /**
         * An Async wrapper for UpdateProvisionedProductProperties that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProvisionedProductPropertiesRequestT = Model::UpdateProvisionedProductPropertiesRequest>
        void UpdateProvisionedProductPropertiesAsync(const UpdateProvisionedProductPropertiesRequestT& request, const UpdateProvisionedProductPropertiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateProvisionedProductProperties, request, handler, context);
        }

        /**
         * <p>Updates the specified provisioning artifact (also known as a version) for the
         * specified product.</p> <p>You cannot update a provisioning artifact for a
         * product that was shared with you.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateProvisioningArtifact">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisioningArtifactOutcome UpdateProvisioningArtifact(const Model::UpdateProvisioningArtifactRequest& request) const;

        /**
         * A Callable wrapper for UpdateProvisioningArtifact that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateProvisioningArtifactRequestT = Model::UpdateProvisioningArtifactRequest>
        Model::UpdateProvisioningArtifactOutcomeCallable UpdateProvisioningArtifactCallable(const UpdateProvisioningArtifactRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateProvisioningArtifact, request);
        }

        /**
         * An Async wrapper for UpdateProvisioningArtifact that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProvisioningArtifactRequestT = Model::UpdateProvisioningArtifactRequest>
        void UpdateProvisioningArtifactAsync(const UpdateProvisioningArtifactRequestT& request, const UpdateProvisioningArtifactResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateProvisioningArtifact, request, handler, context);
        }

        /**
         * <p>Updates a self-service action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateServiceAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceActionOutcome UpdateServiceAction(const Model::UpdateServiceActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceActionRequestT = Model::UpdateServiceActionRequest>
        Model::UpdateServiceActionOutcomeCallable UpdateServiceActionCallable(const UpdateServiceActionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateServiceAction, request);
        }

        /**
         * An Async wrapper for UpdateServiceAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceActionRequestT = Model::UpdateServiceActionRequest>
        void UpdateServiceActionAsync(const UpdateServiceActionRequestT& request, const UpdateServiceActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateServiceAction, request, handler, context);
        }

        /**
         * <p>Updates the specified TagOption.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UpdateTagOption">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTagOptionOutcome UpdateTagOption(const Model::UpdateTagOptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateTagOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateTagOptionRequestT = Model::UpdateTagOptionRequest>
        Model::UpdateTagOptionOutcomeCallable UpdateTagOptionCallable(const UpdateTagOptionRequestT& request) const
        {
            return SubmitCallable(&ServiceCatalogClient::UpdateTagOption, request);
        }

        /**
         * An Async wrapper for UpdateTagOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTagOptionRequestT = Model::UpdateTagOptionRequest>
        void UpdateTagOptionAsync(const UpdateTagOptionRequestT& request, const UpdateTagOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ServiceCatalogClient::UpdateTagOption, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ServiceCatalogEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ServiceCatalogClient>;
      void init(const ServiceCatalogClientConfiguration& clientConfiguration);

      ServiceCatalogClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ServiceCatalogEndpointProviderBase> m_endpointProvider;
  };

} // namespace ServiceCatalog
} // namespace Aws
