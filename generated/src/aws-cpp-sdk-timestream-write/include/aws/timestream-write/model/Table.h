/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/TableStatus.h>
#include <aws/timestream-write/model/RetentionProperties.h>
#include <aws/core/utils/DateTime.h>
#include <aws/timestream-write/model/MagneticStoreWriteProperties.h>
#include <aws/timestream-write/model/Schema.h>
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
namespace TimestreamWrite
{
namespace Model
{

  /**
   * <p>Represents a database table in Timestream. Tables contain one or more related
   * time series. You can modify the retention duration of the memory store and the
   * magnetic store for a table. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/Table">AWS
   * API Reference</a></p>
   */
  class Table
  {
  public:
    AWS_TIMESTREAMWRITE_API Table();
    AWS_TIMESTREAMWRITE_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Table& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Table& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Table& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }
    inline Table& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline Table& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline Table& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline Table& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline Table& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline Table& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline const TableStatus& GetTableStatus() const{ return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(const TableStatus& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline void SetTableStatus(TableStatus&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }
    inline Table& WithTableStatus(const TableStatus& value) { SetTableStatus(value); return *this;}
    inline Table& WithTableStatus(TableStatus&& value) { SetTableStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline const RetentionProperties& GetRetentionProperties() const{ return m_retentionProperties; }
    inline bool RetentionPropertiesHasBeenSet() const { return m_retentionPropertiesHasBeenSet; }
    inline void SetRetentionProperties(const RetentionProperties& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = value; }
    inline void SetRetentionProperties(RetentionProperties&& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = std::move(value); }
    inline Table& WithRetentionProperties(const RetentionProperties& value) { SetRetentionProperties(value); return *this;}
    inline Table& WithRetentionProperties(RetentionProperties&& value) { SetRetentionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Table& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Table& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }
    inline Table& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}
    inline Table& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline const MagneticStoreWriteProperties& GetMagneticStoreWriteProperties() const{ return m_magneticStoreWriteProperties; }
    inline bool MagneticStoreWritePropertiesHasBeenSet() const { return m_magneticStoreWritePropertiesHasBeenSet; }
    inline void SetMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = value; }
    inline void SetMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = std::move(value); }
    inline Table& WithMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { SetMagneticStoreWriteProperties(value); return *this;}
    inline Table& WithMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { SetMagneticStoreWriteProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the table. </p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline Table& WithSchema(const Schema& value) { SetSchema(value); return *this;}
    inline Table& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    TableStatus m_tableStatus;
    bool m_tableStatusHasBeenSet = false;

    RetentionProperties m_retentionProperties;
    bool m_retentionPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    MagneticStoreWriteProperties m_magneticStoreWriteProperties;
    bool m_magneticStoreWritePropertiesHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
