/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A <code>UniqueKey</code> configuration that references a dataset
   * column.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/UniqueKey">AWS
   * API Reference</a></p>
   */
  class UniqueKey
  {
  public:
    AWS_QUICKSIGHT_API UniqueKey() = default;
    AWS_QUICKSIGHT_API UniqueKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UniqueKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column that is referenced in the <code>UniqueKey</code>
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const { return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    void SetColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::forward<ColumnNamesT>(value); }
    template<typename ColumnNamesT = Aws::Vector<Aws::String>>
    UniqueKey& WithColumnNames(ColumnNamesT&& value) { SetColumnNames(std::forward<ColumnNamesT>(value)); return *this;}
    template<typename ColumnNamesT = Aws::String>
    UniqueKey& AddColumnNames(ColumnNamesT&& value) { m_columnNamesHasBeenSet = true; m_columnNames.emplace_back(std::forward<ColumnNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
