/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/VoiceIDRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace VoiceID
{
namespace Model
{

  /**
   */
  class DescribeWatchlistRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API DescribeWatchlistRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeWatchlist"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline DescribeWatchlistRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline DescribeWatchlistRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain that contains the watchlist.</p>
     */
    inline DescribeWatchlistRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline const Aws::String& GetWatchlistId() const{ return m_watchlistId; }

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline void SetWatchlistId(const Aws::String& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = value; }

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline void SetWatchlistId(Aws::String&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::move(value); }

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline void SetWatchlistId(const char* value) { m_watchlistIdHasBeenSet = true; m_watchlistId.assign(value); }

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline DescribeWatchlistRequest& WithWatchlistId(const Aws::String& value) { SetWatchlistId(value); return *this;}

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline DescribeWatchlistRequest& WithWatchlistId(Aws::String&& value) { SetWatchlistId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the watchlist that you are describing.</p>
     */
    inline DescribeWatchlistRequest& WithWatchlistId(const char* value) { SetWatchlistId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_watchlistId;
    bool m_watchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
