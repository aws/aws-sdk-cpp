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
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration();
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API DataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMWRITE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline const DataSourceS3Configuration& GetDataSourceS3Configuration() const{ return m_dataSourceS3Configuration; }

    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline bool DataSourceS3ConfigurationHasBeenSet() const { return m_dataSourceS3ConfigurationHasBeenSet; }

    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline void SetDataSourceS3Configuration(const DataSourceS3Configuration& value) { m_dataSourceS3ConfigurationHasBeenSet = true; m_dataSourceS3Configuration = value; }

    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline void SetDataSourceS3Configuration(DataSourceS3Configuration&& value) { m_dataSourceS3ConfigurationHasBeenSet = true; m_dataSourceS3Configuration = std::move(value); }

    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline DataSourceConfiguration& WithDataSourceS3Configuration(const DataSourceS3Configuration& value) { SetDataSourceS3Configuration(value); return *this;}

    /**
     * <p>Configuration of an S3 location for a file which contains data to load.</p>
     */
    inline DataSourceConfiguration& WithDataSourceS3Configuration(DataSourceS3Configuration&& value) { SetDataSourceS3Configuration(std::move(value)); return *this;}


    
    inline const CsvConfiguration& GetCsvConfiguration() const{ return m_csvConfiguration; }

    
    inline bool CsvConfigurationHasBeenSet() const { return m_csvConfigurationHasBeenSet; }

    
    inline void SetCsvConfiguration(const CsvConfiguration& value) { m_csvConfigurationHasBeenSet = true; m_csvConfiguration = value; }

    
    inline void SetCsvConfiguration(CsvConfiguration&& value) { m_csvConfigurationHasBeenSet = true; m_csvConfiguration = std::move(value); }

    
    inline DataSourceConfiguration& WithCsvConfiguration(const CsvConfiguration& value) { SetCsvConfiguration(value); return *this;}

    
    inline DataSourceConfiguration& WithCsvConfiguration(CsvConfiguration&& value) { SetCsvConfiguration(std::move(value)); return *this;}


    /**
     * <p>This is currently CSV.</p>
     */
    inline const BatchLoadDataFormat& GetDataFormat() const{ return m_dataFormat; }

    /**
     * <p>This is currently CSV.</p>
     */
    inline bool DataFormatHasBeenSet() const { return m_dataFormatHasBeenSet; }

    /**
     * <p>This is currently CSV.</p>
     */
    inline void SetDataFormat(const BatchLoadDataFormat& value) { m_dataFormatHasBeenSet = true; m_dataFormat = value; }

    /**
     * <p>This is currently CSV.</p>
     */
    inline void SetDataFormat(BatchLoadDataFormat&& value) { m_dataFormatHasBeenSet = true; m_dataFormat = std::move(value); }

    /**
     * <p>This is currently CSV.</p>
     */
    inline DataSourceConfiguration& WithDataFormat(const BatchLoadDataFormat& value) { SetDataFormat(value); return *this;}

    /**
     * <p>This is currently CSV.</p>
     */
    inline DataSourceConfiguration& WithDataFormat(BatchLoadDataFormat&& value) { SetDataFormat(std::move(value)); return *this;}

  private:

    DataSourceS3Configuration m_dataSourceS3Configuration;
    bool m_dataSourceS3ConfigurationHasBeenSet = false;

    CsvConfiguration m_csvConfiguration;
    bool m_csvConfigurationHasBeenSet = false;

    BatchLoadDataFormat m_dataFormat;
    bool m_dataFormatHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamWrite
} // namespace Aws
