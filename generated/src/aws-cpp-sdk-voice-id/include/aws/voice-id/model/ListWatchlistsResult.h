/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/voice-id/model/WatchlistSummary.h>
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
namespace VoiceID
{
namespace Model
{
  class ListWatchlistsResult
  {
  public:
    AWS_VOICEID_API ListWatchlistsResult();
    AWS_VOICEID_API ListWatchlistsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListWatchlistsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListWatchlistsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListWatchlistsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline ListWatchlistsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<WatchlistSummary>& GetWatchlistSummaries() const{ return m_watchlistSummaries; }

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline void SetWatchlistSummaries(const Aws::Vector<WatchlistSummary>& value) { m_watchlistSummaries = value; }

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline void SetWatchlistSummaries(Aws::Vector<WatchlistSummary>&& value) { m_watchlistSummaries = std::move(value); }

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline ListWatchlistsResult& WithWatchlistSummaries(const Aws::Vector<WatchlistSummary>& value) { SetWatchlistSummaries(value); return *this;}

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline ListWatchlistsResult& WithWatchlistSummaries(Aws::Vector<WatchlistSummary>&& value) { SetWatchlistSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline ListWatchlistsResult& AddWatchlistSummaries(const WatchlistSummary& value) { m_watchlistSummaries.push_back(value); return *this; }

    /**
     * <p>A list that contains details about each watchlist in the Amazon Web Services
     * account. </p>
     */
    inline ListWatchlistsResult& AddWatchlistSummaries(WatchlistSummary&& value) { m_watchlistSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListWatchlistsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListWatchlistsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListWatchlistsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_nextToken;

    Aws::Vector<WatchlistSummary> m_watchlistSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
