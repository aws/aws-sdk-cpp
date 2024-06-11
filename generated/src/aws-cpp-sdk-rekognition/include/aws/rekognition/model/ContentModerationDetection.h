﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ModerationLabel.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/ContentType.h>
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
namespace Rekognition
{
namespace Model
{

  /**
   * <p>Information about an inappropriate, unwanted, or offensive content label
   * detection in a stored video.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ContentModerationDetection">AWS
   * API Reference</a></p>
   */
  class ContentModerationDetection
  {
  public:
    AWS_REKOGNITION_API ContentModerationDetection();
    AWS_REKOGNITION_API ContentModerationDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ContentModerationDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Time, in milliseconds from the beginning of the video, that the content
     * moderation label was detected. Note that <code>Timestamp</code> is not
     * guaranteed to be accurate to the individual frame where the moderated content
     * first appears.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline ContentModerationDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline const ModerationLabel& GetModerationLabel() const{ return m_moderationLabel; }
    inline bool ModerationLabelHasBeenSet() const { return m_moderationLabelHasBeenSet; }
    inline void SetModerationLabel(const ModerationLabel& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = value; }
    inline void SetModerationLabel(ModerationLabel&& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = std::move(value); }
    inline ContentModerationDetection& WithModerationLabel(const ModerationLabel& value) { SetModerationLabel(value); return *this;}
    inline ContentModerationDetection& WithModerationLabel(ModerationLabel&& value) { SetModerationLabel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time in milliseconds defining the start of the timeline segment
     * containing a continuously detected moderation label.</p>
     */
    inline long long GetStartTimestampMillis() const{ return m_startTimestampMillis; }
    inline bool StartTimestampMillisHasBeenSet() const { return m_startTimestampMillisHasBeenSet; }
    inline void SetStartTimestampMillis(long long value) { m_startTimestampMillisHasBeenSet = true; m_startTimestampMillis = value; }
    inline ContentModerationDetection& WithStartTimestampMillis(long long value) { SetStartTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time in milliseconds defining the end of the timeline segment containing
     * a continuously detected moderation label. </p>
     */
    inline long long GetEndTimestampMillis() const{ return m_endTimestampMillis; }
    inline bool EndTimestampMillisHasBeenSet() const { return m_endTimestampMillisHasBeenSet; }
    inline void SetEndTimestampMillis(long long value) { m_endTimestampMillisHasBeenSet = true; m_endTimestampMillis = value; }
    inline ContentModerationDetection& WithEndTimestampMillis(long long value) { SetEndTimestampMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time duration of a segment in milliseconds, I.e. time elapsed from
     * StartTimestampMillis to EndTimestampMillis. </p>
     */
    inline long long GetDurationMillis() const{ return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline ContentModerationDetection& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of predicted results for the type of content an image contains. For
     * example, the image content might be from animation, sports, or a video game.</p>
     */
    inline const Aws::Vector<ContentType>& GetContentTypes() const{ return m_contentTypes; }
    inline bool ContentTypesHasBeenSet() const { return m_contentTypesHasBeenSet; }
    inline void SetContentTypes(const Aws::Vector<ContentType>& value) { m_contentTypesHasBeenSet = true; m_contentTypes = value; }
    inline void SetContentTypes(Aws::Vector<ContentType>&& value) { m_contentTypesHasBeenSet = true; m_contentTypes = std::move(value); }
    inline ContentModerationDetection& WithContentTypes(const Aws::Vector<ContentType>& value) { SetContentTypes(value); return *this;}
    inline ContentModerationDetection& WithContentTypes(Aws::Vector<ContentType>&& value) { SetContentTypes(std::move(value)); return *this;}
    inline ContentModerationDetection& AddContentTypes(const ContentType& value) { m_contentTypesHasBeenSet = true; m_contentTypes.push_back(value); return *this; }
    inline ContentModerationDetection& AddContentTypes(ContentType&& value) { m_contentTypesHasBeenSet = true; m_contentTypes.push_back(std::move(value)); return *this; }
    ///@}
  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    ModerationLabel m_moderationLabel;
    bool m_moderationLabelHasBeenSet = false;

    long long m_startTimestampMillis;
    bool m_startTimestampMillisHasBeenSet = false;

    long long m_endTimestampMillis;
    bool m_endTimestampMillisHasBeenSet = false;

    long long m_durationMillis;
    bool m_durationMillisHasBeenSet = false;

    Aws::Vector<ContentType> m_contentTypes;
    bool m_contentTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
