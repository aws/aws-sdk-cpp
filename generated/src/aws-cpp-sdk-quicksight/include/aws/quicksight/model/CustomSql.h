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
    AWS_QUICKSIGHT_API CustomSql() = default;
    AWS_QUICKSIGHT_API CustomSql(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API CustomSql& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the data source.</p>
     */
    inline const Aws::String& GetDataSourceArn() const { return m_dataSourceArn; }
    inline bool DataSourceArnHasBeenSet() const { return m_dataSourceArnHasBeenSet; }
    template<typename DataSourceArnT = Aws::String>
    void SetDataSourceArn(DataSourceArnT&& value) { m_dataSourceArnHasBeenSet = true; m_dataSourceArn = std::forward<DataSourceArnT>(value); }
    template<typename DataSourceArnT = Aws::String>
    CustomSql& WithDataSourceArn(DataSourceArnT&& value) { SetDataSourceArn(std::forward<DataSourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A display name for the SQL query result.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CustomSql& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SQL query.</p>
     */
    inline const Aws::String& GetSqlQuery() const { return m_sqlQuery; }
    inline bool SqlQueryHasBeenSet() const { return m_sqlQueryHasBeenSet; }
    template<typename SqlQueryT = Aws::String>
    void SetSqlQuery(SqlQueryT&& value) { m_sqlQueryHasBeenSet = true; m_sqlQuery = std::forward<SqlQueryT>(value); }
    template<typename SqlQueryT = Aws::String>
    CustomSql& WithSqlQuery(SqlQueryT&& value) { SetSqlQuery(std::forward<SqlQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The column schema from the SQL query result set.</p>
     */
    inline const Aws::Vector<InputColumn>& GetColumns() const { return m_columns; }
    inline bool ColumnsHasBeenSet() const { return m_columnsHasBeenSet; }
    template<typename ColumnsT = Aws::Vector<InputColumn>>
    void SetColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns = std::forward<ColumnsT>(value); }
    template<typename ColumnsT = Aws::Vector<InputColumn>>
    CustomSql& WithColumns(ColumnsT&& value) { SetColumns(std::forward<ColumnsT>(value)); return *this;}
    template<typename ColumnsT = InputColumn>
    CustomSql& AddColumns(ColumnsT&& value) { m_columnsHasBeenSet = true; m_columns.emplace_back(std::forward<ColumnsT>(value)); return *this; }
    ///@}
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
