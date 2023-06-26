/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnTagName.h>
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
   * <p>A transform operation that removes tags associated with a
   * column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UntagColumnOperation">AWS
   * API Reference</a></p>
   */
  class UntagColumnOperation
  {
  public:
    AWS_QUICKSIGHT_API UntagColumnOperation();
    AWS_QUICKSIGHT_API UntagColumnOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UntagColumnOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The column that this operation acts on.</p>
     */
    inline const Aws::String& GetColumnName() const{ return m_columnName; }

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline bool ColumnNameHasBeenSet() const { return m_columnNameHasBeenSet; }

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline void SetColumnName(const Aws::String& value) { m_columnNameHasBeenSet = true; m_columnName = value; }

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline void SetColumnName(Aws::String&& value) { m_columnNameHasBeenSet = true; m_columnName = std::move(value); }

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline void SetColumnName(const char* value) { m_columnNameHasBeenSet = true; m_columnName.assign(value); }

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline UntagColumnOperation& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline UntagColumnOperation& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline UntagColumnOperation& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline const Aws::Vector<ColumnTagName>& GetTagNames() const{ return m_tagNames; }

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline bool TagNamesHasBeenSet() const { return m_tagNamesHasBeenSet; }

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline void SetTagNames(const Aws::Vector<ColumnTagName>& value) { m_tagNamesHasBeenSet = true; m_tagNames = value; }

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline void SetTagNames(Aws::Vector<ColumnTagName>&& value) { m_tagNamesHasBeenSet = true; m_tagNames = std::move(value); }

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline UntagColumnOperation& WithTagNames(const Aws::Vector<ColumnTagName>& value) { SetTagNames(value); return *this;}

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline UntagColumnOperation& WithTagNames(Aws::Vector<ColumnTagName>&& value) { SetTagNames(std::move(value)); return *this;}

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline UntagColumnOperation& AddTagNames(const ColumnTagName& value) { m_tagNamesHasBeenSet = true; m_tagNames.push_back(value); return *this; }

    /**
     * <p>The column tags to remove from this column.</p>
     */
    inline UntagColumnOperation& AddTagNames(ColumnTagName&& value) { m_tagNamesHasBeenSet = true; m_tagNames.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::Vector<ColumnTagName> m_tagNames;
    bool m_tagNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
