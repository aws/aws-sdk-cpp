/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/ComparedSourceImageFace.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/CompareFacesMatch.h>
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
  class CompareFacesResult
  {
  public:
    AWS_REKOGNITION_API CompareFacesResult() = default;
    AWS_REKOGNITION_API CompareFacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API CompareFacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The face in the source image that was used for comparison.</p>
     */
    inline const ComparedSourceImageFace& GetSourceImageFace() const { return m_sourceImageFace; }
    template<typename SourceImageFaceT = ComparedSourceImageFace>
    void SetSourceImageFace(SourceImageFaceT&& value) { m_sourceImageFaceHasBeenSet = true; m_sourceImageFace = std::forward<SourceImageFaceT>(value); }
    template<typename SourceImageFaceT = ComparedSourceImageFace>
    CompareFacesResult& WithSourceImageFace(SourceImageFaceT&& value) { SetSourceImageFace(std::forward<SourceImageFaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces in the target image that match the source image face. Each
     * <code>CompareFacesMatch</code> object provides the bounding box, the confidence
     * level that the bounding box contains a face, and the similarity score for the
     * face in the bounding box and the face in the source image.</p>
     */
    inline const Aws::Vector<CompareFacesMatch>& GetFaceMatches() const { return m_faceMatches; }
    template<typename FaceMatchesT = Aws::Vector<CompareFacesMatch>>
    void SetFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = std::forward<FaceMatchesT>(value); }
    template<typename FaceMatchesT = Aws::Vector<CompareFacesMatch>>
    CompareFacesResult& WithFaceMatches(FaceMatchesT&& value) { SetFaceMatches(std::forward<FaceMatchesT>(value)); return *this;}
    template<typename FaceMatchesT = CompareFacesMatch>
    CompareFacesResult& AddFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.emplace_back(std::forward<FaceMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of faces in the target image that did not match the source image
     * face.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnmatchedFaces() const { return m_unmatchedFaces; }
    template<typename UnmatchedFacesT = Aws::Vector<ComparedFace>>
    void SetUnmatchedFaces(UnmatchedFacesT&& value) { m_unmatchedFacesHasBeenSet = true; m_unmatchedFaces = std::forward<UnmatchedFacesT>(value); }
    template<typename UnmatchedFacesT = Aws::Vector<ComparedFace>>
    CompareFacesResult& WithUnmatchedFaces(UnmatchedFacesT&& value) { SetUnmatchedFaces(std::forward<UnmatchedFacesT>(value)); return *this;}
    template<typename UnmatchedFacesT = ComparedFace>
    CompareFacesResult& AddUnmatchedFaces(UnmatchedFacesT&& value) { m_unmatchedFacesHasBeenSet = true; m_unmatchedFaces.emplace_back(std::forward<UnmatchedFacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of <code>SourceImageOrientationCorrection</code> is always
     * null.</p> <p>If the input image is in .jpeg format, it might contain
     * exchangeable image file format (Exif) metadata that includes the image's
     * orientation. Amazon Rekognition uses this orientation information to perform
     * image correction. The bounding box coordinates are translated to represent
     * object locations after the orientation information in the Exif metadata is used
     * to correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> <p>Amazon Rekognition doesn’t perform image correction for images
     * in .png format and .jpeg images without orientation information in the image
     * Exif metadata. The bounding box coordinates aren't translated and represent the
     * object locations before the image is rotated. </p>
     */
    inline OrientationCorrection GetSourceImageOrientationCorrection() const { return m_sourceImageOrientationCorrection; }
    inline void SetSourceImageOrientationCorrection(OrientationCorrection value) { m_sourceImageOrientationCorrectionHasBeenSet = true; m_sourceImageOrientationCorrection = value; }
    inline CompareFacesResult& WithSourceImageOrientationCorrection(OrientationCorrection value) { SetSourceImageOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of <code>TargetImageOrientationCorrection</code> is always
     * null.</p> <p>If the input image is in .jpeg format, it might contain
     * exchangeable image file format (Exif) metadata that includes the image's
     * orientation. Amazon Rekognition uses this orientation information to perform
     * image correction. The bounding box coordinates are translated to represent
     * object locations after the orientation information in the Exif metadata is used
     * to correct the image orientation. Images in .png format don't contain Exif
     * metadata.</p> <p>Amazon Rekognition doesn’t perform image correction for images
     * in .png format and .jpeg images without orientation information in the image
     * Exif metadata. The bounding box coordinates aren't translated and represent the
     * object locations before the image is rotated. </p>
     */
    inline OrientationCorrection GetTargetImageOrientationCorrection() const { return m_targetImageOrientationCorrection; }
    inline void SetTargetImageOrientationCorrection(OrientationCorrection value) { m_targetImageOrientationCorrectionHasBeenSet = true; m_targetImageOrientationCorrection = value; }
    inline CompareFacesResult& WithTargetImageOrientationCorrection(OrientationCorrection value) { SetTargetImageOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CompareFacesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ComparedSourceImageFace m_sourceImageFace;
    bool m_sourceImageFaceHasBeenSet = false;

    Aws::Vector<CompareFacesMatch> m_faceMatches;
    bool m_faceMatchesHasBeenSet = false;

    Aws::Vector<ComparedFace> m_unmatchedFaces;
    bool m_unmatchedFacesHasBeenSet = false;

    OrientationCorrection m_sourceImageOrientationCorrection{OrientationCorrection::NOT_SET};
    bool m_sourceImageOrientationCorrectionHasBeenSet = false;

    OrientationCorrection m_targetImageOrientationCorrection{OrientationCorrection::NOT_SET};
    bool m_targetImageOrientationCorrectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
