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
    AWS_QUICKSIGHT_API TopicIRGroupBy() = default;
    AWS_QUICKSIGHT_API TopicIRGroupBy(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TopicIRGroupBy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field name for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const Identifier& GetFieldName() const { return m_fieldName; }
    inline bool FieldNameHasBeenSet() const { return m_fieldNameHasBeenSet; }
    template<typename FieldNameT = Identifier>
    void SetFieldName(FieldNameT&& value) { m_fieldNameHasBeenSet = true; m_fieldName = std::forward<FieldNameT>(value); }
    template<typename FieldNameT = Identifier>
    TopicIRGroupBy& WithFieldName(FieldNameT&& value) { SetFieldName(std::forward<FieldNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time granularity for the <code>TopicIRGroupBy</code>.</p>
     */
    inline TopicTimeGranularity GetTimeGranularity() const { return m_timeGranularity; }
    inline bool TimeGranularityHasBeenSet() const { return m_timeGranularityHasBeenSet; }
    inline void SetTimeGranularity(TopicTimeGranularity value) { m_timeGranularityHasBeenSet = true; m_timeGranularity = value; }
    inline TopicIRGroupBy& WithTimeGranularity(TopicTimeGranularity value) { SetTimeGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sort for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const TopicSortClause& GetSort() const { return m_sort; }
    inline bool SortHasBeenSet() const { return m_sortHasBeenSet; }
    template<typename SortT = TopicSortClause>
    void SetSort(SortT&& value) { m_sortHasBeenSet = true; m_sort = std::forward<SortT>(value); }
    template<typename SortT = TopicSortClause>
    TopicIRGroupBy& WithSort(SortT&& value) { SetSort(std::forward<SortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display format for the <code>TopicIRGroupBy</code>.</p>
     */
    inline DisplayFormat GetDisplayFormat() const { return m_displayFormat; }
    inline bool DisplayFormatHasBeenSet() const { return m_displayFormatHasBeenSet; }
    inline void SetDisplayFormat(DisplayFormat value) { m_displayFormatHasBeenSet = true; m_displayFormat = value; }
    inline TopicIRGroupBy& WithDisplayFormat(DisplayFormat value) { SetDisplayFormat(value); return *this;}
    ///@}

    ///@{
    
    inline const DisplayFormatOptions& GetDisplayFormatOptions() const { return m_displayFormatOptions; }
    inline bool DisplayFormatOptionsHasBeenSet() const { return m_displayFormatOptionsHasBeenSet; }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    void SetDisplayFormatOptions(DisplayFormatOptionsT&& value) { m_displayFormatOptionsHasBeenSet = true; m_displayFormatOptions = std::forward<DisplayFormatOptionsT>(value); }
    template<typename DisplayFormatOptionsT = DisplayFormatOptions>
    TopicIRGroupBy& WithDisplayFormatOptions(DisplayFormatOptionsT&& value) { SetDisplayFormatOptions(std::forward<DisplayFormatOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The named entity for the <code>TopicIRGroupBy</code>.</p>
     */
    inline const NamedEntityRef& GetNamedEntity() const { return m_namedEntity; }
    inline bool NamedEntityHasBeenSet() const { return m_namedEntityHasBeenSet; }
    template<typename NamedEntityT = NamedEntityRef>
    void SetNamedEntity(NamedEntityT&& value) { m_namedEntityHasBeenSet = true; m_namedEntity = std::forward<NamedEntityT>(value); }
    template<typename NamedEntityT = NamedEntityRef>
    TopicIRGroupBy& WithNamedEntity(NamedEntityT&& value) { SetNamedEntity(std::forward<NamedEntityT>(value)); return *this;}
    ///@}
  private:

    Identifier m_fieldName;
    bool m_fieldNameHasBeenSet = false;

    TopicTimeGranularity m_timeGranularity{TopicTimeGranularity::NOT_SET};
    bool m_timeGranularityHasBeenSet = false;

    TopicSortClause m_sort;
    bool m_sortHasBeenSet = false;

    DisplayFormat m_displayFormat{DisplayFormat::NOT_SET};
    bool m_displayFormatHasBeenSet = false;

    DisplayFormatOptions m_displayFormatOptions;
    bool m_displayFormatOptionsHasBeenSet = false;

    NamedEntityRef m_namedEntity;
    bool m_namedEntityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
