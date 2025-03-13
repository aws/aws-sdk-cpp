/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/AnomalyDetector.h>
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
  class DescribeAnomalyDetectorsResult
  {
  public:
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult() = default;
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline const Aws::Vector<AnomalyDetector>& GetAnomalyDetectors() const { return m_anomalyDetectors; }
    template<typename AnomalyDetectorsT = Aws::Vector<AnomalyDetector>>
    void SetAnomalyDetectors(AnomalyDetectorsT&& value) { m_anomalyDetectorsHasBeenSet = true; m_anomalyDetectors = std::forward<AnomalyDetectorsT>(value); }
    template<typename AnomalyDetectorsT = Aws::Vector<AnomalyDetector>>
    DescribeAnomalyDetectorsResult& WithAnomalyDetectors(AnomalyDetectorsT&& value) { SetAnomalyDetectors(std::forward<AnomalyDetectorsT>(value)); return *this;}
    template<typename AnomalyDetectorsT = AnomalyDetector>
    DescribeAnomalyDetectorsResult& AddAnomalyDetectors(AnomalyDetectorsT&& value) { m_anomalyDetectorsHasBeenSet = true; m_anomalyDetectors.emplace_back(std::forward<AnomalyDetectorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeAnomalyDetectorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeAnomalyDetectorsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AnomalyDetector> m_anomalyDetectors;
    bool m_anomalyDetectorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
