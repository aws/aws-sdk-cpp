/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A transform operation that renames a column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RenameColumnOperation">AWS
   * API Reference</a></p>
   */
  class RenameColumnOperation
  {
  public:
    AWS_QUICKSIGHT_API RenameColumnOperation() = default;
    AWS_QUICKSIGHT_API RenameColumnOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RenameColumnOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column to be renamed.</p>
     */
    inline const Aws::String& GetColumnName() const { return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    template<typename ColumnNameT = Aws::String>
    void SetColumnName(ColumnNameT&& value) { m_columnNameHasBeenSet = true; m_columnName = std::forward<ColumnNameT>(value); }
    template<typename ColumnNameT = Aws::String>
    RenameColumnOperation& WithColumnName(ColumnNameT&& value) { SetColumnName(std::forward<ColumnNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the column.</p>
     */
    inline const Aws::String& GetNewColumnName() const { return m_newColumnName; }
    inline bool NewColumnNameHasBeenSet() const { return m_newColumnNameHasBeenSet; }
    template<typename NewColumnNameT = Aws::String>
    void SetNewColumnName(NewColumnNameT&& value) { m_newColumnNameHasBeenSet = true; m_newColumnName = std::forward<NewColumnNameT>(value); }
    template<typename NewColumnNameT = Aws::String>
    RenameColumnOperation& WithNewColumnName(NewColumnNameT&& value) { SetNewColumnName(std::forward<NewColumnNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::String m_newColumnName;
    bool m_newColumnNameHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
