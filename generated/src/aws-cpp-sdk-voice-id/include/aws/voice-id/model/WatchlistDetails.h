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
    AWS_VOICEID_API WatchlistDetails() = default;
    AWS_VOICEID_API WatchlistDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API WatchlistDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the default watchlist.</p>
     */
    inline const Aws::String& GetDefaultWatchlistId() const { return m_defaultWatchlistId; }
    inline bool DefaultWatchlistIdHasBeenSet() const { return m_defaultWatchlistIdHasBeenSet; }
    template<typename DefaultWatchlistIdT = Aws::String>
    void SetDefaultWatchlistId(DefaultWatchlistIdT&& value) { m_defaultWatchlistIdHasBeenSet = true; m_defaultWatchlistId = std::forward<DefaultWatchlistIdT>(value); }
    template<typename DefaultWatchlistIdT = Aws::String>
    WatchlistDetails& WithDefaultWatchlistId(DefaultWatchlistIdT&& value) { SetDefaultWatchlistId(std::forward<DefaultWatchlistIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_defaultWatchlistId;
    bool m_defaultWatchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
