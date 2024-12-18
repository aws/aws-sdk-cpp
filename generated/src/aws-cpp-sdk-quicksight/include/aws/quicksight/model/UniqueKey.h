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
    AWS_QUICKSIGHT_API UniqueKey();
    AWS_QUICKSIGHT_API UniqueKey(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API UniqueKey& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the column that is referenced in the <code>UniqueKey</code>
     * configuration.</p>
     */
    inline const Aws::Vector<Aws::String>& GetColumnNames() const{ return m_columnNames; }
    inline bool ColumnNamesHasBeenSet() const { return m_columnNamesHasBeenSet; }
    inline void SetColumnNames(const Aws::Vector<Aws::String>& value) { m_columnNamesHasBeenSet = true; m_columnNames = value; }
    inline void SetColumnNames(Aws::Vector<Aws::String>&& value) { m_columnNamesHasBeenSet = true; m_columnNames = std::move(value); }
    inline UniqueKey& WithColumnNames(const Aws::Vector<Aws::String>& value) { SetColumnNames(value); return *this;}
    inline UniqueKey& WithColumnNames(Aws::Vector<Aws::String>&& value) { SetColumnNames(std::move(value)); return *this;}
    inline UniqueKey& AddColumnNames(const Aws::String& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }
    inline UniqueKey& AddColumnNames(Aws::String&& value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(std::move(value)); return *this; }
    inline UniqueKey& AddColumnNames(const char* value) { m_columnNamesHasBeenSet = true; m_columnNames.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_columnNames;
    bool m_columnNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
