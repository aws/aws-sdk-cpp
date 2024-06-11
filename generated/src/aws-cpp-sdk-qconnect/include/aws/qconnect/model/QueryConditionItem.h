/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/QueryConditionComparisonOperator.h>
#include <aws/qconnect/model/QueryConditionFieldName.h>
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
    AWS_QCONNECT_API QueryConditionItem();
    AWS_QCONNECT_API QueryConditionItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API QueryConditionItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The comparison operator for query condition to query on.</p>
     */
    inline const QueryConditionComparisonOperator& GetComparator() const{ return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(const QueryConditionComparisonOperator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline void SetComparator(QueryConditionComparisonOperator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }
    inline QueryConditionItem& WithComparator(const QueryConditionComparisonOperator& value) { SetComparator(value); return *this;}
    inline QueryConditionItem& WithComparator(QueryConditionComparisonOperator&& value) { SetComparator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the field for query condition to query on.</p>
     */
    inline const QueryConditionFieldName& GetField() const{ return m_field; }
    inline bool FieldHasBeenSet() const { return m_fieldHasBeenSet; }
    inline void SetField(const QueryConditionFieldName& value) { m_fieldHasBeenSet = true; m_field = value; }
    inline void SetField(QueryConditionFieldName&& value) { m_fieldHasBeenSet = true; m_field = std::move(value); }
    inline QueryConditionItem& WithField(const QueryConditionFieldName& value) { SetField(value); return *this;}
    inline QueryConditionItem& WithField(QueryConditionFieldName&& value) { SetField(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for the query condition to query on.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline QueryConditionItem& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline QueryConditionItem& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline QueryConditionItem& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}
  private:

    QueryConditionComparisonOperator m_comparator;
    bool m_comparatorHasBeenSet = false;

    QueryConditionFieldName m_field;
    bool m_fieldHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
