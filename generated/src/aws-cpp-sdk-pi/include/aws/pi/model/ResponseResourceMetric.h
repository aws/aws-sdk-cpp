/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
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
namespace PI
{
namespace Model
{

  /**
   * <p>An object that contains the full name, description, and unit of a metric.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/ResponseResourceMetric">AWS
   * API Reference</a></p>
   */
  class ResponseResourceMetric
  {
  public:
    AWS_PI_API ResponseResourceMetric();
    AWS_PI_API ResponseResourceMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API ResponseResourceMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The full name of the metric.</p>
     */
    inline const Aws::String& GetMetric() const{ return m_metric; }
    inline bool MetricHasBeenSet() const { return m_metricHasBeenSet; }
    inline void SetMetric(const Aws::String& value) { m_metricHasBeenSet = true; m_metric = value; }
    inline void SetMetric(Aws::String&& value) { m_metricHasBeenSet = true; m_metric = std::move(value); }
    inline void SetMetric(const char* value) { m_metricHasBeenSet = true; m_metric.assign(value); }
    inline ResponseResourceMetric& WithMetric(const Aws::String& value) { SetMetric(value); return *this;}
    inline ResponseResourceMetric& WithMetric(Aws::String&& value) { SetMetric(std::move(value)); return *this;}
    inline ResponseResourceMetric& WithMetric(const char* value) { SetMetric(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the metric.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ResponseResourceMetric& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ResponseResourceMetric& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ResponseResourceMetric& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit of the metric.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline ResponseResourceMetric& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline ResponseResourceMetric& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline ResponseResourceMetric& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}
  private:

    Aws::String m_metric;
    bool m_metricHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
