/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/BoundingBox.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rekognition/model/FaceMatch.h>
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
  class SearchFacesByImageResult
  {
  public:
    AWS_REKOGNITION_API SearchFacesByImageResult() = default;
    AWS_REKOGNITION_API SearchFacesByImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REKOGNITION_API SearchFacesByImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The bounding box around the face in the input image that Amazon Rekognition
     * used for the search.</p>
     */
    inline const BoundingBox& GetSearchedFaceBoundingBox() const { return m_searchedFaceBoundingBox; }
    template<typename SearchedFaceBoundingBoxT = BoundingBox>
    void SetSearchedFaceBoundingBox(SearchedFaceBoundingBoxT&& value) { m_searchedFaceBoundingBoxHasBeenSet = true; m_searchedFaceBoundingBox = std::forward<SearchedFaceBoundingBoxT>(value); }
    template<typename SearchedFaceBoundingBoxT = BoundingBox>
    SearchFacesByImageResult& WithSearchedFaceBoundingBox(SearchedFaceBoundingBoxT&& value) { SetSearchedFaceBoundingBox(std::forward<SearchedFaceBoundingBoxT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of confidence that the <code>searchedFaceBoundingBox</code>,
     * contains a face.</p>
     */
    inline double GetSearchedFaceConfidence() const { return m_searchedFaceConfidence; }
    inline void SetSearchedFaceConfidence(double value) { m_searchedFaceConfidenceHasBeenSet = true; m_searchedFaceConfidence = value; }
    inline SearchFacesByImageResult& WithSearchedFaceConfidence(double value) { SetSearchedFaceConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of faces that match the input face, along with the confidence in the
     * match.</p>
     */
    inline const Aws::Vector<FaceMatch>& GetFaceMatches() const { return m_faceMatches; }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    void SetFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches = std::forward<FaceMatchesT>(value); }
    template<typename FaceMatchesT = Aws::Vector<FaceMatch>>
    SearchFacesByImageResult& WithFaceMatches(FaceMatchesT&& value) { SetFaceMatches(std::forward<FaceMatchesT>(value)); return *this;}
    template<typename FaceMatchesT = FaceMatch>
    SearchFacesByImageResult& AddFaceMatches(FaceMatchesT&& value) { m_faceMatchesHasBeenSet = true; m_faceMatches.emplace_back(std::forward<FaceMatchesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Version number of the face detection model associated with the input
     * collection (<code>CollectionId</code>).</p>
     */
    inline const Aws::String& GetFaceModelVersion() const { return m_faceModelVersion; }
    template<typename FaceModelVersionT = Aws::String>
    void SetFaceModelVersion(FaceModelVersionT&& value) { m_faceModelVersionHasBeenSet = true; m_faceModelVersion = std::forward<FaceModelVersionT>(value); }
    template<typename FaceModelVersionT = Aws::String>
    SearchFacesByImageResult& WithFaceModelVersion(FaceModelVersionT&& value) { SetFaceModelVersion(std::forward<FaceModelVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SearchFacesByImageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    BoundingBox m_searchedFaceBoundingBox;
    bool m_searchedFaceBoundingBoxHasBeenSet = false;

    double m_searchedFaceConfidence{0.0};
    bool m_searchedFaceConfidenceHasBeenSet = false;

    Aws::Vector<FaceMatch> m_faceMatches;
    bool m_faceMatchesHasBeenSet = false;

    Aws::String m_faceModelVersion;
    bool m_faceModelVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Rekognition
} // namespace Aws
