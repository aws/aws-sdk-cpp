/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/model/QuickResponseSearchResultData.h>
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
  class SearchQuickResponsesResult
  {
  public:
    AWS_QCONNECT_API SearchQuickResponsesResult();
    AWS_QCONNECT_API SearchQuickResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QCONNECT_API SearchQuickResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQuickResponsesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQuickResponsesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results. Use the value returned in the previous
     * response in the next request to retrieve the next set of results.</p>
     */
    inline SearchQuickResponsesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The results of the quick response search.</p>
     */
    inline const Aws::Vector<QuickResponseSearchResultData>& GetResults() const{ return m_results; }

    /**
     * <p>The results of the quick response search.</p>
     */
    inline void SetResults(const Aws::Vector<QuickResponseSearchResultData>& value) { m_results = value; }

    /**
     * <p>The results of the quick response search.</p>
     */
    inline void SetResults(Aws::Vector<QuickResponseSearchResultData>&& value) { m_results = std::move(value); }

    /**
     * <p>The results of the quick response search.</p>
     */
    inline SearchQuickResponsesResult& WithResults(const Aws::Vector<QuickResponseSearchResultData>& value) { SetResults(value); return *this;}

    /**
     * <p>The results of the quick response search.</p>
     */
    inline SearchQuickResponsesResult& WithResults(Aws::Vector<QuickResponseSearchResultData>&& value) { SetResults(std::move(value)); return *this;}

    /**
     * <p>The results of the quick response search.</p>
     */
    inline SearchQuickResponsesResult& AddResults(const QuickResponseSearchResultData& value) { m_results.push_back(value); return *this; }

    /**
     * <p>The results of the quick response search.</p>
     */
    inline SearchQuickResponsesResult& AddResults(QuickResponseSearchResultData&& value) { m_results.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline SearchQuickResponsesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline SearchQuickResponsesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline SearchQuickResponsesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<QuickResponseSearchResultData> m_results;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
