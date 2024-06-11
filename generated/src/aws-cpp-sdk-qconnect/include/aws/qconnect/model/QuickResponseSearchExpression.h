/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QuickResponseOrderField.h>
#include <aws/qconnect/model/QuickResponseFilterField.h>
#include <aws/qconnect/model/QuickResponseQueryField.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>Information about the import job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QuickResponseSearchExpression">AWS
   * API Reference</a></p>
   */
  class QuickResponseSearchExpression
  {
  public:
    AWS_QCONNECT_API QuickResponseSearchExpression();
    AWS_QCONNECT_API QuickResponseSearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QuickResponseSearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering rules applied to quick response query
     * results.</p>
     */
    inline const Aws::Vector<QuickResponseFilterField>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<QuickResponseFilterField>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<QuickResponseFilterField>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline QuickResponseSearchExpression& WithFilters(const Aws::Vector<QuickResponseFilterField>& value) { SetFilters(value); return *this;}
    inline QuickResponseSearchExpression& WithFilters(Aws::Vector<QuickResponseFilterField>&& value) { SetFilters(std::move(value)); return *this;}
    inline QuickResponseSearchExpression& AddFilters(const QuickResponseFilterField& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline QuickResponseSearchExpression& AddFilters(QuickResponseFilterField&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The quick response attribute fields on which the query results are
     * ordered.</p>
     */
    inline const QuickResponseOrderField& GetOrderOnField() const{ return m_orderOnField; }
    inline bool OrderOnFieldHasBeenSet() const { return m_orderOnFieldHasBeenSet; }
    inline void SetOrderOnField(const QuickResponseOrderField& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = value; }
    inline void SetOrderOnField(QuickResponseOrderField&& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = std::move(value); }
    inline QuickResponseSearchExpression& WithOrderOnField(const QuickResponseOrderField& value) { SetOrderOnField(value); return *this;}
    inline QuickResponseSearchExpression& WithOrderOnField(QuickResponseOrderField&& value) { SetOrderOnField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quick response query expressions.</p>
     */
    inline const Aws::Vector<QuickResponseQueryField>& GetQueries() const{ return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    inline void SetQueries(const Aws::Vector<QuickResponseQueryField>& value) { m_queriesHasBeenSet = true; m_queries = value; }
    inline void SetQueries(Aws::Vector<QuickResponseQueryField>&& value) { m_queriesHasBeenSet = true; m_queries = std::move(value); }
    inline QuickResponseSearchExpression& WithQueries(const Aws::Vector<QuickResponseQueryField>& value) { SetQueries(value); return *this;}
    inline QuickResponseSearchExpression& WithQueries(Aws::Vector<QuickResponseQueryField>&& value) { SetQueries(std::move(value)); return *this;}
    inline QuickResponseSearchExpression& AddQueries(const QuickResponseQueryField& value) { m_queriesHasBeenSet = true; m_queries.push_back(value); return *this; }
    inline QuickResponseSearchExpression& AddQueries(QuickResponseQueryField&& value) { m_queriesHasBeenSet = true; m_queries.push_back(std::move(value)); return *this; }
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
} // namespace QConnect
} // namespace Aws
