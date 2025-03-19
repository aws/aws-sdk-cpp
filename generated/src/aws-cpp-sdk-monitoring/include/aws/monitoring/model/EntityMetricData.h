/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/monitoring/model/Entity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/MetricDatum.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{

  /**
   * <p>A set of metrics that are associated with an entity, such as a specific
   * service or resource. Contains the entity and the list of metric data associated
   * with it.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/EntityMetricData">AWS
   * API Reference</a></p>
   */
  class EntityMetricData
  {
  public:
    AWS_CLOUDWATCH_API EntityMetricData() = default;
    AWS_CLOUDWATCH_API EntityMetricData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API EntityMetricData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The entity associated with the metrics.</p>
     */
    inline const Entity& GetEntity() const { return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    template<typename EntityT = Entity>
    void SetEntity(EntityT&& value) { m_entityHasBeenSet = true; m_entity = std::forward<EntityT>(value); }
    template<typename EntityT = Entity>
    EntityMetricData& WithEntity(EntityT&& value) { SetEntity(std::forward<EntityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric data.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const { return m_metricData; }
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }
    template<typename MetricDataT = Aws::Vector<MetricDatum>>
    void SetMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData = std::forward<MetricDataT>(value); }
    template<typename MetricDataT = Aws::Vector<MetricDatum>>
    EntityMetricData& WithMetricData(MetricDataT&& value) { SetMetricData(std::forward<MetricDataT>(value)); return *this;}
    template<typename MetricDataT = MetricDatum>
    EntityMetricData& AddMetricData(MetricDataT&& value) { m_metricDataHasBeenSet = true; m_metricData.emplace_back(std::forward<MetricDataT>(value)); return *this; }
    ///@}
  private:

    Entity m_entity;
    bool m_entityHasBeenSet = false;

    Aws::Vector<MetricDatum> m_metricData;
    bool m_metricDataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
