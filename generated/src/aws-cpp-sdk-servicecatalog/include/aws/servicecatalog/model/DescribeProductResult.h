/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifact.h>
#include <aws/servicecatalog/model/BudgetDetail.h>
#include <aws/servicecatalog/model/LaunchPath.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{
  class DescribeProductResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductResult() = default;
    AWS_SERVICECATALOG_API DescribeProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const { return m_productViewSummary; }
    template<typename ProductViewSummaryT = ProductViewSummary>
    void SetProductViewSummary(ProductViewSummaryT&& value) { m_productViewSummaryHasBeenSet = true; m_productViewSummary = std::forward<ProductViewSummaryT>(value); }
    template<typename ProductViewSummaryT = ProductViewSummary>
    DescribeProductResult& WithProductViewSummary(ProductViewSummaryT&& value) { SetProductViewSummary(std::forward<ProductViewSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifact>& GetProvisioningArtifacts() const { return m_provisioningArtifacts; }
    template<typename ProvisioningArtifactsT = Aws::Vector<ProvisioningArtifact>>
    void SetProvisioningArtifacts(ProvisioningArtifactsT&& value) { m_provisioningArtifactsHasBeenSet = true; m_provisioningArtifacts = std::forward<ProvisioningArtifactsT>(value); }
    template<typename ProvisioningArtifactsT = Aws::Vector<ProvisioningArtifact>>
    DescribeProductResult& WithProvisioningArtifacts(ProvisioningArtifactsT&& value) { SetProvisioningArtifacts(std::forward<ProvisioningArtifactsT>(value)); return *this;}
    template<typename ProvisioningArtifactsT = ProvisioningArtifact>
    DescribeProductResult& AddProvisioningArtifacts(ProvisioningArtifactsT&& value) { m_provisioningArtifactsHasBeenSet = true; m_provisioningArtifacts.emplace_back(std::forward<ProvisioningArtifactsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const { return m_budgets; }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    void SetBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets = std::forward<BudgetsT>(value); }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    DescribeProductResult& WithBudgets(BudgetsT&& value) { SetBudgets(std::forward<BudgetsT>(value)); return *this;}
    template<typename BudgetsT = BudgetDetail>
    DescribeProductResult& AddBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets.emplace_back(std::forward<BudgetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline const Aws::Vector<LaunchPath>& GetLaunchPaths() const { return m_launchPaths; }
    template<typename LaunchPathsT = Aws::Vector<LaunchPath>>
    void SetLaunchPaths(LaunchPathsT&& value) { m_launchPathsHasBeenSet = true; m_launchPaths = std::forward<LaunchPathsT>(value); }
    template<typename LaunchPathsT = Aws::Vector<LaunchPath>>
    DescribeProductResult& WithLaunchPaths(LaunchPathsT&& value) { SetLaunchPaths(std::forward<LaunchPathsT>(value)); return *this;}
    template<typename LaunchPathsT = LaunchPath>
    DescribeProductResult& AddLaunchPaths(LaunchPathsT&& value) { m_launchPathsHasBeenSet = true; m_launchPaths.emplace_back(std::forward<LaunchPathsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProductViewSummary m_productViewSummary;
    bool m_productViewSummaryHasBeenSet = false;

    Aws::Vector<ProvisioningArtifact> m_provisioningArtifacts;
    bool m_provisioningArtifactsHasBeenSet = false;

    Aws::Vector<BudgetDetail> m_budgets;
    bool m_budgetsHasBeenSet = false;

    Aws::Vector<LaunchPath> m_launchPaths;
    bool m_launchPathsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
