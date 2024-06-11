﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/MetricQuery.h>
#include <aws/rds/model/MetricReference.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>The representation of a metric.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/Metric">AWS API
   * Reference</a></p>
   */
  class Metric
  {
  public:
    AWS_RDS_API Metric();
    AWS_RDS_API Metric(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Metric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of a metric.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline Metric& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline Metric& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline Metric& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metric references (thresholds).</p>
     */
    inline const Aws::Vector<MetricReference>& GetReferences() const{ return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    inline void SetReferences(const Aws::Vector<MetricReference>& value) { m_referencesHasBeenSet = true; m_references = value; }
    inline void SetReferences(Aws::Vector<MetricReference>&& value) { m_referencesHasBeenSet = true; m_references = std::move(value); }
    inline Metric& WithReferences(const Aws::Vector<MetricReference>& value) { SetReferences(value); return *this;}
    inline Metric& WithReferences(Aws::Vector<MetricReference>&& value) { SetReferences(std::move(value)); return *this;}
    inline Metric& AddReferences(const MetricReference& value) { m_referencesHasBeenSet = true; m_references.push_back(value); return *this; }
    inline Metric& AddReferences(MetricReference&& value) { m_referencesHasBeenSet = true; m_references.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of different statistics for a metric. The description might
     * contain markdown.</p>
     */
    inline const Aws::String& GetStatisticsDetails() const{ return m_statisticsDetails; }
    inline bool StatisticsDetailsHasBeenSet() const { return m_statisticsDetailsHasBeenSet; }
    inline void SetStatisticsDetails(const Aws::String& value) { m_statisticsDetailsHasBeenSet = true; m_statisticsDetails = value; }
    inline void SetStatisticsDetails(Aws::String&& value) { m_statisticsDetailsHasBeenSet = true; m_statisticsDetails = std::move(value); }
    inline void SetStatisticsDetails(const char* value) { m_statisticsDetailsHasBeenSet = true; m_statisticsDetails.assign(value); }
    inline Metric& WithStatisticsDetails(const Aws::String& value) { SetStatisticsDetails(value); return *this;}
    inline Metric& WithStatisticsDetails(Aws::String&& value) { SetStatisticsDetails(std::move(value)); return *this;}
    inline Metric& WithStatisticsDetails(const char* value) { SetStatisticsDetails(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query to retrieve metric data points.</p>
     */
    inline const MetricQuery& GetMetricQuery() const{ return m_metricQuery; }
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }
    inline void SetMetricQuery(const MetricQuery& value) { m_metricQueryHasBeenSet = true; m_metricQuery = value; }
    inline void SetMetricQuery(MetricQuery&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::move(value); }
    inline Metric& WithMetricQuery(const MetricQuery& value) { SetMetricQuery(value); return *this;}
    inline Metric& WithMetricQuery(MetricQuery&& value) { SetMetricQuery(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<MetricReference> m_references;
    bool m_referencesHasBeenSet = false;

    Aws::String m_statisticsDetails;
    bool m_statisticsDetailsHasBeenSet = false;

    MetricQuery m_metricQuery;
    bool m_metricQueryHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
