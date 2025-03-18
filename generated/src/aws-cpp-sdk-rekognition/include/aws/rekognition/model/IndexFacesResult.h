/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/FaceRecord.h>
#include <aws/rekognition/model/UnindexedFace.h>
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
  class IndexFacesResult
  {
  public:
    AWS_REKOGNITION_API IndexFacesResult() = default;
    AWS_REKOGNITION_API IndexFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API IndexFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of faces detected and added to the collection. For more information,
     * see Searching Faces in a Collection in the Amazon Rekognition Developer Guide.
     * </p>
     */
    inline const Aws::Vector<FaceRecord>& GetFaceRecords() const { return m_faceRecords; }
    template<typename FaceRecordsT = Aws::Vector<FaceRecord>>
    void SetFaceRecords(FaceRecordsT&& value) { m_faceRecordsHasBeenSet = true; m_faceRecords = std::forward<FaceRecordsT>(value); }
    template<typename FaceRecordsT = Aws::Vector<FaceRecord>>
    IndexFacesResult& WithFaceRecords(FaceRecordsT&& value) { SetFaceRecords(std::forward<FaceRecordsT>(value)); return *this;}
    template<typename FaceRecordsT = FaceRecord>
    IndexFacesResult& AddFaceRecords(FaceRecordsT&& value) { m_faceRecordsHasBeenSet = true; m_faceRecords.emplace_back(std::forward<FaceRecordsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If your collection is associated with a face detection model that's later
     * than version 3.0, the value of <code>OrientationCorrection</code> is always null
     * and no orientation information is returned.</p> <p>If your collection is
     * associated with a face detection model that's version 3.0 or earlier, the
     * following applies:</p> <ul> <li> <p>If the input image is in .jpeg format, it
     * might contain exchangeable image file format (Exif) metadata that includes the
     * image's orientation. Amazon Rekognition uses this orientation information to
     * perform image correction - the bounding box coordinates are translated to
     * represent object locations after the orientation information in the Exif
     * metadata is used to correct the image orientation. Images in .png format don't
     * contain Exif metadata. The value of <code>OrientationCorrection</code> is
     * null.</p> </li> <li> <p>If the image doesn't contain orientation information in
     * its Exif metadata, Amazon Rekognition returns an estimated orientation
     * (ROTATE_0, ROTATE_90, ROTATE_180, ROTATE_270). Amazon Rekognition doesn’t
     * perform image correction for images. The bounding box coordinates aren't
     * translated and represent the object locations before the image is rotated.</p>
     * </li> </ul> <p>Bounding box information is returned in the
     * <code>FaceRecords</code> array. You can get the version of the face detection
     * model by calling <a>DescribeCollection</a>. </p>
     */
    inline OrientationCorrection GetOrientationCorrection() const { return m_orientationCorrection; }
    inline void SetOrientationCorrection(OrientationCorrection value) { m_orientationCorrectionHasBeenSet = true; m_orientationCorrection = value; }
    inline IndexFacesResult& WithOrientationCorrection(OrientationCorrection value) { SetOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number of the face detection model that's associated with the
     * input collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    IndexFacesResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces that were detected in the image but weren't indexed. They
     * weren't indexed because the quality filter identified them as low quality, or
     * the <code>MaxFaces</code> request parameter filtered them out. To use the
     * quality filter, you specify the <code>QualityFilter</code> request
     * parameter.</p>
     */
    inline const Aws::Vector<UnindexedFace>& GetUnindexedFaces() const { return m_unindexedFaces; }
    template<typename UnindexedFacesT = Aws::Vector<UnindexedFace>>
    void SetUnindexedFaces(UnindexedFacesT&& value) { m_unindexedFacesHasBeenSet = true; m_unindexedFaces = std::forward<UnindexedFacesT>(value); }
    template<typename UnindexedFacesT = Aws::Vector<UnindexedFace>>
    IndexFacesResult& WithUnindexedFaces(UnindexedFacesT&& value) { SetUnindexedFaces(std::forward<UnindexedFacesT>(value)); return *this;}
    template<typename UnindexedFacesT = UnindexedFace>
    IndexFacesResult& AddUnindexedFaces(UnindexedFacesT&& value) { m_unindexedFacesHasBeenSet = true; m_unindexedFaces.emplace_back(std::forward<UnindexedFacesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    IndexFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FaceRecord> m_faceRecords;
    bool m_faceRecordsHasBeenSet = false;

    OrientationCorrection m_orientationCorrection{OrientationCorrection::NOT_SET};
    bool m_orientationCorrectionHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    Aws::Vector<UnindexedFace> m_unindexedFaces;
    bool m_unindexedFacesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
