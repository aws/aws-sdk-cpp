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
    AWS_VOICEID_API FraudRiskDetails();
    AWS_VOICEID_API FraudRiskDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API FraudRiskDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_VOICEID_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline const KnownFraudsterRisk& GetKnownFraudsterRisk() const{ return m_knownFraudsterRisk; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline bool KnownFraudsterRiskHasBeenSet() const { return m_knownFraudsterRiskHasBeenSet; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline void SetKnownFraudsterRisk(const KnownFraudsterRisk& value) { m_knownFraudsterRiskHasBeenSet = true; m_knownFraudsterRisk = value; }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline void SetKnownFraudsterRisk(KnownFraudsterRisk&& value) { m_knownFraudsterRiskHasBeenSet = true; m_knownFraudsterRisk = std::move(value); }

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline FraudRiskDetails& WithKnownFraudsterRisk(const KnownFraudsterRisk& value) { SetKnownFraudsterRisk(value); return *this;}

    /**
     * <p>The details resulting from 'Known Fraudster Risk' analysis of the
     * speaker.</p>
     */
    inline FraudRiskDetails& WithKnownFraudsterRisk(KnownFraudsterRisk&& value) { SetKnownFraudsterRisk(std::move(value)); return *this;}


    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline const VoiceSpoofingRisk& GetVoiceSpoofingRisk() const{ return m_voiceSpoofingRisk; }

    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline bool VoiceSpoofingRiskHasBeenSet() const { return m_voiceSpoofingRiskHasBeenSet; }

    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline void SetVoiceSpoofingRisk(const VoiceSpoofingRisk& value) { m_voiceSpoofingRiskHasBeenSet = true; m_voiceSpoofingRisk = value; }

    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline void SetVoiceSpoofingRisk(VoiceSpoofingRisk&& value) { m_voiceSpoofingRiskHasBeenSet = true; m_voiceSpoofingRisk = std::move(value); }

    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline FraudRiskDetails& WithVoiceSpoofingRisk(const VoiceSpoofingRisk& value) { SetVoiceSpoofingRisk(value); return *this;}

    /**
     * <p>The details resulting from 'Voice Spoofing Risk' analysis of the speaker.</p>
     */
    inline FraudRiskDetails& WithVoiceSpoofingRisk(VoiceSpoofingRisk&& value) { SetVoiceSpoofingRisk(std::move(value)); return *this;}

  private:

    KnownFraudsterRisk m_knownFraudsterRisk;
    bool m_knownFraudsterRiskHasBeenSet = false;

    VoiceSpoofingRisk m_voiceSpoofingRisk;
    bool m_voiceSpoofingRiskHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
