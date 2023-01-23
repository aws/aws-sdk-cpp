/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnTag.h>
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
   * <p>A transform operation that tags a column with additional
   * information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TagColumnOperation">AWS
   * API Reference</a></p>
   */
  class TagColumnOperation
  {
  public:
    AWS_QUICKSIGHT_API TagColumnOperation();
    AWS_QUICKSIGHT_API TagColumnOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TagColumnOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline TagColumnOperation& WithColumnName(const Aws::String& value) { SetColumnName(value); return *this;}

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline TagColumnOperation& WithColumnName(Aws::String&& value) { SetColumnName(std::move(value)); return *this;}

    /**
     * <p>The column that this operation acts on.</p>
     */
    inline TagColumnOperation& WithColumnName(const char* value) { SetColumnName(value); return *this;}


    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline const Aws::Vector<ColumnTag>& GetTags() const{ return m_tags; }

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline void SetTags(const Aws::Vector<ColumnTag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline void SetTags(Aws::Vector<ColumnTag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline TagColumnOperation& WithTags(const Aws::Vector<ColumnTag>& value) { SetTags(value); return *this;}

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline TagColumnOperation& WithTags(Aws::Vector<ColumnTag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline TagColumnOperation& AddTags(const ColumnTag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The dataset column tag, currently only used for geospatial type tagging.</p>
     *  <p>This is not tags for the Amazon Web Services tagging feature.</p>
     * 
     */
    inline TagColumnOperation& AddTags(ColumnTag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_columnName;
    bool m_columnNameHasBeenSet = false;

    Aws::Vector<ColumnTag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
