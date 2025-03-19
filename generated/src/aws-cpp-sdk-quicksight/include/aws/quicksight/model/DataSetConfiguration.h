/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetSchema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnGroupSchema.h>
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
   * <p>Dataset configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DataSetConfiguration() = default;
    AWS_QUICKSIGHT_API DataSetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Placeholder.</p>
     */
    inline const Aws::String& GetPlaceholder() const { return m_placeholder; }
    inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
    template<typename PlaceholderT = Aws::String>
    void SetPlaceholder(PlaceholderT&& value) { m_placeholderHasBeenSet = true; m_placeholder = std::forward<PlaceholderT>(value); }
    template<typename PlaceholderT = Aws::String>
    DataSetConfiguration& WithPlaceholder(PlaceholderT&& value) { SetPlaceholder(std::forward<PlaceholderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dataset schema.</p>
     */
    inline const DataSetSchema& GetDataSetSchema() const { return m_dataSetSchema; }
    inline bool DataSetSchemaHasBeenSet() const { return m_dataSetSchemaHasBeenSet; }
    template<typename DataSetSchemaT = DataSetSchema>
    void SetDataSetSchema(DataSetSchemaT&& value) { m_dataSetSchemaHasBeenSet = true; m_dataSetSchema = std::forward<DataSetSchemaT>(value); }
    template<typename DataSetSchemaT = DataSetSchema>
    DataSetConfiguration& WithDataSetSchema(DataSetSchemaT&& value) { SetDataSetSchema(std::forward<DataSetSchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the list of column group schemas.</p>
     */
    inline const Aws::Vector<ColumnGroupSchema>& GetColumnGroupSchemaList() const { return m_columnGroupSchemaList; }
    inline bool ColumnGroupSchemaListHasBeenSet() const { return m_columnGroupSchemaListHasBeenSet; }
    template<typename ColumnGroupSchemaListT = Aws::Vector<ColumnGroupSchema>>
    void SetColumnGroupSchemaList(ColumnGroupSchemaListT&& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList = std::forward<ColumnGroupSchemaListT>(value); }
    template<typename ColumnGroupSchemaListT = Aws::Vector<ColumnGroupSchema>>
    DataSetConfiguration& WithColumnGroupSchemaList(ColumnGroupSchemaListT&& value) { SetColumnGroupSchemaList(std::forward<ColumnGroupSchemaListT>(value)); return *this;}
    template<typename ColumnGroupSchemaListT = ColumnGroupSchema>
    DataSetConfiguration& AddColumnGroupSchemaList(ColumnGroupSchemaListT&& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList.emplace_back(std::forward<ColumnGroupSchemaListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_placeholder;
    bool m_placeholderHasBeenSet = false;

    DataSetSchema m_dataSetSchema;
    bool m_dataSetSchemaHasBeenSet = false;

    Aws::Vector<ColumnGroupSchema> m_columnGroupSchemaList;
    bool m_columnGroupSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
