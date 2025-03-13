/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/monitoring/CloudWatch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/monitoring/model/ResponseMetadata.h>
#include <aws/monitoring/model/MetricDataResult.h>
#include <aws/monitoring/model/MessageData.h>
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
  class GetMetricDataResult
  {
  public:
    AWS_CLOUDWATCH_API GetMetricDataResult() = default;
    AWS_CLOUDWATCH_API GetMetricDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_CLOUDWATCH_API GetMetricDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The metrics that are returned, including the metric name, namespace, and
     * dimensions.</p>
     */
    inline const Aws::Vector<MetricDataResult>& GetMetricDataResults() const { return m_metricDataResults; }
    template<typename MetricDataResultsT = Aws::Vector<MetricDataResult>>
    void SetMetricDataResults(MetricDataResultsT&& value) { m_metricDataResultsHasBeenSet = true; m_metricDataResults = std::forward<MetricDataResultsT>(value); }
    template<typename MetricDataResultsT = Aws::Vector<MetricDataResult>>
    GetMetricDataResult& WithMetricDataResults(MetricDataResultsT&& value) { SetMetricDataResults(std::forward<MetricDataResultsT>(value)); return *this;}
    template<typename MetricDataResultsT = MetricDataResult>
    GetMetricDataResult& AddMetricDataResults(MetricDataResultsT&& value) { m_metricDataResultsHasBeenSet = true; m_metricDataResults.emplace_back(std::forward<MetricDataResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that marks the next batch of returned results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetMetricDataResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a message about this <code>GetMetricData</code> operation, if the
     * operation results in such a message. An example of a message that might be
     * returned is <code>Maximum number of allowed metrics exceeded</code>. If there is
     * a message, as much of the operation as possible is still executed.</p> <p>A
     * message appears here only if it is related to the global
     * <code>GetMetricData</code> operation. Any message about a specific metric
     * returned by the operation appears in the <code>MetricDataResult</code> object
     * returned for that metric.</p>
     */
    inline const Aws::Vector<MessageData>& GetMessages() const { return m_messages; }
    template<typename MessagesT = Aws::Vector<MessageData>>
    void SetMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages = std::forward<MessagesT>(value); }
    template<typename MessagesT = Aws::Vector<MessageData>>
    GetMetricDataResult& WithMessages(MessagesT&& value) { SetMessages(std::forward<MessagesT>(value)); return *this;}
    template<typename MessagesT = MessageData>
    GetMetricDataResult& AddMessages(MessagesT&& value) { m_messagesHasBeenSet = true; m_messages.emplace_back(std::forward<MessagesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetMetricDataResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MetricDataResult> m_metricDataResults;
    bool m_metricDataResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<MessageData> m_messages;
    bool m_messagesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
