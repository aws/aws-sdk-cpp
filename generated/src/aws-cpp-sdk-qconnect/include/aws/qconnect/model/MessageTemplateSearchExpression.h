﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/MessageTemplateOrderField.h>
#include <aws/qconnect/model/MessageTemplateFilterField.h>
#include <aws/qconnect/model/MessageTemplateQueryField.h>
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
   * <p>The search expression of the message template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageTemplateSearchExpression">AWS
   * API Reference</a></p>
   */
  class MessageTemplateSearchExpression
  {
  public:
    AWS_QCONNECT_API MessageTemplateSearchExpression() = default;
    AWS_QCONNECT_API MessageTemplateSearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateSearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering rules applied to message template query
     * results.</p>
     */
    inline const Aws::Vector<MessageTemplateFilterField>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<MessageTemplateFilterField>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<MessageTemplateFilterField>>
    MessageTemplateSearchExpression& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = MessageTemplateFilterField>
    MessageTemplateSearchExpression& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message template attribute fields on which the query results are
     * ordered.</p>
     */
    inline const MessageTemplateOrderField& GetOrderOnField() const { return m_orderOnField; }
    inline bool OrderOnFieldHasBeenSet() const { return m_orderOnFieldHasBeenSet; }
    template<typename OrderOnFieldT = MessageTemplateOrderField>
    void SetOrderOnField(OrderOnFieldT&& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = std::forward<OrderOnFieldT>(value); }
    template<typename OrderOnFieldT = MessageTemplateOrderField>
    MessageTemplateSearchExpression& WithOrderOnField(OrderOnFieldT&& value) { SetOrderOnField(std::forward<OrderOnFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template query expressions.</p>
     */
    inline const Aws::Vector<MessageTemplateQueryField>& GetQueries() const { return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    template<typename QueriesT = Aws::Vector<MessageTemplateQueryField>>
    void SetQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries = std::forward<QueriesT>(value); }
    template<typename QueriesT = Aws::Vector<MessageTemplateQueryField>>
    MessageTemplateSearchExpression& WithQueries(QueriesT&& value) { SetQueries(std::forward<QueriesT>(value)); return *this;}
    template<typename QueriesT = MessageTemplateQueryField>
    MessageTemplateSearchExpression& AddQueries(QueriesT&& value) { m_queriesHasBeenSet = true; m_queries.emplace_back(std::forward<QueriesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<MessageTemplateFilterField> m_filters;
    bool m_filtersHasBeenSet = false;

    MessageTemplateOrderField m_orderOnField;
    bool m_orderOnFieldHasBeenSet = false;

    Aws::Vector<MessageTemplateQueryField> m_queries;
    bool m_queriesHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
