/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SQS
{
namespace Model
{
  /**
   * <p>A list of your dead letter source queues.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/ListDeadLetterSourceQueuesResult">AWS
   * API Reference</a></p>
   */
  class ListDeadLetterSourceQueuesResult
  {
  public:
    AWS_SQS_API ListDeadLetterSourceQueuesResult() = default;
    AWS_SQS_API ListDeadLetterSourceQueuesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SQS_API ListDeadLetterSourceQueuesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of source queue URLs that have the <code>RedrivePolicy</code> queue
     * attribute configured with a dead-letter queue.</p>
     */
    inline const Aws::Vector<Aws::String>& GetQueueUrls() const { return m_queueUrls; }
    template<typename QueueUrlsT = Aws::Vector<Aws::String>>
    void SetQueueUrls(QueueUrlsT&& value) { m_queueUrlsHasBeenSet = true; m_queueUrls = std::forward<QueueUrlsT>(value); }
    template<typename QueueUrlsT = Aws::Vector<Aws::String>>
    ListDeadLetterSourceQueuesResult& WithQueueUrls(QueueUrlsT&& value) { SetQueueUrls(std::forward<QueueUrlsT>(value)); return *this;}
    template<typename QueueUrlsT = Aws::String>
    ListDeadLetterSourceQueuesResult& AddQueueUrls(QueueUrlsT&& value) { m_queueUrlsHasBeenSet = true; m_queueUrls.emplace_back(std::forward<QueueUrlsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token to include in the next request. Token value is
     * <code>null</code> if there are no additional results to request, or if you did
     * not set <code>MaxResults</code> in the request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeadLetterSourceQueuesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeadLetterSourceQueuesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListDeadLetterSourceQueuesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_queueUrls;
    bool m_queueUrlsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
