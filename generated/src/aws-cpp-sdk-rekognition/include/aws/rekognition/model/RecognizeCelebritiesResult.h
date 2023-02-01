/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/rekognition/model/Celebrity.h>
#include <aws/rekognition/model/ComparedFace.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Rekognition
{
namespace Model
{
  class RecognizeCelebritiesResult
  {
  public:
    AWS_REKOGNITION_API RecognizeCelebritiesResult();
    AWS_REKOGNITION_API RecognizeCelebritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API RecognizeCelebritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline const Aws::Vector<Celebrity>& GetCelebrityFaces() const{ return m_celebrityFaces; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline void SetCelebrityFaces(const Aws::Vector<Celebrity>& value) { m_celebrityFaces = value; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline void SetCelebrityFaces(Aws::Vector<Celebrity>&& value) { m_celebrityFaces = std::move(value); }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline RecognizeCelebritiesResult& WithCelebrityFaces(const Aws::Vector<Celebrity>& value) { SetCelebrityFaces(value); return *this;}

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline RecognizeCelebritiesResult& WithCelebrityFaces(Aws::Vector<Celebrity>&& value) { SetCelebrityFaces(std::move(value)); return *this;}

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline RecognizeCelebritiesResult& AddCelebrityFaces(const Celebrity& value) { m_celebrityFaces.push_back(value); return *this; }

    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline RecognizeCelebritiesResult& AddCelebrityFaces(Celebrity&& value) { m_celebrityFaces.push_back(std::move(value)); return *this; }


    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnrecognizedFaces() const{ return m_unrecognizedFaces; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline void SetUnrecognizedFaces(const Aws::Vector<ComparedFace>& value) { m_unrecognizedFaces = value; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline void SetUnrecognizedFaces(Aws::Vector<ComparedFace>&& value) { m_unrecognizedFaces = std::move(value); }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& WithUnrecognizedFaces(const Aws::Vector<ComparedFace>& value) { SetUnrecognizedFaces(value); return *this;}

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& WithUnrecognizedFaces(Aws::Vector<ComparedFace>&& value) { SetUnrecognizedFaces(std::move(value)); return *this;}

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& AddUnrecognizedFaces(const ComparedFace& value) { m_unrecognizedFaces.push_back(value); return *this; }

    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline RecognizeCelebritiesResult& AddUnrecognizedFaces(ComparedFace&& value) { m_unrecognizedFaces.push_back(std::move(value)); return *this; }


    /**
     *  <p>Support for estimating image orientation using the the
     * OrientationCorrection field has ceased as of August 2021. Any returned values
     * for this field included in an API response will always be NULL.</p> 
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p>  <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> 
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     *  <p>Support for estimating image orientation using the the
     * OrientationCorrection field has ceased as of August 2021. Any returned values
     * for this field included in an API response will always be NULL.</p> 
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p>  <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> 
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     *  <p>Support for estimating image orientation using the the
     * OrientationCorrection field has ceased as of August 2021. Any returned values
     * for this field included in an API response will always be NULL.</p> 
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p>  <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> 
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     *  <p>Support for estimating image orientation using the the
     * OrientationCorrection field has ceased as of August 2021. Any returned values
     * for this field included in an API response will always be NULL.</p> 
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p>  <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> 
     */
    inline RecognizeCelebritiesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     *  <p>Support for estimating image orientation using the the
     * OrientationCorrection field has ceased as of August 2021. Any returned values
     * for this field included in an API response will always be NULL.</p> 
     * <p>The orientation of the input image (counterclockwise direction). If your
     * application displays the image, you can use this value to correct the
     * orientation. The bounding box coordinates returned in
     * <code>CelebrityFaces</code> and <code>UnrecognizedFaces</code> represent face
     * locations before the image orientation is corrected. </p>  <p>If the input
     * image is in .jpeg format, it might contain exchangeable image (Exif) metadata
     * that includes the image's orientation. If so, and the Exif metadata for the
     * input image populates the orientation field, the value of
     * <code>OrientationCorrection</code> is null. The <code>CelebrityFaces</code> and
     * <code>UnrecognizedFaces</code> bounding box coordinates represent face locations
     * after Exif metadata is used to correct the image orientation. Images in .png
     * format don't contain Exif metadata. </p> 
     */
    inline RecognizeCelebritiesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}

  private:

    Aws::Vector<Celebrity> m_celebrityFaces;

    Aws::Vector<ComparedFace> m_unrecognizedFaces;

    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
