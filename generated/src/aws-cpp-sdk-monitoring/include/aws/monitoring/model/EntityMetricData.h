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
    AWS_CLOUDWATCH_API EntityMetricData();
    AWS_CLOUDWATCH_API EntityMetricData(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API EntityMetricData& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The entity associated with the metrics.</p>
     */
    inline const Entity& GetEntity() const{ return m_entity; }
    inline bool EntityHasBeenSet() const { return m_entityHasBeenSet; }
    inline void SetEntity(const Entity& value) { m_entityHasBeenSet = true; m_entity = value; }
    inline void SetEntity(Entity&& value) { m_entityHasBeenSet = true; m_entity = std::move(value); }
    inline EntityMetricData& WithEntity(const Entity& value) { SetEntity(value); return *this;}
    inline EntityMetricData& WithEntity(Entity&& value) { SetEntity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metric data.</p>
     */
    inline const Aws::Vector<MetricDatum>& GetMetricData() const{ return m_metricData; }
    inline bool MetricDataHasBeenSet() const { return m_metricDataHasBeenSet; }
    inline void SetMetricData(const Aws::Vector<MetricDatum>& value) { m_metricDataHasBeenSet = true; m_metricData = value; }
    inline void SetMetricData(Aws::Vector<MetricDatum>&& value) { m_metricDataHasBeenSet = true; m_metricData = std::move(value); }
    inline EntityMetricData& WithMetricData(const Aws::Vector<MetricDatum>& value) { SetMetricData(value); return *this;}
    inline EntityMetricData& WithMetricData(Aws::Vector<MetricDatum>&& value) { SetMetricData(std::move(value)); return *this;}
    inline EntityMetricData& AddMetricData(const MetricDatum& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(value); return *this; }
    inline EntityMetricData& AddMetricData(MetricDatum&& value) { m_metricDataHasBeenSet = true; m_metricData.push_back(std::move(value)); return *this; }
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
