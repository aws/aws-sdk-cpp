/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldLabelType.h>
#include <aws/quicksight/model/DataPathLabelType.h>
#include <aws/quicksight/model/RangeEndsLabelType.h>
#include <aws/quicksight/model/MinimumLabelType.h>
#include <aws/quicksight/model/MaximumLabelType.h>
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
   * <p>The option that determines the data label type.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataLabelType">AWS
   * API Reference</a></p>
   */
  class DataLabelType
  {
  public:
    AWS_QUICKSIGHT_API DataLabelType() = default;
    AWS_QUICKSIGHT_API DataLabelType(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataLabelType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Determines the label configuration for the entire field.</p>
     */
    inline const FieldLabelType& GetFieldLabelType() const { return m_fieldLabelType; }
    inline bool FieldLabelTypeHasBeenSet() const { return m_fieldLabelTypeHasBeenSet; }
    template<typename FieldLabelTypeT = FieldLabelType>
    void SetFieldLabelType(FieldLabelTypeT&& value) { m_fieldLabelTypeHasBeenSet = true; m_fieldLabelType = std::forward<FieldLabelTypeT>(value); }
    template<typename FieldLabelTypeT = FieldLabelType>
    DataLabelType& WithFieldLabelType(FieldLabelTypeT&& value) { SetFieldLabelType(std::forward<FieldLabelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The option that specifies individual data values for labels.</p>
     */
    inline const DataPathLabelType& GetDataPathLabelType() const { return m_dataPathLabelType; }
    inline bool DataPathLabelTypeHasBeenSet() const { return m_dataPathLabelTypeHasBeenSet; }
    template<typename DataPathLabelTypeT = DataPathLabelType>
    void SetDataPathLabelType(DataPathLabelTypeT&& value) { m_dataPathLabelTypeHasBeenSet = true; m_dataPathLabelType = std::forward<DataPathLabelTypeT>(value); }
    template<typename DataPathLabelTypeT = DataPathLabelType>
    DataLabelType& WithDataPathLabelType(DataPathLabelTypeT&& value) { SetDataPathLabelType(std::forward<DataPathLabelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the label configuration for range end value in a visual.</p>
     */
    inline const RangeEndsLabelType& GetRangeEndsLabelType() const { return m_rangeEndsLabelType; }
    inline bool RangeEndsLabelTypeHasBeenSet() const { return m_rangeEndsLabelTypeHasBeenSet; }
    template<typename RangeEndsLabelTypeT = RangeEndsLabelType>
    void SetRangeEndsLabelType(RangeEndsLabelTypeT&& value) { m_rangeEndsLabelTypeHasBeenSet = true; m_rangeEndsLabelType = std::forward<RangeEndsLabelTypeT>(value); }
    template<typename RangeEndsLabelTypeT = RangeEndsLabelType>
    DataLabelType& WithRangeEndsLabelType(RangeEndsLabelTypeT&& value) { SetRangeEndsLabelType(std::forward<RangeEndsLabelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the label configuration for the minimum value in a visual.</p>
     */
    inline const MinimumLabelType& GetMinimumLabelType() const { return m_minimumLabelType; }
    inline bool MinimumLabelTypeHasBeenSet() const { return m_minimumLabelTypeHasBeenSet; }
    template<typename MinimumLabelTypeT = MinimumLabelType>
    void SetMinimumLabelType(MinimumLabelTypeT&& value) { m_minimumLabelTypeHasBeenSet = true; m_minimumLabelType = std::forward<MinimumLabelTypeT>(value); }
    template<typename MinimumLabelTypeT = MinimumLabelType>
    DataLabelType& WithMinimumLabelType(MinimumLabelTypeT&& value) { SetMinimumLabelType(std::forward<MinimumLabelTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines the label configuration for the maximum value in a visual.</p>
     */
    inline const MaximumLabelType& GetMaximumLabelType() const { return m_maximumLabelType; }
    inline bool MaximumLabelTypeHasBeenSet() const { return m_maximumLabelTypeHasBeenSet; }
    template<typename MaximumLabelTypeT = MaximumLabelType>
    void SetMaximumLabelType(MaximumLabelTypeT&& value) { m_maximumLabelTypeHasBeenSet = true; m_maximumLabelType = std::forward<MaximumLabelTypeT>(value); }
    template<typename MaximumLabelTypeT = MaximumLabelType>
    DataLabelType& WithMaximumLabelType(MaximumLabelTypeT&& value) { SetMaximumLabelType(std::forward<MaximumLabelTypeT>(value)); return *this;}
    ///@}
  private:

    FieldLabelType m_fieldLabelType;
    bool m_fieldLabelTypeHasBeenSet = false;

    DataPathLabelType m_dataPathLabelType;
    bool m_dataPathLabelTypeHasBeenSet = false;

    RangeEndsLabelType m_rangeEndsLabelType;
    bool m_rangeEndsLabelTypeHasBeenSet = false;

    MinimumLabelType m_minimumLabelType;
    bool m_minimumLabelTypeHasBeenSet = false;

    MaximumLabelType m_maximumLabelType;
    bool m_maximumLabelTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
