﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/voice-id/VoiceID_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/voice-id/model/SpeakerSummary.h>
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
  class ListSpeakersResult
  {
  public:
    AWS_VOICEID_API ListSpeakersResult();
    AWS_VOICEID_API ListSpeakersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListSpeakersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSpeakersResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSpeakersResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSpeakersResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing details about each speaker in the Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<SpeakerSummary>& GetSpeakerSummaries() const{ return m_speakerSummaries; }
    inline void SetSpeakerSummaries(const Aws::Vector<SpeakerSummary>& value) { m_speakerSummaries = value; }
    inline void SetSpeakerSummaries(Aws::Vector<SpeakerSummary>&& value) { m_speakerSummaries = std::move(value); }
    inline ListSpeakersResult& WithSpeakerSummaries(const Aws::Vector<SpeakerSummary>& value) { SetSpeakerSummaries(value); return *this;}
    inline ListSpeakersResult& WithSpeakerSummaries(Aws::Vector<SpeakerSummary>&& value) { SetSpeakerSummaries(std::move(value)); return *this;}
    inline ListSpeakersResult& AddSpeakerSummaries(const SpeakerSummary& value) { m_speakerSummaries.push_back(value); return *this; }
    inline ListSpeakersResult& AddSpeakerSummaries(SpeakerSummary&& value) { m_speakerSummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSpeakersResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSpeakersResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSpeakersResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<SpeakerSummary> m_speakerSummaries;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
