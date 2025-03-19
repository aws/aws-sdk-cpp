/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/InfluxDBv2Parameters.h>
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
namespace TimestreamInfluxDB
{
namespace Model
{

  /**
   * <p>The parameters that comprise the parameter group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/Parameters">AWS
   * API Reference</a></p>
   */
  class Parameters
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API Parameters() = default;
    AWS_TIMESTREAMINFLUXDB_API Parameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Parameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>All the customer-modifiable InfluxDB v2 parameters in Timestream for
     * InfluxDB.</p>
     */
    inline const InfluxDBv2Parameters& GetInfluxDBv2() const { return m_influxDBv2; }
    inline bool InfluxDBv2HasBeenSet() const { return m_influxDBv2HasBeenSet; }
    template<typename InfluxDBv2T = InfluxDBv2Parameters>
    void SetInfluxDBv2(InfluxDBv2T&& value) { m_influxDBv2HasBeenSet = true; m_influxDBv2 = std::forward<InfluxDBv2T>(value); }
    template<typename InfluxDBv2T = InfluxDBv2Parameters>
    Parameters& WithInfluxDBv2(InfluxDBv2T&& value) { SetInfluxDBv2(std::forward<InfluxDBv2T>(value)); return *this;}
    ///@}
  private:

    InfluxDBv2Parameters m_influxDBv2;
    bool m_influxDBv2HasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
