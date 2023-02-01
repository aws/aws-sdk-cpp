/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ModerationLabel.h>
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


    /**
     * <p>Time, in milliseconds from the beginning of the video, that the content
     * moderation label was detected. Note that <code>Timestamp</code> is not
     * guaranteed to be accurate to the individual frame where the moderated content
     * first appears.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the content
     * moderation label was detected. Note that <code>Timestamp</code> is not
     * guaranteed to be accurate to the individual frame where the moderated content
     * first appears.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the content
     * moderation label was detected. Note that <code>Timestamp</code> is not
     * guaranteed to be accurate to the individual frame where the moderated content
     * first appears.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time, in milliseconds from the beginning of the video, that the content
     * moderation label was detected. Note that <code>Timestamp</code> is not
     * guaranteed to be accurate to the individual frame where the moderated content
     * first appears.</p>
     */
    inline ContentModerationDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline const ModerationLabel& GetModerationLabel() const{ return m_moderationLabel; }

    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline bool ModerationLabelHasBeenSet() const { return m_moderationLabelHasBeenSet; }

    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline void SetModerationLabel(const ModerationLabel& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = value; }

    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline void SetModerationLabel(ModerationLabel&& value) { m_moderationLabelHasBeenSet = true; m_moderationLabel = std::move(value); }

    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline ContentModerationDetection& WithModerationLabel(const ModerationLabel& value) { SetModerationLabel(value); return *this;}

    /**
     * <p>The content moderation label detected by in the stored video.</p>
     */
    inline ContentModerationDetection& WithModerationLabel(ModerationLabel&& value) { SetModerationLabel(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    ModerationLabel m_moderationLabel;
    bool m_moderationLabelHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
