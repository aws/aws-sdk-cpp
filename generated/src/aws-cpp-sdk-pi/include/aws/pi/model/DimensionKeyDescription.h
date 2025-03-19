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
    AWS_PI_API DimensionKeyDescription() = default;
    AWS_PI_API DimensionKeyDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API DimensionKeyDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PI_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A map of name-value pairs for the dimensions in the group.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetDimensions() const { return m_dimensions; }
    inline bool DimensionsHasBeenSet() const { return m_dimensionsHasBeenSet; }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    void SetDimensions(DimensionsT&& value) { m_dimensionsHasBeenSet = true; m_dimensions = std::forward<DimensionsT>(value); }
    template<typename DimensionsT = Aws::Map<Aws::String, Aws::String>>
    DimensionKeyDescription& WithDimensions(DimensionsT&& value) { SetDimensions(std::forward<DimensionsT>(value)); return *this;}
    template<typename DimensionsKeyT = Aws::String, typename DimensionsValueT = Aws::String>
    DimensionKeyDescription& AddDimensions(DimensionsKeyT&& key, DimensionsValueT&& value) {
      m_dimensionsHasBeenSet = true; m_dimensions.emplace(std::forward<DimensionsKeyT>(key), std::forward<DimensionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The aggregated metric value for the dimensions, over the requested time
     * range.</p>
     */
    inline double GetTotal() const { return m_total; }
    inline bool TotalHasBeenSet() const { return m_totalHasBeenSet; }
    inline void SetTotal(double value) { m_totalHasBeenSet = true; m_total = value; }
    inline DimensionKeyDescription& WithTotal(double value) { SetTotal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map that contains the value for each additional metric.</p>
     */
    inline const Aws::Map<Aws::String, double>& GetAdditionalMetrics() const { return m_additionalMetrics; }
    inline bool AdditionalMetricsHasBeenSet() const { return m_additionalMetricsHasBeenSet; }
    template<typename AdditionalMetricsT = Aws::Map<Aws::String, double>>
    void SetAdditionalMetrics(AdditionalMetricsT&& value) { m_additionalMetricsHasBeenSet = true; m_additionalMetrics = std::forward<AdditionalMetricsT>(value); }
    template<typename AdditionalMetricsT = Aws::Map<Aws::String, double>>
    DimensionKeyDescription& WithAdditionalMetrics(AdditionalMetricsT&& value) { SetAdditionalMetrics(std::forward<AdditionalMetricsT>(value)); return *this;}
    inline DimensionKeyDescription& AddAdditionalMetrics(Aws::String key, double value) {
      m_additionalMetricsHasBeenSet = true; m_additionalMetrics.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>If <code>PartitionBy</code> was specified, <code>PartitionKeys</code>
     * contains the dimensions that were.</p>
     */
    inline const Aws::Vector<double>& GetPartitions() const { return m_partitions; }
    inline bool PartitionsHasBeenSet() const { return m_partitionsHasBeenSet; }
    template<typename PartitionsT = Aws::Vector<double>>
    void SetPartitions(PartitionsT&& value) { m_partitionsHasBeenSet = true; m_partitions = std::forward<PartitionsT>(value); }
    template<typename PartitionsT = Aws::Vector<double>>
    DimensionKeyDescription& WithPartitions(PartitionsT&& value) { SetPartitions(std::forward<PartitionsT>(value)); return *this;}
    inline DimensionKeyDescription& AddPartitions(double value) { m_partitionsHasBeenSet = true; m_partitions.push_back(value); return *this; }
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_dimensions;
    bool m_dimensionsHasBeenSet = false;

    double m_total{0.0};
    bool m_totalHasBeenSet = false;

    Aws::Map<Aws::String, double> m_additionalMetrics;
    bool m_additionalMetricsHasBeenSet = false;

    Aws::Vector<double> m_partitions;
    bool m_partitionsHasBeenSet = false;
  };

} // namespace Model
} // namespace PI
} // namespace Aws
