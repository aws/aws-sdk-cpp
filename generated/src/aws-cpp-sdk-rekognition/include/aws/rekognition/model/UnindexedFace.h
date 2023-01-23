/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/FaceDetail.h>
#include <aws/rekognition/model/Reason.h>
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
   * <p>A face that <a>IndexFaces</a> detected, but didn't index. Use the
   * <code>Reasons</code> response attribute to determine why a face wasn't
   * indexed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rekognition-2016-06-27/UnindexedFace">AWS
   * API Reference</a></p>
   */
  class UnindexedFace
  {
  public:
    AWS_REKOGNITION_API UnindexedFace();
    AWS_REKOGNITION_API UnindexedFace(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API UnindexedFace& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_REKOGNITION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline const Aws::Vector<Reason>& GetReasons() const{ return m_reasons; }

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline bool ReasonsHasBeenSet() const { return m_reasonsHasBeenSet; }

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline void SetReasons(const Aws::Vector<Reason>& value) { m_reasonsHasBeenSet = true; m_reasons = value; }

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline void SetReasons(Aws::Vector<Reason>&& value) { m_reasonsHasBeenSet = true; m_reasons = std::move(value); }

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline UnindexedFace& WithReasons(const Aws::Vector<Reason>& value) { SetReasons(value); return *this;}

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline UnindexedFace& WithReasons(Aws::Vector<Reason>&& value) { SetReasons(std::move(value)); return *this;}

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline UnindexedFace& AddReasons(const Reason& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(value); return *this; }

    /**
     * <p>An array of reasons that specify why a face wasn't indexed. </p> <ul> <li>
     * <p>EXTREME_POSE - The face is at a pose that can't be detected. For example, the
     * head is turned too far away from the camera.</p> </li> <li> <p>EXCEEDS_MAX_FACES
     * - The number of faces detected is already higher than that specified by the
     * <code>MaxFaces</code> input parameter for <code>IndexFaces</code>.</p> </li>
     * <li> <p>LOW_BRIGHTNESS - The image is too dark.</p> </li> <li> <p>LOW_SHARPNESS
     * - The image is too blurry.</p> </li> <li> <p>LOW_CONFIDENCE - The face was
     * detected with a low confidence.</p> </li> <li> <p>SMALL_BOUNDING_BOX - The
     * bounding box around the face is too small.</p> </li> </ul>
     */
    inline UnindexedFace& AddReasons(Reason&& value) { m_reasonsHasBeenSet = true; m_reasons.push_back(std::move(value)); return *this; }


    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline const FaceDetail& GetFaceDetail() const{ return m_faceDetail; }

    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline bool FaceDetailHasBeenSet() const { return m_faceDetailHasBeenSet; }

    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline void SetFaceDetail(const FaceDetail& value) { m_faceDetailHasBeenSet = true; m_faceDetail = value; }

    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline void SetFaceDetail(FaceDetail&& value) { m_faceDetailHasBeenSet = true; m_faceDetail = std::move(value); }

    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline UnindexedFace& WithFaceDetail(const FaceDetail& value) { SetFaceDetail(value); return *this;}

    /**
     * <p>The structure that contains attributes of a face that
     * <code>IndexFaces</code>detected, but didn't index. </p>
     */
    inline UnindexedFace& WithFaceDetail(FaceDetail&& value) { SetFaceDetail(std::move(value)); return *this;}

  private:

    Aws::Vector<Reason> m_reasons;
    bool m_reasonsHasBeenSet = false;

    FaceDetail m_faceDetail;
    bool m_faceDetailHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
