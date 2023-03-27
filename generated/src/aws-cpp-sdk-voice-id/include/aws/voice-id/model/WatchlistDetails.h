/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace VoiceID
{
namespace Model
{

  /**
   * <p>Details of the watchlists in a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/WatchlistDetails">AWS
   * API Reference</a></p>
   */
  class WatchlistDetails
  {
  public:
    AWS_VOICEID_API WatchlistDetails();
    AWS_VOICEID_API WatchlistDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API WatchlistDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline const Aws::String& GetDefaultWatchlistId() const{ return m_defaultWatchlistId; }

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline bool DefaultWatchlistIdHasBeenSet() const { return m_defaultWatchlistIdHasBeenSet; }

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline void SetDefaultWatchlistId(const Aws::String& value) { m_defaultWatchlistIdHasBeenSet = true; m_defaultWatchlistId = value; }

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline void SetDefaultWatchlistId(Aws::String&& value) { m_defaultWatchlistIdHasBeenSet = true; m_defaultWatchlistId = std::move(value); }

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline void SetDefaultWatchlistId(const char* value) { m_defaultWatchlistIdHasBeenSet = true; m_defaultWatchlistId.assign(value); }

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline WatchlistDetails& WithDefaultWatchlistId(const Aws::String& value) { SetDefaultWatchlistId(value); return *this;}

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline WatchlistDetails& WithDefaultWatchlistId(Aws::String&& value) { SetDefaultWatchlistId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline WatchlistDetails& WithDefaultWatchlistId(const char* value) { SetDefaultWatchlistId(value); return *this;}

  private:

    Aws::String m_defaultWatchlistId;
    bool m_defaultWatchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
