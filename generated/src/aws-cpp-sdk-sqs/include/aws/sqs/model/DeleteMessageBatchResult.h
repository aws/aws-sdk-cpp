/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sqs/SQS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sqs/model/ResponseMetadata.h>
#include <aws/sqs/model/DeleteMessageBatchResultEntry.h>
#include <aws/sqs/model/BatchResultErrorEntry.h>
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
   * <p>For each message in the batch, the response contains a <code>
   * <a>DeleteMessageBatchResultEntry</a> </code> tag if the message is deleted or a
   * <code> <a>BatchResultErrorEntry</a> </code> tag if the message can't be
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sqs-2012-11-05/DeleteMessageBatchResult">AWS
   * API Reference</a></p>
   */
  class DeleteMessageBatchResult
  {
  public:
    AWS_SQS_API DeleteMessageBatchResult() = default;
    AWS_SQS_API DeleteMessageBatchResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SQS_API DeleteMessageBatchResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code> <a>DeleteMessageBatchResultEntry</a> </code> items.</p>
     */
    inline const Aws::Vector<DeleteMessageBatchResultEntry>& GetSuccessful() const { return m_successful; }
    template<typename SuccessfulT = Aws::Vector<DeleteMessageBatchResultEntry>>
    void SetSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful = std::forward<SuccessfulT>(value); }
    template<typename SuccessfulT = Aws::Vector<DeleteMessageBatchResultEntry>>
    DeleteMessageBatchResult& WithSuccessful(SuccessfulT&& value) { SetSuccessful(std::forward<SuccessfulT>(value)); return *this;}
    template<typename SuccessfulT = DeleteMessageBatchResultEntry>
    DeleteMessageBatchResult& AddSuccessful(SuccessfulT&& value) { m_successfulHasBeenSet = true; m_successful.emplace_back(std::forward<SuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code> <a>BatchResultErrorEntry</a> </code> items.</p>
     */
    inline const Aws::Vector<BatchResultErrorEntry>& GetFailed() const { return m_failed; }
    template<typename FailedT = Aws::Vector<BatchResultErrorEntry>>
    void SetFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed = std::forward<FailedT>(value); }
    template<typename FailedT = Aws::Vector<BatchResultErrorEntry>>
    DeleteMessageBatchResult& WithFailed(FailedT&& value) { SetFailed(std::forward<FailedT>(value)); return *this;}
    template<typename FailedT = BatchResultErrorEntry>
    DeleteMessageBatchResult& AddFailed(FailedT&& value) { m_failedHasBeenSet = true; m_failed.emplace_back(std::forward<FailedT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteMessageBatchResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteMessageBatchResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeleteMessageBatchResultEntry> m_successful;
    bool m_successfulHasBeenSet = false;

    Aws::Vector<BatchResultErrorEntry> m_failed;
    bool m_failedHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SQS
} // namespace Aws
