/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-query/TimestreamQuery_EXPORTS.h>
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
namespace TimestreamQuery
{
namespace Model
{

  /**
   * <p>Destination for scheduled query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-query-2018-11-01/TimestreamDestination">AWS
   * API Reference</a></p>
   */
  class TimestreamDestination
  {
  public:
    AWS_TIMESTREAMQUERY_API TimestreamDestination();
    AWS_TIMESTREAMQUERY_API TimestreamDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API TimestreamDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMQUERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Timestream database name. </p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>Timestream database name. </p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>Timestream database name. </p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>Timestream database name. </p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>Timestream database name. </p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>Timestream database name. </p>
     */
    inline TimestreamDestination& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>Timestream database name. </p>
     */
    inline TimestreamDestination& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Timestream database name. </p>
     */
    inline TimestreamDestination& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>Timestream table name. </p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>Timestream table name. </p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>Timestream table name. </p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>Timestream table name. </p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>Timestream table name. </p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>Timestream table name. </p>
     */
    inline TimestreamDestination& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>Timestream table name. </p>
     */
    inline TimestreamDestination& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>Timestream table name. </p>
     */
    inline TimestreamDestination& WithTableName(const char* value) { SetTableName(value); return *this;}

  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamQuery
} // namespace Aws
