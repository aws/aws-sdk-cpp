/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A timestamp, and a single numerical value, which together represent a
   * measurement at a particular point in time.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DataPoint">AWS API
   * Reference</a></p>
   */
  class DataPoint
  {
  public:
    AWS_PI_API DataPoint();
    AWS_PI_API DataPoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DataPoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline DataPoint& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The time, in epoch format, associated with a particular
     * <code>Value</code>.</p>
     */
    inline DataPoint& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The actual value associated with a particular <code>Timestamp</code>.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The actual value associated with a particular <code>Timestamp</code>.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The actual value associated with a particular <code>Timestamp</code>.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The actual value associated with a particular <code>Timestamp</code>.</p>
     */
    inline DataPoint& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
