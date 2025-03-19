/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/DuplicateRegistrationAction.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The registration configuration to be used during the batch fraudster
   * registration job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/RegistrationConfig">AWS
   * API Reference</a></p>
   */
  class RegistrationConfig
  {
  public:
    AWS_VOICEID_API RegistrationConfig() = default;
    AWS_VOICEID_API RegistrationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API RegistrationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The action to take when a fraudster is identified as a duplicate. The default
     * action is <code>SKIP</code>, which skips registering the duplicate fraudster.
     * Setting the value to <code>REGISTER_AS_NEW</code> always registers a new
     * fraudster into the specified domain.</p>
     */
    inline DuplicateRegistrationAction GetDuplicateRegistrationAction() const { return m_duplicateRegistrationAction; }
    inline bool DuplicateRegistrationActionHasBeenSet() const { return m_duplicateRegistrationActionHasBeenSet; }
    inline void SetDuplicateRegistrationAction(DuplicateRegistrationAction value) { m_duplicateRegistrationActionHasBeenSet = true; m_duplicateRegistrationAction = value; }
    inline RegistrationConfig& WithDuplicateRegistrationAction(DuplicateRegistrationAction value) { SetDuplicateRegistrationAction(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum similarity score between the new and old fraudsters in order to
     * consider the new fraudster a duplicate.</p>
     */
    inline int GetFraudsterSimilarityThreshold() const { return m_fraudsterSimilarityThreshold; }
    inline bool FraudsterSimilarityThresholdHasBeenSet() const { return m_fraudsterSimilarityThresholdHasBeenSet; }
    inline void SetFraudsterSimilarityThreshold(int value) { m_fraudsterSimilarityThresholdHasBeenSet = true; m_fraudsterSimilarityThreshold = value; }
    inline RegistrationConfig& WithFraudsterSimilarityThreshold(int value) { SetFraudsterSimilarityThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifiers of watchlists that a fraudster is registered to. If a
     * watchlist isn't provided, the fraudsters are registered to the default
     * watchlist. </p>
     */
    inline const Aws::Vector<Aws::String>& GetWatchlistIds() const { return m_watchlistIds; }
    inline bool WatchlistIdsHasBeenSet() const { return m_watchlistIdsHasBeenSet; }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    void SetWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds = std::forward<WatchlistIdsT>(value); }
    template<typename WatchlistIdsT = Aws::Vector<Aws::String>>
    RegistrationConfig& WithWatchlistIds(WatchlistIdsT&& value) { SetWatchlistIds(std::forward<WatchlistIdsT>(value)); return *this;}
    template<typename WatchlistIdsT = Aws::String>
    RegistrationConfig& AddWatchlistIds(WatchlistIdsT&& value) { m_watchlistIdsHasBeenSet = true; m_watchlistIds.emplace_back(std::forward<WatchlistIdsT>(value)); return *this; }
    ///@}
  private:

    DuplicateRegistrationAction m_duplicateRegistrationAction{DuplicateRegistrationAction::NOT_SET};
    bool m_duplicateRegistrationActionHasBeenSet = false;

    int m_fraudsterSimilarityThreshold{0};
    bool m_fraudsterSimilarityThresholdHasBeenSet = false;

    Aws::Vector<Aws::String> m_watchlistIds;
    bool m_watchlistIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
