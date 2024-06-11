﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DataSetSchema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/ColumnGroupSchema.h>
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
   * <p>Dataset configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/DataSetConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSetConfiguration
  {
  public:
    AWS_QUICKSIGHT_API DataSetConfiguration();
    AWS_QUICKSIGHT_API DataSetConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API DataSetConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Placeholder.</p>
     */
    inline const Aws::String& GetPlaceholder() const{ return m_placeholder; }
    inline bool PlaceholderHasBeenSet() const { return m_placeholderHasBeenSet; }
    inline void SetPlaceholder(const Aws::String& value) { m_placeholderHasBeenSet = true; m_placeholder = value; }
    inline void SetPlaceholder(Aws::String&& value) { m_placeholderHasBeenSet = true; m_placeholder = std::move(value); }
    inline void SetPlaceholder(const char* value) { m_placeholderHasBeenSet = true; m_placeholder.assign(value); }
    inline DataSetConfiguration& WithPlaceholder(const Aws::String& value) { SetPlaceholder(value); return *this;}
    inline DataSetConfiguration& WithPlaceholder(Aws::String&& value) { SetPlaceholder(std::move(value)); return *this;}
    inline DataSetConfiguration& WithPlaceholder(const char* value) { SetPlaceholder(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Dataset schema.</p>
     */
    inline const DataSetSchema& GetDataSetSchema() const{ return m_dataSetSchema; }
    inline bool DataSetSchemaHasBeenSet() const { return m_dataSetSchemaHasBeenSet; }
    inline void SetDataSetSchema(const DataSetSchema& value) { m_dataSetSchemaHasBeenSet = true; m_dataSetSchema = value; }
    inline void SetDataSetSchema(DataSetSchema&& value) { m_dataSetSchemaHasBeenSet = true; m_dataSetSchema = std::move(value); }
    inline DataSetConfiguration& WithDataSetSchema(const DataSetSchema& value) { SetDataSetSchema(value); return *this;}
    inline DataSetConfiguration& WithDataSetSchema(DataSetSchema&& value) { SetDataSetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A structure containing the list of column group schemas.</p>
     */
    inline const Aws::Vector<ColumnGroupSchema>& GetColumnGroupSchemaList() const{ return m_columnGroupSchemaList; }
    inline bool ColumnGroupSchemaListHasBeenSet() const { return m_columnGroupSchemaListHasBeenSet; }
    inline void SetColumnGroupSchemaList(const Aws::Vector<ColumnGroupSchema>& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList = value; }
    inline void SetColumnGroupSchemaList(Aws::Vector<ColumnGroupSchema>&& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList = std::move(value); }
    inline DataSetConfiguration& WithColumnGroupSchemaList(const Aws::Vector<ColumnGroupSchema>& value) { SetColumnGroupSchemaList(value); return *this;}
    inline DataSetConfiguration& WithColumnGroupSchemaList(Aws::Vector<ColumnGroupSchema>&& value) { SetColumnGroupSchemaList(std::move(value)); return *this;}
    inline DataSetConfiguration& AddColumnGroupSchemaList(const ColumnGroupSchema& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList.push_back(value); return *this; }
    inline DataSetConfiguration& AddColumnGroupSchemaList(ColumnGroupSchema&& value) { m_columnGroupSchemaListHasBeenSet = true; m_columnGroupSchemaList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_placeholder;
    bool m_placeholderHasBeenSet = false;

    DataSetSchema m_dataSetSchema;
    bool m_dataSetSchemaHasBeenSet = false;

    Aws::Vector<ColumnGroupSchema> m_columnGroupSchemaList;
    bool m_columnGroupSchemaListHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
