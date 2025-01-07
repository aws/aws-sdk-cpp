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
    AWS_PARTNERCENTRALSELLING_API RelatedEntityIdentifiers();
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
    inline const Aws::Vector<Aws::String>& GetAwsMarketplaceOffers() const{ return m_awsMarketplaceOffers; }
    inline bool AwsMarketplaceOffersHasBeenSet() const { return m_awsMarketplaceOffersHasBeenSet; }
    inline void SetAwsMarketplaceOffers(const Aws::Vector<Aws::String>& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers = value; }
    inline void SetAwsMarketplaceOffers(Aws::Vector<Aws::String>&& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers = std::move(value); }
    inline RelatedEntityIdentifiers& WithAwsMarketplaceOffers(const Aws::Vector<Aws::String>& value) { SetAwsMarketplaceOffers(value); return *this;}
    inline RelatedEntityIdentifiers& WithAwsMarketplaceOffers(Aws::Vector<Aws::String>&& value) { SetAwsMarketplaceOffers(std::move(value)); return *this;}
    inline RelatedEntityIdentifiers& AddAwsMarketplaceOffers(const Aws::String& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers.push_back(value); return *this; }
    inline RelatedEntityIdentifiers& AddAwsMarketplaceOffers(Aws::String&& value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers.push_back(std::move(value)); return *this; }
    inline RelatedEntityIdentifiers& AddAwsMarketplaceOffers(const char* value) { m_awsMarketplaceOffersHasBeenSet = true; m_awsMarketplaceOffers.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetAwsProducts() const{ return m_awsProducts; }
    inline bool AwsProductsHasBeenSet() const { return m_awsProductsHasBeenSet; }
    inline void SetAwsProducts(const Aws::Vector<Aws::String>& value) { m_awsProductsHasBeenSet = true; m_awsProducts = value; }
    inline void SetAwsProducts(Aws::Vector<Aws::String>&& value) { m_awsProductsHasBeenSet = true; m_awsProducts = std::move(value); }
    inline RelatedEntityIdentifiers& WithAwsProducts(const Aws::Vector<Aws::String>& value) { SetAwsProducts(value); return *this;}
    inline RelatedEntityIdentifiers& WithAwsProducts(Aws::Vector<Aws::String>&& value) { SetAwsProducts(std::move(value)); return *this;}
    inline RelatedEntityIdentifiers& AddAwsProducts(const Aws::String& value) { m_awsProductsHasBeenSet = true; m_awsProducts.push_back(value); return *this; }
    inline RelatedEntityIdentifiers& AddAwsProducts(Aws::String&& value) { m_awsProductsHasBeenSet = true; m_awsProducts.push_back(std::move(value)); return *this; }
    inline RelatedEntityIdentifiers& AddAwsProducts(const char* value) { m_awsProductsHasBeenSet = true; m_awsProducts.push_back(value); return *this; }
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
    inline const Aws::Vector<Aws::String>& GetSolutions() const{ return m_solutions; }
    inline bool SolutionsHasBeenSet() const { return m_solutionsHasBeenSet; }
    inline void SetSolutions(const Aws::Vector<Aws::String>& value) { m_solutionsHasBeenSet = true; m_solutions = value; }
    inline void SetSolutions(Aws::Vector<Aws::String>&& value) { m_solutionsHasBeenSet = true; m_solutions = std::move(value); }
    inline RelatedEntityIdentifiers& WithSolutions(const Aws::Vector<Aws::String>& value) { SetSolutions(value); return *this;}
    inline RelatedEntityIdentifiers& WithSolutions(Aws::Vector<Aws::String>&& value) { SetSolutions(std::move(value)); return *this;}
    inline RelatedEntityIdentifiers& AddSolutions(const Aws::String& value) { m_solutionsHasBeenSet = true; m_solutions.push_back(value); return *this; }
    inline RelatedEntityIdentifiers& AddSolutions(Aws::String&& value) { m_solutionsHasBeenSet = true; m_solutions.push_back(std::move(value)); return *this; }
    inline RelatedEntityIdentifiers& AddSolutions(const char* value) { m_solutionsHasBeenSet = true; m_solutions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_awsMarketplaceOffers;
    bool m_awsMarketplaceOffersHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsProducts;
    bool m_awsProductsHasBeenSet = false;

    Aws::Vector<Aws::String> m_solutions;
    bool m_solutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
