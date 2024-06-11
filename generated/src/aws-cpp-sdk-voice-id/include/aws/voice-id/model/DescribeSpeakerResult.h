﻿/**
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
  class DescribeSpeakerResult
  {
  public:
    AWS_VOICEID_API DescribeSpeakerResult();
    AWS_VOICEID_API DescribeSpeakerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API DescribeSpeakerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the specified speaker.</p>
     */
    inline const Speaker& GetSpeaker() const{ return m_speaker; }
    inline void SetSpeaker(const Speaker& value) { m_speaker = value; }
    inline void SetSpeaker(Speaker&& value) { m_speaker = std::move(value); }
    inline DescribeSpeakerResult& WithSpeaker(const Speaker& value) { SetSpeaker(value); return *this;}
    inline DescribeSpeakerResult& WithSpeaker(Speaker&& value) { SetSpeaker(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeSpeakerResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeSpeakerResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeSpeakerResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Speaker m_speaker;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
