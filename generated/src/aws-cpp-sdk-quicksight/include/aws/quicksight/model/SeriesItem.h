/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/FieldSeriesItem.h>
#include <aws/quicksight/model/DataFieldSeriesItem.h>
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
   * <p>The series item configuration of a line chart.</p> <p>This is a union type
   * structure. For this structure to be valid, only one of the attributes can be
   * defined.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/SeriesItem">AWS
   * API Reference</a></p>
   */
  class SeriesItem
  {
  public:
    AWS_QUICKSIGHT_API SeriesItem() = default;
    AWS_QUICKSIGHT_API SeriesItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API SeriesItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The field series item configuration of a line chart.</p>
     */
    inline const FieldSeriesItem& GetFieldSeriesItem() const { return m_fieldSeriesItem; }
    inline bool FieldSeriesItemHasBeenSet() const { return m_fieldSeriesItemHasBeenSet; }
    template<typename FieldSeriesItemT = FieldSeriesItem>
    void SetFieldSeriesItem(FieldSeriesItemT&& value) { m_fieldSeriesItemHasBeenSet = true; m_fieldSeriesItem = std::forward<FieldSeriesItemT>(value); }
    template<typename FieldSeriesItemT = FieldSeriesItem>
    SeriesItem& WithFieldSeriesItem(FieldSeriesItemT&& value) { SetFieldSeriesItem(std::forward<FieldSeriesItemT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data field series item configuration of a line chart.</p>
     */
    inline const DataFieldSeriesItem& GetDataFieldSeriesItem() const { return m_dataFieldSeriesItem; }
    inline bool DataFieldSeriesItemHasBeenSet() const { return m_dataFieldSeriesItemHasBeenSet; }
    template<typename DataFieldSeriesItemT = DataFieldSeriesItem>
    void SetDataFieldSeriesItem(DataFieldSeriesItemT&& value) { m_dataFieldSeriesItemHasBeenSet = true; m_dataFieldSeriesItem = std::forward<DataFieldSeriesItemT>(value); }
    template<typename DataFieldSeriesItemT = DataFieldSeriesItem>
    SeriesItem& WithDataFieldSeriesItem(DataFieldSeriesItemT&& value) { SetDataFieldSeriesItem(std::forward<DataFieldSeriesItemT>(value)); return *this;}
    ///@}
  private:

    FieldSeriesItem m_fieldSeriesItem;
    bool m_fieldSeriesItemHasBeenSet = false;

    DataFieldSeriesItem m_dataFieldSeriesItem;
    bool m_dataFieldSeriesItemHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
