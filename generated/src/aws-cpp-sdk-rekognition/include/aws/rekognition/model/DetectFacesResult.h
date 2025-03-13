/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_REKOGNITION_API DetectFacesResult() = default;
    AWS_REKOGNITION_API DetectFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API DetectFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details of each face found in the image. </p>
     */
    inline const Aws::Vector<FaceDetail>& GetFaceDetails() const { return m_faceDetails; }
    template<typename FaceDetailsT = Aws::Vector<FaceDetail>>
    void SetFaceDetails(FaceDetailsT&& value) { m_faceDetailsHasBeenSet = true; m_faceDetails = std::forward<FaceDetailsT>(value); }
    template<typename FaceDetailsT = Aws::Vector<FaceDetail>>
    DetectFacesResult& WithFaceDetails(FaceDetailsT&& value) { SetFaceDetails(std::forward<FaceDetailsT>(value)); return *this;}
    template<typename FaceDetailsT = FaceDetail>
    DetectFacesResult& AddFaceDetails(FaceDetailsT&& value) { m_faceDetailsHasBeenSet = true; m_faceDetails.emplace_back(std::forward<FaceDetailsT>(value)); return *this; }
    ///@}

    ///@{
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
    inline OrientationCorrection GetOrientationCorrection() const { return m_orientationCorrection; }
    inline void SetOrientationCorrection(OrientationCorrection value) { m_orientationCorrectionHasBeenSet = true; m_orientationCorrection = value; }
    inline DetectFacesResult& WithOrientationCorrection(OrientationCorrection value) { SetOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetectFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FaceDetail> m_faceDetails;
    bool m_faceDetailsHasBeenSet = false;

    OrientationCorrection m_orientationCorrection{OrientationCorrection::NOT_SET};
    bool m_orientationCorrectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
