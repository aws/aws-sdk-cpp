/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/Identifier.h>
#include <aws/quicksight/model/TopicTimeGranularity.h>
#include <aws/quicksight/model/TopicSortClause.h>
#include <aws/quicksight/model/DisplayFormat.h>
#include <aws/quicksight/model/DisplayFormatOptions.h>
#include <aws/quicksight/model/NamedEntityRef.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The definition for a <code>TopicIRGroupBy</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TopicIRGroupBy">AWS
   * API Reference</a></p>
   */
  class TopicIRGroupBy
  {
  public:
    AWS_QUICKSIGHT_API TopicIRGroupBy();
    AWS_QUICKSIGHT_API TopicIRGroupBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRGroupBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const Identifier& GetFieldName() const{ return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    inline void SetFieldName(const Identifier& value) { m_fieldNameHasBeenSet = true; m_fieldName = value; }
    inline void SetFieldName(Identifier&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::move(value); }
    inline TopicIRGroupBy& WithFieldName(const Identifier& value) { SetFieldName(value); return *this;}
    inline TopicIRGroupBy& WithFieldName(Identifier&& value) { SetFieldName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const TopicTimeGranularity& GetTimeGranularity() const{ return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(const TopicTimeGranularity& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline void SetTimeGranularity(TopicTimeGranularity&& value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = std::move(value); }
    inline TopicIRGroupBy& WithTimeGranularity(const TopicTimeGranularity& value) { SetTimeGranularity(value); return *this;}
    inline TopicIRGroupBy& WithTimeGranularity(TopicTimeGranularity&& value) { SetTimeGranularity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const TopicSortClause& GetSort() const{ return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    inline void SetSort(const TopicSortClause& value) { m_sortHasBeenSet = true; m_sort = value; }
    inline void SetSort(TopicSortClause&& value) { m_sortHasBeenSet = true; m_sort = std::move(value); }
    inline TopicIRGroupBy& WithSort(const TopicSortClause& value) { SetSort(value); return *this;}
    inline TopicIRGroupBy& WithSort(TopicSortClause&& value) { SetSort(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display format for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const DisplayFormat& GetDisplayFormat() const{ return m_displayFormat; }
    inline bool DisplayFormatHasBeenSet() const { return m_displayFormatHasBeenSet; }
    inline void SetDisplayFormat(const DisplayFormat& value) { m_displayFormatHasBeenSet = true; m_displayFormat = value; }
    inline void SetDisplayFormat(DisplayFormat&& value) { m_displayFormatHasBeenSet = true; m_displayFormat = std::move(value); }
    inline TopicIRGroupBy& WithDisplayFormat(const DisplayFormat& value) { SetDisplayFormat(value); return *this;}
    inline TopicIRGroupBy& WithDisplayFormat(DisplayFormat&& value) { SetDisplayFormat(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DisplayFormatOptions& GetDisplayFormatOptions() const{ return m_displayFormatOptions; }
    inline bool DisplayFormatOptionsHasBeenSet() const { return m_displayFormatOptionsHasBeenSet; }
    inline void SetDisplayFormatOptions(const DisplayFormatOptions& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = value; }
    inline void SetDisplayFormatOptions(DisplayFormatOptions&& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = std::move(value); }
    inline TopicIRGroupBy& WithDisplayFormatOptions(const DisplayFormatOptions& value) { SetDisplayFormatOptions(value); return *this;}
    inline TopicIRGroupBy& WithDisplayFormatOptions(DisplayFormatOptions&& value) { SetDisplayFormatOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The named entity for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const NamedEntityRef& GetNamedEntity() const{ return m_namedEntity; }
    inline bool NamedEntityHasBeenSet() const { return m_namedEntityHasBeenSet; }
    inline void SetNamedEntity(const NamedEntityRef& value) { m_namedEntityHasBeenSet = true; m_namedEntity = value; }
    inline void SetNamedEntity(NamedEntityRef&& value) { m_namedEntityHasBeenSet = true; m_namedEntity = std::move(value); }
    inline TopicIRGroupBy& WithNamedEntity(const NamedEntityRef& value) { SetNamedEntity(value); return *this;}
    inline TopicIRGroupBy& WithNamedEntity(NamedEntityRef&& value) { SetNamedEntity(std::move(value)); return *this;}
    ///@}
  private:

    Identifier m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    TopicTimeGranularity m_timeGranularity;
    bool m_timeGranularityHasBeenSet = false;

    TopicSortClause m_sort;
    bool m_sortHasBeenSet = false;

    DisplayFormat m_displayFormat;
    bool m_displayFormatHasBeenSet = false;

    DisplayFormatOptions m_displayFormatOptions;
    bool m_displayFormatOptionsHasBeenSet = false;

    NamedEntityRef m_namedEntity;
    bool m_namedEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
