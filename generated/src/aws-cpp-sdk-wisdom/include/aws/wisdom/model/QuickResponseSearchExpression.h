/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wisdom/model/QuickResponseOrderField.h>
#include <aws/wisdom/model/QuickResponseFilterField.h>
#include <aws/wisdom/model/QuickResponseQueryField.h>
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
namespace ConnectWisdomService
{
namespace Model
{

  /**
   * <p>Information about the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wisdom-2020-10-19/QuickResponseSearchExpression">AWS
   * API Reference</a></p>
   */
  class QuickResponseSearchExpression
  {
  public:
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchExpression() = default;
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API QuickResponseSearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTWISDOMSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering rules applied to quick response query
     * results.</p>
     */
    inline const Aws::Vector<QuickResponseFilterField>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<QuickResponseFilterField>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<QuickResponseFilterField>>
    QuickResponseSearchExpression& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = QuickResponseFilterField>
    QuickResponseSearchExpression& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The quick response attribute fields on which the query results are
     * ordered.</p>
     */
    inline const QuickResponseOrderField& GetOrderOnField() const { return m_orderOnField; }
    inline bool OrderOnFieldHasBeenSet() const { return m_orderOnFieldHasBeenSet; }
    template<typename OrderOnFieldT = QuickResponseOrderField>
    void SetOrderOnField(OrderOnFieldT&& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = std::forward<OrderOnFieldT>(value); }
    template<typename OrderOnFieldT = QuickResponseOrderField>
    QuickResponseSearchExpression& WithOrderOnField(OrderOnFieldT&& value) { SetOrderOnField(std::forward<OrderOnFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quick response query expressions.</p>
     */
    inline const Aws::Vector<QuickResponseQueryField>& GetQueries() const { return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    template<typename QueriesT = Aws::Vector<QuickResponseQueryField>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<QuickResponseQueryField>>
    QuickResponseSearchExpression& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = QuickResponseQueryField>
    QuickResponseSearchExpression& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<QuickResponseFilterField> m_filters;
    bool m_filtersHasBeenSet = false;

    QuickResponseOrderField m_orderOnField;
    bool m_orderOnFieldHasBeenSet = false;

    Aws::Vector<QuickResponseQueryField> m_queries;
    bool m_queriesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
