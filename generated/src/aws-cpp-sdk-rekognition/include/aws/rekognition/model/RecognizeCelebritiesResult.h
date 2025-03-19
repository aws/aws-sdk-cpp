/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rekognition/model/OrientationCorrection.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_REKOGNITION_API RecognizeCelebritiesResult() = default;
    AWS_REKOGNITION_API RecognizeCelebritiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API RecognizeCelebritiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about each celebrity found in the image. Amazon Rekognition can
     * detect a maximum of 64 celebrities in an image. Each celebrity object includes
     * the following attributes: <code>Face</code>, <code>Confidence</code>,
     * <code>Emotions</code>, <code>Landmarks</code>, <code>Pose</code>,
     * <code>Quality</code>, <code>Smile</code>, <code>Id</code>,
     * <code>KnownGender</code>, <code>MatchConfidence</code>, <code>Name</code>,
     * <code>Urls</code>.</p>
     */
    inline const Aws::Vector<Celebrity>& GetCelebrityFaces() const { return m_celebrityFaces; }
    template<typename CelebrityFacesT = Aws::Vector<Celebrity>>
    void SetCelebrityFaces(CelebrityFacesT&& value) { m_celebrityFacesHasBeenSet = true; m_celebrityFaces = std::forward<CelebrityFacesT>(value); }
    template<typename CelebrityFacesT = Aws::Vector<Celebrity>>
    RecognizeCelebritiesResult& WithCelebrityFaces(CelebrityFacesT&& value) { SetCelebrityFaces(std::forward<CelebrityFacesT>(value)); return *this;}
    template<typename CelebrityFacesT = Celebrity>
    RecognizeCelebritiesResult& AddCelebrityFaces(CelebrityFacesT&& value) { m_celebrityFacesHasBeenSet = true; m_celebrityFaces.emplace_back(std::forward<CelebrityFacesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Details about each unrecognized face in the image.</p>
     */
    inline const Aws::Vector<ComparedFace>& GetUnrecognizedFaces() const { return m_unrecognizedFaces; }
    template<typename UnrecognizedFacesT = Aws::Vector<ComparedFace>>
    void SetUnrecognizedFaces(UnrecognizedFacesT&& value) { m_unrecognizedFacesHasBeenSet = true; m_unrecognizedFaces = std::forward<UnrecognizedFacesT>(value); }
    template<typename UnrecognizedFacesT = Aws::Vector<ComparedFace>>
    RecognizeCelebritiesResult& WithUnrecognizedFaces(UnrecognizedFacesT&& value) { SetUnrecognizedFaces(std::forward<UnrecognizedFacesT>(value)); return *this;}
    template<typename UnrecognizedFacesT = ComparedFace>
    RecognizeCelebritiesResult& AddUnrecognizedFaces(UnrecognizedFacesT&& value) { m_unrecognizedFacesHasBeenSet = true; m_unrecognizedFaces.emplace_back(std::forward<UnrecognizedFacesT>(value)); return *this; }
    ///@}

    ///@{
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
    inline OrientationCorrection GetOrientationCorrection() const { return m_orientationCorrection; }
    inline void SetOrientationCorrection(OrientationCorrection value) { m_orientationCorrectionHasBeenSet = true; m_orientationCorrection = value; }
    inline RecognizeCelebritiesResult& WithOrientationCorrection(OrientationCorrection value) { SetOrientationCorrection(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RecognizeCelebritiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Celebrity> m_celebrityFaces;
    bool m_celebrityFacesHasBeenSet = false;

    Aws::Vector<ComparedFace> m_unrecognizedFaces;
    bool m_unrecognizedFacesHasBeenSet = false;

    OrientationCorrection m_orientationCorrection{OrientationCorrection::NOT_SET};
    bool m_orientationCorrectionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
