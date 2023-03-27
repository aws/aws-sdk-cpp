/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Watchlist.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeWatchlistResult
  {
  public:
    AWS_VOICEID_API DescribeWatchlistResult();
    AWS_VOICEID_API DescribeWatchlistResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeWatchlistResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the specified watchlist.</p>
     */
    inline const Watchlist& GetWatchlist() const{ return m_watchlist; }

    /**
     * <p>Information about the specified watchlist.</p>
     */
    inline void SetWatchlist(const Watchlist& value) { m_watchlist = value; }

    /**
     * <p>Information about the specified watchlist.</p>
     */
    inline void SetWatchlist(Watchlist&& value) { m_watchlist = std::move(value); }

    /**
     * <p>Information about the specified watchlist.</p>
     */
    inline DescribeWatchlistResult& WithWatchlist(const Watchlist& value) { SetWatchlist(value); return *this;}

    /**
     * <p>Information about the specified watchlist.</p>
     */
    inline DescribeWatchlistResult& WithWatchlist(Watchlist&& value) { SetWatchlist(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeWatchlistResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeWatchlistResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeWatchlistResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Watchlist m_watchlist;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
