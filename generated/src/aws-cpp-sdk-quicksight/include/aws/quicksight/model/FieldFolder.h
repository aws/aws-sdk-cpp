/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A FieldFolder element is a folder that contains fields and nested
   * subfolders.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/FieldFolder">AWS
   * API Reference</a></p>
   */
  class FieldFolder
  {
  public:
    AWS_QUICKSIGHT_API FieldFolder() = default;
    AWS_QUICKSIGHT_API FieldFolder(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API FieldFolder& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description for a field folder.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    FieldFolder& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A folder has a list of columns. A column can only be in one folder.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<Aws::String>>
    FieldFolder& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = Aws::String>
    FieldFolder& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
