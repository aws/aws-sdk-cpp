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
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment() = default;
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API MedicalScribeTranscriptSegment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSCRIBESTREAMINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the segment.</p>
     */
    inline const Aws::String& GetSegmentId() const { return m_segmentId; }
    inline bool SegmentIdHasBeenSet() const { return m_segmentIdHasBeenSet; }
    template<typename SegmentIdT = Aws::String>
    void SetSegmentId(SegmentIdT&& value) { m_segmentIdHasBeenSet = true; m_segmentId = std::forward<SegmentIdT>(value); }
    template<typename SegmentIdT = Aws::String>
    MedicalScribeTranscriptSegment& WithSegmentId(SegmentIdT&& value) { SetSegmentId(std::forward<SegmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The start time, in milliseconds, of the segment.</p>
     */
    inline double GetBeginAudioTime() const { return m_beginAudioTime; }
    inline bool BeginAudioTimeHasBeenSet() const { return m_beginAudioTimeHasBeenSet; }
    inline void SetBeginAudioTime(double value) { m_beginAudioTimeHasBeenSet = true; m_beginAudioTime = value; }
    inline MedicalScribeTranscriptSegment& WithBeginAudioTime(double value) { SetBeginAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time, in milliseconds, of the segment.</p>
     */
    inline double GetEndAudioTime() const { return m_endAudioTime; }
    inline bool EndAudioTimeHasBeenSet() const { return m_endAudioTimeHasBeenSet; }
    inline void SetEndAudioTime(double value) { m_endAudioTimeHasBeenSet = true; m_endAudioTime = value; }
    inline MedicalScribeTranscriptSegment& WithEndAudioTime(double value) { SetEndAudioTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains transcribed text of the segment.</p>
     */
    inline const Aws::String& GetContent() const { return m_content; }
    inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
    template<typename ContentT = Aws::String>
    void SetContent(ContentT&& value) { m_contentHasBeenSet = true; m_content = std::forward<ContentT>(value); }
    template<typename ContentT = Aws::String>
    MedicalScribeTranscriptSegment& WithContent(ContentT&& value) { SetContent(std::forward<ContentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains words, phrases, or punctuation marks in your segment.</p>
     */
    inline const Aws::Vector<MedicalScribeTranscriptItem>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<MedicalScribeTranscriptItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<MedicalScribeTranscriptItem>>
    MedicalScribeTranscriptSegment& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = MedicalScribeTranscriptItem>
    MedicalScribeTranscriptSegment& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates if the segment is complete.</p> <p>If <code>IsPartial</code> is
     * <code>true</code>, the segment is not complete. If <code>IsPartial</code> is
     * <code>false</code>, the segment is complete. </p>
     */
    inline bool GetIsPartial() const { return m_isPartial; }
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
    inline const Aws::String& GetChannelId() const { return m_channelId; }
    inline bool ChannelIdHasBeenSet() const { return m_channelIdHasBeenSet; }
    template<typename ChannelIdT = Aws::String>
    void SetChannelId(ChannelIdT&& value) { m_channelIdHasBeenSet = true; m_channelId = std::forward<ChannelIdT>(value); }
    template<typename ChannelIdT = Aws::String>
    MedicalScribeTranscriptSegment& WithChannelId(ChannelIdT&& value) { SetChannelId(std::forward<ChannelIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_segmentId;
    bool m_segmentIdHasBeenSet = false;

    double m_beginAudioTime{0.0};
    bool m_beginAudioTimeHasBeenSet = false;

    double m_endAudioTime{0.0};
    bool m_endAudioTimeHasBeenSet = false;

    Aws::String m_content;
    bool m_contentHasBeenSet = false;

    Aws::Vector<MedicalScribeTranscriptItem> m_items;
    bool m_itemsHasBeenSet = false;

    bool m_isPartial{false};
    bool m_isPartialHasBeenSet = false;

    Aws::String m_channelId;
    bool m_channelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace TranscribeStreamingService
} // namespace Aws
