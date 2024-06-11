﻿/**
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
  class DescribeSpeakerRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API DescribeSpeakerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSpeaker"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the domain that contains the speaker.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline DescribeSpeakerRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline DescribeSpeakerRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline DescribeSpeakerRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the speaker you are describing.</p>
     */
    inline const Aws::String& GetSpeakerId() const{ return m_speakerId; }
    inline bool SpeakerIdHasBeenSet() const { return m_speakerIdHasBeenSet; }
    inline void SetSpeakerId(const Aws::String& value) { m_speakerIdHasBeenSet = true; m_speakerId = value; }
    inline void SetSpeakerId(Aws::String&& value) { m_speakerIdHasBeenSet = true; m_speakerId = std::move(value); }
    inline void SetSpeakerId(const char* value) { m_speakerIdHasBeenSet = true; m_speakerId.assign(value); }
    inline DescribeSpeakerRequest& WithSpeakerId(const Aws::String& value) { SetSpeakerId(value); return *this;}
    inline DescribeSpeakerRequest& WithSpeakerId(Aws::String&& value) { SetSpeakerId(std::move(value)); return *this;}
    inline DescribeSpeakerRequest& WithSpeakerId(const char* value) { SetSpeakerId(value); return *this;}
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
