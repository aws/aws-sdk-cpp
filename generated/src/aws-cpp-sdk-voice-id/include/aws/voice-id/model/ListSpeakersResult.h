/**
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
    AWS_VOICEID_API ListSpeakersResult() = default;
    AWS_VOICEID_API ListSpeakersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_VOICEID_API ListSpeakersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>If <code>NextToken</code> is returned, there are more results available. The
     * value of <code>NextToken</code> is a unique pagination token for each page. Make
     * the call again using the returned token to retrieve the next page. Keep all
     * other arguments unchanged. Each pagination token expires after 24 hours. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListSpeakersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list containing details about each speaker in the Amazon Web Services
     * account. </p>
     */
    inline const Aws::Vector<SpeakerSummary>& GetSpeakerSummaries() const { return m_speakerSummaries; }
    template<typename SpeakerSummariesT = Aws::Vector<SpeakerSummary>>
    void SetSpeakerSummaries(SpeakerSummariesT&& value) { m_speakerSummariesHasBeenSet = true; m_speakerSummaries = std::forward<SpeakerSummariesT>(value); }
    template<typename SpeakerSummariesT = Aws::Vector<SpeakerSummary>>
    ListSpeakersResult& WithSpeakerSummaries(SpeakerSummariesT&& value) { SetSpeakerSummaries(std::forward<SpeakerSummariesT>(value)); return *this;}
    template<typename SpeakerSummariesT = SpeakerSummary>
    ListSpeakersResult& AddSpeakerSummaries(SpeakerSummariesT&& value) { m_speakerSummariesHasBeenSet = true; m_speakerSummaries.emplace_back(std::forward<SpeakerSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListSpeakersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<SpeakerSummary> m_speakerSummaries;
    bool m_speakerSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace VoiceID
} // namespace Aws
