/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/model/InputColumn.h>
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
   * <p>A physical table type for relational data sources.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/RelationalTable">AWS
   * API Reference</a></p>
   */
  class RelationalTable
  {
  public:
    AWS_QUICKSIGHT_API RelationalTable();
    AWS_QUICKSIGHT_API RelationalTable(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API RelationalTable& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }
    inline RelationalTable& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}
    inline RelationalTable& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}
    inline RelationalTable& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The catalog associated with a table.</p>
     */
    inline const Aws::String& GetCatalog() const{ return m_catalog; }
    inline bool CatalogHasBeenSet() const { return m_catalogHasBeenSet; }
    inline void SetCatalog(const Aws::String& value) { m_catalogHasBeenSet = true; m_catalog = value; }
    inline void SetCatalog(Aws::String&& value) { m_catalogHasBeenSet = true; m_catalog = std::move(value); }
    inline void SetCatalog(const char* value) { m_catalogHasBeenSet = true; m_catalog.assign(value); }
    inline RelationalTable& WithCatalog(const Aws::String& value) { SetCatalog(value); return *this;}
    inline RelationalTable& WithCatalog(Aws::String&& value) { SetCatalog(std::move(value)); return *this;}
    inline RelationalTable& WithCatalog(const char* value) { SetCatalog(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema name. This name applies to certain relational database
     * engines.</p>
     */
    inline const Aws::String& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Aws::String& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Aws::String&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline void SetSchema(const char* value) { m_schemaHasBeenSet = true; m_schema.assign(value); }
    inline RelationalTable& WithSchema(const Aws::String& value) { SetSchema(value); return *this;}
    inline RelationalTable& WithSchema(Aws::String&& value) { SetSchema(std::move(value)); return *this;}
    inline RelationalTable& WithSchema(const char* value) { SetSchema(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the relational table.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline RelationalTable& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline RelationalTable& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline RelationalTable& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column schema of the table.</p>
     */
    inline const Aws::Vector<InputColumn>& GetInputColumns() const{ return m_inputColumns; }
    inline bool InputColumnsHasBeenSet() const { return m_inputColumnsHasBeenSet; }
    inline void SetInputColumns(const Aws::Vector<InputColumn>& value) { m_inputColumnsHasBeenSet = true; m_inputColumns = value; }
    inline void SetInputColumns(Aws::Vector<InputColumn>&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns = std::move(value); }
    inline RelationalTable& WithInputColumns(const Aws::Vector<InputColumn>& value) { SetInputColumns(value); return *this;}
    inline RelationalTable& WithInputColumns(Aws::Vector<InputColumn>&& value) { SetInputColumns(std::move(value)); return *this;}
    inline RelationalTable& AddInputColumns(const InputColumn& value) { m_inputColumnsHasBeenSet = true; m_inputColumns.push_back(value); return *this; }
    inline RelationalTable& AddInputColumns(InputColumn&& value) { m_inputColumnsHasBeenSet = true; m_inputColumns.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::String m_catalog;
    bool m_catalogHasBeenSet = false;

    Aws::String m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<InputColumn> m_inputColumns;
    bool m_inputColumnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
