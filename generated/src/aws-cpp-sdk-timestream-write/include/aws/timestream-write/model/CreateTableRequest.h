/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/RetentionProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/timestream-write/model/MagneticStoreWriteProperties.h>
#include <aws/timestream-write/model/Schema.h>
#include <aws/timestream-write/model/Tag.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class CreateTableRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API CreateTableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTable"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }
    inline CreateTableRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline CreateTableRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline CreateTableRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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
    inline CreateTableRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline CreateTableRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline CreateTableRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration for which your time-series data must be stored in the memory
     * store and the magnetic store.</p>
     */
    inline const RetentionProperties& GetRetentionProperties() const{ return m_retentionProperties; }
    inline bool RetentionPropertiesHasBeenSet() const { return m_retentionPropertiesHasBeenSet; }
    inline void SetRetentionProperties(const RetentionProperties& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = value; }
    inline void SetRetentionProperties(RetentionProperties&& value) { m_retentionPropertiesHasBeenSet = true; m_retentionProperties = std::move(value); }
    inline CreateTableRequest& WithRetentionProperties(const RetentionProperties& value) { SetRetentionProperties(value); return *this;}
    inline CreateTableRequest& WithRetentionProperties(RetentionProperties&& value) { SetRetentionProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of key-value pairs to label the table. </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateTableRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateTableRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateTableRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateTableRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
    inline CreateTableRequest& WithMagneticStoreWriteProperties(const MagneticStoreWriteProperties& value) { SetMagneticStoreWriteProperties(value); return *this;}
    inline CreateTableRequest& WithMagneticStoreWriteProperties(MagneticStoreWriteProperties&& value) { SetMagneticStoreWriteProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The schema of the table. </p>
     */
    inline const Schema& GetSchema() const{ return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }
    inline CreateTableRequest& WithSchema(const Schema& value) { SetSchema(value); return *this;}
    inline CreateTableRequest& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    RetentionProperties m_retentionProperties;
    bool m_retentionPropertiesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    MagneticStoreWriteProperties m_magneticStoreWriteProperties;
    bool m_magneticStoreWritePropertiesHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
