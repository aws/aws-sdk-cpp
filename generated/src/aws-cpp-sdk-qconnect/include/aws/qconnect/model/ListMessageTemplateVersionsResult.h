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
    AWS_QCONNECT_API ListMessageTemplateVersionsResult();
    AWS_QCONNECT_API ListMessageTemplateVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListMessageTemplateVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the versions of a message template.</p>
     */
    inline const Aws::Vector<MessageTemplateVersionSummary>& GetMessageTemplateVersionSummaries() const{ return m_messageTemplateVersionSummaries; }
    inline void SetMessageTemplateVersionSummaries(const Aws::Vector<MessageTemplateVersionSummary>& value) { m_messageTemplateVersionSummaries = value; }
    inline void SetMessageTemplateVersionSummaries(Aws::Vector<MessageTemplateVersionSummary>&& value) { m_messageTemplateVersionSummaries = std::move(value); }
    inline ListMessageTemplateVersionsResult& WithMessageTemplateVersionSummaries(const Aws::Vector<MessageTemplateVersionSummary>& value) { SetMessageTemplateVersionSummaries(value); return *this;}
    inline ListMessageTemplateVersionsResult& WithMessageTemplateVersionSummaries(Aws::Vector<MessageTemplateVersionSummary>&& value) { SetMessageTemplateVersionSummaries(std::move(value)); return *this;}
    inline ListMessageTemplateVersionsResult& AddMessageTemplateVersionSummaries(const MessageTemplateVersionSummary& value) { m_messageTemplateVersionSummaries.push_back(value); return *this; }
    inline ListMessageTemplateVersionsResult& AddMessageTemplateVersionSummaries(MessageTemplateVersionSummary&& value) { m_messageTemplateVersionSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMessageTemplateVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMessageTemplateVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMessageTemplateVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMessageTemplateVersionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMessageTemplateVersionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMessageTemplateVersionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateVersionSummary> m_messageTemplateVersionSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
