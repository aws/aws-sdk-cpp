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
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult();
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmsForMetricResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const{ return m_metricAlarms; }

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline void SetMetricAlarms(const Aws::Vector<MetricAlarm>& value) { m_metricAlarms = value; }

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline void SetMetricAlarms(Aws::Vector<MetricAlarm>&& value) { m_metricAlarms = std::move(value); }

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& WithMetricAlarms(const Aws::Vector<MetricAlarm>& value) { SetMetricAlarms(value); return *this;}

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& WithMetricAlarms(Aws::Vector<MetricAlarm>&& value) { SetMetricAlarms(std::move(value)); return *this;}

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& AddMetricAlarms(const MetricAlarm& value) { m_metricAlarms.push_back(value); return *this; }

    /**
     * <p>The information for each alarm with the specified metric.</p>
     */
    inline DescribeAlarmsForMetricResult& AddMetricAlarms(MetricAlarm&& value) { m_metricAlarms.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAlarmsForMetricResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAlarmsForMetricResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<MetricAlarm> m_metricAlarms;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
