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
   * <p>A physical table type built from the results of the custom SQL
   * query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/CustomSql">AWS
   * API Reference</a></p>
   */
  class CustomSql
  {
  public:
    AWS_QUICKSIGHT_API CustomSql();
    AWS_QUICKSIGHT_API CustomSql(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomSql& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const{ return m_dataSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(const Aws::String& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(Aws::String&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline void SetDataSourceArn(const char* value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline CustomSql& WithDataSourceArn(const Aws::String& value) { SetDataSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline CustomSql& WithDataSourceArn(Aws::String&& value) { SetDataSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline CustomSql& WithDataSourceArn(const char* value) { SetDataSourceArn(value); return *this;}


    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline CustomSql& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline CustomSql& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline CustomSql& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The SQL query.</p>
     */
    inline const Aws::String& GetSqlQuery() const{ return m_sqlQuery; }

    /**
     * <p>The SQL query.</p>
     */
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }

    /**
     * <p>The SQL query.</p>
     */
    inline void SetSqlQuery(const Aws::String& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = value; }

    /**
     * <p>The SQL query.</p>
     */
    inline void SetSqlQuery(Aws::String&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::move(value); }

    /**
     * <p>The SQL query.</p>
     */
    inline void SetSqlQuery(const char* value) { m_sqlQueryHasBeenSet = true; m_sqlQuery.assign(value); }

    /**
     * <p>The SQL query.</p>
     */
    inline CustomSql& WithSqlQuery(const Aws::String& value) { SetSqlQuery(value); return *this;}

    /**
     * <p>The SQL query.</p>
     */
    inline CustomSql& WithSqlQuery(Aws::String&& value) { SetSqlQuery(std::move(value)); return *this;}

    /**
     * <p>The SQL query.</p>
     */
    inline CustomSql& WithSqlQuery(const char* value) { SetSqlQuery(value); return *this;}


    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline const Aws::Vector<InputColumn>& GetColumns() const{ return m_columns; }

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline void SetColumns(const Aws::Vector<InputColumn>& value) { m_columnsHasBeenSet = true; m_columns = value; }

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline void SetColumns(Aws::Vector<InputColumn>&& value) { m_columnsHasBeenSet = true; m_columns = std::move(value); }

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline CustomSql& WithColumns(const Aws::Vector<InputColumn>& value) { SetColumns(value); return *this;}

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline CustomSql& WithColumns(Aws::Vector<InputColumn>&& value) { SetColumns(std::move(value)); return *this;}

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline CustomSql& AddColumns(const InputColumn& value) { m_columnsHasBeenSet = true; m_columns.push_back(value); return *this; }

    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline CustomSql& AddColumns(InputColumn&& value) { m_columnsHasBeenSet = true; m_columns.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_dataSourceArn;
    bool m_dataSourceArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_sqlQuery;
    bool m_sqlQueryHasBeenSet = false;

    Aws::Vector<InputColumn> m_columns;
    bool m_columnsHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
