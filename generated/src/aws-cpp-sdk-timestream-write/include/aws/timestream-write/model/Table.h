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
   * <p>Table represents a database table in Timestream. Tables contain one or more
   * related time series. You can modify the retention duration of the memory store
   * and the magnetic store for a table. </p><p><h3>See Also:</h3>   <a
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


    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline Table& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline Table& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline Table& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the Timestream table.</p>
     */
    inline const Aws::String& GetTableName() const{ return m_tableName; }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline void SetTableName(const Aws::String& value) { m_tableNameHasBeenSet = true; m_tableName = value; }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline void SetTableName(Aws::String&& value) { m_tableNameHasBeenSet = true; m_tableName = std::move(value); }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline void SetTableName(const char* value) { m_tableNameHasBeenSet = true; m_tableName.assign(value); }

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline Table& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline Table& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline Table& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline Table& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline Table& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline Table& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline const TableStatus& GetTableStatus() const{ return m_tableStatus; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline void SetTableStatus(const TableStatus& value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline void SetTableStatus(TableStatus&& value) { m_tableStatusHasBeenSet = true; m_tableStatus = std::move(value); }

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline Table& WithTableStatus(const TableStatus& value) { SetTableStatus(value); return *this;}

    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline Table& WithTableStatus(TableStatus&& value) { SetTableStatus(std::move(value)); return *this;}


    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline const RetentionProperties& GetRetentionProperties() const{ return m_retentionProperties; }

    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline bool RetentionPropertiesHasBeenSet() const { return m_retentionPropertiesHasBeenSet; }

    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline void SetRetentionProperties(const RetentionProperties& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = value; }

    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline void SetRetentionProperties(RetentionProperties&& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = std::move(value); }

    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline Table& WithRetentionProperties(const RetentionProperties& value) { SetRetentionProperties(value); return *this;}

    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline Table& WithRetentionProperties(RetentionProperties&& value) { SetRetentionProperties(std::move(value)); return *this;}


    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline Table& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline Table& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline Table& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline Table& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline const MagneticStoreWriteProperties& GetMagneticStoreWriteProperties() const{ return m_magneticStoreWriteProperties; }

    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline bool MagneticStoreWritePropertiesHasBeenSet() const { return m_magneticStoreWritePropertiesHasBeenSet; }

    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline void SetMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = value; }

    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline void SetMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = std::move(value); }

    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline Table& WithMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { SetMagneticStoreWriteProperties(value); return *this;}

    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline Table& WithMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { SetMagneticStoreWriteProperties(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
