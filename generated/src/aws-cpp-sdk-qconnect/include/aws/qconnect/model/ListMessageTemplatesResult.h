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
    AWS_QCONNECT_API ListMessageTemplatesResult();
    AWS_QCONNECT_API ListMessageTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListMessageTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Summary information about the message template.</p>
     */
    inline const Aws::Vector<MessageTemplateSummary>& GetMessageTemplateSummaries() const{ return m_messageTemplateSummaries; }
    inline void SetMessageTemplateSummaries(const Aws::Vector<MessageTemplateSummary>& value) { m_messageTemplateSummaries = value; }
    inline void SetMessageTemplateSummaries(Aws::Vector<MessageTemplateSummary>&& value) { m_messageTemplateSummaries = std::move(value); }
    inline ListMessageTemplatesResult& WithMessageTemplateSummaries(const Aws::Vector<MessageTemplateSummary>& value) { SetMessageTemplateSummaries(value); return *this;}
    inline ListMessageTemplatesResult& WithMessageTemplateSummaries(Aws::Vector<MessageTemplateSummary>&& value) { SetMessageTemplateSummaries(std::move(value)); return *this;}
    inline ListMessageTemplatesResult& AddMessageTemplateSummaries(const MessageTemplateSummary& value) { m_messageTemplateSummaries.push_back(value); return *this; }
    inline ListMessageTemplatesResult& AddMessageTemplateSummaries(MessageTemplateSummary&& value) { m_messageTemplateSummaries.push_back(std::move(value)); return *this; }
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
    inline ListMessageTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMessageTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMessageTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMessageTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMessageTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMessageTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MessageTemplateSummary> m_messageTemplateSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
