/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/ColumnIdentifier.h>
#include <aws/quicksight/model/TimeGranularity.h>
#include <aws/quicksight/model/DateTimeFormatConfiguration.h>
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
   * <p>The dimension type field with date type columns.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DateDimensionField">AWS
   * API Reference</a></p>
   */
  class DateDimensionField
  {
  public:
    AWS_QUICKSIGHT_API DateDimensionField() = default;
    AWS_QUICKSIGHT_API DateDimensionField(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DateDimensionField& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The custom field ID.</p>
     */
    inline const Aws::String& GetFieldId() const { return m_fieldId; }
    inline bool FieldIdHasBeenSet() const { return m_fieldIdHasBeenSet; }
    template<typename FieldIdT = Aws::String>
    void SetFieldId(FieldIdT&& value) { m_fieldIdHasBeenSet = true; m_fieldId = std::forward<FieldIdT>(value); }
    template<typename FieldIdT = Aws::String>
    DateDimensionField& WithFieldId(FieldIdT&& value) { SetFieldId(std::forward<FieldIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column that is used in the <code>DateDimensionField</code>.</p>
     */
    inline const ColumnIdentifier& GetColumn() const { return m_column; }
    inline bool ColumnHasBeenSet() const { return m_columnHasBeenSet; }
    template<typename ColumnT = ColumnIdentifier>
    void SetColumn(ColumnT&& value) { m_columnHasBeenSet = true; m_column = std::forward<ColumnT>(value); }
    template<typename ColumnT = ColumnIdentifier>
    DateDimensionField& WithColumn(ColumnT&& value) { SetColumn(std::forward<ColumnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date granularity of the <code>DateDimensionField</code>. Choose one of
     * the following options:</p> <ul> <li> <p> <code>YEAR</code> </p> </li> <li> <p>
     * <code>QUARTER</code> </p> </li> <li> <p> <code>MONTH</code> </p> </li> <li> <p>
     * <code>WEEK</code> </p> </li> <li> <p> <code>DAY</code> </p> </li> <li> <p>
     * <code>HOUR</code> </p> </li> <li> <p> <code>MINUTE</code> </p> </li> <li> <p>
     * <code>SECOND</code> </p> </li> <li> <p> <code>MILLISECOND</code> </p> </li>
     * </ul>
     */
    inline TimeGranularity GetDateGranularity() const { return m_dateGranularity; }
    inline bool DateGranularityHasBeenSet() const { return m_dateGranularityHasBeenSet; }
    inline void SetDateGranularity(TimeGranularity value) { m_dateGranularityHasBeenSet = true; m_dateGranularity = value; }
    inline DateDimensionField& WithDateGranularity(TimeGranularity value) { SetDateGranularity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The custom hierarchy ID.</p>
     */
    inline const Aws::String& GetHierarchyId() const { return m_hierarchyId; }
    inline bool HierarchyIdHasBeenSet() const { return m_hierarchyIdHasBeenSet; }
    template<typename HierarchyIdT = Aws::String>
    void SetHierarchyId(HierarchyIdT&& value) { m_hierarchyIdHasBeenSet = true; m_hierarchyId = std::forward<HierarchyIdT>(value); }
    template<typename HierarchyIdT = Aws::String>
    DateDimensionField& WithHierarchyId(HierarchyIdT&& value) { SetHierarchyId(std::forward<HierarchyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The format configuration of the field.</p>
     */
    inline const DateTimeFormatConfiguration& GetFormatConfiguration() const { return m_formatConfiguration; }
    inline bool FormatConfigurationHasBeenSet() const { return m_formatConfigurationHasBeenSet; }
    template<typename FormatConfigurationT = DateTimeFormatConfiguration>
    void SetFormatConfiguration(FormatConfigurationT&& value) { m_formatConfigurationHasBeenSet = true; m_formatConfiguration = std::forward<FormatConfigurationT>(value); }
    template<typename FormatConfigurationT = DateTimeFormatConfiguration>
    DateDimensionField& WithFormatConfiguration(FormatConfigurationT&& value) { SetFormatConfiguration(std::forward<FormatConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fieldId;
    bool m_fieldIdHasBeenSet = false;

    ColumnIdentifier m_column;
    bool m_columnHasBeenSet = false;

    TimeGranularity m_dateGranularity{TimeGranularity::NOT_SET};
    bool m_dateGranularityHasBeenSet = false;

    Aws::String m_hierarchyId;
    bool m_hierarchyIdHasBeenSet = false;

    DateTimeFormatConfiguration m_formatConfiguration;
    bool m_formatConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
