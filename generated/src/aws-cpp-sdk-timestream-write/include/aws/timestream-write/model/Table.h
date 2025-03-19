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
    AWS_TIMESTREAMWRITE_API Table() = default;
    AWS_TIMESTREAMWRITE_API Table(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Table& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name that uniquely identifies this table.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Table& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream table.</p>
     */
    inline const Aws::String& GetTableName() const { return m_tableName; }
    inline bool TableNameHasBeenSet() const { return m_tableNameHasBeenSet; }
    template<typename TableNameT = Aws::String>
    void SetTableName(TableNameT&& value) { m_tableNameHasBeenSet = true; m_tableName = std::forward<TableNameT>(value); }
    template<typename TableNameT = Aws::String>
    Table& WithTableName(TableNameT&& value) { SetTableName(std::forward<TableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Timestream database that contains this table.</p>
     */
    inline const Aws::String& GetDatabaseName() const { return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    template<typename DatabaseNameT = Aws::String>
    void SetDatabaseName(DatabaseNameT&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::forward<DatabaseNameT>(value); }
    template<typename DatabaseNameT = Aws::String>
    Table& WithDatabaseName(DatabaseNameT&& value) { SetDatabaseName(std::forward<DatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the table:</p> <ul> <li> <p> <code>DELETING</code> - The
     * table is being deleted.</p> </li> <li> <p> <code>ACTIVE</code> - The table is
     * ready for use.</p> </li> </ul>
     */
    inline TableStatus GetTableStatus() const { return m_tableStatus; }
    inline bool TableStatusHasBeenSet() const { return m_tableStatusHasBeenSet; }
    inline void SetTableStatus(TableStatus value) { m_tableStatusHasBeenSet = true; m_tableStatus = value; }
    inline Table& WithTableStatus(TableStatus value) { SetTableStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The retention duration for the memory store and magnetic store.</p>
     */
    inline const RetentionProperties& GetRetentionProperties() const { return m_retentionProperties; }
    inline bool RetentionPropertiesHasBeenSet() const { return m_retentionPropertiesHasBeenSet; }
    template<typename RetentionPropertiesT = RetentionProperties>
    void SetRetentionProperties(RetentionPropertiesT&& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = std::forward<RetentionPropertiesT>(value); }
    template<typename RetentionPropertiesT = RetentionProperties>
    Table& WithRetentionProperties(RetentionPropertiesT&& value) { SetRetentionProperties(std::forward<RetentionPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream table was created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    Table& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the Timestream table was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const { return m_lastUpdatedTime; }
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    void SetLastUpdatedTime(LastUpdatedTimeT&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::forward<LastUpdatedTimeT>(value); }
    template<typename LastUpdatedTimeT = Aws::Utils::DateTime>
    Table& WithLastUpdatedTime(LastUpdatedTimeT&& value) { SetLastUpdatedTime(std::forward<LastUpdatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains properties to set on the table when enabling magnetic store
     * writes.</p>
     */
    inline const MagneticStoreWriteProperties& GetMagneticStoreWriteProperties() const { return m_magneticStoreWriteProperties; }
    inline bool MagneticStoreWritePropertiesHasBeenSet() const { return m_magneticStoreWritePropertiesHasBeenSet; }
    template<typename MagneticStoreWritePropertiesT = MagneticStoreWriteProperties>
    void SetMagneticStoreWriteProperties(MagneticStoreWritePropertiesT&& value) { m_magneticStoreWritePropertiesHasBeenSet = true; m_magneticStoreWriteProperties = std::forward<MagneticStoreWritePropertiesT>(value); }
    template<typename MagneticStoreWritePropertiesT = MagneticStoreWriteProperties>
    Table& WithMagneticStoreWriteProperties(MagneticStoreWritePropertiesT&& value) { SetMagneticStoreWriteProperties(std::forward<MagneticStoreWritePropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the table. </p>
     */
    inline const Schema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Schema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Schema>
    Table& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    TableStatus m_tableStatus{TableStatus::NOT_SET};
    bool m_tableStatusHasBeenSet = false;

    RetentionProperties m_retentionProperties;
    bool m_retentionPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime{};
    bool m_lastUpdatedTimeHasBeenSet = false;

    MagneticStoreWriteProperties m_magneticStoreWriteProperties;
    bool m_magneticStoreWritePropertiesHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
