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
   * <p>Represents other entities related to the AWS opportunity, such as AWS
   * products, partner solutions, and marketplace offers. These associations help
   * build a complete picture of the solution being sold.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/AwsOpportunityRelatedEntities">AWS
   * API Reference</a></p>
   */
  class AwsOpportunityRelatedEntities
  {
  public:
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityRelatedEntities() = default;
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityRelatedEntities(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API AwsOpportunityRelatedEntities& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PARTNERCENTRALSELLING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the AWS products associated with the opportunity. This field helps
     * track the specific products that are part of the proposed solution.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAwsProducts() const { return m_awsProducts; }
    inline bool AwsProductsHasBeenSet() const { return m_awsProductsHasBeenSet; }
    template<typename AwsProductsT = Aws::Vector<Aws::String>>
    void SetAwsProducts(AwsProductsT&& value) { m_awsProductsHasBeenSet = true; m_awsProducts = std::forward<AwsProductsT>(value); }
    template<typename AwsProductsT = Aws::Vector<Aws::String>>
    AwsOpportunityRelatedEntities& WithAwsProducts(AwsProductsT&& value) { SetAwsProducts(std::forward<AwsProductsT>(value)); return *this;}
    template<typename AwsProductsT = Aws::String>
    AwsOpportunityRelatedEntities& AddAwsProducts(AwsProductsT&& value) { m_awsProductsHasBeenSet = true; m_awsProducts.emplace_back(std::forward<AwsProductsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the partner solutions related to the opportunity. These solutions
     * represent the partner's offerings that are being positioned as part of the
     * overall AWS opportunity.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSolutions() const { return m_solutions; }
    inline bool SolutionsHasBeenSet() const { return m_solutionsHasBeenSet; }
    template<typename SolutionsT = Aws::Vector<Aws::String>>
    void SetSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions = std::forward<SolutionsT>(value); }
    template<typename SolutionsT = Aws::Vector<Aws::String>>
    AwsOpportunityRelatedEntities& WithSolutions(SolutionsT&& value) { SetSolutions(std::forward<SolutionsT>(value)); return *this;}
    template<typename SolutionsT = Aws::String>
    AwsOpportunityRelatedEntities& AddSolutions(SolutionsT&& value) { m_solutionsHasBeenSet = true; m_solutions.emplace_back(std::forward<SolutionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_awsProducts;
    bool m_awsProductsHasBeenSet = false;

    Aws::Vector<Aws::String> m_solutions;
    bool m_solutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PartnerCentralSelling
} // namespace Aws
