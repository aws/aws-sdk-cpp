/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace PartnerCentralSelling
{
namespace Model
{

  /**
   * <p>This field provides the associations' information for other entities with the
   * opportunity. These entities include identifiers for <code>AWSProducts</code>,
   * <code>Partner Solutions</code>, and
   * <code>AWSMarketplaceOffers</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/RelatedEntityIdentifiers">AWS
   * API Reference</a></p>
   */
  class RelatedEntityIdentifiers
  {
  public:
    AWS_PARTNERCENTRALSELLING_API RelatedEntityIdentifiers() = default;
    AWS_PARTNERCENTRALSELLING_API RelatedEntityIdentifiers(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API RelatedEntityIdentifiers& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Takes one value per opportunity. Each value is an Amazon Resource Name (ARN),
     * in this format: <code>"offers":
     * ["arn:aws:aws-marketplace:us-east-1:999999999999:AWSMarketplace/Offer/offer-sampleOffer32"]</code>.</p>
     * <p>Use the <a
     * href="https://docs.aws.amazon.com/marketplace-catalog/latest/api-reference/API_ListEntities.html">ListEntities</a>
     * action in the Marketplace Catalog APIs for a list of offers in the associated
     * Marketplace seller account.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsMarketplaceOffers() const { return m_awsMarketplaceOffers; }
    inline bool AwsMarketplaceOffersHasBeenSet() const { return m_awsMarketplaceOffersHasBeenSet; }
    template<typename AwsMarketplaceOffersT = Aws::Vector<Aws::String>>
    void SetAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers = std::forward<AwsMarketplaceOffersT>(value); }
    template<typename AwsMarketplaceOffersT = Aws::Vector<Aws::String>>
    RelatedEntityIdentifiers& WithAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) { SetAwsMarketplaceOffers(std::forward<AwsMarketplaceOffersT>(value)); return *this;}
    template<typename AwsMarketplaceOffersT = Aws::String>
    RelatedEntityIdentifiers& AddAwsMarketplaceOffers(AwsMarketplaceOffersT&& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers.emplace_back(std::forward<AwsMarketplaceOffersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables partner solutions or offerings' association with an opportunity. To
     * associate a solution, provide the solution's unique identifier, which you can
     * obtain with the <code>ListSolutions</code> operation.</p> <p>If the specific
     * solution identifier is not available, you can use the value <code>Other</code>
     * and provide details about the solution in the <code>otherSolutionOffered</code>
     * field. But when the opportunity reaches the <code>Committed</code> stage or
     * beyond, the <code>Other</code> value cannot be used, and a valid solution
     * identifier must be provided.</p> <p>By associating the relevant solutions with
     * the opportunity, you can communicate the offerings that are being considered or
     * implemented to address the customer's business problem.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSolutions() const { return m_solutions; }
    inline bool SolutionsHasBeenSet() const { return m_solutionsHasBeenSet; }
    template<typename SolutionsT = Aws::Vector<Aws::String>>
    void SetSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions = std::forward<SolutionsT>(value); }
    template<typename SolutionsT = Aws::Vector<Aws::String>>
    RelatedEntityIdentifiers& WithSolutions(SolutionsT&& value) { SetSolutions(std::forward<SolutionsT>(value)); return *this;}
    template<typename SolutionsT = Aws::String>
    RelatedEntityIdentifiers& AddSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions.emplace_back(std::forward<SolutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enables the association of specific Amazon Web Services products with the
     * <code>Opportunity</code>. Partners can indicate the relevant Amazon Web Services
     * products for the <code>Opportunity</code>'s solution and align with the
     * customer's needs. Returns multiple values separated by commas. For example,
     * <code>"AWSProducts" : ["AmazonRedshift", "AWSAppFabric",
     * "AWSCleanRooms"]</code>.</p> <p>Use the file with the list of Amazon Web
     * Services products hosted on GitHub: <a
     * href="https://github.com/aws-samples/partner-crm-integration-samples/blob/main/resources/aws_products.json">
     * Amazon Web Services products</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsProducts() const { return m_awsProducts; }
    inline bool AwsProductsHasBeenSet() const { return m_awsProductsHasBeenSet; }
    template<typename AwsProductsT = Aws::Vector<Aws::String>>
    void SetAwsProducts(AwsProductsT&& value) { m_awsProductsHasBeenSet = true; m_awsProducts = std::forward<AwsProductsT>(value); }
    template<typename AwsProductsT = Aws::Vector<Aws::String>>
    RelatedEntityIdentifiers& WithAwsProducts(AwsProductsT&& value) { SetAwsProducts(std::forward<AwsProductsT>(value)); return *this;}
    template<typename AwsProductsT = Aws::String>
    RelatedEntityIdentifiers& AddAwsProducts(AwsProductsT&& value) { m_awsProductsHasBeenSet = true; m_awsProducts.emplace_back(std::forward<AwsProductsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_awsMarketplaceOffers;
    bool m_awsMarketplaceOffersHasBeenSet = false;

    Aws::Vector<Aws::String> m_solutions;
    bool m_solutionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsProducts;
    bool m_awsProductsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
