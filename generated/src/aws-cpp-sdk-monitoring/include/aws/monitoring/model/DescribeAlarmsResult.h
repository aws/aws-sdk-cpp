/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/CompositeAlarm.h>
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
  class DescribeAlarmsResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAlarmsResult();
    AWS_CLOUDWATCH_API DescribeAlarmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline const Aws::Vector<CompositeAlarm>& GetCompositeAlarms() const{ return m_compositeAlarms; }

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline void SetCompositeAlarms(const Aws::Vector<CompositeAlarm>& value) { m_compositeAlarms = value; }

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline void SetCompositeAlarms(Aws::Vector<CompositeAlarm>&& value) { m_compositeAlarms = std::move(value); }

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& WithCompositeAlarms(const Aws::Vector<CompositeAlarm>& value) { SetCompositeAlarms(value); return *this;}

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& WithCompositeAlarms(Aws::Vector<CompositeAlarm>&& value) { SetCompositeAlarms(std::move(value)); return *this;}

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& AddCompositeAlarms(const CompositeAlarm& value) { m_compositeAlarms.push_back(value); return *this; }

    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& AddCompositeAlarms(CompositeAlarm&& value) { m_compositeAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const{ return m_metricAlarms; }

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline void SetMetricAlarms(const Aws::Vector<MetricAlarm>& value) { m_metricAlarms = value; }

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline void SetMetricAlarms(Aws::Vector<MetricAlarm>&& value) { m_metricAlarms = std::move(value); }

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& WithMetricAlarms(const Aws::Vector<MetricAlarm>& value) { SetMetricAlarms(value); return *this;}

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& WithMetricAlarms(Aws::Vector<MetricAlarm>&& value) { SetMetricAlarms(std::move(value)); return *this;}

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& AddMetricAlarms(const MetricAlarm& value) { m_metricAlarms.push_back(value); return *this; }

    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline DescribeAlarmsResult& AddMetricAlarms(MetricAlarm&& value) { m_metricAlarms.push_back(std::move(value)); return *this; }


    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline DescribeAlarmsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAlarmsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAlarmsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<CompositeAlarm> m_compositeAlarms;

    Aws::Vector<MetricAlarm> m_metricAlarms;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
