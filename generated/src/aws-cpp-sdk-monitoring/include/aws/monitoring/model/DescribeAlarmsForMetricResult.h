/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricAlarm.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudWatch
{
namespace Model
{
  class DescribeAlarmsForMetricResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult() = default;
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const { return m_metricAlarms; }
    template<typename MetricAlarmsT = Aws::Vector<MetricAlarm>>
    void SetMetricAlarms(MetricAlarmsT&& value) { m_metricAlarmsHasBeenSet = true; m_metricAlarms = std::forward<MetricAlarmsT>(value); }
    template<typename MetricAlarmsT = Aws::Vector<MetricAlarm>>
    DescribeAlarmsForMetricResult& WithMetricAlarms(MetricAlarmsT&& value) { SetMetricAlarms(std::forward<MetricAlarmsT>(value)); return *this;}
    template<typename MetricAlarmsT = MetricAlarm>
    DescribeAlarmsForMetricResult& AddMetricAlarms(MetricAlarmsT&& value) { m_metricAlarmsHasBeenSet = true; m_metricAlarms.emplace_back(std::forward<MetricAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAlarmsForMetricResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricAlarm> m_metricAlarms;
    bool m_metricAlarmsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
