/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/MessageTemplateSearchResultData.h>
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
  class SearchMessageTemplatesResult
  {
  public:
    AWS_QCONNECT_API SearchMessageTemplatesResult();
    AWS_QCONNECT_API SearchMessageTemplatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API SearchMessageTemplatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If there are additional results, this is the token for the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline SearchMessageTemplatesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchMessageTemplatesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchMessageTemplatesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The results of the message template search.</p>
     */
    inline const Aws::Vector<MessageTemplateSearchResultData>& GetResults() const{ return m_results; }
    inline void SetResults(const Aws::Vector<MessageTemplateSearchResultData>& value) { m_results = value; }
    inline void SetResults(Aws::Vector<MessageTemplateSearchResultData>&& value) { m_results = std::move(value); }
    inline SearchMessageTemplatesResult& WithResults(const Aws::Vector<MessageTemplateSearchResultData>& value) { SetResults(value); return *this;}
    inline SearchMessageTemplatesResult& WithResults(Aws::Vector<MessageTemplateSearchResultData>&& value) { SetResults(std::move(value)); return *this;}
    inline SearchMessageTemplatesResult& AddResults(const MessageTemplateSearchResultData& value) { m_results.push_back(value); return *this; }
    inline SearchMessageTemplatesResult& AddResults(MessageTemplateSearchResultData&& value) { m_results.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline SearchMessageTemplatesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline SearchMessageTemplatesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline SearchMessageTemplatesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<MessageTemplateSearchResultData> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
