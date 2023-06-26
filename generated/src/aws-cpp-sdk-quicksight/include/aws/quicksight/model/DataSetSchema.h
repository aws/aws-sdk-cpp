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
    AWS_QUICKSIGHT_API DataSetSchema();
    AWS_QUICKSIGHT_API DataSetSchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetSchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline const Aws::Vector<ColumnSchema>& GetColumnSchemaList() const{ return m_columnSchemaList; }

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline bool ColumnSchemaListHasBeenSet() const { return m_columnSchemaListHasBeenSet; }

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline void SetColumnSchemaList(const Aws::Vector<ColumnSchema>& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList = value; }

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline void SetColumnSchemaList(Aws::Vector<ColumnSchema>&& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList = std::move(value); }

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline DataSetSchema& WithColumnSchemaList(const Aws::Vector<ColumnSchema>& value) { SetColumnSchemaList(value); return *this;}

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline DataSetSchema& WithColumnSchemaList(Aws::Vector<ColumnSchema>&& value) { SetColumnSchemaList(std::move(value)); return *this;}

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline DataSetSchema& AddColumnSchemaList(const ColumnSchema& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList.push_back(value); return *this; }

    /**
     * <p>A structure containing the list of column schemas.</p>
     */
    inline DataSetSchema& AddColumnSchemaList(ColumnSchema&& value) { m_columnSchemaListHasBeenSet = true; m_columnSchemaList.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnSchema> m_columnSchemaList;
    bool m_columnSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
