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
    AWS_SAGEMAKER_API MonitoringDatasetFormat() = default;
    AWS_SAGEMAKER_API MonitoringDatasetFormat(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API MonitoringDatasetFormat& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CSV dataset used in the monitoring job.</p>
     */
    inline const MonitoringCsvDatasetFormat& GetCsv() const { return m_csv; }
    inline bool CsvHasBeenSet() const { return m_csvHasBeenSet; }
    template<typename CsvT = MonitoringCsvDatasetFormat>
    void SetCsv(CsvT&& value) { m_csvHasBeenSet = true; m_csv = std::forward<CsvT>(value); }
    template<typename CsvT = MonitoringCsvDatasetFormat>
    MonitoringDatasetFormat& WithCsv(CsvT&& value) { SetCsv(std::forward<CsvT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON dataset used in the monitoring job</p>
     */
    inline const MonitoringJsonDatasetFormat& GetJson() const { return m_json; }
    inline bool JsonHasBeenSet() const { return m_jsonHasBeenSet; }
    template<typename JsonT = MonitoringJsonDatasetFormat>
    void SetJson(JsonT&& value) { m_jsonHasBeenSet = true; m_json = std::forward<JsonT>(value); }
    template<typename JsonT = MonitoringJsonDatasetFormat>
    MonitoringDatasetFormat& WithJson(JsonT&& value) { SetJson(std::forward<JsonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Parquet dataset used in the monitoring job</p>
     */
    inline const MonitoringParquetDatasetFormat& GetParquet() const { return m_parquet; }
    inline bool ParquetHasBeenSet() const { return m_parquetHasBeenSet; }
    template<typename ParquetT = MonitoringParquetDatasetFormat>
    void SetParquet(ParquetT&& value) { m_parquetHasBeenSet = true; m_parquet = std::forward<ParquetT>(value); }
    template<typename ParquetT = MonitoringParquetDatasetFormat>
    MonitoringDatasetFormat& WithParquet(ParquetT&& value) { SetParquet(std::forward<ParquetT>(value)); return *this;}
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
