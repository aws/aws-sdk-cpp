/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewSummary.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
    AWS_SERVICECATALOG_API DescribeProductResult();
    AWS_SERVICECATALOG_API DescribeProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Summary information about the product view.</p>
     */
    inline const ProductViewSummary& GetProductViewSummary() const{ return m_productViewSummary; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(const ProductViewSummary& value) { m_productViewSummary = value; }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline void SetProductViewSummary(ProductViewSummary&& value) { m_productViewSummary = std::move(value); }

    /**
     * <p>Summary information about the product view.</p>
     */
    inline DescribeProductResult& WithProductViewSummary(const ProductViewSummary& value) { SetProductViewSummary(value); return *this;}

    /**
     * <p>Summary information about the product view.</p>
     */
    inline DescribeProductResult& WithProductViewSummary(ProductViewSummary&& value) { SetProductViewSummary(std::move(value)); return *this;}


    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifact>& GetProvisioningArtifacts() const{ return m_provisioningArtifacts; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline void SetProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { m_provisioningArtifacts = value; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline void SetProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { m_provisioningArtifacts = std::move(value); }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& WithProvisioningArtifacts(const Aws::Vector<ProvisioningArtifact>& value) { SetProvisioningArtifacts(value); return *this;}

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& WithProvisioningArtifacts(Aws::Vector<ProvisioningArtifact>&& value) { SetProvisioningArtifacts(std::move(value)); return *this;}

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& AddProvisioningArtifacts(const ProvisioningArtifact& value) { m_provisioningArtifacts.push_back(value); return *this; }

    /**
     * <p>Information about the provisioning artifacts for the specified product.</p>
     */
    inline DescribeProductResult& AddProvisioningArtifacts(ProvisioningArtifact&& value) { m_provisioningArtifacts.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const{ return m_budgets; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(const Aws::Vector<BudgetDetail>& value) { m_budgets = value; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline void SetBudgets(Aws::Vector<BudgetDetail>&& value) { m_budgets = std::move(value); }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& WithBudgets(const Aws::Vector<BudgetDetail>& value) { SetBudgets(value); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& WithBudgets(Aws::Vector<BudgetDetail>&& value) { SetBudgets(std::move(value)); return *this;}

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& AddBudgets(const BudgetDetail& value) { m_budgets.push_back(value); return *this; }

    /**
     * <p>Information about the associated budgets.</p>
     */
    inline DescribeProductResult& AddBudgets(BudgetDetail&& value) { m_budgets.push_back(std::move(value)); return *this; }


    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline const Aws::Vector<LaunchPath>& GetLaunchPaths() const{ return m_launchPaths; }

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline void SetLaunchPaths(const Aws::Vector<LaunchPath>& value) { m_launchPaths = value; }

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline void SetLaunchPaths(Aws::Vector<LaunchPath>&& value) { m_launchPaths = std::move(value); }

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline DescribeProductResult& WithLaunchPaths(const Aws::Vector<LaunchPath>& value) { SetLaunchPaths(value); return *this;}

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline DescribeProductResult& WithLaunchPaths(Aws::Vector<LaunchPath>&& value) { SetLaunchPaths(std::move(value)); return *this;}

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline DescribeProductResult& AddLaunchPaths(const LaunchPath& value) { m_launchPaths.push_back(value); return *this; }

    /**
     * <p>Information about the associated launch paths.</p>
     */
    inline DescribeProductResult& AddLaunchPaths(LaunchPath&& value) { m_launchPaths.push_back(std::move(value)); return *this; }

  private:

    ProductViewSummary m_productViewSummary;

    Aws::Vector<ProvisioningArtifact> m_provisioningArtifacts;

    Aws::Vector<BudgetDetail> m_budgets;

    Aws::Vector<LaunchPath> m_launchPaths;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
