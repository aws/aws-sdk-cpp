/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/timestream-influxdb/model/DurationType.h>
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
   * <p>Duration for InfluxDB parameters in Timestream for InfluxDB.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/Duration">AWS
   * API Reference</a></p>
   */
  class Duration
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API Duration() = default;
    AWS_TIMESTREAMINFLUXDB_API Duration(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of duration for InfluxDB parameters.</p>
     */
    inline DurationType GetDurationType() const { return m_durationType; }
    inline bool DurationTypeHasBeenSet() const { return m_durationTypeHasBeenSet; }
    inline void SetDurationType(DurationType value) { m_durationTypeHasBeenSet = true; m_durationType = value; }
    inline Duration& WithDurationType(DurationType value) { SetDurationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of duration for InfluxDB parameters.</p>
     */
    inline long long GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(long long value) { m_valueHasBeenSet = true; m_value = value; }
    inline Duration& WithValue(long long value) { SetValue(value); return *this;}
    ///@}
  private:

    DurationType m_durationType{DurationType::NOT_SET};
    bool m_durationTypeHasBeenSet = false;

    long long m_value{0};
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
