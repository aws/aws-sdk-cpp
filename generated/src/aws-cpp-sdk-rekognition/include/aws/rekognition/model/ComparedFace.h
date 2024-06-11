/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Pose.h>
#include <aws/rekognition/model/ImageQuality.h>
#include <aws/rekognition/model/Smile.h>
#include <aws/rekognition/model/Landmark.h>
#include <aws/rekognition/model/Emotion.h>
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
   * <p>Provides face metadata for target image faces that are analyzed by
   * <code>CompareFaces</code> and <code>RecognizeCelebrities</code>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/ComparedFace">AWS
   * API Reference</a></p>
   */
  class ComparedFace
  {
  public:
    AWS_REKOGNITION_API ComparedFace();
    AWS_REKOGNITION_API ComparedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ComparedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const{ return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    inline void SetBoundingBox(const BoundingBox& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = value; }
    inline void SetBoundingBox(BoundingBox&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::move(value); }
    inline ComparedFace& WithBoundingBox(const BoundingBox& value) { SetBoundingBox(value); return *this;}
    inline ComparedFace& WithBoundingBox(BoundingBox&& value) { SetBoundingBox(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ComparedFace& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of facial landmarks.</p>
     */
    inline const Aws::Vector<Landmark>& GetLandmarks() const{ return m_landmarks; }
    inline bool LandmarksHasBeenSet() const { return m_landmarksHasBeenSet; }
    inline void SetLandmarks(const Aws::Vector<Landmark>& value) { m_landmarksHasBeenSet = true; m_landmarks = value; }
    inline void SetLandmarks(Aws::Vector<Landmark>&& value) { m_landmarksHasBeenSet = true; m_landmarks = std::move(value); }
    inline ComparedFace& WithLandmarks(const Aws::Vector<Landmark>& value) { SetLandmarks(value); return *this;}
    inline ComparedFace& WithLandmarks(Aws::Vector<Landmark>&& value) { SetLandmarks(std::move(value)); return *this;}
    inline ComparedFace& AddLandmarks(const Landmark& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(value); return *this; }
    inline ComparedFace& AddLandmarks(Landmark&& value) { m_landmarksHasBeenSet = true; m_landmarks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline const Pose& GetPose() const{ return m_pose; }
    inline bool PoseHasBeenSet() const { return m_poseHasBeenSet; }
    inline void SetPose(const Pose& value) { m_poseHasBeenSet = true; m_pose = value; }
    inline void SetPose(Pose&& value) { m_poseHasBeenSet = true; m_pose = std::move(value); }
    inline ComparedFace& WithPose(const Pose& value) { SetPose(value); return *this;}
    inline ComparedFace& WithPose(Pose&& value) { SetPose(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline const ImageQuality& GetQuality() const{ return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    inline void SetQuality(const ImageQuality& value) { m_qualityHasBeenSet = true; m_quality = value; }
    inline void SetQuality(ImageQuality&& value) { m_qualityHasBeenSet = true; m_quality = std::move(value); }
    inline ComparedFace& WithQuality(const ImageQuality& value) { SetQuality(value); return *this;}
    inline ComparedFace& WithQuality(ImageQuality&& value) { SetQuality(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. Valid values include "Happy", "Sad", "Angry",
     * "Confused", "Disgusted", "Surprised", "Calm", "Unknown", and "Fear". </p>
     */
    inline const Aws::Vector<Emotion>& GetEmotions() const{ return m_emotions; }
    inline bool EmotionsHasBeenSet() const { return m_emotionsHasBeenSet; }
    inline void SetEmotions(const Aws::Vector<Emotion>& value) { m_emotionsHasBeenSet = true; m_emotions = value; }
    inline void SetEmotions(Aws::Vector<Emotion>&& value) { m_emotionsHasBeenSet = true; m_emotions = std::move(value); }
    inline ComparedFace& WithEmotions(const Aws::Vector<Emotion>& value) { SetEmotions(value); return *this;}
    inline ComparedFace& WithEmotions(Aws::Vector<Emotion>&& value) { SetEmotions(std::move(value)); return *this;}
    inline ComparedFace& AddEmotions(const Emotion& value) { m_emotionsHasBeenSet = true; m_emotions.push_back(value); return *this; }
    inline ComparedFace& AddEmotions(Emotion&& value) { m_emotionsHasBeenSet = true; m_emotions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether or not the face is smiling, and the confidence level in
     * the determination. </p>
     */
    inline const Smile& GetSmile() const{ return m_smile; }
    inline bool SmileHasBeenSet() const { return m_smileHasBeenSet; }
    inline void SetSmile(const Smile& value) { m_smileHasBeenSet = true; m_smile = value; }
    inline void SetSmile(Smile&& value) { m_smileHasBeenSet = true; m_smile = std::move(value); }
    inline ComparedFace& WithSmile(const Smile& value) { SetSmile(value); return *this;}
    inline ComparedFace& WithSmile(Smile&& value) { SetSmile(std::move(value)); return *this;}
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::Vector<Landmark> m_landmarks;
    bool m_landmarksHasBeenSet = false;

    Pose m_pose;
    bool m_poseHasBeenSet = false;

    ImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    Aws::Vector<Emotion> m_emotions;
    bool m_emotionsHasBeenSet = false;

    Smile m_smile;
    bool m_smileHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
