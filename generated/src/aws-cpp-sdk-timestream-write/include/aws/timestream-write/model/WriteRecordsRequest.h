/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/Record.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class WriteRecordsRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API WriteRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "WriteRecords"; }

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
    inline WriteRecordsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}
    inline WriteRecordsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}
    inline WriteRecordsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}
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
    inline WriteRecordsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}
    inline WriteRecordsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}
    inline WriteRecordsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A record that contains the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline const Record& GetCommonAttributes() const{ return m_commonAttributes; }
    inline bool CommonAttributesHasBeenSet() const { return m_commonAttributesHasBeenSet; }
    inline void SetCommonAttributes(const Record& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = value; }
    inline void SetCommonAttributes(Record&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = std::move(value); }
    inline WriteRecordsRequest& WithCommonAttributes(const Record& value) { SetCommonAttributes(value); return *this;}
    inline WriteRecordsRequest& WithCommonAttributes(Record&& value) { SetCommonAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of records that contain the unique measure, dimension, time, and
     * version attributes for each time-series data point. </p>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }
    inline WriteRecordsRequest& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}
    inline WriteRecordsRequest& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}
    inline WriteRecordsRequest& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }
    inline WriteRecordsRequest& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_databaseName;
    bool m_databaseNameHasBeenSet = false;

    Aws::String m_tableName;
    bool m_tableNameHasBeenSet = false;

    Record m_commonAttributes;
    bool m_commonAttributesHasBeenSet = false;

    Aws::Vector<Record> m_records;
    bool m_recordsHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
