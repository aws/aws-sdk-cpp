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
    AWS_VOICEID_API UpdateWatchlistResult() = default;
    AWS_VOICEID_API UpdateWatchlistResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API UpdateWatchlistResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the updated watchlist.</p>
     */
    inline const Watchlist& GetWatchlist() const { return m_watchlist; }
    template<typename WatchlistT = Watchlist>
    void SetWatchlist(WatchlistT&& value) { m_watchlistHasBeenSet = true; m_watchlist = std::forward<WatchlistT>(value); }
    template<typename WatchlistT = Watchlist>
    UpdateWatchlistResult& WithWatchlist(WatchlistT&& value) { SetWatchlist(std::forward<WatchlistT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateWatchlistResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Watchlist m_watchlist;
    bool m_watchlistHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
