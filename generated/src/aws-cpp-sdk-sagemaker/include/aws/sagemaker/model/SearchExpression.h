/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/BooleanOperator.h>
#include <aws/sagemaker/model/Filter.h>
#include <aws/sagemaker/model/NestedFilters.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A multi-expression that searches for the specified resource or resources in a
   * search. All resource objects that satisfy the expression's condition are
   * included in the search results. You must specify at least one subexpression,
   * filter, or nested filter. A <code>SearchExpression</code> can contain up to
   * twenty elements.</p> <p>A <code>SearchExpression</code> contains the following
   * components:</p> <ul> <li> <p>A list of <code>Filter</code> objects. Each filter
   * defines a simple Boolean expression comprised of a resource property name,
   * Boolean operator, and value.</p> </li> <li> <p>A list of
   * <code>NestedFilter</code> objects. Each nested filter defines a list of Boolean
   * expressions using a list of resource properties. A nested filter is satisfied if
   * a single object in the list satisfies all Boolean expressions.</p> </li> <li>
   * <p>A list of <code>SearchExpression</code> objects. A search expression object
   * can be nested in a list of search expression objects.</p> </li> <li> <p>A
   * Boolean operator: <code>And</code> or <code>Or</code>.</p> </li> </ul><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/SearchExpression">AWS
   * API Reference</a></p>
   */
  class SearchExpression
  {
  public:
    AWS_SAGEMAKER_API SearchExpression() = default;
    AWS_SAGEMAKER_API SearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API SearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of filter objects.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    SearchExpression& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    SearchExpression& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of nested filter objects.</p>
     */
    inline const Aws::Vector<NestedFilters>& GetNestedFilters() const { return m_nestedFilters; }
    inline bool NestedFiltersHasBeenSet() const { return m_nestedFiltersHasBeenSet; }
    template<typename NestedFiltersT = Aws::Vector<NestedFilters>>
    void SetNestedFilters(NestedFiltersT&& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters = std::forward<NestedFiltersT>(value); }
    template<typename NestedFiltersT = Aws::Vector<NestedFilters>>
    SearchExpression& WithNestedFilters(NestedFiltersT&& value) { SetNestedFilters(std::forward<NestedFiltersT>(value)); return *this;}
    template<typename NestedFiltersT = NestedFilters>
    SearchExpression& AddNestedFilters(NestedFiltersT&& value) { m_nestedFiltersHasBeenSet = true; m_nestedFilters.emplace_back(std::forward<NestedFiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of search expression objects.</p>
     */
    inline const Aws::Vector<SearchExpression>& GetSubExpressions() const { return m_subExpressions; }
    inline bool SubExpressionsHasBeenSet() const { return m_subExpressionsHasBeenSet; }
    template<typename SubExpressionsT = Aws::Vector<SearchExpression>>
    void SetSubExpressions(SubExpressionsT&& value) { m_subExpressionsHasBeenSet = true; m_subExpressions = std::forward<SubExpressionsT>(value); }
    template<typename SubExpressionsT = Aws::Vector<SearchExpression>>
    SearchExpression& WithSubExpressions(SubExpressionsT&& value) { SetSubExpressions(std::forward<SubExpressionsT>(value)); return *this;}
    template<typename SubExpressionsT = SearchExpression>
    SearchExpression& AddSubExpressions(SubExpressionsT&& value) { m_subExpressionsHasBeenSet = true; m_subExpressions.emplace_back(std::forward<SubExpressionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A Boolean operator used to evaluate the search expression. If you want every
     * conditional statement in all lists to be satisfied for the entire search
     * expression to be true, specify <code>And</code>. If only a single conditional
     * statement needs to be true for the entire search expression to be true, specify
     * <code>Or</code>. The default value is <code>And</code>.</p>
     */
    inline BooleanOperator GetOperator() const { return m_operator; }
    inline bool OperatorHasBeenSet() const { return m_operatorHasBeenSet; }
    inline void SetOperator(BooleanOperator value) { m_operatorHasBeenSet = true; m_operator = value; }
    inline SearchExpression& WithOperator(BooleanOperator value) { SetOperator(value); return *this;}
    ///@}
  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<NestedFilters> m_nestedFilters;
    bool m_nestedFiltersHasBeenSet = false;

    Aws::Vector<SearchExpression> m_subExpressions;
    bool m_subExpressionsHasBeenSet = false;

    BooleanOperator m_operator{BooleanOperator::NOT_SET};
    bool m_operatorHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
