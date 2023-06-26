/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pi/PI_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>An object that includes the requested dimension key values and aggregated
   * metric values within a dimension group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pi-2018-02-27/DimensionKeyDescription">AWS
   * API Reference</a></p>
   */
  class DimensionKeyDescription
  {
  public:
    AWS_PI_API DimensionKeyDescription();
    AWS_PI_API DimensionKeyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DimensionKeyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const{ return m_dimensions; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline void SetDimensions(const Aws::Map<Aws::String, Aws::String>& value) { m_dimensionsHasBeenSet = true; m_dimensions = value; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline void SetDimensions(Aws::Map<Aws::String, Aws::String>&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::move(value); }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& WithDimensions(const Aws::Map<Aws::String, Aws::String>& value) { SetDimensions(value); return *this;}

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& WithDimensions(Aws::Map<Aws::String, Aws::String>&& value) { SetDimensions(std::move(value)); return *this;}

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const Aws::String& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, const Aws::String& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const Aws::String& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const char* key, Aws::String&& value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(Aws::String&& key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline DimensionKeyDescription& AddDimensions(const char* key, const char* value) { m_dimensionsHasBeenSet = true; m_dimensions.emplace(key, value); return *this; }


    /**
     * <p>The aggregated metric value for the dimensions, over the requested time
     * range.</p>
     */
    inline double GetTotal() const{ return m_total; }

    /**
     * <p>The aggregated metric value for the dimensions, over the requested time
     * range.</p>
     */
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }

    /**
     * <p>The aggregated metric value for the dimensions, over the requested time
     * range.</p>
     */
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }

    /**
     * <p>The aggregated metric value for the dimensions, over the requested time
     * range.</p>
     */
    inline DimensionKeyDescription& WithTotal(double value) { SetTotal(value); return *this;}


    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAdditionalMetrics() const{ return m_additionalMetrics; }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline bool AdditionalMetricsHasBeenSet() const { return m_additionalMetricsHasBeenSet; }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline void SetAdditionalMetrics(const Aws::Map<Aws::String, double>& value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics = value; }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline void SetAdditionalMetrics(Aws::Map<Aws::String, double>&& value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics = std::move(value); }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline DimensionKeyDescription& WithAdditionalMetrics(const Aws::Map<Aws::String, double>& value) { SetAdditionalMetrics(value); return *this;}

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline DimensionKeyDescription& WithAdditionalMetrics(Aws::Map<Aws::String, double>&& value) { SetAdditionalMetrics(std::move(value)); return *this;}

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline DimensionKeyDescription& AddAdditionalMetrics(const Aws::String& key, double value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics.emplace(key, value); return *this; }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline DimensionKeyDescription& AddAdditionalMetrics(Aws::String&& key, double value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline DimensionKeyDescription& AddAdditionalMetrics(const char* key, double value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics.emplace(key, value); return *this; }


    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline const Aws::Vector<double>& GetPartitions() const{ return m_partitions; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline bool PartitionsHasBeenSet() const { return m_partitionsHasBeenSet; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline void SetPartitions(const Aws::Vector<double>& value) { m_partitionsHasBeenSet = true; m_partitions = value; }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline void SetPartitions(Aws::Vector<double>&& value) { m_partitionsHasBeenSet = true; m_partitions = std::move(value); }

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& WithPartitions(const Aws::Vector<double>& value) { SetPartitions(value); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& WithPartitions(Aws::Vector<double>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline DimensionKeyDescription& AddPartitions(double value) { m_partitionsHasBeenSet = true; m_partitions.push_back(value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    double m_total;
    bool m_totalHasBeenSet = false;

    Aws::Map<Aws::String, double> m_additionalMetrics;
    bool m_additionalMetricsHasBeenSet = false;

    Aws::Vector<double> m_partitions;
    bool m_partitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
