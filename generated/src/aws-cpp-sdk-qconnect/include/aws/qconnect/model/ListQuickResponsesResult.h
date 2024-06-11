/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QuickResponseSummary.h>
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
  class ListQuickResponsesResult
  {
  public:
    AWS_QCONNECT_API ListQuickResponsesResult();
    AWS_QCONNECT_API ListQuickResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API ListQuickResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListQuickResponsesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListQuickResponsesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListQuickResponsesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Summary information about the quick responses.</p>
     */
    inline const Aws::Vector<QuickResponseSummary>& GetQuickResponseSummaries() const{ return m_quickResponseSummaries; }
    inline void SetQuickResponseSummaries(const Aws::Vector<QuickResponseSummary>& value) { m_quickResponseSummaries = value; }
    inline void SetQuickResponseSummaries(Aws::Vector<QuickResponseSummary>&& value) { m_quickResponseSummaries = std::move(value); }
    inline ListQuickResponsesResult& WithQuickResponseSummaries(const Aws::Vector<QuickResponseSummary>& value) { SetQuickResponseSummaries(value); return *this;}
    inline ListQuickResponsesResult& WithQuickResponseSummaries(Aws::Vector<QuickResponseSummary>&& value) { SetQuickResponseSummaries(std::move(value)); return *this;}
    inline ListQuickResponsesResult& AddQuickResponseSummaries(const QuickResponseSummary& value) { m_quickResponseSummaries.push_back(value); return *this; }
    inline ListQuickResponsesResult& AddQuickResponseSummaries(QuickResponseSummary&& value) { m_quickResponseSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListQuickResponsesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListQuickResponsesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListQuickResponsesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<QuickResponseSummary> m_quickResponseSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
