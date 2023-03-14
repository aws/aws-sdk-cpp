/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/voice-id/model/Speaker.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace VoiceID
{
namespace Model
{
  class OptOutSpeakerResult
  {
  public:
    AWS_VOICEID_API OptOutSpeakerResult();
    AWS_VOICEID_API OptOutSpeakerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API OptOutSpeakerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline const Speaker& GetSpeaker() const{ return m_speaker; }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline void SetSpeaker(const Speaker& value) { m_speaker = value; }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline void SetSpeaker(Speaker&& value) { m_speaker = std::move(value); }

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline OptOutSpeakerResult& WithSpeaker(const Speaker& value) { SetSpeaker(value); return *this;}

    /**
     * <p>Details about the opted-out speaker.</p>
     */
    inline OptOutSpeakerResult& WithSpeaker(Speaker&& value) { SetSpeaker(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline OptOutSpeakerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline OptOutSpeakerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline OptOutSpeakerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Speaker m_speaker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
