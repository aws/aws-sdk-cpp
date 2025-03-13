/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/Datapoint.h>
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
  class GetMetricStatisticsResult
  {
  public:
    AWS_CLOUDWATCH_API GetMetricStatisticsResult() = default;
    AWS_CLOUDWATCH_API GetMetricStatisticsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetMetricStatisticsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A label for the specified metric.</p>
     */
    inline const Aws::String& GetLabel() const { return m_label; }
    template<typename LabelT = Aws::String>
    void SetLabel(LabelT&& value) { m_labelHasBeenSet = true; m_label = std::forward<LabelT>(value); }
    template<typename LabelT = Aws::String>
    GetMetricStatisticsResult& WithLabel(LabelT&& value) { SetLabel(std::forward<LabelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data points for the specified metric.</p>
     */
    inline const Aws::Vector<Datapoint>& GetDatapoints() const { return m_datapoints; }
    template<typename DatapointsT = Aws::Vector<Datapoint>>
    void SetDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints = std::forward<DatapointsT>(value); }
    template<typename DatapointsT = Aws::Vector<Datapoint>>
    GetMetricStatisticsResult& WithDatapoints(DatapointsT&& value) { SetDatapoints(std::forward<DatapointsT>(value)); return *this;}
    template<typename DatapointsT = Datapoint>
    GetMetricStatisticsResult& AddDatapoints(DatapointsT&& value) { m_datapointsHasBeenSet = true; m_datapoints.emplace_back(std::forward<DatapointsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetMetricStatisticsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::Vector<Datapoint> m_datapoints;
    bool m_datapointsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
