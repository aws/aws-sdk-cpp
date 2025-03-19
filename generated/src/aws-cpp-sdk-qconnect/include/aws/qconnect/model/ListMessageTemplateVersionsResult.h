/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/MessageTemplateVersionSummary.h>
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
  class ListMessageTemplateVersionsResult
  {
  public:
    AWS_QCONNECT_API ListMessageTemplateVersionsResult() = default;
    AWS_QCONNECT_API ListMessageTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListMessageTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the versions of a message template.</p>
     */
    inline const Aws::Vector<MessageTemplateVersionSummary>& GetMessageTemplateVersionSummaries() const { return m_messageTemplateVersionSummaries; }
    template<typename MessageTemplateVersionSummariesT = Aws::Vector<MessageTemplateVersionSummary>>
    void SetMessageTemplateVersionSummaries(MessageTemplateVersionSummariesT&& value) { m_messageTemplateVersionSummariesHasBeenSet = true; m_messageTemplateVersionSummaries = std::forward<MessageTemplateVersionSummariesT>(value); }
    template<typename MessageTemplateVersionSummariesT = Aws::Vector<MessageTemplateVersionSummary>>
    ListMessageTemplateVersionsResult& WithMessageTemplateVersionSummaries(MessageTemplateVersionSummariesT&& value) { SetMessageTemplateVersionSummaries(std::forward<MessageTemplateVersionSummariesT>(value)); return *this;}
    template<typename MessageTemplateVersionSummariesT = MessageTemplateVersionSummary>
    ListMessageTemplateVersionsResult& AddMessageTemplateVersionSummaries(MessageTemplateVersionSummariesT&& value) { m_messageTemplateVersionSummariesHasBeenSet = true; m_messageTemplateVersionSummaries.emplace_back(std::forward<MessageTemplateVersionSummariesT>(value)); return *this; }
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
    ListMessageTemplateVersionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMessageTemplateVersionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateVersionSummary> m_messageTemplateVersionSummaries;
    bool m_messageTemplateVersionSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
