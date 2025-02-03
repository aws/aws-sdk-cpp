/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/transcribestreaming/TranscribeStreamingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/transcribestreaming/model/MedicalScribeTranscriptItem.h>
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
   * <p>Contains a set of transcription results, along with additional information of
   * the segment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transcribe-streaming-2017-10-26/MedicalScribeTranscriptSegment">AWS
   * API Reference</a></p>
   */
  class MedicalScribeTranscriptSegment
  {
  public:
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment();
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the segment.</p>
     */
    inline const Aws::String& GetSegmentId() const{ return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    inline void SetSegmentId(const Aws::String& value) { m_segmentIdHasBeenSet = true; m_segmentId = value; }
    inline void SetSegmentId(Aws::String&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::move(value); }
    inline void SetSegmentId(const char* value) { m_segmentIdHasBeenSet = true; m_segmentId.assign(value); }
    inline MedicalScribeTranscriptSegment& WithSegmentId(const Aws::String& value) { SetSegmentId(value); return *this;}
    inline MedicalScribeTranscriptSegment& WithSegmentId(Aws::String&& value) { SetSegmentId(std::move(value)); return *this;}
    inline MedicalScribeTranscriptSegment& WithSegmentId(const char* value) { SetSegmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time, in milliseconds, of the segment.</p>
     */
    inline double GetBeginAudioTime() const{ return m_beginAudioTime; }
    inline bool BeginAudioTimeHasBeenSet() const { return m_beginAudioTimeHasBeenSet; }
    inline void SetBeginAudioTime(double value) { m_beginAudioTimeHasBeenSet = true; m_beginAudioTime = value; }
    inline MedicalScribeTranscriptSegment& WithBeginAudioTime(double value) { SetBeginAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, in milliseconds, of the segment.</p>
     */
    inline double GetEndAudioTime() const{ return m_endAudioTime; }
    inline bool EndAudioTimeHasBeenSet() const { return m_endAudioTimeHasBeenSet; }
    inline void SetEndAudioTime(double value) { m_endAudioTimeHasBeenSet = true; m_endAudioTime = value; }
    inline MedicalScribeTranscriptSegment& WithEndAudioTime(double value) { SetEndAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains transcribed text of the segment.</p>
     */
    inline const Aws::String& GetContent() const{ return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    inline void SetContent(const Aws::String& value) { m_contentHasBeenSet = true; m_content = value; }
    inline void SetContent(Aws::String&& value) { m_contentHasBeenSet = true; m_content = std::move(value); }
    inline void SetContent(const char* value) { m_contentHasBeenSet = true; m_content.assign(value); }
    inline MedicalScribeTranscriptSegment& WithContent(const Aws::String& value) { SetContent(value); return *this;}
    inline MedicalScribeTranscriptSegment& WithContent(Aws::String&& value) { SetContent(std::move(value)); return *this;}
    inline MedicalScribeTranscriptSegment& WithContent(const char* value) { SetContent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains words, phrases, or punctuation marks in your segment.</p>
     */
    inline const Aws::Vector<MedicalScribeTranscriptItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<MedicalScribeTranscriptItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<MedicalScribeTranscriptItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline MedicalScribeTranscriptSegment& WithItems(const Aws::Vector<MedicalScribeTranscriptItem>& value) { SetItems(value); return *this;}
    inline MedicalScribeTranscriptSegment& WithItems(Aws::Vector<MedicalScribeTranscriptItem>&& value) { SetItems(std::move(value)); return *this;}
    inline MedicalScribeTranscriptSegment& AddItems(const MedicalScribeTranscriptItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline MedicalScribeTranscriptSegment& AddItems(MedicalScribeTranscriptItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete. </p>
     */
    inline bool GetIsPartial() const{ return m_isPartial; }
    inline bool IsPartialHasBeenSet() const { return m_isPartialHasBeenSet; }
    inline void SetIsPartial(bool value) { m_isPartialHasBeenSet = true; m_isPartial = value; }
    inline MedicalScribeTranscriptSegment& WithIsPartial(bool value) { SetIsPartial(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates which audio channel is associated with the
     * <code>MedicalScribeTranscriptSegment</code>. </p> <p>If
     * <code>MedicalScribeChannelDefinition</code> is not provided in the
     * <code>MedicalScribeConfigurationEvent</code>, then this field will not be
     * included. </p>
     */
    inline const Aws::String& GetChannelId() const{ return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    inline void SetChannelId(const Aws::String& value) { m_channelIdHasBeenSet = true; m_channelId = value; }
    inline void SetChannelId(Aws::String&& value) { m_channelIdHasBeenSet = true; m_channelId = std::move(value); }
    inline void SetChannelId(const char* value) { m_channelIdHasBeenSet = true; m_channelId.assign(value); }
    inline MedicalScribeTranscriptSegment& WithChannelId(const Aws::String& value) { SetChannelId(value); return *this;}
    inline MedicalScribeTranscriptSegment& WithChannelId(Aws::String&& value) { SetChannelId(std::move(value)); return *this;}
    inline MedicalScribeTranscriptSegment& WithChannelId(const char* value) { SetChannelId(value); return *this;}
    ///@}
  private:

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    double m_beginAudioTime;
    bool m_beginAudioTimeHasBeenSet = false;

    double m_endAudioTime;
    bool m_endAudioTimeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<MedicalScribeTranscriptItem> m_items;
    bool m_itemsHasBeenSet = false;

    bool m_isPartial;
    bool m_isPartialHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
