/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateSummary.h>
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
namespace QConnect
{
namespace Model
{
  class ListMessageTemplatesResult
  {
  public:
    AWS_QCONNECT_API ListMessageTemplatesResult() = default;
    AWS_QCONNECT_API ListMessageTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListMessageTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the message template.</p>
     */
    inline const Aws::Vector<MessageTemplateSummary>& GetMessageTemplateSummaries() const { return m_messageTemplateSummaries; }
    template<typename MessageTemplateSummariesT = Aws::Vector<MessageTemplateSummary>>
    void SetMessageTemplateSummaries(MessageTemplateSummariesT&& value) { m_messageTemplateSummariesHasBeenSet = true; m_messageTemplateSummaries = std::forward<MessageTemplateSummariesT>(value); }
    template<typename MessageTemplateSummariesT = Aws::Vector<MessageTemplateSummary>>
    ListMessageTemplatesResult& WithMessageTemplateSummaries(MessageTemplateSummariesT&& value) { SetMessageTemplateSummaries(std::forward<MessageTemplateSummariesT>(value)); return *this;}
    template<typename MessageTemplateSummariesT = MessageTemplateSummary>
    ListMessageTemplatesResult& AddMessageTemplateSummaries(MessageTemplateSummariesT&& value) { m_messageTemplateSummariesHasBeenSet = true; m_messageTemplateSummaries.emplace_back(std::forward<MessageTemplateSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMessageTemplatesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMessageTemplatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateSummary> m_messageTemplateSummaries;
    bool m_messageTemplateSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
