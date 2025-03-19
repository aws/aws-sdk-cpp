/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/rekognition/model/AgeRange.h>
#include <aws/rekognition/model/Smile.h>
#include <aws/rekognition/model/Eyeglasses.h>
#include <aws/rekognition/model/Sunglasses.h>
#include <aws/rekognition/model/Gender.h>
#include <aws/rekognition/model/Beard.h>
#include <aws/rekognition/model/Mustache.h>
#include <aws/rekognition/model/EyeOpen.h>
#include <aws/rekognition/model/MouthOpen.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/Pose.h>
#include <aws/rekognition/model/ImageQuality.h>
#include <aws/rekognition/model/FaceOccluded.h>
#include <aws/rekognition/model/EyeDirection.h>
#include <aws/rekognition/model/Emotion.h>
#include <aws/rekognition/model/Landmark.h>
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
   * <p>Structure containing attributes of the face that the algorithm detected.</p>
   * <p>A <code>FaceDetail</code> object contains either the default facial
   * attributes or all facial attributes. The default attributes are
   * <code>BoundingBox</code>, <code>Confidence</code>, <code>Landmarks</code>,
   * <code>Pose</code>, and <code>Quality</code>.</p> <p> <a>GetFaceDetection</a> is
   * the only Amazon Rekognition Video stored video operation that can return a
   * <code>FaceDetail</code> object with all attributes. To specify which attributes
   * to return, use the <code>FaceAttributes</code> input parameter for
   * <a>StartFaceDetection</a>. The following Amazon Rekognition Video operations
   * return only the default attributes. The corresponding Start operations don't
   * have a <code>FaceAttributes</code> input parameter:</p> <ul> <li>
   * <p>GetCelebrityRecognition</p> </li> <li> <p>GetPersonTracking</p> </li> <li>
   * <p>GetFaceSearch</p> </li> </ul> <p>The Amazon Rekognition Image
   * <a>DetectFaces</a> and <a>IndexFaces</a> operations can return all facial
   * attributes. To specify which attributes to return, use the
   * <code>Attributes</code> input parameter for <code>DetectFaces</code>. For
   * <code>IndexFaces</code>, use the <code>DetectAttributes</code> input
   * parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/FaceDetail">AWS
   * API Reference</a></p>
   */
  class FaceDetail
  {
  public:
    AWS_REKOGNITION_API FaceDetail() = default;
    AWS_REKOGNITION_API FaceDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API FaceDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Bounding box of the face. Default attribute.</p>
     */
    inline const BoundingBox& GetBoundingBox() const { return m_boundingBox; }
    inline bool BoundingBoxHasBeenSet() const { return m_boundingBoxHasBeenSet; }
    template<typename BoundingBoxT = BoundingBox>
    void SetBoundingBox(BoundingBoxT&& value) { m_boundingBoxHasBeenSet = true; m_boundingBox = std::forward<BoundingBoxT>(value); }
    template<typename BoundingBoxT = BoundingBox>
    FaceDetail& WithBoundingBox(BoundingBoxT&& value) { SetBoundingBox(std::forward<BoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated age range, in years, for the face. Low represents the lowest
     * estimated age and High represents the highest estimated age.</p>
     */
    inline const AgeRange& GetAgeRange() const { return m_ageRange; }
    inline bool AgeRangeHasBeenSet() const { return m_ageRangeHasBeenSet; }
    template<typename AgeRangeT = AgeRange>
    void SetAgeRange(AgeRangeT&& value) { m_ageRangeHasBeenSet = true; m_ageRange = std::forward<AgeRangeT>(value); }
    template<typename AgeRangeT = AgeRange>
    FaceDetail& WithAgeRange(AgeRangeT&& value) { SetAgeRange(std::forward<AgeRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the face is smiling, and the confidence level in the
     * determination.</p>
     */
    inline const Smile& GetSmile() const { return m_smile; }
    inline bool SmileHasBeenSet() const { return m_smileHasBeenSet; }
    template<typename SmileT = Smile>
    void SetSmile(SmileT&& value) { m_smileHasBeenSet = true; m_smile = std::forward<SmileT>(value); }
    template<typename SmileT = Smile>
    FaceDetail& WithSmile(SmileT&& value) { SetSmile(std::forward<SmileT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the face is wearing eye glasses, and the confidence
     * level in the determination.</p>
     */
    inline const Eyeglasses& GetEyeglasses() const { return m_eyeglasses; }
    inline bool EyeglassesHasBeenSet() const { return m_eyeglassesHasBeenSet; }
    template<typename EyeglassesT = Eyeglasses>
    void SetEyeglasses(EyeglassesT&& value) { m_eyeglassesHasBeenSet = true; m_eyeglasses = std::forward<EyeglassesT>(value); }
    template<typename EyeglassesT = Eyeglasses>
    FaceDetail& WithEyeglasses(EyeglassesT&& value) { SetEyeglasses(std::forward<EyeglassesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the face is wearing sunglasses, and the confidence
     * level in the determination.</p>
     */
    inline const Sunglasses& GetSunglasses() const { return m_sunglasses; }
    inline bool SunglassesHasBeenSet() const { return m_sunglassesHasBeenSet; }
    template<typename SunglassesT = Sunglasses>
    void SetSunglasses(SunglassesT&& value) { m_sunglassesHasBeenSet = true; m_sunglasses = std::forward<SunglassesT>(value); }
    template<typename SunglassesT = Sunglasses>
    FaceDetail& WithSunglasses(SunglassesT&& value) { SetSunglasses(std::forward<SunglassesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The predicted gender of a detected face. </p>
     */
    inline const Gender& GetGender() const { return m_gender; }
    inline bool GenderHasBeenSet() const { return m_genderHasBeenSet; }
    template<typename GenderT = Gender>
    void SetGender(GenderT&& value) { m_genderHasBeenSet = true; m_gender = std::forward<GenderT>(value); }
    template<typename GenderT = Gender>
    FaceDetail& WithGender(GenderT&& value) { SetGender(std::forward<GenderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the face has a beard, and the confidence level in
     * the determination.</p>
     */
    inline const Beard& GetBeard() const { return m_beard; }
    inline bool BeardHasBeenSet() const { return m_beardHasBeenSet; }
    template<typename BeardT = Beard>
    void SetBeard(BeardT&& value) { m_beardHasBeenSet = true; m_beard = std::forward<BeardT>(value); }
    template<typename BeardT = Beard>
    FaceDetail& WithBeard(BeardT&& value) { SetBeard(std::forward<BeardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the face has a mustache, and the confidence level in
     * the determination.</p>
     */
    inline const Mustache& GetMustache() const { return m_mustache; }
    inline bool MustacheHasBeenSet() const { return m_mustacheHasBeenSet; }
    template<typename MustacheT = Mustache>
    void SetMustache(MustacheT&& value) { m_mustacheHasBeenSet = true; m_mustache = std::forward<MustacheT>(value); }
    template<typename MustacheT = Mustache>
    FaceDetail& WithMustache(MustacheT&& value) { SetMustache(std::forward<MustacheT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the eyes on the face are open, and the confidence
     * level in the determination.</p>
     */
    inline const EyeOpen& GetEyesOpen() const { return m_eyesOpen; }
    inline bool EyesOpenHasBeenSet() const { return m_eyesOpenHasBeenSet; }
    template<typename EyesOpenT = EyeOpen>
    void SetEyesOpen(EyesOpenT&& value) { m_eyesOpenHasBeenSet = true; m_eyesOpen = std::forward<EyesOpenT>(value); }
    template<typename EyesOpenT = EyeOpen>
    FaceDetail& WithEyesOpen(EyesOpenT&& value) { SetEyesOpen(std::forward<EyesOpenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether or not the mouth on the face is open, and the confidence
     * level in the determination.</p>
     */
    inline const MouthOpen& GetMouthOpen() const { return m_mouthOpen; }
    inline bool MouthOpenHasBeenSet() const { return m_mouthOpenHasBeenSet; }
    template<typename MouthOpenT = MouthOpen>
    void SetMouthOpen(MouthOpenT&& value) { m_mouthOpenHasBeenSet = true; m_mouthOpen = std::forward<MouthOpenT>(value); }
    template<typename MouthOpenT = MouthOpen>
    FaceDetail& WithMouthOpen(MouthOpenT&& value) { SetMouthOpen(std::forward<MouthOpenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The emotions that appear to be expressed on the face, and the confidence
     * level in the determination. The API is only making a determination of the
     * physical appearance of a person's face. It is not a determination of the
     * person’s internal emotional state and should not be used in such a way. For
     * example, a person pretending to have a sad face might not be sad
     * emotionally.</p>
     */
    inline const Aws::Vector<Emotion>& GetEmotions() const { return m_emotions; }
    inline bool EmotionsHasBeenSet() const { return m_emotionsHasBeenSet; }
    template<typename EmotionsT = Aws::Vector<Emotion>>
    void SetEmotions(EmotionsT&& value) { m_emotionsHasBeenSet = true; m_emotions = std::forward<EmotionsT>(value); }
    template<typename EmotionsT = Aws::Vector<Emotion>>
    FaceDetail& WithEmotions(EmotionsT&& value) { SetEmotions(std::forward<EmotionsT>(value)); return *this;}
    template<typename EmotionsT = Emotion>
    FaceDetail& AddEmotions(EmotionsT&& value) { m_emotionsHasBeenSet = true; m_emotions.emplace_back(std::forward<EmotionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the location of landmarks on the face. Default attribute.</p>
     */
    inline const Aws::Vector<Landmark>& GetLandmarks() const { return m_landmarks; }
    inline bool LandmarksHasBeenSet() const { return m_landmarksHasBeenSet; }
    template<typename LandmarksT = Aws::Vector<Landmark>>
    void SetLandmarks(LandmarksT&& value) { m_landmarksHasBeenSet = true; m_landmarks = std::forward<LandmarksT>(value); }
    template<typename LandmarksT = Aws::Vector<Landmark>>
    FaceDetail& WithLandmarks(LandmarksT&& value) { SetLandmarks(std::forward<LandmarksT>(value)); return *this;}
    template<typename LandmarksT = Landmark>
    FaceDetail& AddLandmarks(LandmarksT&& value) { m_landmarksHasBeenSet = true; m_landmarks.emplace_back(std::forward<LandmarksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates the pose of the face as determined by its pitch, roll, and yaw.
     * Default attribute.</p>
     */
    inline const Pose& GetPose() const { return m_pose; }
    inline bool PoseHasBeenSet() const { return m_poseHasBeenSet; }
    template<typename PoseT = Pose>
    void SetPose(PoseT&& value) { m_poseHasBeenSet = true; m_pose = std::forward<PoseT>(value); }
    template<typename PoseT = Pose>
    FaceDetail& WithPose(PoseT&& value) { SetPose(std::forward<PoseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies image brightness and sharpness. Default attribute.</p>
     */
    inline const ImageQuality& GetQuality() const { return m_quality; }
    inline bool QualityHasBeenSet() const { return m_qualityHasBeenSet; }
    template<typename QualityT = ImageQuality>
    void SetQuality(QualityT&& value) { m_qualityHasBeenSet = true; m_quality = std::forward<QualityT>(value); }
    template<typename QualityT = ImageQuality>
    FaceDetail& WithQuality(QualityT&& value) { SetQuality(std::forward<QualityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Confidence level that the bounding box contains a face (and not a different
     * object such as a tree). Default attribute.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline FaceDetail& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <code>FaceOccluded</code> should return "true" with a high confidence score
     * if a detected face’s eyes, nose, and mouth are partially captured or if they are
     * covered by masks, dark sunglasses, cell phones, hands, or other objects.
     * <code>FaceOccluded</code> should return "false" with a high confidence score if
     * common occurrences that do not impact face verification are detected, such as
     * eye glasses, lightly tinted sunglasses, strands of hair, and others. </p>
     */
    inline const FaceOccluded& GetFaceOccluded() const { return m_faceOccluded; }
    inline bool FaceOccludedHasBeenSet() const { return m_faceOccludedHasBeenSet; }
    template<typename FaceOccludedT = FaceOccluded>
    void SetFaceOccluded(FaceOccludedT&& value) { m_faceOccludedHasBeenSet = true; m_faceOccluded = std::forward<FaceOccludedT>(value); }
    template<typename FaceOccludedT = FaceOccluded>
    FaceDetail& WithFaceOccluded(FaceOccludedT&& value) { SetFaceOccluded(std::forward<FaceOccludedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the direction the eyes are gazing in, as defined by pitch and
     * yaw.</p>
     */
    inline const EyeDirection& GetEyeDirection() const { return m_eyeDirection; }
    inline bool EyeDirectionHasBeenSet() const { return m_eyeDirectionHasBeenSet; }
    template<typename EyeDirectionT = EyeDirection>
    void SetEyeDirection(EyeDirectionT&& value) { m_eyeDirectionHasBeenSet = true; m_eyeDirection = std::forward<EyeDirectionT>(value); }
    template<typename EyeDirectionT = EyeDirection>
    FaceDetail& WithEyeDirection(EyeDirectionT&& value) { SetEyeDirection(std::forward<EyeDirectionT>(value)); return *this;}
    ///@}
  private:

    BoundingBox m_boundingBox;
    bool m_boundingBoxHasBeenSet = false;

    AgeRange m_ageRange;
    bool m_ageRangeHasBeenSet = false;

    Smile m_smile;
    bool m_smileHasBeenSet = false;

    Eyeglasses m_eyeglasses;
    bool m_eyeglassesHasBeenSet = false;

    Sunglasses m_sunglasses;
    bool m_sunglassesHasBeenSet = false;

    Gender m_gender;
    bool m_genderHasBeenSet = false;

    Beard m_beard;
    bool m_beardHasBeenSet = false;

    Mustache m_mustache;
    bool m_mustacheHasBeenSet = false;

    EyeOpen m_eyesOpen;
    bool m_eyesOpenHasBeenSet = false;

    MouthOpen m_mouthOpen;
    bool m_mouthOpenHasBeenSet = false;

    Aws::Vector<Emotion> m_emotions;
    bool m_emotionsHasBeenSet = false;

    Aws::Vector<Landmark> m_landmarks;
    bool m_landmarksHasBeenSet = false;

    Pose m_pose;
    bool m_poseHasBeenSet = false;

    ImageQuality m_quality;
    bool m_qualityHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    FaceOccluded m_faceOccluded;
    bool m_faceOccludedHasBeenSet = false;

    EyeDirection m_eyeDirection;
    bool m_eyeDirectionHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
