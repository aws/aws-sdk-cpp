/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataPathValue.h>
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
   * <p>The data path options for the pivot table field options.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/PivotTableDataPathOption">AWS
   * API Reference</a></p>
   */
  class PivotTableDataPathOption
  {
  public:
    AWS_QUICKSIGHT_API PivotTableDataPathOption() = default;
    AWS_QUICKSIGHT_API PivotTableDataPathOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API PivotTableDataPathOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of data path values for the data path options.</p>
     */
    inline const Aws::Vector<DataPathValue>& GetDataPathList() const { return m_dataPathList; }
    inline bool DataPathListHasBeenSet() const { return m_dataPathListHasBeenSet; }
    template<typename DataPathListT = Aws::Vector<DataPathValue>>
    void SetDataPathList(DataPathListT&& value) { m_dataPathListHasBeenSet = true; m_dataPathList = std::forward<DataPathListT>(value); }
    template<typename DataPathListT = Aws::Vector<DataPathValue>>
    PivotTableDataPathOption& WithDataPathList(DataPathListT&& value) { SetDataPathList(std::forward<DataPathListT>(value)); return *this;}
    template<typename DataPathListT = DataPathValue>
    PivotTableDataPathOption& AddDataPathList(DataPathListT&& value) { m_dataPathListHasBeenSet = true; m_dataPathList.emplace_back(std::forward<DataPathListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The width of the data path option.</p>
     */
    inline const Aws::String& GetWidth() const { return m_width; }
    inline bool WidthHasBeenSet() const { return m_widthHasBeenSet; }
    template<typename WidthT = Aws::String>
    void SetWidth(WidthT&& value) { m_widthHasBeenSet = true; m_width = std::forward<WidthT>(value); }
    template<typename WidthT = Aws::String>
    PivotTableDataPathOption& WithWidth(WidthT&& value) { SetWidth(std::forward<WidthT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataPathValue> m_dataPathList;
    bool m_dataPathListHasBeenSet = false;

    Aws::String m_width;
    bool m_widthHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
