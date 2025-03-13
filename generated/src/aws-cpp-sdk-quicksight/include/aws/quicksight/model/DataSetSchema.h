/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnSchema.h>
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
   * <p>Dataset schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetSchema">AWS
   * API Reference</a></p>
   */
  class DataSetSchema
  {
  public:
    AWS_QUICKSIGHT_API DataSetSchema() = default;
    AWS_QUICKSIGHT_API DataSetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline const Aws::Vector<ColumnSchema>& GetColumnSchemaList() const { return m_columnSchemaList; }
    inline bool ColumnSchemaListHasBeenSet() const { return m_columnSchemaListHasBeenSet; }
    template<typename ColumnSchemaListT = Aws::Vector<ColumnSchema>>
    void SetColumnSchemaList(ColumnSchemaListT&& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList = std::forward<ColumnSchemaListT>(value); }
    template<typename ColumnSchemaListT = Aws::Vector<ColumnSchema>>
    DataSetSchema& WithColumnSchemaList(ColumnSchemaListT&& value) { SetColumnSchemaList(std::forward<ColumnSchemaListT>(value)); return *this;}
    template<typename ColumnSchemaListT = ColumnSchema>
    DataSetSchema& AddColumnSchemaList(ColumnSchemaListT&& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList.emplace_back(std::forward<ColumnSchemaListT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ColumnSchema> m_columnSchemaList;
    bool m_columnSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
