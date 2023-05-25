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
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult();
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API DescribeAnomalyDetectorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline const Aws::Vector<AnomalyDetector>& GetAnomalyDetectors() const{ return m_anomalyDetectors; }

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline void SetAnomalyDetectors(const Aws::Vector<AnomalyDetector>& value) { m_anomalyDetectors = value; }

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline void SetAnomalyDetectors(Aws::Vector<AnomalyDetector>&& value) { m_anomalyDetectors = std::move(value); }

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline DescribeAnomalyDetectorsResult& WithAnomalyDetectors(const Aws::Vector<AnomalyDetector>& value) { SetAnomalyDetectors(value); return *this;}

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline DescribeAnomalyDetectorsResult& WithAnomalyDetectors(Aws::Vector<AnomalyDetector>&& value) { SetAnomalyDetectors(std::move(value)); return *this;}

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline DescribeAnomalyDetectorsResult& AddAnomalyDetectors(const AnomalyDetector& value) { m_anomalyDetectors.push_back(value); return *this; }

    /**
     * <p>The list of anomaly detection models returned by the operation.</p>
     */
    inline DescribeAnomalyDetectorsResult& AddAnomalyDetectors(AnomalyDetector&& value) { m_anomalyDetectors.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline DescribeAnomalyDetectorsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline DescribeAnomalyDetectorsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that you can use in a subsequent operation to retrieve the next set
     * of results.</p>
     */
    inline DescribeAnomalyDetectorsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeAnomalyDetectorsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeAnomalyDetectorsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<AnomalyDetector> m_anomalyDetectors;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
