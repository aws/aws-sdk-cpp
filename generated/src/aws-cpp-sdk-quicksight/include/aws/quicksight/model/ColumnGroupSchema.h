/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnGroupColumnSchema.h>
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
   * <p>The column group schema.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ColumnGroupSchema">AWS
   * API Reference</a></p>
   */
  class ColumnGroupSchema
  {
  public:
    AWS_QUICKSIGHT_API ColumnGroupSchema() = default;
    AWS_QUICKSIGHT_API ColumnGroupSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ColumnGroupSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column group schema.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ColumnGroupSchema& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the list of schemas for column group columns.</p>
     */
    inline const Aws::Vector<ColumnGroupColumnSchema>& GetColumnGroupColumnSchemaList() const { return m_columnGroupColumnSchemaList; }
    inline bool ColumnGroupColumnSchemaListHasBeenSet() const { return m_columnGroupColumnSchemaListHasBeenSet; }
    template<typename ColumnGroupColumnSchemaListT = Aws::Vector<ColumnGroupColumnSchema>>
    void SetColumnGroupColumnSchemaList(ColumnGroupColumnSchemaListT&& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList = std::forward<ColumnGroupColumnSchemaListT>(value); }
    template<typename ColumnGroupColumnSchemaListT = Aws::Vector<ColumnGroupColumnSchema>>
    ColumnGroupSchema& WithColumnGroupColumnSchemaList(ColumnGroupColumnSchemaListT&& value) { SetColumnGroupColumnSchemaList(std::forward<ColumnGroupColumnSchemaListT>(value)); return *this;}
    template<typename ColumnGroupColumnSchemaListT = ColumnGroupColumnSchema>
    ColumnGroupSchema& AddColumnGroupColumnSchemaList(ColumnGroupColumnSchemaListT&& value) { m_columnGroupColumnSchemaListHasBeenSet = true; m_columnGroupColumnSchemaList.emplace_back(std::forward<ColumnGroupColumnSchemaListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<ColumnGroupColumnSchema> m_columnGroupColumnSchemaList;
    bool m_columnGroupColumnSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
