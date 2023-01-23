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
  class DeleteSpeakerRequest : public VoiceIDRequest
  {
  public:
    AWS_VOICEID_API DeleteSpeakerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSpeaker"; }

    AWS_VOICEID_API Aws::String SerializePayload() const override;

    AWS_VOICEID_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline DeleteSpeakerRequest& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline DeleteSpeakerRequest& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the domain containing the speaker.</p>
     */
    inline DeleteSpeakerRequest& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline const Aws::String& GetSpeakerId() const{ return m_speakerId; }

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline bool SpeakerIdHasBeenSet() const { return m_speakerIdHasBeenSet; }

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline void SetSpeakerId(const Aws::String& value) { m_speakerIdHasBeenSet = true; m_speakerId = value; }

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline void SetSpeakerId(Aws::String&& value) { m_speakerIdHasBeenSet = true; m_speakerId = std::move(value); }

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline void SetSpeakerId(const char* value) { m_speakerIdHasBeenSet = true; m_speakerId.assign(value); }

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline DeleteSpeakerRequest& WithSpeakerId(const Aws::String& value) { SetSpeakerId(value); return *this;}

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline DeleteSpeakerRequest& WithSpeakerId(Aws::String&& value) { SetSpeakerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the speaker you want to delete.</p>
     */
    inline DeleteSpeakerRequest& WithSpeakerId(const char* value) { SetSpeakerId(value); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_speakerId;
    bool m_speakerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
