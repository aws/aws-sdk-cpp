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
    AWS_QUICKSIGHT_API RenameColumnOperation();
    AWS_QUICKSIGHT_API RenameColumnOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RenameColumnOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column to be renamed.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }
    inline RenameColumnOperation& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}
    inline RenameColumnOperation& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}
    inline RenameColumnOperation& WithColumnName(const char* value) { SetColumnName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new name for the column.</p>
     */
    inline const Aws::String& GetNewColumnName() const{ return m_newColumnName; }
    inline bool NewColumnNameHasBeenSet() const { return m_newColumnNameHasBeenSet; }
    inline void SetNewColumnName(const Aws::String& value) { m_newColumnNameHasBeenSet = true; m_newColumnName = value; }
    inline void SetNewColumnName(Aws::String&& value) { m_newColumnNameHasBeenSet = true; m_newColumnName = std::move(value); }
    inline void SetNewColumnName(const char* value) { m_newColumnNameHasBeenSet = true; m_newColumnName.assign(value); }
    inline RenameColumnOperation& WithNewColumnName(const Aws::String& value) { SetNewColumnName(value); return *this;}
    inline RenameColumnOperation& WithNewColumnName(Aws::String&& value) { SetNewColumnName(std::move(value)); return *this;}
    inline RenameColumnOperation& WithNewColumnName(const char* value) { SetNewColumnName(value); return *this;}
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
