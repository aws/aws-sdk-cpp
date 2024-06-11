﻿/**
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
   * <p>The configuration used for performing fraud detection over a speaker during a
   * session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudDetectionConfiguration">AWS
   * API Reference</a></p>
   */
  class FraudDetectionConfiguration
  {
  public:
    AWS_VOICEID_API FraudDetectionConfiguration();
    AWS_VOICEID_API FraudDetectionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudDetectionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Threshold value for determining whether the speaker is a fraudster. If the
     * detected risk score calculated by Voice ID is higher than the threshold, the
     * speaker is considered a fraudster.</p>
     */
    inline int GetRiskThreshold() const{ return m_riskThreshold; }
    inline bool RiskThresholdHasBeenSet() const { return m_riskThresholdHasBeenSet; }
    inline void SetRiskThreshold(int value) { m_riskThresholdHasBeenSet = true; m_riskThreshold = value; }
    inline FraudDetectionConfiguration& WithRiskThreshold(int value) { SetRiskThreshold(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the watchlist against which fraud detection is performed.
     * </p>
     */
    inline const Aws::String& GetWatchlistId() const{ return m_watchlistId; }
    inline bool WatchlistIdHasBeenSet() const { return m_watchlistIdHasBeenSet; }
    inline void SetWatchlistId(const Aws::String& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = value; }
    inline void SetWatchlistId(Aws::String&& value) { m_watchlistIdHasBeenSet = true; m_watchlistId = std::move(value); }
    inline void SetWatchlistId(const char* value) { m_watchlistIdHasBeenSet = true; m_watchlistId.assign(value); }
    inline FraudDetectionConfiguration& WithWatchlistId(const Aws::String& value) { SetWatchlistId(value); return *this;}
    inline FraudDetectionConfiguration& WithWatchlistId(Aws::String&& value) { SetWatchlistId(std::move(value)); return *this;}
    inline FraudDetectionConfiguration& WithWatchlistId(const char* value) { SetWatchlistId(value); return *this;}
    ///@}
  private:

    int m_riskThreshold;
    bool m_riskThresholdHasBeenSet = false;

    Aws::String m_watchlistId;
    bool m_watchlistIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
