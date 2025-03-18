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
    AWS_CLOUDWATCH_API DescribeAlarmsResult() = default;
    AWS_CLOUDWATCH_API DescribeAlarmsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAlarmsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The information about any composite alarms returned by the operation.</p>
     */
    inline const Aws::Vector<CompositeAlarm>& GetCompositeAlarms() const { return m_compositeAlarms; }
    template<typename CompositeAlarmsT = Aws::Vector<CompositeAlarm>>
    void SetCompositeAlarms(CompositeAlarmsT&& value) { m_compositeAlarmsHasBeenSet = true; m_compositeAlarms = std::forward<CompositeAlarmsT>(value); }
    template<typename CompositeAlarmsT = Aws::Vector<CompositeAlarm>>
    DescribeAlarmsResult& WithCompositeAlarms(CompositeAlarmsT&& value) { SetCompositeAlarms(std::forward<CompositeAlarmsT>(value)); return *this;}
    template<typename CompositeAlarmsT = CompositeAlarm>
    DescribeAlarmsResult& AddCompositeAlarms(CompositeAlarmsT&& value) { m_compositeAlarmsHasBeenSet = true; m_compositeAlarms.emplace_back(std::forward<CompositeAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The information about any metric alarms returned by the operation.</p>
     */
    inline const Aws::Vector<MetricAlarm>& GetMetricAlarms() const { return m_metricAlarms; }
    template<typename MetricAlarmsT = Aws::Vector<MetricAlarm>>
    void SetMetricAlarms(MetricAlarmsT&& value) { m_metricAlarmsHasBeenSet = true; m_metricAlarms = std::forward<MetricAlarmsT>(value); }
    template<typename MetricAlarmsT = Aws::Vector<MetricAlarm>>
    DescribeAlarmsResult& WithMetricAlarms(MetricAlarmsT&& value) { SetMetricAlarms(std::forward<MetricAlarmsT>(value)); return *this;}
    template<typename MetricAlarmsT = MetricAlarm>
    DescribeAlarmsResult& AddMetricAlarms(MetricAlarmsT&& value) { m_metricAlarmsHasBeenSet = true; m_metricAlarms.emplace_back(std::forward<MetricAlarmsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token that marks the start of the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAlarmsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAlarmsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CompositeAlarm> m_compositeAlarms;
    bool m_compositeAlarmsHasBeenSet = false;

    Aws::Vector<MetricAlarm> m_metricAlarms;
    bool m_metricAlarmsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
