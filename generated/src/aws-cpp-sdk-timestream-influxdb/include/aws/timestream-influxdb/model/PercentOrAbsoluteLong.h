/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/timestream-influxdb/TimestreamInfluxDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Percent or Absolute Long for InfluxDB parameters</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/timestream-influxdb-2023-01-27/PercentOrAbsoluteLong">AWS
   * API Reference</a></p>
   */
  class PercentOrAbsoluteLong
  {
  public:
    AWS_TIMESTREAMINFLUXDB_API PercentOrAbsoluteLong() = default;
    AWS_TIMESTREAMINFLUXDB_API PercentOrAbsoluteLong(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API PercentOrAbsoluteLong& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TIMESTREAMINFLUXDB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Percent for InfluxDB parameters.</p>
     */
    inline const Aws::String& GetPercent() const { return m_percent; }
    inline bool PercentHasBeenSet() const { return m_percentHasBeenSet; }
    template<typename PercentT = Aws::String>
    void SetPercent(PercentT&& value) { m_percentHasBeenSet = true; m_percent = std::forward<PercentT>(value); }
    template<typename PercentT = Aws::String>
    PercentOrAbsoluteLong& WithPercent(PercentT&& value) { SetPercent(std::forward<PercentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Absolute long for InfluxDB parameters.</p>
     */
    inline long long GetAbsolute() const { return m_absolute; }
    inline bool AbsoluteHasBeenSet() const { return m_absoluteHasBeenSet; }
    inline void SetAbsolute(long long value) { m_absoluteHasBeenSet = true; m_absolute = value; }
    inline PercentOrAbsoluteLong& WithAbsolute(long long value) { SetAbsolute(value); return *this;}
    ///@}
  private:

    Aws::String m_percent;
    bool m_percentHasBeenSet = false;

    long long m_absolute{0};
    bool m_absoluteHasBeenSet = false;
  };

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
