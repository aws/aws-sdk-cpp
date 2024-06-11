/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/MonitoringCsvDatasetFormat.h>
#include <aws/sagemaker/model/MonitoringJsonDatasetFormat.h>
#include <aws/sagemaker/model/MonitoringParquetDatasetFormat.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Represents the dataset format used when running a monitoring
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/MonitoringDatasetFormat">AWS
   * API Reference</a></p>
   */
  class MonitoringDatasetFormat
  {
  public:
    AWS_SAGEMAKER_API MonitoringDatasetFormat();
    AWS_SAGEMAKER_API MonitoringDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline const MonitoringCsvDatasetFormat& GetCsv() const{ return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    inline void SetCsv(const MonitoringCsvDatasetFormat& value) { m_csvHasBeenSet = true; m_csv = value; }
    inline void SetCsv(MonitoringCsvDatasetFormat&& value) { m_csvHasBeenSet = true; m_csv = std::move(value); }
    inline MonitoringDatasetFormat& WithCsv(const MonitoringCsvDatasetFormat& value) { SetCsv(value); return *this;}
    inline MonitoringDatasetFormat& WithCsv(MonitoringCsvDatasetFormat&& value) { SetCsv(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline const MonitoringJsonDatasetFormat& GetJson() const{ return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    inline void SetJson(const MonitoringJsonDatasetFormat& value) { m_jsonHasBeenSet = true; m_json = value; }
    inline void SetJson(MonitoringJsonDatasetFormat&& value) { m_jsonHasBeenSet = true; m_json = std::move(value); }
    inline MonitoringDatasetFormat& WithJson(const MonitoringJsonDatasetFormat& value) { SetJson(value); return *this;}
    inline MonitoringDatasetFormat& WithJson(MonitoringJsonDatasetFormat&& value) { SetJson(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline const MonitoringParquetDatasetFormat& GetParquet() const{ return m_parquet; }
    inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }
    inline void SetParquet(const MonitoringParquetDatasetFormat& value) { m_parquetHasBeenSet = true; m_parquet = value; }
    inline void SetParquet(MonitoringParquetDatasetFormat&& value) { m_parquetHasBeenSet = true; m_parquet = std::move(value); }
    inline MonitoringDatasetFormat& WithParquet(const MonitoringParquetDatasetFormat& value) { SetParquet(value); return *this;}
    inline MonitoringDatasetFormat& WithParquet(MonitoringParquetDatasetFormat&& value) { SetParquet(std::move(value)); return *this;}
    ///@}
  private:

    MonitoringCsvDatasetFormat m_csv;
    bool m_csvHasBeenSet = false;

    MonitoringJsonDatasetFormat m_json;
    bool m_jsonHasBeenSet = false;

    MonitoringParquetDatasetFormat m_parquet;
    bool m_parquetHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
