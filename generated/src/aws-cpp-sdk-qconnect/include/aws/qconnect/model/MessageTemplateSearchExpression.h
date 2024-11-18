/**
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
    AWS_QCONNECT_API MessageTemplateSearchExpression();
    AWS_QCONNECT_API MessageTemplateSearchExpression(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageTemplateSearchExpression& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration of filtering rules applied to message template query
     * results.</p>
     */
    inline const Aws::Vector<MessageTemplateFilterField>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<MessageTemplateFilterField>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<MessageTemplateFilterField>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline MessageTemplateSearchExpression& WithFilters(const Aws::Vector<MessageTemplateFilterField>& value) { SetFilters(value); return *this;}
    inline MessageTemplateSearchExpression& WithFilters(Aws::Vector<MessageTemplateFilterField>&& value) { SetFilters(std::move(value)); return *this;}
    inline MessageTemplateSearchExpression& AddFilters(const MessageTemplateFilterField& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline MessageTemplateSearchExpression& AddFilters(MessageTemplateFilterField&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The message template attribute fields on which the query results are
     * ordered.</p>
     */
    inline const MessageTemplateOrderField& GetOrderOnField() const{ return m_orderOnField; }
    inline bool OrderOnFieldHasBeenSet() const { return m_orderOnFieldHasBeenSet; }
    inline void SetOrderOnField(const MessageTemplateOrderField& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = value; }
    inline void SetOrderOnField(MessageTemplateOrderField&& value) { m_orderOnFieldHasBeenSet = true; m_orderOnField = std::move(value); }
    inline MessageTemplateSearchExpression& WithOrderOnField(const MessageTemplateOrderField& value) { SetOrderOnField(value); return *this;}
    inline MessageTemplateSearchExpression& WithOrderOnField(MessageTemplateOrderField&& value) { SetOrderOnField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The message template query expressions.</p>
     */
    inline const Aws::Vector<MessageTemplateQueryField>& GetQueries() const{ return m_queries; }
    inline bool QueriesHasBeenSet() const { return m_queriesHasBeenSet; }
    inline void SetQueries(const Aws::Vector<MessageTemplateQueryField>& value) { m_queriesHasBeenSet = true; m_queries = value; }
    inline void SetQueries(Aws::Vector<MessageTemplateQueryField>&& value) { m_queriesHasBeenSet = true; m_queries = std::move(value); }
    inline MessageTemplateSearchExpression& WithQueries(const Aws::Vector<MessageTemplateQueryField>& value) { SetQueries(value); return *this;}
    inline MessageTemplateSearchExpression& WithQueries(Aws::Vector<MessageTemplateQueryField>&& value) { SetQueries(std::move(value)); return *this;}
    inline MessageTemplateSearchExpression& AddQueries(const MessageTemplateQueryField& value) { m_queriesHasBeenSet = true; m_queries.push_back(value); return *this; }
    inline MessageTemplateSearchExpression& AddQueries(MessageTemplateQueryField&& value) { m_queriesHasBeenSet = true; m_queries.push_back(std::move(value)); return *this; }
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
