/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/TextDetection.h>
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
   * <p>Information about text detected in a video. Incudes the detected text, the
   * time in milliseconds from the start of the video that the text was detected, and
   * where it was detected on the screen.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/TextDetectionResult">AWS
   * API Reference</a></p>
   */
  class TextDetectionResult
  {
  public:
    AWS_REKOGNITION_API TextDetectionResult();
    AWS_REKOGNITION_API TextDetectionResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API TextDetectionResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time, in milliseconds from the start of the video, that the text was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the text first appears.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the text was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the text first appears.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the text was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the text first appears.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The time, in milliseconds from the start of the video, that the text was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the text first appears.</p>
     */
    inline TextDetectionResult& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>Details about text detected in a video.</p>
     */
    inline const TextDetection& GetTextDetection() const{ return m_textDetection; }

    /**
     * <p>Details about text detected in a video.</p>
     */
    inline bool TextDetectionHasBeenSet() const { return m_textDetectionHasBeenSet; }

    /**
     * <p>Details about text detected in a video.</p>
     */
    inline void SetTextDetection(const TextDetection& value) { m_textDetectionHasBeenSet = true; m_textDetection = value; }

    /**
     * <p>Details about text detected in a video.</p>
     */
    inline void SetTextDetection(TextDetection&& value) { m_textDetectionHasBeenSet = true; m_textDetection = std::move(value); }

    /**
     * <p>Details about text detected in a video.</p>
     */
    inline TextDetectionResult& WithTextDetection(const TextDetection& value) { SetTextDetection(value); return *this;}

    /**
     * <p>Details about text detected in a video.</p>
     */
    inline TextDetectionResult& WithTextDetection(TextDetection&& value) { SetTextDetection(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    TextDetection m_textDetection;
    bool m_textDetectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
