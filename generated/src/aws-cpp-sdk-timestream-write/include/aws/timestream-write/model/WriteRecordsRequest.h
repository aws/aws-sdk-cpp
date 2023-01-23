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


    /**
     * <p>The name of the Timestream database.</p>
     */
    inline const Aws::String& GetDatabaseName() const{ return m_databaseName; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline bool DatabaseNameHasBeenSet() const { return m_databaseNameHasBeenSet; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(const Aws::String& value) { m_databaseNameHasBeenSet = true; m_databaseName = value; }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(Aws::String&& value) { m_databaseNameHasBeenSet = true; m_databaseName = std::move(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline void SetDatabaseName(const char* value) { m_databaseNameHasBeenSet = true; m_databaseName.assign(value); }

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline WriteRecordsRequest& WithDatabaseName(const Aws::String& value) { SetDatabaseName(value); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline WriteRecordsRequest& WithDatabaseName(Aws::String&& value) { SetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream database.</p>
     */
    inline WriteRecordsRequest& WithDatabaseName(const char* value) { SetDatabaseName(value); return *this;}


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
    inline WriteRecordsRequest& WithTableName(const Aws::String& value) { SetTableName(value); return *this;}

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline WriteRecordsRequest& WithTableName(Aws::String&& value) { SetTableName(std::move(value)); return *this;}

    /**
     * <p>The name of the Timestream table.</p>
     */
    inline WriteRecordsRequest& WithTableName(const char* value) { SetTableName(value); return *this;}


    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline const Record& GetCommonAttributes() const{ return m_commonAttributes; }

    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline bool CommonAttributesHasBeenSet() const { return m_commonAttributesHasBeenSet; }

    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline void SetCommonAttributes(const Record& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = value; }

    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline void SetCommonAttributes(Record&& value) { m_commonAttributesHasBeenSet = true; m_commonAttributes = std::move(value); }

    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline WriteRecordsRequest& WithCommonAttributes(const Record& value) { SetCommonAttributes(value); return *this;}

    /**
     * <p>A record containing the common measure, dimension, time, and version
     * attributes shared across all the records in the request. The measure and
     * dimension attributes specified will be merged with the measure and dimension
     * attributes in the records object when the data is written into Timestream.
     * Dimensions may not overlap, or a <code>ValidationException</code> will be
     * thrown. In other words, a record must contain dimensions with unique names. </p>
     */
    inline WriteRecordsRequest& WithCommonAttributes(Record&& value) { SetCommonAttributes(std::move(value)); return *this;}


    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline const Aws::Vector<Record>& GetRecords() const{ return m_records; }

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline bool RecordsHasBeenSet() const { return m_recordsHasBeenSet; }

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline void SetRecords(const Aws::Vector<Record>& value) { m_recordsHasBeenSet = true; m_records = value; }

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline void SetRecords(Aws::Vector<Record>&& value) { m_recordsHasBeenSet = true; m_records = std::move(value); }

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline WriteRecordsRequest& WithRecords(const Aws::Vector<Record>& value) { SetRecords(value); return *this;}

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline WriteRecordsRequest& WithRecords(Aws::Vector<Record>&& value) { SetRecords(std::move(value)); return *this;}

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline WriteRecordsRequest& AddRecords(const Record& value) { m_recordsHasBeenSet = true; m_records.push_back(value); return *this; }

    /**
     * <p>An array of records containing the unique measure, dimension, time, and
     * version attributes for each time series data point. </p>
     */
    inline WriteRecordsRequest& AddRecords(Record&& value) { m_recordsHasBeenSet = true; m_records.push_back(std::move(value)); return *this; }

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
