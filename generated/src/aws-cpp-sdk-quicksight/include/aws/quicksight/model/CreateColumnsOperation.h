/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/CalculatedColumn.h>
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
   * <p>A transform operation that creates calculated columns. Columns created in one
   * such operation form a lexical closure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CreateColumnsOperation">AWS
   * API Reference</a></p>
   */
  class CreateColumnsOperation
  {
  public:
    AWS_QUICKSIGHT_API CreateColumnsOperation();
    AWS_QUICKSIGHT_API CreateColumnsOperation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CreateColumnsOperation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Calculated columns to create.</p>
     */
    inline const Aws::Vector<CalculatedColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline void SetColumns(const Aws::Vector<CalculatedColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline void SetColumns(Aws::Vector<CalculatedColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& WithColumns(const Aws::Vector<CalculatedColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& WithColumns(Aws::Vector<CalculatedColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& AddColumns(const CalculatedColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>Calculated columns to create.</p>
     */
    inline CreateColumnsOperation& AddColumns(CalculatedColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CalculatedColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
