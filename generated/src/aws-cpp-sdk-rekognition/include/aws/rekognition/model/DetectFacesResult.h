/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/rekognition/model/FaceDetail.h>
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
  class DetectFacesResult
  {
  public:
    AWS_REKOGNITION_API DetectFacesResult();
    AWS_REKOGNITION_API DetectFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Details of each face found in the image. </p>
     */
    inline const Aws::Vector<FaceDetail>& GetFaceDetails() const{ return m_faceDetails; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline void SetFaceDetails(const Aws::Vector<FaceDetail>& value) { m_faceDetails = value; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline void SetFaceDetails(Aws::Vector<FaceDetail>&& value) { m_faceDetails = std::move(value); }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(const Aws::Vector<FaceDetail>& value) { SetFaceDetails(value); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& WithFaceDetails(Aws::Vector<FaceDetail>&& value) { SetFaceDetails(std::move(value)); return *this;}

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(const FaceDetail& value) { m_faceDetails.push_back(value); return *this; }

    /**
     * <p>Details of each face found in the image. </p>
     */
    inline DetectFacesResult& AddFaceDetails(FaceDetail&& value) { m_faceDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline const OrientationCorrection& GetOrientationCorrection() const{ return m_orientationCorrection; }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline void SetOrientationCorrection(const OrientationCorrection& value) { m_orientationCorrection = value; }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline void SetOrientationCorrection(OrientationCorrection&& value) { m_orientationCorrection = std::move(value); }

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline DetectFacesResult& WithOrientationCorrection(const OrientationCorrection& value) { SetOrientationCorrection(value); return *this;}

    /**
     * <p>The value of <code>OrientationCorrection</code> is always null.</p> <p>If the
     * input image is in .jpeg format, it might contain exchangeable image file format
     * (Exif) metadata that includes the image's orientation. Amazon Rekognition uses
     * this orientation information to perform image correction. The bounding box
     * coordinates are translated to represent object locations after the orientation
     * information in the Exif metadata is used to correct the image orientation.
     * Images in .png format don't contain Exif metadata.</p> <p>Amazon Rekognition
     * doesn’t perform image correction for images in .png format and .jpeg images
     * without orientation information in the image Exif metadata. The bounding box
     * coordinates aren't translated and represent the object locations before the
     * image is rotated. </p>
     */
    inline DetectFacesResult& WithOrientationCorrection(OrientationCorrection&& value) { SetOrientationCorrection(std::move(value)); return *this;}

  private:

    Aws::Vector<FaceDetail> m_faceDetails;

    OrientationCorrection m_orientationCorrection;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
