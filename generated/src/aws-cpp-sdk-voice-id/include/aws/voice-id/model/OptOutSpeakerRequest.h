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
  class OptOutSpeakerRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API OptOutSpeakerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "OptOutSpeaker"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    OptOutSpeakerRequest& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the speaker you want opted-out.</p>
     */
    inline const Aws::String& GetSpeakerId() const { return m_speakerId; }
    inline bool SpeakerIdHasBeenSet() const { return m_speakerIdHasBeenSet; }
    template<typename SpeakerIdT = Aws::String>
    void SetSpeakerId(SpeakerIdT&& value) { m_speakerIdHasBeenSet = true; m_speakerId = std::forward<SpeakerIdT>(value); }
    template<typename SpeakerIdT = Aws::String>
    OptOutSpeakerRequest& WithSpeakerId(SpeakerIdT&& value) { SetSpeakerId(std::forward<SpeakerIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_speakerId;
    bool m_speakerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
