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
    AWS_TIMESTREAMWRITE_API CreateBatchLoadTaskRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBatchLoadTask"; }

    AWS_TIMESTREAMWRITE_API Aws::String SerializePayload() const override;

    AWS_TIMESTREAMWRITE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateBatchLoadTaskRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataModelConfiguration& GetDataModelConfiguration() const { return m_dataModelConfiguration; }
    inline bool DataModelConfigurationHasBeenSet() const { return m_dataModelConfigurationHasBeenSet; }
    template<typename DataModelConfigurationT = DataModelConfiguration>
    void SetDataModelConfiguration(DataModelConfigurationT&& value) { m_dataModelConfigurationHasBeenSet = true; m_dataModelConfiguration = std::forward<DataModelConfigurationT>(value); }
    template<typename DataModelConfigurationT = DataModelConfiguration>
    CreateBatchLoadTaskRequest& WithDataModelConfiguration(DataModelConfigurationT&& value) { SetDataModelConfiguration(std::forward<DataModelConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines configuration details about the data source for a batch load
     * task.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    void SetDataSourceConfiguration(DataSourceConfigurationT&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value); }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    CreateBatchLoadTaskRequest& WithDataSourceConfiguration(DataSourceConfigurationT&& value) { SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ReportConfiguration& GetReportConfiguration() const { return m_reportConfiguration; }
    inline bool ReportConfigurationHasBeenSet() const { return m_reportConfigurationHasBeenSet; }
    template<typename ReportConfigurationT = ReportConfiguration>
    void SetReportConfiguration(ReportConfigurationT&& value) { m_reportConfigurationHasBeenSet = true; m_reportConfiguration = std::forward<ReportConfigurationT>(value); }
    template<typename ReportConfigurationT = ReportConfiguration>
    CreateBatchLoadTaskRequest& WithReportConfiguration(ReportConfigurationT&& value) { SetReportConfiguration(std::forward<ReportConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target Timestream database for a batch load task.</p>
     */
    inline const Aws::String& GetTargetDatabaseName() const { return m_targetDatabaseName; }
    inline bool TargetDatabaseNameHasBeenSet() const { return m_targetDatabaseNameHasBeenSet; }
    template<typename TargetDatabaseNameT = Aws::String>
    void SetTargetDatabaseName(TargetDatabaseNameT&& value) { m_targetDatabaseNameHasBeenSet = true; m_targetDatabaseName = std::forward<TargetDatabaseNameT>(value); }
    template<typename TargetDatabaseNameT = Aws::String>
    CreateBatchLoadTaskRequest& WithTargetDatabaseName(TargetDatabaseNameT&& value) { SetTargetDatabaseName(std::forward<TargetDatabaseNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Target Timestream table for a batch load task.</p>
     */
    inline const Aws::String& GetTargetTableName() const { return m_targetTableName; }
    inline bool TargetTableNameHasBeenSet() const { return m_targetTableNameHasBeenSet; }
    template<typename TargetTableNameT = Aws::String>
    void SetTargetTableName(TargetTableNameT&& value) { m_targetTableNameHasBeenSet = true; m_targetTableName = std::forward<TargetTableNameT>(value); }
    template<typename TargetTableNameT = Aws::String>
    CreateBatchLoadTaskRequest& WithTargetTableName(TargetTableNameT&& value) { SetTargetTableName(std::forward<TargetTableNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline long long GetRecordVersion() const { return m_recordVersion; }
    inline bool RecordVersionHasBeenSet() const { return m_recordVersionHasBeenSet; }
    inline void SetRecordVersion(long long value) { m_recordVersionHasBeenSet = true; m_recordVersion = value; }
    inline CreateBatchLoadTaskRequest& WithRecordVersion(long long value) { SetRecordVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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

    long long m_recordVersion{0};
    bool m_recordVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
