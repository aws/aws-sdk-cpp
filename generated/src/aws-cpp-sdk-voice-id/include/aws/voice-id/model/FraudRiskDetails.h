/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/KnownFraudsterRisk.h>
#include <aws/voice-id/model/VoiceSpoofingRisk.h>
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
   * <p>Details regarding various fraud risk analyses performed against the current
   * session state and streamed audio of the speaker.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/voice-id-2021-09-27/FraudRiskDetails">AWS
   * API Reference</a></p>
   */
  class FraudRiskDetails
  {
  public:
    AWS_VOICEID_API FraudRiskDetails() = default;
    AWS_VOICEID_API FraudRiskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudRiskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline const KnownFraudsterRisk& GetKnownFraudsterRisk() const { return m_knownFraudsterRisk; }
    inline bool KnownFraudsterRiskHasBeenSet() const { return m_knownFraudsterRiskHasBeenSet; }
    template<typename KnownFraudsterRiskT = KnownFraudsterRisk>
    void SetKnownFraudsterRisk(KnownFraudsterRiskT&& value) { m_knownFraudsterRiskHasBeenSet = true; m_knownFraudsterRisk = std::forward<KnownFraudsterRiskT>(value); }
    template<typename KnownFraudsterRiskT = KnownFraudsterRisk>
    FraudRiskDetails& WithKnownFraudsterRisk(KnownFraudsterRiskT&& value) { SetKnownFraudsterRisk(std::forward<KnownFraudsterRiskT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline const VoiceSpoofingRisk& GetVoiceSpoofingRisk() const { return m_voiceSpoofingRisk; }
    inline bool VoiceSpoofingRiskHasBeenSet() const { return m_voiceSpoofingRiskHasBeenSet; }
    template<typename VoiceSpoofingRiskT = VoiceSpoofingRisk>
    void SetVoiceSpoofingRisk(VoiceSpoofingRiskT&& value) { m_voiceSpoofingRiskHasBeenSet = true; m_voiceSpoofingRisk = std::forward<VoiceSpoofingRiskT>(value); }
    template<typename VoiceSpoofingRiskT = VoiceSpoofingRisk>
    FraudRiskDetails& WithVoiceSpoofingRisk(VoiceSpoofingRiskT&& value) { SetVoiceSpoofingRisk(std::forward<VoiceSpoofingRiskT>(value)); return *this;}
    ///@}
  private:

    KnownFraudsterRisk m_knownFraudsterRisk;
    bool m_knownFraudsterRiskHasBeenSet = false;

    VoiceSpoofingRisk m_voiceSpoofingRisk;
    bool m_voiceSpoofingRiskHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
