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
    AWS_REKOGNITION_API ComparedFace() = default;
    AWS_REKOGNITION_API ComparedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API ComparedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Bounding box of the face.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    ComparedFace& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Level of confidence that what the bounding box contains is a face.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline ComparedFace& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of facial landmarks.</p>
     */
    inline const Aws::Vector<Landmark>& GetLandmarks() const { return m_landmarks; }
    inline bool LandmarksHasBeenSet() const { return m_landmarksHasBeenSet; }
    template<typename LandmarksT = Aws::Vector<Landmark>>
    void SetLandmarks(LandmarksT&& value) { m_landmarksHasBeenSet = true; m_landmarks = std::forward<LandmarksT>(value); }
    template<typename LandmarksT = Aws::Vector<Landmark>>
    ComparedFace& WithLandmarks(LandmarksT&& value) { SetLandmarks(std::forward<LandmarksT>(value)); return *this;}
    template<typename LandmarksT = Landmark>
    ComparedFace& AddLandmarks(LandmarksT&& value) { m_landmarksHasBeenSet = true; m_landmarks.emplace_back(std::forward<LandmarksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.</p>
     */
    inline const Pose& GetPose() const { return m_pose; }
    inline bool PoseHasBeenSet() const { return m_poseHasBeenSet; }
    template<typename PoseT = Pose>
    void SetPose(PoseT&& value) { m_poseHasBeenSet = true; m_pose = std::forward<PoseT>(value); }
    template<typename PoseT = Pose>
    ComparedFace& WithPose(PoseT&& value) { SetPose(std::forward<PoseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies face image brightness and sharpness. </p>
     */
    inline const ImageQuality& GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    template<typename QualityT = ImageQuality>
    void SetQuality(QualityT&& value) { m_qualityHasBeenSet = true; m_quality = std::forward<QualityT>(value); }
    template<typename QualityT = ImageQuality>
    ComparedFace& WithQuality(QualityT&& value) { SetQuality(std::forward<QualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. Valid values include "Happy", "Sad", "Angry",
     * "Confused", "Disgusted", "Surprised", "Calm", "Unknown", and "Fear". </p>
     */
    inline const Aws::Vector<Emotion>& GetEmotions() const { return m_emotions; }
    inline bool EmotionsHasBeenSet() const { return m_emotionsHasBeenSet; }
    template<typename EmotionsT = Aws::Vector<Emotion>>
    void SetEmotions(EmotionsT&& value) { m_emotionsHasBeenSet = true; m_emotions = std::forward<EmotionsT>(value); }
    template<typename EmotionsT = Aws::Vector<Emotion>>
    ComparedFace& WithEmotions(EmotionsT&& value) { SetEmotions(std::forward<EmotionsT>(value)); return *this;}
    template<typename EmotionsT = Emotion>
    ComparedFace& AddEmotions(EmotionsT&& value) { m_emotionsHasBeenSet = true; m_emotions.emplace_back(std::forward<EmotionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates whether or not the face is smiling, and the confidence level in
     * the determination. </p>
     */
    inline const Smile& GetSmile() const { return m_smile; }
    inline bool SmileHasBeenSet() const { return m_smileHasBeenSet; }
    template<typename SmileT = Smile>
    void SetSmile(SmileT&& value) { m_smileHasBeenSet = true; m_smile = std::forward<SmileT>(value); }
    template<typename SmileT = Smile>
    ComparedFace& WithSmile(SmileT&& value) { SetSmile(std::forward<SmileT>(value)); return *this;}
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    double m_confidence{0.0};
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
