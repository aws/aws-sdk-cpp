/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>This structure contains a metric namespace and optionally, a list of metric
   * names, to either include in a metric stream or exclude from a metric stream.</p>
   * <p>A metric stream's filters can include up to 1000 total names. This limit
   * applies to the sum of namespace names and metric names in the filters. For
   * example, this could include 10 metric namespace filters with 99 metrics each, or
   * 20 namespace filters with 49 metrics specified in each filter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/monitoring-2010-08-01/MetricStreamFilter">AWS
   * API Reference</a></p>
   */
  class MetricStreamFilter
  {
  public:
    AWS_CLOUDWATCH_API MetricStreamFilter() = default;
    AWS_CLOUDWATCH_API MetricStreamFilter(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDWATCH_API MetricStreamFilter& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDWATCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the metric namespace for this filter.</p> <p>The namespace can
     * contain only ASCII printable characters (ASCII range 32 through 126). It must
     * contain at least one non-whitespace character.</p>
     */
    inline const Aws::String& GetNamespace() const { return m_namespace; }
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
    template<typename NamespaceT = Aws::String>
    void SetNamespace(NamespaceT&& value) { m_namespaceHasBeenSet = true; m_namespace = std::forward<NamespaceT>(value); }
    template<typename NamespaceT = Aws::String>
    MetricStreamFilter& WithNamespace(NamespaceT&& value) { SetNamespace(std::forward<NamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the metrics to either include or exclude from the metric stream.
     * </p> <p>If you omit this parameter, all metrics in the namespace are included or
     * excluded, depending on whether this filter is specified as an exclude filter or
     * an include filter.</p> <p>Each metric name can contain only ASCII printable
     * characters (ASCII range 32 through 126). Each metric name must contain at least
     * one non-whitespace character.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetricNames() const { return m_metricNames; }
    inline bool MetricNamesHasBeenSet() const { return m_metricNamesHasBeenSet; }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    void SetMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames = std::forward<MetricNamesT>(value); }
    template<typename MetricNamesT = Aws::Vector<Aws::String>>
    MetricStreamFilter& WithMetricNames(MetricNamesT&& value) { SetMetricNames(std::forward<MetricNamesT>(value)); return *this;}
    template<typename MetricNamesT = Aws::String>
    MetricStreamFilter& AddMetricNames(MetricNamesT&& value) { m_metricNamesHasBeenSet = true; m_metricNames.emplace_back(std::forward<MetricNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;

    Aws::Vector<Aws::String> m_metricNames;
    bool m_metricNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
