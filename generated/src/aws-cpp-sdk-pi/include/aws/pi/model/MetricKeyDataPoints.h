/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/pi/model/ResponseResourceMetricKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/pi/model/DataPoint.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>A time-ordered series of data points, corresponding to a dimension of a
   * Performance Insights metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/MetricKeyDataPoints">AWS
   * API Reference</a></p>
   */
  class MetricKeyDataPoints
  {
  public:
    AWS_PI_API MetricKeyDataPoints();
    AWS_PI_API MetricKeyDataPoints(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API MetricKeyDataPoints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline const ResponseResourceMetricKey& GetKey() const{ return m_key; }

    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline void SetKey(const ResponseResourceMetricKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline void SetKey(ResponseResourceMetricKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline MetricKeyDataPoints& WithKey(const ResponseResourceMetricKey& value) { SetKey(value); return *this;}

    /**
     * <p>The dimensions to which the data points apply.</p>
     */
    inline MetricKeyDataPoints& WithKey(ResponseResourceMetricKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline const Aws::Vector<DataPoint>& GetDataPoints() const{ return m_dataPoints; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline bool DataPointsHasBeenSet() const { return m_dataPointsHasBeenSet; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline void SetDataPoints(const Aws::Vector<DataPoint>& value) { m_dataPointsHasBeenSet = true; m_dataPoints = value; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline void SetDataPoints(Aws::Vector<DataPoint>&& value) { m_dataPointsHasBeenSet = true; m_dataPoints = std::move(value); }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& WithDataPoints(const Aws::Vector<DataPoint>& value) { SetDataPoints(value); return *this;}

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& WithDataPoints(Aws::Vector<DataPoint>&& value) { SetDataPoints(std::move(value)); return *this;}

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& AddDataPoints(const DataPoint& value) { m_dataPointsHasBeenSet = true; m_dataPoints.push_back(value); return *this; }

    /**
     * <p>An array of timestamp-value pairs, representing measurements over a period of
     * time.</p>
     */
    inline MetricKeyDataPoints& AddDataPoints(DataPoint&& value) { m_dataPointsHasBeenSet = true; m_dataPoints.push_back(std::move(value)); return *this; }

  private:

    ResponseResourceMetricKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::Vector<DataPoint> m_dataPoints;
    bool m_dataPointsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
