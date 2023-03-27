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
  class UpdateWatchlistResult
  {
  public:
    AWS_VOICEID_API UpdateWatchlistResult();
    AWS_VOICEID_API UpdateWatchlistResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API UpdateWatchlistResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline const Watchlist& GetWatchlist() const{ return m_watchlist; }

    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline void SetWatchlist(const Watchlist& value) { m_watchlist = value; }

    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline void SetWatchlist(Watchlist&& value) { m_watchlist = std::move(value); }

    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline UpdateWatchlistResult& WithWatchlist(const Watchlist& value) { SetWatchlist(value); return *this;}

    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline UpdateWatchlistResult& WithWatchlist(Watchlist&& value) { SetWatchlist(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateWatchlistResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateWatchlistResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateWatchlistResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Watchlist m_watchlist;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
