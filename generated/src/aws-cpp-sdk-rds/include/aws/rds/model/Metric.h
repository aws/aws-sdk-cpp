/**
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
    AWS_RDS_API Metric() = default;
    AWS_RDS_API Metric(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API Metric& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of a metric.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Metric& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of metric references (thresholds).</p>
     */
    inline const Aws::Vector<MetricReference>& GetReferences() const { return m_references; }
    inline bool ReferencesHasBeenSet() const { return m_referencesHasBeenSet; }
    template<typename ReferencesT = Aws::Vector<MetricReference>>
    void SetReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references = std::forward<ReferencesT>(value); }
    template<typename ReferencesT = Aws::Vector<MetricReference>>
    Metric& WithReferences(ReferencesT&& value) { SetReferences(std::forward<ReferencesT>(value)); return *this;}
    template<typename ReferencesT = MetricReference>
    Metric& AddReferences(ReferencesT&& value) { m_referencesHasBeenSet = true; m_references.emplace_back(std::forward<ReferencesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The details of different statistics for a metric. The description might
     * contain markdown.</p>
     */
    inline const Aws::String& GetStatisticsDetails() const { return m_statisticsDetails; }
    inline bool StatisticsDetailsHasBeenSet() const { return m_statisticsDetailsHasBeenSet; }
    template<typename StatisticsDetailsT = Aws::String>
    void SetStatisticsDetails(StatisticsDetailsT&& value) { m_statisticsDetailsHasBeenSet = true; m_statisticsDetails = std::forward<StatisticsDetailsT>(value); }
    template<typename StatisticsDetailsT = Aws::String>
    Metric& WithStatisticsDetails(StatisticsDetailsT&& value) { SetStatisticsDetails(std::forward<StatisticsDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The query to retrieve metric data points.</p>
     */
    inline const MetricQuery& GetMetricQuery() const { return m_metricQuery; }
    inline bool MetricQueryHasBeenSet() const { return m_metricQueryHasBeenSet; }
    template<typename MetricQueryT = MetricQuery>
    void SetMetricQuery(MetricQueryT&& value) { m_metricQueryHasBeenSet = true; m_metricQuery = std::forward<MetricQueryT>(value); }
    template<typename MetricQueryT = MetricQuery>
    Metric& WithMetricQuery(MetricQueryT&& value) { SetMetricQuery(std::forward<MetricQueryT>(value)); return *this;}
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
