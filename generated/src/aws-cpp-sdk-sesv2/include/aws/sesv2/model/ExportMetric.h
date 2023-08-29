/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/sesv2/model/Metric.h>
#include <aws/sesv2/model/MetricAggregation.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>An object that contains a mapping between a <code>Metric</code> and
   * <code>MetricAggregation</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/ExportMetric">AWS
   * API Reference</a></p>
   */
  class ExportMetric
  {
  public:
    AWS_SESV2_API ExportMetric();
    AWS_SESV2_API ExportMetric(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API ExportMetric& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Metric& GetName() const{ return m_name; }

    
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    
    inline void SetName(const Metric& value) { m_nameHasBeenSet = true; m_name = value; }

    
    inline void SetName(Metric&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    
    inline ExportMetric& WithName(const Metric& value) { SetName(value); return *this;}

    
    inline ExportMetric& WithName(Metric&& value) { SetName(std::move(value)); return *this;}


    
    inline const MetricAggregation& GetAggregation() const{ return m_aggregation; }

    
    inline bool AggregationHasBeenSet() const { return m_aggregationHasBeenSet; }

    
    inline void SetAggregation(const MetricAggregation& value) { m_aggregationHasBeenSet = true; m_aggregation = value; }

    
    inline void SetAggregation(MetricAggregation&& value) { m_aggregationHasBeenSet = true; m_aggregation = std::move(value); }

    
    inline ExportMetric& WithAggregation(const MetricAggregation& value) { SetAggregation(value); return *this;}

    
    inline ExportMetric& WithAggregation(MetricAggregation&& value) { SetAggregation(std::move(value)); return *this;}

  private:

    Metric m_name;
    bool m_nameHasBeenSet = false;

    MetricAggregation m_aggregation;
    bool m_aggregationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
