/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-write/TimestreamWrite_EXPORTS.h>
#include <aws/timestream-write/model/DataSourceS3Configuration.h>
#include <aws/timestream-write/model/CsvConfiguration.h>
#include <aws/timestream-write/model/BatchLoadDataFormat.h>
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
   * <p>Defines configuration details about the data source.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-write-2018-11-01/DataSourceConfiguration">AWS
   * API Reference</a></p>
   */
  class DataSourceConfiguration
  {
  public:
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration() = default;
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline const DataSourceS3Configuration& GetDataSourceS3Configuration() const { return m_dataSourceS3Configuration; }
    inline bool DataSourceS3ConfigurationHasBeenSet() const { return m_dataSourceS3ConfigurationHasBeenSet; }
    template<typename DataSourceS3ConfigurationT = DataSourceS3Configuration>
    void SetDataSourceS3Configuration(DataSourceS3ConfigurationT&& value) { m_dataSourceS3ConfigurationHasBeenSet = true; m_dataSourceS3Configuration = std::forward<DataSourceS3ConfigurationT>(value); }
    template<typename DataSourceS3ConfigurationT = DataSourceS3Configuration>
    DataSourceConfiguration& WithDataSourceS3Configuration(DataSourceS3ConfigurationT&& value) { SetDataSourceS3Configuration(std::forward<DataSourceS3ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CsvConfiguration& GetCsvConfiguration() const { return m_csvConfiguration; }
    inline bool CsvConfigurationHasBeenSet() const { return m_csvConfigurationHasBeenSet; }
    template<typename CsvConfigurationT = CsvConfiguration>
    void SetCsvConfiguration(CsvConfigurationT&& value) { m_csvConfigurationHasBeenSet = true; m_csvConfiguration = std::forward<CsvConfigurationT>(value); }
    template<typename CsvConfigurationT = CsvConfiguration>
    DataSourceConfiguration& WithCsvConfiguration(CsvConfigurationT&& value) { SetCsvConfiguration(std::forward<CsvConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is currently CSV.</p>
     */
    inline BatchLoadDataFormat GetDataFormat() const { return m_dataFormat; }
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }
    inline void SetDataFormat(BatchLoadDataFormat value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }
    inline DataSourceConfiguration& WithDataFormat(BatchLoadDataFormat value) { SetDataFormat(value); return *this;}
    ///@}
  private:

    DataSourceS3Configuration m_dataSourceS3Configuration;
    bool m_dataSourceS3ConfigurationHasBeenSet = false;

    CsvConfiguration m_csvConfiguration;
    bool m_csvConfigurationHasBeenSet = false;

    BatchLoadDataFormat m_dataFormat{BatchLoadDataFormat::NOT_SET};
    bool m_dataFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
