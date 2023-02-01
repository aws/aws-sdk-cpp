/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/FaceDetail.h>
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
   * <p>Information about a face detected in a video analysis request and the time
   * the face was detected in the video. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceDetection">AWS
   * API Reference</a></p>
   */
  class FaceDetection
  {
  public:
    AWS_REKOGNITION_API FaceDetection();
    AWS_REKOGNITION_API FaceDetection(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceDetection& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Time, in milliseconds from the start of the video, that the face was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the face first appears.</p>
     */
    inline long long GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the face was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the face first appears.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the face was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the face first appears.</p>
     */
    inline void SetTimestamp(long long value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>Time, in milliseconds from the start of the video, that the face was
     * detected. Note that <code>Timestamp</code> is not guaranteed to be accurate to
     * the individual frame where the face first appears.</p>
     */
    inline FaceDetection& WithTimestamp(long long value) { SetTimestamp(value); return *this;}


    /**
     * <p>The face properties for the detected face.</p>
     */
    inline const FaceDetail& GetFace() const{ return m_face; }

    /**
     * <p>The face properties for the detected face.</p>
     */
    inline bool FaceHasBeenSet() const { return m_faceHasBeenSet; }

    /**
     * <p>The face properties for the detected face.</p>
     */
    inline void SetFace(const FaceDetail& value) { m_faceHasBeenSet = true; m_face = value; }

    /**
     * <p>The face properties for the detected face.</p>
     */
    inline void SetFace(FaceDetail&& value) { m_faceHasBeenSet = true; m_face = std::move(value); }

    /**
     * <p>The face properties for the detected face.</p>
     */
    inline FaceDetection& WithFace(const FaceDetail& value) { SetFace(value); return *this;}

    /**
     * <p>The face properties for the detected face.</p>
     */
    inline FaceDetection& WithFace(FaceDetail&& value) { SetFace(std::move(value)); return *this;}

  private:

    long long m_timestamp;
    bool m_timestampHasBeenSet = false;

    FaceDetail m_face;
    bool m_faceHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
