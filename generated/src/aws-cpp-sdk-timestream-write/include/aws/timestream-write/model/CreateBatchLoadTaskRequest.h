/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/TimestreamWriteRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/timestream-write/model/DataModelConfiguration.h>
#include <aws/timestream-write/model/DataSourceConfiguration.h>
#include <aws/timestream-write/model/ReportConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace TimestreamWrite
{
namespace Model
{

  /**
   */
  class CreateBatchLoadTaskRequest : public TimestreamWriteRequest
  {
  public:
    AWS_TIMESTREAMWRITE_API CreateBatchLoadTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchLoadTask"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p/>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p/>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p/>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p/>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p/>
     */
    inline CreateBatchLoadTaskRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p/>
     */
    inline CreateBatchLoadTaskRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateBatchLoadTaskRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    
    inline const DataModelConfiguration& GetDataModelConfiguration() const{ return m_dataModelConfiguration; }

    
    inline bool DataModelConfigurationHasBeenSet() const { return m_dataModelConfigurationHasBeenSet; }

    
    inline void SetDataModelConfiguration(const DataModelConfiguration& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = value; }

    
    inline void SetDataModelConfiguration(DataModelConfiguration&& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = std::move(value); }

    
    inline CreateBatchLoadTaskRequest& WithDataModelConfiguration(const DataModelConfiguration& value) { SetDataModelConfiguration(value); return *this;}

    
    inline CreateBatchLoadTaskRequest& WithDataModelConfiguration(DataModelConfiguration&& value) { SetDataModelConfiguration(std::move(value)); return *this;}


    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    
    inline const ReportConfiguration& GetReportConfiguration() const{ return m_reportConfiguration; }

    
    inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }

    
    inline void SetReportConfiguration(const ReportConfiguration& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = value; }

    
    inline void SetReportConfiguration(ReportConfiguration&& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = std::move(value); }

    
    inline CreateBatchLoadTaskRequest& WithReportConfiguration(const ReportConfiguration& value) { SetReportConfiguration(value); return *this;}

    
    inline CreateBatchLoadTaskRequest& WithReportConfiguration(ReportConfiguration&& value) { SetReportConfiguration(std::move(value)); return *this;}


    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const{ return m_targetDatabaseName; }

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline void SetTargetDatabaseName(const Aws::String& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = value; }

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline void SetTargetDatabaseName(Aws::String&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::move(value); }

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline void SetTargetDatabaseName(const char* value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName.assign(value); }

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetDatabaseName(const Aws::String& value) { SetTargetDatabaseName(value); return *this;}

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetDatabaseName(Aws::String&& value) { SetTargetDatabaseName(std::move(value)); return *this;}

    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetDatabaseName(const char* value) { SetTargetDatabaseName(value); return *this;}


    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline const Aws::String& GetTargetTableName() const{ return m_targetTableName; }

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline void SetTargetTableName(const Aws::String& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = value; }

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline void SetTargetTableName(Aws::String&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::move(value); }

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline void SetTargetTableName(const char* value) { m_targetTableNameHasBeenSet = true; m_targetTableName.assign(value); }

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetTableName(const Aws::String& value) { SetTargetTableName(value); return *this;}

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetTableName(Aws::String&& value) { SetTargetTableName(std::move(value)); return *this;}

    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline CreateBatchLoadTaskRequest& WithTargetTableName(const char* value) { SetTargetTableName(value); return *this;}


    /**
     * <p/>
     */
    inline long long GetRecordVersion() const{ return m_recordVersion; }

    /**
     * <p/>
     */
    inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetRecordVersion(long long value) { m_recordVersionHasBeenSet = true; m_recordVersion = value; }

    /**
     * <p/>
     */
    inline CreateBatchLoadTaskRequest& WithRecordVersion(long long value) { SetRecordVersion(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataModelConfiguration m_dataModelConfiguration;
    bool m_dataModelConfigurationHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    ReportConfiguration m_reportConfiguration;
    bool m_reportConfigurationHasBeenSet = false;

    Aws::String m_targetDatabaseName;
    bool m_targetDatabaseNameHasBeenSet = false;

    Aws::String m_targetTableName;
    bool m_targetTableNameHasBeenSet = false;

    long long m_recordVersion;
    bool m_recordVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
