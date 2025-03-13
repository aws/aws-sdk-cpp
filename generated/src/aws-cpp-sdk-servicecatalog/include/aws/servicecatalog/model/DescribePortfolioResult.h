/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/PortfolioDetail.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribePortfolioResult
  {
  public:
    AWS_SERVICECATALOG_API DescribePortfolioResult() = default;
    AWS_SERVICECATALOG_API DescribePortfolioResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SERVICECATALOG_API DescribePortfolioResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the portfolio.</p>
     */
    inline const PortfolioDetail& GetPortfolioDetail() const { return m_portfolioDetail; }
    template<typename PortfolioDetailT = PortfolioDetail>
    void SetPortfolioDetail(PortfolioDetailT&& value) { m_portfolioDetailHasBeenSet = true; m_portfolioDetail = std::forward<PortfolioDetailT>(value); }
    template<typename PortfolioDetailT = PortfolioDetail>
    DescribePortfolioResult& WithPortfolioDetail(PortfolioDetailT&& value) { SetPortfolioDetail(std::forward<PortfolioDetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the tags associated with the portfolio.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    DescribePortfolioResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    DescribePortfolioResult& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the TagOptions associated with the portfolio.</p>
     */
    inline const Aws::Vector<TagOptionDetail>& GetTagOptions() const { return m_tagOptions; }
    template<typename TagOptionsT = Aws::Vector<TagOptionDetail>>
    void SetTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions = std::forward<TagOptionsT>(value); }
    template<typename TagOptionsT = Aws::Vector<TagOptionDetail>>
    DescribePortfolioResult& WithTagOptions(TagOptionsT&& value) { SetTagOptions(std::forward<TagOptionsT>(value)); return *this;}
    template<typename TagOptionsT = TagOptionDetail>
    DescribePortfolioResult& AddTagOptions(TagOptionsT&& value) { m_tagOptionsHasBeenSet = true; m_tagOptions.emplace_back(std::forward<TagOptionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the associated budgets.</p>
     */
    inline const Aws::Vector<BudgetDetail>& GetBudgets() const { return m_budgets; }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    void SetBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets = std::forward<BudgetsT>(value); }
    template<typename BudgetsT = Aws::Vector<BudgetDetail>>
    DescribePortfolioResult& WithBudgets(BudgetsT&& value) { SetBudgets(std::forward<BudgetsT>(value)); return *this;}
    template<typename BudgetsT = BudgetDetail>
    DescribePortfolioResult& AddBudgets(BudgetsT&& value) { m_budgetsHasBeenSet = true; m_budgets.emplace_back(std::forward<BudgetsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePortfolioResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    PortfolioDetail m_portfolioDetail;
    bool m_portfolioDetailHasBeenSet = false;

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
