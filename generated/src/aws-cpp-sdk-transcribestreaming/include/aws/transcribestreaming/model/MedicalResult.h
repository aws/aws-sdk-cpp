/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalAlternative.h>
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
namespace TranscribeStreamingService
{
namespace Model
{

  /**
   * <p>The <code>Result</code> associated with a <code/>.</p> <p>Contains a set of
   * transcription results from one or more audio segments, along with additional
   * information per your request parameters. This can include information relating
   * to alternative transcriptions, channel identification, partial result
   * stabilization, language identification, and other transcription-related
   * data.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalResult">AWS
   * API Reference</a></p>
   */
  class MedicalResult
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalResult() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides a unique identifier for the <code>Result</code>.</p>
     */
    inline const Aws::String& GetResultId() const { return m_resultId; }
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }
    template<typename ResultIdT = Aws::String>
    void SetResultId(ResultIdT&& value) { m_resultIdHasBeenSet = true; m_resultId = std::forward<ResultIdT>(value); }
    template<typename ResultIdT = Aws::String>
    MedicalResult& WithResultId(ResultIdT&& value) { SetResultId(std::forward<ResultIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time, in seconds, of the <code>Result</code>.</p>
     */
    inline double GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(double value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline MedicalResult& WithStartTime(double value) { SetStartTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, in seconds, of the <code>Result</code>.</p>
     */
    inline double GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(double value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline MedicalResult& WithEndTime(double value) { SetEndTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete.</p>
     */
    inline bool GetIsPartial() const { return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline MedicalResult& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible alternative transcriptions for the input audio. Each
     * alternative may contain one or more of <code>Items</code>,
     * <code>Entities</code>, or <code>Transcript</code>.</p>
     */
    inline const Aws::Vector<MedicalAlternative>& GetAlternatives() const { return m_alternatives; }
    inline bool AlternativesHasBeenSet() const { return m_alternativesHasBeenSet; }
    template<typename AlternativesT = Aws::Vector<MedicalAlternative>>
    void SetAlternatives(AlternativesT&& value) { m_alternativesHasBeenSet = true; m_alternatives = std::forward<AlternativesT>(value); }
    template<typename AlternativesT = Aws::Vector<MedicalAlternative>>
    MedicalResult& WithAlternatives(AlternativesT&& value) { SetAlternatives(std::forward<AlternativesT>(value)); return *this;}
    template<typename AlternativesT = MedicalAlternative>
    MedicalResult& AddAlternatives(AlternativesT&& value) { m_alternativesHasBeenSet = true; m_alternatives.emplace_back(std::forward<AlternativesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the channel identified for the <code>Result</code>.</p>
     */
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    MedicalResult& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    double m_startTime{0.0};
    bool m_startTimeHasBeenSet = false;

    double m_endTime{0.0};
    bool m_endTimeHasBeenSet = false;

    bool m_isPartial{false};
    bool m_isPartialHasBeenSet = false;

    Aws::Vector<MedicalAlternative> m_alternatives;
    bool m_alternativesHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
