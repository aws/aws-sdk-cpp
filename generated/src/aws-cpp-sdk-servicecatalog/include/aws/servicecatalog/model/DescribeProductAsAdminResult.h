/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/ProductViewDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ProvisioningArtifactSummary.h>
#include <aws/servicecatalog/model/Tag.h>
#include <aws/servicecatalog/model/TagOptionDetail.h>
#include <aws/servicecatalog/model/BudgetDetail.h>
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
  class DescribeProductAsAdminResult
  {
  public:
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult() = default;
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribeProductAsAdminResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the product view.</p>
     */
    inline const ProductViewDetail& GetProductViewDetail() const { return m_productViewDetail; }
    template<typename ProductViewDetailT = ProductViewDetail>
    void SetProductViewDetail(ProductViewDetailT&& value) { m_productViewDetailHasBeenSet = true; m_productViewDetail = std::forward<ProductViewDetailT>(value); }
    template<typename ProductViewDetailT = ProductViewDetail>
    DescribeProductAsAdminResult& WithProductViewDetail(ProductViewDetailT&& value) { SetProductViewDetail(std::forward<ProductViewDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the provisioning artifacts (also known as versions) for the
     * specified product.</p>
     */
    inline const Aws::Vector<ProvisioningArtifactSummary>& GetProvisioningArtifactSummaries() const { return m_provisioningArtifactSummaries; }
    template<typename ProvisioningArtifactSummariesT = Aws::Vector<ProvisioningArtifactSummary>>
    void SetProvisioningArtifactSummaries(ProvisioningArtifactSummariesT&& value) { m_provisioningArtifactSummariesHasBeenSet = true; m_provisioningArtifactSummaries = std::forward<ProvisioningArtifactSummariesT>(value); }
    template<typename ProvisioningArtifactSummariesT = Aws::Vector<ProvisioningArtifactSummary>>
    DescribeProductAsAdminResult& WithProvisioningArtifactSummaries(ProvisioningArtifactSummariesT&& value) { SetProvisioningArtifactSummaries(std::forward<ProvisioningArtifactSummariesT>(value)); return *this;}
    template<typename ProvisioningArtifactSummariesT = ProvisioningArtifactSummary>
    DescribeProductAsAdminResult& AddProvisioningArtifactSummaries(ProvisioningArtifactSummariesT&& value) { m_provisioningArtifactSummariesHasBeenSet = true; m_provisioningArtifactSummaries.emplace_back(std::forward<ProvisioningArtifactSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the product.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribeProductAsAdminResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribeProductAsAdminResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the product.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptions() const { return m_tagOptions; }
    template<typename TagOptionsT = Aws::Vector<TagOptionDetail>>
    void SetTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions = std::forward<TagOptionsT>(value); }
    template<typename TagOptionsT = Aws::Vector<TagOptionDetail>>
    DescribeProductAsAdminResult& WithTagOptions(TagOptionsT&& value) { SetTagOptions(std::forward<TagOptionsT>(value)); return *this;}
    template<typename TagOptionsT = TagOptionDetail>
    DescribeProductAsAdminResult& AddTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions.emplace_back(std::forward<TagOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const { return m_budgets; }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    void SetBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets = std::forward<BudgetsT>(value); }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    DescribeProductAsAdminResult& WithBudgets(BudgetsT&& value) { SetBudgets(std::forward<BudgetsT>(value)); return *this;}
    template<typename BudgetsT = BudgetDetail>
    DescribeProductAsAdminResult& AddBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets.emplace_back(std::forward<BudgetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeProductAsAdminResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ProductViewDetail m_productViewDetail;
    bool m_productViewDetailHasBeenSet = false;

    Aws::Vector<ProvisioningArtifactSummary> m_provisioningArtifactSummaries;
    bool m_provisioningArtifactSummariesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<TagOptionDetail> m_tagOptions;
    bool m_tagOptionsHasBeenSet = false;

    Aws::Vector<BudgetDetail> m_budgets;
    bool m_budgetsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
