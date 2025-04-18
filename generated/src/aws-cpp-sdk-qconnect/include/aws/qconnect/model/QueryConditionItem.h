/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QueryConditionFieldName.h>
#include <aws/qconnect/model/QueryConditionComparisonOperator.h>
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
namespace QConnect
{
namespace Model
{

  /**
   * <p>The condition for the query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/QueryConditionItem">AWS
   * API Reference</a></p>
   */
  class QueryConditionItem
  {
  public:
    AWS_QCONNECT_API QueryConditionItem() = default;
    AWS_QCONNECT_API QueryConditionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryConditionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The name of the field for query condition to query on.</p>
     */
    inline QueryConditionFieldName GetField() const { return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(QueryConditionFieldName value) { m_fieldHasBeenSet = true; m_field = value; }
    inline QueryConditionItem& WithField(QueryConditionFieldName value) { SetField(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The comparison operator for query condition to query on.</p>
     */
    inline QueryConditionComparisonOperator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(QueryConditionComparisonOperator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline QueryConditionItem& WithComparator(QueryConditionComparisonOperator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the query condition to query on.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    QueryConditionItem& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}
  private:

    QueryConditionFieldName m_field{QueryConditionFieldName::NOT_SET};
    bool m_fieldHasBeenSet = false;

    QueryConditionComparisonOperator m_comparator{QueryConditionComparisonOperator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
