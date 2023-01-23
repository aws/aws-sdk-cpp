/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/servicecatalog/ServiceCatalogErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/servicecatalog/ServiceCatalogEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ServiceCatalogClient header */
#include <aws/servicecatalog/model/AcceptPortfolioShareResult.h>
#include <aws/servicecatalog/model/AssociateBudgetWithResourceResult.h>
#include <aws/servicecatalog/model/AssociatePrincipalWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateProductWithPortfolioResult.h>
#include <aws/servicecatalog/model/AssociateServiceActionWithProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/AssociateTagOptionWithResourceResult.h>
#include <aws/servicecatalog/model/BatchAssociateServiceActionWithProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/BatchDisassociateServiceActionFromProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/CopyProductResult.h>
#include <aws/servicecatalog/model/CreateConstraintResult.h>
#include <aws/servicecatalog/model/CreatePortfolioResult.h>
#include <aws/servicecatalog/model/CreatePortfolioShareResult.h>
#include <aws/servicecatalog/model/CreateProductResult.h>
#include <aws/servicecatalog/model/CreateProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/CreateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/CreateServiceActionResult.h>
#include <aws/servicecatalog/model/CreateTagOptionResult.h>
#include <aws/servicecatalog/model/DeleteConstraintResult.h>
#include <aws/servicecatalog/model/DeletePortfolioResult.h>
#include <aws/servicecatalog/model/DeletePortfolioShareResult.h>
#include <aws/servicecatalog/model/DeleteProductResult.h>
#include <aws/servicecatalog/model/DeleteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DeleteProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DeleteServiceActionResult.h>
#include <aws/servicecatalog/model/DeleteTagOptionResult.h>
#include <aws/servicecatalog/model/DescribeConstraintResult.h>
#include <aws/servicecatalog/model/DescribeCopyProductStatusResult.h>
#include <aws/servicecatalog/model/DescribePortfolioResult.h>
#include <aws/servicecatalog/model/DescribePortfolioShareStatusResult.h>
#include <aws/servicecatalog/model/DescribePortfolioSharesResult.h>
#include <aws/servicecatalog/model/DescribeProductResult.h>
#include <aws/servicecatalog/model/DescribeProductAsAdminResult.h>
#include <aws/servicecatalog/model/DescribeProductViewResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductResult.h>
#include <aws/servicecatalog/model/DescribeProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DescribeProvisioningParametersResult.h>
#include <aws/servicecatalog/model/DescribeRecordResult.h>
#include <aws/servicecatalog/model/DescribeServiceActionResult.h>
#include <aws/servicecatalog/model/DescribeServiceActionExecutionParametersResult.h>
#include <aws/servicecatalog/model/DescribeTagOptionResult.h>
#include <aws/servicecatalog/model/DisableAWSOrganizationsAccessResult.h>
#include <aws/servicecatalog/model/DisassociateBudgetFromResourceResult.h>
#include <aws/servicecatalog/model/DisassociatePrincipalFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateProductFromPortfolioResult.h>
#include <aws/servicecatalog/model/DisassociateServiceActionFromProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/DisassociateTagOptionFromResourceResult.h>
#include <aws/servicecatalog/model/EnableAWSOrganizationsAccessResult.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductPlanResult.h>
#include <aws/servicecatalog/model/ExecuteProvisionedProductServiceActionResult.h>
#include <aws/servicecatalog/model/GetAWSOrganizationsAccessStatusResult.h>
#include <aws/servicecatalog/model/GetProvisionedProductOutputsResult.h>
#include <aws/servicecatalog/model/ImportAsProvisionedProductResult.h>
#include <aws/servicecatalog/model/ListAcceptedPortfolioSharesResult.h>
#include <aws/servicecatalog/model/ListBudgetsForResourceResult.h>
#include <aws/servicecatalog/model/ListConstraintsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListLaunchPathsResult.h>
#include <aws/servicecatalog/model/ListOrganizationPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfolioAccessResult.h>
#include <aws/servicecatalog/model/ListPortfoliosResult.h>
#include <aws/servicecatalog/model/ListPortfoliosForProductResult.h>
#include <aws/servicecatalog/model/ListPrincipalsForPortfolioResult.h>
#include <aws/servicecatalog/model/ListProvisionedProductPlansResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsResult.h>
#include <aws/servicecatalog/model/ListProvisioningArtifactsForServiceActionResult.h>
#include <aws/servicecatalog/model/ListRecordHistoryResult.h>
#include <aws/servicecatalog/model/ListResourcesForTagOptionResult.h>
#include <aws/servicecatalog/model/ListServiceActionsResult.h>
#include <aws/servicecatalog/model/ListServiceActionsForProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/ListStackInstancesForProvisionedProductResult.h>
#include <aws/servicecatalog/model/ListTagOptionsResult.h>
#include <aws/servicecatalog/model/ProvisionProductResult.h>
#include <aws/servicecatalog/model/RejectPortfolioShareResult.h>
#include <aws/servicecatalog/model/ScanProvisionedProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsResult.h>
#include <aws/servicecatalog/model/SearchProductsAsAdminResult.h>
#include <aws/servicecatalog/model/SearchProvisionedProductsResult.h>
#include <aws/servicecatalog/model/TerminateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateConstraintResult.h>
#include <aws/servicecatalog/model/UpdatePortfolioResult.h>
#include <aws/servicecatalog/model/UpdatePortfolioShareResult.h>
#include <aws/servicecatalog/model/UpdateProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductResult.h>
#include <aws/servicecatalog/model/UpdateProvisionedProductPropertiesResult.h>
#include <aws/servicecatalog/model/UpdateProvisioningArtifactResult.h>
#include <aws/servicecatalog/model/UpdateServiceActionResult.h>
#include <aws/servicecatalog/model/UpdateTagOptionResult.h>
/* End of service model headers required in ServiceCatalogClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace ServiceCatalog
  {
    using ServiceCatalogClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ServiceCatalogEndpointProviderBase = Aws::ServiceCatalog::Endpoint::ServiceCatalogEndpointProviderBase;
    using ServiceCatalogEndpointProvider = Aws::ServiceCatalog::Endpoint::ServiceCatalogEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ServiceCatalogClient header */
      class AcceptPortfolioShareRequest;
      class AssociateBudgetWithResourceRequest;
      class AssociatePrincipalWithPortfolioRequest;
      class AssociateProductWithPortfolioRequest;
      class AssociateServiceActionWithProvisioningArtifactRequest;
      class AssociateTagOptionWithResourceRequest;
      class BatchAssociateServiceActionWithProvisioningArtifactRequest;
      class BatchDisassociateServiceActionFromProvisioningArtifactRequest;
      class CopyProductRequest;
      class CreateConstraintRequest;
      class CreatePortfolioRequest;
      class CreatePortfolioShareRequest;
      class CreateProductRequest;
      class CreateProvisionedProductPlanRequest;
      class CreateProvisioningArtifactRequest;
      class CreateServiceActionRequest;
      class CreateTagOptionRequest;
      class DeleteConstraintRequest;
      class DeletePortfolioRequest;
      class DeletePortfolioShareRequest;
      class DeleteProductRequest;
      class DeleteProvisionedProductPlanRequest;
      class DeleteProvisioningArtifactRequest;
      class DeleteServiceActionRequest;
      class DeleteTagOptionRequest;
      class DescribeConstraintRequest;
      class DescribeCopyProductStatusRequest;
      class DescribePortfolioRequest;
      class DescribePortfolioShareStatusRequest;
      class DescribePortfolioSharesRequest;
      class DescribeProductRequest;
      class DescribeProductAsAdminRequest;
      class DescribeProductViewRequest;
      class DescribeProvisionedProductRequest;
      class DescribeProvisionedProductPlanRequest;
      class DescribeProvisioningArtifactRequest;
      class DescribeProvisioningParametersRequest;
      class DescribeRecordRequest;
      class DescribeServiceActionRequest;
      class DescribeServiceActionExecutionParametersRequest;
      class DescribeTagOptionRequest;
      class DisableAWSOrganizationsAccessRequest;
      class DisassociateBudgetFromResourceRequest;
      class DisassociatePrincipalFromPortfolioRequest;
      class DisassociateProductFromPortfolioRequest;
      class DisassociateServiceActionFromProvisioningArtifactRequest;
      class DisassociateTagOptionFromResourceRequest;
      class EnableAWSOrganizationsAccessRequest;
      class ExecuteProvisionedProductPlanRequest;
      class ExecuteProvisionedProductServiceActionRequest;
      class GetAWSOrganizationsAccessStatusRequest;
      class GetProvisionedProductOutputsRequest;
      class ImportAsProvisionedProductRequest;
      class ListAcceptedPortfolioSharesRequest;
      class ListBudgetsForResourceRequest;
      class ListConstraintsForPortfolioRequest;
      class ListLaunchPathsRequest;
      class ListOrganizationPortfolioAccessRequest;
      class ListPortfolioAccessRequest;
      class ListPortfoliosRequest;
      class ListPortfoliosForProductRequest;
      class ListPrincipalsForPortfolioRequest;
      class ListProvisionedProductPlansRequest;
      class ListProvisioningArtifactsRequest;
      class ListProvisioningArtifactsForServiceActionRequest;
      class ListRecordHistoryRequest;
      class ListResourcesForTagOptionRequest;
      class ListServiceActionsRequest;
      class ListServiceActionsForProvisioningArtifactRequest;
      class ListStackInstancesForProvisionedProductRequest;
      class ListTagOptionsRequest;
      class ProvisionProductRequest;
      class RejectPortfolioShareRequest;
      class ScanProvisionedProductsRequest;
      class SearchProductsRequest;
      class SearchProductsAsAdminRequest;
      class SearchProvisionedProductsRequest;
      class TerminateProvisionedProductRequest;
      class UpdateConstraintRequest;
      class UpdatePortfolioRequest;
      class UpdatePortfolioShareRequest;
      class UpdateProductRequest;
      class UpdateProvisionedProductRequest;
      class UpdateProvisionedProductPropertiesRequest;
      class UpdateProvisioningArtifactRequest;
      class UpdateServiceActionRequest;
      class UpdateTagOptionRequest;
      /* End of service model forward declarations required in ServiceCatalogClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<AcceptPortfolioShareResult, ServiceCatalogError> AcceptPortfolioShareOutcome;
      typedef Aws::Utils::Outcome<AssociateBudgetWithResourceResult, ServiceCatalogError> AssociateBudgetWithResourceOutcome;
      typedef Aws::Utils::Outcome<AssociatePrincipalWithPortfolioResult, ServiceCatalogError> AssociatePrincipalWithPortfolioOutcome;
      typedef Aws::Utils::Outcome<AssociateProductWithPortfolioResult, ServiceCatalogError> AssociateProductWithPortfolioOutcome;
      typedef Aws::Utils::Outcome<AssociateServiceActionWithProvisioningArtifactResult, ServiceCatalogError> AssociateServiceActionWithProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<AssociateTagOptionWithResourceResult, ServiceCatalogError> AssociateTagOptionWithResourceOutcome;
      typedef Aws::Utils::Outcome<BatchAssociateServiceActionWithProvisioningArtifactResult, ServiceCatalogError> BatchAssociateServiceActionWithProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<BatchDisassociateServiceActionFromProvisioningArtifactResult, ServiceCatalogError> BatchDisassociateServiceActionFromProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<CopyProductResult, ServiceCatalogError> CopyProductOutcome;
      typedef Aws::Utils::Outcome<CreateConstraintResult, ServiceCatalogError> CreateConstraintOutcome;
      typedef Aws::Utils::Outcome<CreatePortfolioResult, ServiceCatalogError> CreatePortfolioOutcome;
      typedef Aws::Utils::Outcome<CreatePortfolioShareResult, ServiceCatalogError> CreatePortfolioShareOutcome;
      typedef Aws::Utils::Outcome<CreateProductResult, ServiceCatalogError> CreateProductOutcome;
      typedef Aws::Utils::Outcome<CreateProvisionedProductPlanResult, ServiceCatalogError> CreateProvisionedProductPlanOutcome;
      typedef Aws::Utils::Outcome<CreateProvisioningArtifactResult, ServiceCatalogError> CreateProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<CreateServiceActionResult, ServiceCatalogError> CreateServiceActionOutcome;
      typedef Aws::Utils::Outcome<CreateTagOptionResult, ServiceCatalogError> CreateTagOptionOutcome;
      typedef Aws::Utils::Outcome<DeleteConstraintResult, ServiceCatalogError> DeleteConstraintOutcome;
      typedef Aws::Utils::Outcome<DeletePortfolioResult, ServiceCatalogError> DeletePortfolioOutcome;
      typedef Aws::Utils::Outcome<DeletePortfolioShareResult, ServiceCatalogError> DeletePortfolioShareOutcome;
      typedef Aws::Utils::Outcome<DeleteProductResult, ServiceCatalogError> DeleteProductOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisionedProductPlanResult, ServiceCatalogError> DeleteProvisionedProductPlanOutcome;
      typedef Aws::Utils::Outcome<DeleteProvisioningArtifactResult, ServiceCatalogError> DeleteProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<DeleteServiceActionResult, ServiceCatalogError> DeleteServiceActionOutcome;
      typedef Aws::Utils::Outcome<DeleteTagOptionResult, ServiceCatalogError> DeleteTagOptionOutcome;
      typedef Aws::Utils::Outcome<DescribeConstraintResult, ServiceCatalogError> DescribeConstraintOutcome;
      typedef Aws::Utils::Outcome<DescribeCopyProductStatusResult, ServiceCatalogError> DescribeCopyProductStatusOutcome;
      typedef Aws::Utils::Outcome<DescribePortfolioResult, ServiceCatalogError> DescribePortfolioOutcome;
      typedef Aws::Utils::Outcome<DescribePortfolioShareStatusResult, ServiceCatalogError> DescribePortfolioShareStatusOutcome;
      typedef Aws::Utils::Outcome<DescribePortfolioSharesResult, ServiceCatalogError> DescribePortfolioSharesOutcome;
      typedef Aws::Utils::Outcome<DescribeProductResult, ServiceCatalogError> DescribeProductOutcome;
      typedef Aws::Utils::Outcome<DescribeProductAsAdminResult, ServiceCatalogError> DescribeProductAsAdminOutcome;
      typedef Aws::Utils::Outcome<DescribeProductViewResult, ServiceCatalogError> DescribeProductViewOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisionedProductResult, ServiceCatalogError> DescribeProvisionedProductOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisionedProductPlanResult, ServiceCatalogError> DescribeProvisionedProductPlanOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisioningArtifactResult, ServiceCatalogError> DescribeProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<DescribeProvisioningParametersResult, ServiceCatalogError> DescribeProvisioningParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeRecordResult, ServiceCatalogError> DescribeRecordOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceActionResult, ServiceCatalogError> DescribeServiceActionOutcome;
      typedef Aws::Utils::Outcome<DescribeServiceActionExecutionParametersResult, ServiceCatalogError> DescribeServiceActionExecutionParametersOutcome;
      typedef Aws::Utils::Outcome<DescribeTagOptionResult, ServiceCatalogError> DescribeTagOptionOutcome;
      typedef Aws::Utils::Outcome<DisableAWSOrganizationsAccessResult, ServiceCatalogError> DisableAWSOrganizationsAccessOutcome;
      typedef Aws::Utils::Outcome<DisassociateBudgetFromResourceResult, ServiceCatalogError> DisassociateBudgetFromResourceOutcome;
      typedef Aws::Utils::Outcome<DisassociatePrincipalFromPortfolioResult, ServiceCatalogError> DisassociatePrincipalFromPortfolioOutcome;
      typedef Aws::Utils::Outcome<DisassociateProductFromPortfolioResult, ServiceCatalogError> DisassociateProductFromPortfolioOutcome;
      typedef Aws::Utils::Outcome<DisassociateServiceActionFromProvisioningArtifactResult, ServiceCatalogError> DisassociateServiceActionFromProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<DisassociateTagOptionFromResourceResult, ServiceCatalogError> DisassociateTagOptionFromResourceOutcome;
      typedef Aws::Utils::Outcome<EnableAWSOrganizationsAccessResult, ServiceCatalogError> EnableAWSOrganizationsAccessOutcome;
      typedef Aws::Utils::Outcome<ExecuteProvisionedProductPlanResult, ServiceCatalogError> ExecuteProvisionedProductPlanOutcome;
      typedef Aws::Utils::Outcome<ExecuteProvisionedProductServiceActionResult, ServiceCatalogError> ExecuteProvisionedProductServiceActionOutcome;
      typedef Aws::Utils::Outcome<GetAWSOrganizationsAccessStatusResult, ServiceCatalogError> GetAWSOrganizationsAccessStatusOutcome;
      typedef Aws::Utils::Outcome<GetProvisionedProductOutputsResult, ServiceCatalogError> GetProvisionedProductOutputsOutcome;
      typedef Aws::Utils::Outcome<ImportAsProvisionedProductResult, ServiceCatalogError> ImportAsProvisionedProductOutcome;
      typedef Aws::Utils::Outcome<ListAcceptedPortfolioSharesResult, ServiceCatalogError> ListAcceptedPortfolioSharesOutcome;
      typedef Aws::Utils::Outcome<ListBudgetsForResourceResult, ServiceCatalogError> ListBudgetsForResourceOutcome;
      typedef Aws::Utils::Outcome<ListConstraintsForPortfolioResult, ServiceCatalogError> ListConstraintsForPortfolioOutcome;
      typedef Aws::Utils::Outcome<ListLaunchPathsResult, ServiceCatalogError> ListLaunchPathsOutcome;
      typedef Aws::Utils::Outcome<ListOrganizationPortfolioAccessResult, ServiceCatalogError> ListOrganizationPortfolioAccessOutcome;
      typedef Aws::Utils::Outcome<ListPortfolioAccessResult, ServiceCatalogError> ListPortfolioAccessOutcome;
      typedef Aws::Utils::Outcome<ListPortfoliosResult, ServiceCatalogError> ListPortfoliosOutcome;
      typedef Aws::Utils::Outcome<ListPortfoliosForProductResult, ServiceCatalogError> ListPortfoliosForProductOutcome;
      typedef Aws::Utils::Outcome<ListPrincipalsForPortfolioResult, ServiceCatalogError> ListPrincipalsForPortfolioOutcome;
      typedef Aws::Utils::Outcome<ListProvisionedProductPlansResult, ServiceCatalogError> ListProvisionedProductPlansOutcome;
      typedef Aws::Utils::Outcome<ListProvisioningArtifactsResult, ServiceCatalogError> ListProvisioningArtifactsOutcome;
      typedef Aws::Utils::Outcome<ListProvisioningArtifactsForServiceActionResult, ServiceCatalogError> ListProvisioningArtifactsForServiceActionOutcome;
      typedef Aws::Utils::Outcome<ListRecordHistoryResult, ServiceCatalogError> ListRecordHistoryOutcome;
      typedef Aws::Utils::Outcome<ListResourcesForTagOptionResult, ServiceCatalogError> ListResourcesForTagOptionOutcome;
      typedef Aws::Utils::Outcome<ListServiceActionsResult, ServiceCatalogError> ListServiceActionsOutcome;
      typedef Aws::Utils::Outcome<ListServiceActionsForProvisioningArtifactResult, ServiceCatalogError> ListServiceActionsForProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<ListStackInstancesForProvisionedProductResult, ServiceCatalogError> ListStackInstancesForProvisionedProductOutcome;
      typedef Aws::Utils::Outcome<ListTagOptionsResult, ServiceCatalogError> ListTagOptionsOutcome;
      typedef Aws::Utils::Outcome<ProvisionProductResult, ServiceCatalogError> ProvisionProductOutcome;
      typedef Aws::Utils::Outcome<RejectPortfolioShareResult, ServiceCatalogError> RejectPortfolioShareOutcome;
      typedef Aws::Utils::Outcome<ScanProvisionedProductsResult, ServiceCatalogError> ScanProvisionedProductsOutcome;
      typedef Aws::Utils::Outcome<SearchProductsResult, ServiceCatalogError> SearchProductsOutcome;
      typedef Aws::Utils::Outcome<SearchProductsAsAdminResult, ServiceCatalogError> SearchProductsAsAdminOutcome;
      typedef Aws::Utils::Outcome<SearchProvisionedProductsResult, ServiceCatalogError> SearchProvisionedProductsOutcome;
      typedef Aws::Utils::Outcome<TerminateProvisionedProductResult, ServiceCatalogError> TerminateProvisionedProductOutcome;
      typedef Aws::Utils::Outcome<UpdateConstraintResult, ServiceCatalogError> UpdateConstraintOutcome;
      typedef Aws::Utils::Outcome<UpdatePortfolioResult, ServiceCatalogError> UpdatePortfolioOutcome;
      typedef Aws::Utils::Outcome<UpdatePortfolioShareResult, ServiceCatalogError> UpdatePortfolioShareOutcome;
      typedef Aws::Utils::Outcome<UpdateProductResult, ServiceCatalogError> UpdateProductOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisionedProductResult, ServiceCatalogError> UpdateProvisionedProductOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisionedProductPropertiesResult, ServiceCatalogError> UpdateProvisionedProductPropertiesOutcome;
      typedef Aws::Utils::Outcome<UpdateProvisioningArtifactResult, ServiceCatalogError> UpdateProvisioningArtifactOutcome;
      typedef Aws::Utils::Outcome<UpdateServiceActionResult, ServiceCatalogError> UpdateServiceActionOutcome;
      typedef Aws::Utils::Outcome<UpdateTagOptionResult, ServiceCatalogError> UpdateTagOptionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AcceptPortfolioShareOutcome> AcceptPortfolioShareOutcomeCallable;
      typedef std::future<AssociateBudgetWithResourceOutcome> AssociateBudgetWithResourceOutcomeCallable;
      typedef std::future<AssociatePrincipalWithPortfolioOutcome> AssociatePrincipalWithPortfolioOutcomeCallable;
      typedef std::future<AssociateProductWithPortfolioOutcome> AssociateProductWithPortfolioOutcomeCallable;
      typedef std::future<AssociateServiceActionWithProvisioningArtifactOutcome> AssociateServiceActionWithProvisioningArtifactOutcomeCallable;
      typedef std::future<AssociateTagOptionWithResourceOutcome> AssociateTagOptionWithResourceOutcomeCallable;
      typedef std::future<BatchAssociateServiceActionWithProvisioningArtifactOutcome> BatchAssociateServiceActionWithProvisioningArtifactOutcomeCallable;
      typedef std::future<BatchDisassociateServiceActionFromProvisioningArtifactOutcome> BatchDisassociateServiceActionFromProvisioningArtifactOutcomeCallable;
      typedef std::future<CopyProductOutcome> CopyProductOutcomeCallable;
      typedef std::future<CreateConstraintOutcome> CreateConstraintOutcomeCallable;
      typedef std::future<CreatePortfolioOutcome> CreatePortfolioOutcomeCallable;
      typedef std::future<CreatePortfolioShareOutcome> CreatePortfolioShareOutcomeCallable;
      typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
      typedef std::future<CreateProvisionedProductPlanOutcome> CreateProvisionedProductPlanOutcomeCallable;
      typedef std::future<CreateProvisioningArtifactOutcome> CreateProvisioningArtifactOutcomeCallable;
      typedef std::future<CreateServiceActionOutcome> CreateServiceActionOutcomeCallable;
      typedef std::future<CreateTagOptionOutcome> CreateTagOptionOutcomeCallable;
      typedef std::future<DeleteConstraintOutcome> DeleteConstraintOutcomeCallable;
      typedef std::future<DeletePortfolioOutcome> DeletePortfolioOutcomeCallable;
      typedef std::future<DeletePortfolioShareOutcome> DeletePortfolioShareOutcomeCallable;
      typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
      typedef std::future<DeleteProvisionedProductPlanOutcome> DeleteProvisionedProductPlanOutcomeCallable;
      typedef std::future<DeleteProvisioningArtifactOutcome> DeleteProvisioningArtifactOutcomeCallable;
      typedef std::future<DeleteServiceActionOutcome> DeleteServiceActionOutcomeCallable;
      typedef std::future<DeleteTagOptionOutcome> DeleteTagOptionOutcomeCallable;
      typedef std::future<DescribeConstraintOutcome> DescribeConstraintOutcomeCallable;
      typedef std::future<DescribeCopyProductStatusOutcome> DescribeCopyProductStatusOutcomeCallable;
      typedef std::future<DescribePortfolioOutcome> DescribePortfolioOutcomeCallable;
      typedef std::future<DescribePortfolioShareStatusOutcome> DescribePortfolioShareStatusOutcomeCallable;
      typedef std::future<DescribePortfolioSharesOutcome> DescribePortfolioSharesOutcomeCallable;
      typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
      typedef std::future<DescribeProductAsAdminOutcome> DescribeProductAsAdminOutcomeCallable;
      typedef std::future<DescribeProductViewOutcome> DescribeProductViewOutcomeCallable;
      typedef std::future<DescribeProvisionedProductOutcome> DescribeProvisionedProductOutcomeCallable;
      typedef std::future<DescribeProvisionedProductPlanOutcome> DescribeProvisionedProductPlanOutcomeCallable;
      typedef std::future<DescribeProvisioningArtifactOutcome> DescribeProvisioningArtifactOutcomeCallable;
      typedef std::future<DescribeProvisioningParametersOutcome> DescribeProvisioningParametersOutcomeCallable;
      typedef std::future<DescribeRecordOutcome> DescribeRecordOutcomeCallable;
      typedef std::future<DescribeServiceActionOutcome> DescribeServiceActionOutcomeCallable;
      typedef std::future<DescribeServiceActionExecutionParametersOutcome> DescribeServiceActionExecutionParametersOutcomeCallable;
      typedef std::future<DescribeTagOptionOutcome> DescribeTagOptionOutcomeCallable;
      typedef std::future<DisableAWSOrganizationsAccessOutcome> DisableAWSOrganizationsAccessOutcomeCallable;
      typedef std::future<DisassociateBudgetFromResourceOutcome> DisassociateBudgetFromResourceOutcomeCallable;
      typedef std::future<DisassociatePrincipalFromPortfolioOutcome> DisassociatePrincipalFromPortfolioOutcomeCallable;
      typedef std::future<DisassociateProductFromPortfolioOutcome> DisassociateProductFromPortfolioOutcomeCallable;
      typedef std::future<DisassociateServiceActionFromProvisioningArtifactOutcome> DisassociateServiceActionFromProvisioningArtifactOutcomeCallable;
      typedef std::future<DisassociateTagOptionFromResourceOutcome> DisassociateTagOptionFromResourceOutcomeCallable;
      typedef std::future<EnableAWSOrganizationsAccessOutcome> EnableAWSOrganizationsAccessOutcomeCallable;
      typedef std::future<ExecuteProvisionedProductPlanOutcome> ExecuteProvisionedProductPlanOutcomeCallable;
      typedef std::future<ExecuteProvisionedProductServiceActionOutcome> ExecuteProvisionedProductServiceActionOutcomeCallable;
      typedef std::future<GetAWSOrganizationsAccessStatusOutcome> GetAWSOrganizationsAccessStatusOutcomeCallable;
      typedef std::future<GetProvisionedProductOutputsOutcome> GetProvisionedProductOutputsOutcomeCallable;
      typedef std::future<ImportAsProvisionedProductOutcome> ImportAsProvisionedProductOutcomeCallable;
      typedef std::future<ListAcceptedPortfolioSharesOutcome> ListAcceptedPortfolioSharesOutcomeCallable;
      typedef std::future<ListBudgetsForResourceOutcome> ListBudgetsForResourceOutcomeCallable;
      typedef std::future<ListConstraintsForPortfolioOutcome> ListConstraintsForPortfolioOutcomeCallable;
      typedef std::future<ListLaunchPathsOutcome> ListLaunchPathsOutcomeCallable;
      typedef std::future<ListOrganizationPortfolioAccessOutcome> ListOrganizationPortfolioAccessOutcomeCallable;
      typedef std::future<ListPortfolioAccessOutcome> ListPortfolioAccessOutcomeCallable;
      typedef std::future<ListPortfoliosOutcome> ListPortfoliosOutcomeCallable;
      typedef std::future<ListPortfoliosForProductOutcome> ListPortfoliosForProductOutcomeCallable;
      typedef std::future<ListPrincipalsForPortfolioOutcome> ListPrincipalsForPortfolioOutcomeCallable;
      typedef std::future<ListProvisionedProductPlansOutcome> ListProvisionedProductPlansOutcomeCallable;
      typedef std::future<ListProvisioningArtifactsOutcome> ListProvisioningArtifactsOutcomeCallable;
      typedef std::future<ListProvisioningArtifactsForServiceActionOutcome> ListProvisioningArtifactsForServiceActionOutcomeCallable;
      typedef std::future<ListRecordHistoryOutcome> ListRecordHistoryOutcomeCallable;
      typedef std::future<ListResourcesForTagOptionOutcome> ListResourcesForTagOptionOutcomeCallable;
      typedef std::future<ListServiceActionsOutcome> ListServiceActionsOutcomeCallable;
      typedef std::future<ListServiceActionsForProvisioningArtifactOutcome> ListServiceActionsForProvisioningArtifactOutcomeCallable;
      typedef std::future<ListStackInstancesForProvisionedProductOutcome> ListStackInstancesForProvisionedProductOutcomeCallable;
      typedef std::future<ListTagOptionsOutcome> ListTagOptionsOutcomeCallable;
      typedef std::future<ProvisionProductOutcome> ProvisionProductOutcomeCallable;
      typedef std::future<RejectPortfolioShareOutcome> RejectPortfolioShareOutcomeCallable;
      typedef std::future<ScanProvisionedProductsOutcome> ScanProvisionedProductsOutcomeCallable;
      typedef std::future<SearchProductsOutcome> SearchProductsOutcomeCallable;
      typedef std::future<SearchProductsAsAdminOutcome> SearchProductsAsAdminOutcomeCallable;
      typedef std::future<SearchProvisionedProductsOutcome> SearchProvisionedProductsOutcomeCallable;
      typedef std::future<TerminateProvisionedProductOutcome> TerminateProvisionedProductOutcomeCallable;
      typedef std::future<UpdateConstraintOutcome> UpdateConstraintOutcomeCallable;
      typedef std::future<UpdatePortfolioOutcome> UpdatePortfolioOutcomeCallable;
      typedef std::future<UpdatePortfolioShareOutcome> UpdatePortfolioShareOutcomeCallable;
      typedef std::future<UpdateProductOutcome> UpdateProductOutcomeCallable;
      typedef std::future<UpdateProvisionedProductOutcome> UpdateProvisionedProductOutcomeCallable;
      typedef std::future<UpdateProvisionedProductPropertiesOutcome> UpdateProvisionedProductPropertiesOutcomeCallable;
      typedef std::future<UpdateProvisioningArtifactOutcome> UpdateProvisioningArtifactOutcomeCallable;
      typedef std::future<UpdateServiceActionOutcome> UpdateServiceActionOutcomeCallable;
      typedef std::future<UpdateTagOptionOutcome> UpdateTagOptionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ServiceCatalogClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ServiceCatalogClient*, const Model::AcceptPortfolioShareRequest&, const Model::AcceptPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AcceptPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateBudgetWithResourceRequest&, const Model::AssociateBudgetWithResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateBudgetWithResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociatePrincipalWithPortfolioRequest&, const Model::AssociatePrincipalWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociatePrincipalWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateProductWithPortfolioRequest&, const Model::AssociateProductWithPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateProductWithPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateServiceActionWithProvisioningArtifactRequest&, const Model::AssociateServiceActionWithProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateServiceActionWithProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::AssociateTagOptionWithResourceRequest&, const Model::AssociateTagOptionWithResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateTagOptionWithResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::BatchAssociateServiceActionWithProvisioningArtifactRequest&, const Model::BatchAssociateServiceActionWithProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchAssociateServiceActionWithProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::BatchDisassociateServiceActionFromProvisioningArtifactRequest&, const Model::BatchDisassociateServiceActionFromProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchDisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CopyProductRequest&, const Model::CopyProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CopyProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateConstraintRequest&, const Model::CreateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioRequest&, const Model::CreatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreatePortfolioShareRequest&, const Model::CreatePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreatePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProductRequest&, const Model::CreateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisionedProductPlanRequest&, const Model::CreateProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateProvisioningArtifactRequest&, const Model::CreateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateServiceActionRequest&, const Model::CreateServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::CreateTagOptionRequest&, const Model::CreateTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteConstraintRequest&, const Model::DeleteConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioRequest&, const Model::DeletePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeletePortfolioShareRequest&, const Model::DeletePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeletePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProductRequest&, const Model::DeleteProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisionedProductPlanRequest&, const Model::DeleteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteProvisioningArtifactRequest&, const Model::DeleteProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteServiceActionRequest&, const Model::DeleteServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DeleteTagOptionRequest&, const Model::DeleteTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeConstraintRequest&, const Model::DescribeConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeCopyProductStatusRequest&, const Model::DescribeCopyProductStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeCopyProductStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioRequest&, const Model::DescribePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioShareStatusRequest&, const Model::DescribePortfolioShareStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioShareStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribePortfolioSharesRequest&, const Model::DescribePortfolioSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePortfolioSharesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductRequest&, const Model::DescribeProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductAsAdminRequest&, const Model::DescribeProductAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProductViewRequest&, const Model::DescribeProductViewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProductViewResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductRequest&, const Model::DescribeProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisionedProductPlanRequest&, const Model::DescribeProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningArtifactRequest&, const Model::DescribeProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeProvisioningParametersRequest&, const Model::DescribeProvisioningParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeProvisioningParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeRecordRequest&, const Model::DescribeRecordOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRecordResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeServiceActionRequest&, const Model::DescribeServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeServiceActionExecutionParametersRequest&, const Model::DescribeServiceActionExecutionParametersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceActionExecutionParametersResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DescribeTagOptionRequest&, const Model::DescribeTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisableAWSOrganizationsAccessRequest&, const Model::DisableAWSOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableAWSOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateBudgetFromResourceRequest&, const Model::DisassociateBudgetFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateBudgetFromResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociatePrincipalFromPortfolioRequest&, const Model::DisassociatePrincipalFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociatePrincipalFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateProductFromPortfolioRequest&, const Model::DisassociateProductFromPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateProductFromPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateServiceActionFromProvisioningArtifactRequest&, const Model::DisassociateServiceActionFromProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateServiceActionFromProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::DisassociateTagOptionFromResourceRequest&, const Model::DisassociateTagOptionFromResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateTagOptionFromResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::EnableAWSOrganizationsAccessRequest&, const Model::EnableAWSOrganizationsAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableAWSOrganizationsAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ExecuteProvisionedProductPlanRequest&, const Model::ExecuteProvisionedProductPlanOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteProvisionedProductPlanResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ExecuteProvisionedProductServiceActionRequest&, const Model::ExecuteProvisionedProductServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ExecuteProvisionedProductServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::GetAWSOrganizationsAccessStatusRequest&, const Model::GetAWSOrganizationsAccessStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetAWSOrganizationsAccessStatusResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::GetProvisionedProductOutputsRequest&, const Model::GetProvisionedProductOutputsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetProvisionedProductOutputsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ImportAsProvisionedProductRequest&, const Model::ImportAsProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportAsProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListAcceptedPortfolioSharesRequest&, const Model::ListAcceptedPortfolioSharesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAcceptedPortfolioSharesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListBudgetsForResourceRequest&, const Model::ListBudgetsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListBudgetsForResourceResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListConstraintsForPortfolioRequest&, const Model::ListConstraintsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListConstraintsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListLaunchPathsRequest&, const Model::ListLaunchPathsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListLaunchPathsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListOrganizationPortfolioAccessRequest&, const Model::ListOrganizationPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListOrganizationPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfolioAccessRequest&, const Model::ListPortfolioAccessOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfolioAccessResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosRequest&, const Model::ListPortfoliosOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPortfoliosForProductRequest&, const Model::ListPortfoliosForProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPortfoliosForProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListPrincipalsForPortfolioRequest&, const Model::ListPrincipalsForPortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPrincipalsForPortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisionedProductPlansRequest&, const Model::ListProvisionedProductPlansOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisionedProductPlansResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsRequest&, const Model::ListProvisioningArtifactsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListProvisioningArtifactsForServiceActionRequest&, const Model::ListProvisioningArtifactsForServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListProvisioningArtifactsForServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListRecordHistoryRequest&, const Model::ListRecordHistoryOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecordHistoryResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListResourcesForTagOptionRequest&, const Model::ListResourcesForTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListResourcesForTagOptionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListServiceActionsRequest&, const Model::ListServiceActionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceActionsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListServiceActionsForProvisioningArtifactRequest&, const Model::ListServiceActionsForProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListServiceActionsForProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListStackInstancesForProvisionedProductRequest&, const Model::ListStackInstancesForProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListStackInstancesForProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ListTagOptionsRequest&, const Model::ListTagOptionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagOptionsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ProvisionProductRequest&, const Model::ProvisionProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ProvisionProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::RejectPortfolioShareRequest&, const Model::RejectPortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RejectPortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::ScanProvisionedProductsRequest&, const Model::ScanProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ScanProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsRequest&, const Model::SearchProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProductsAsAdminRequest&, const Model::SearchProductsAsAdminOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProductsAsAdminResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::SearchProvisionedProductsRequest&, const Model::SearchProvisionedProductsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchProvisionedProductsResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::TerminateProvisionedProductRequest&, const Model::TerminateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TerminateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateConstraintRequest&, const Model::UpdateConstraintOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateConstraintResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdatePortfolioRequest&, const Model::UpdatePortfolioOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortfolioResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdatePortfolioShareRequest&, const Model::UpdatePortfolioShareOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdatePortfolioShareResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProductRequest&, const Model::UpdateProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductRequest&, const Model::UpdateProvisionedProductOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisionedProductPropertiesRequest&, const Model::UpdateProvisionedProductPropertiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisionedProductPropertiesResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateProvisioningArtifactRequest&, const Model::UpdateProvisioningArtifactOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateProvisioningArtifactResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateServiceActionRequest&, const Model::UpdateServiceActionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceActionResponseReceivedHandler;
    typedef std::function<void(const ServiceCatalogClient*, const Model::UpdateTagOptionRequest&, const Model::UpdateTagOptionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateTagOptionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ServiceCatalog
} // namespace Aws
